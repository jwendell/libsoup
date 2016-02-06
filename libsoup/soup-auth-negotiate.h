/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2010 Guido Guenther <agx@sigxcpu.org>
 */

#ifndef SOUP_AUTH_NEGOTIATE_H
#define SOUP_AUTH_NEGOTIATE_H 1

#if LIBSOUP_HAVE_GSSAPI

#include "soup-connection-auth.h"

#define SOUP_AUTH_NEGOTIATE(object)         (G_TYPE_CHECK_INSTANCE_CAST ((object), SOUP_TYPE_AUTH_NEGOTIATE, SoupAuthNegotiate))
#define SOUP_AUTH_NEGOTIATE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), SOUP_TYPE_AUTH_NEGOTIATE, SoupAuthNegotiateClass))
#define SOUP_IS_AUTH_NEGOTIATE(object)      (G_TYPE_CHECK_INSTANCE_TYPE ((object), SOUP_TYPE_AUTH_NEGOTIATE))
#define SOUP_IS_AUTH_NEGOTIATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOUP_TYPE_AUTH_NEGOTIATE))
#define SOUP_AUTH_NEGOTIATE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), SOUP_TYPE_AUTH_NEGOTIATE, SoupAuthNegotiateClass))

typedef struct {
	SoupConnectionAuth parent;

} SoupAuthNegotiate;

typedef struct {
	SoupConnectionAuthClass parent_class;

} SoupAuthNegotiateClass;

#endif /* LIBSOUP_HAVE_GSSAPI */

#endif /* SOUP_AUTH_NEGOTIATE_H */