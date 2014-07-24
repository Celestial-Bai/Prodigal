/******************************************************************************
    PRODIGAL (PROkaryotic DynamIc Programming Genefinding ALgorithm)
    Copyright (C) 2007-2014 University of Tennessee / UT-Battelle

    Code Author:  Doug Hyatt

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#ifndef _GENE_H
#define _GENE_H

#include <stdio.h>
#include "training.h"
#include "node.h"
#include "dprog.h"

#define MAX_GENES 30000

int add_genes(struct _gene *, struct _node *, int);
void record_gene_data(struct _gene *, struct _gene_data *, int,
                      struct _node *, struct _training *, int);
void adjust_close_starts(struct _gene *, int, struct _node *, int, double);

void print_genes(FILE *, struct _gene *, struct _gene_data *, int,
                 struct _node *, int, int, int, int, char *,
                 struct _training *, char *, char *, char *);
void write_translations(FILE *, struct _gene *, struct _gene_data *, int,
                        struct _node *, unsigned char *, unsigned char *,
                        unsigned char *, int, int, int, char *);
void write_nucleotide_seqs(FILE *, struct _gene *, struct _gene_data *, int,
                           struct _node *, unsigned char *, unsigned char *,
                           unsigned char *, int, int, char *);
void write_start_file(FILE *, struct _node *, int, struct _training *, int,
                      int, int, char *, char *, char *);
double calculate_confidence(double, double);

#endif
