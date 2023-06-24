def domain_name(url):
    return url.split("//")[-1].split("www.")[-1].split(".")[0]
