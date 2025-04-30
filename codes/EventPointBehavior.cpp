void __fastcall EventPointBehavior___ctor(EventPointBehavior_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  v2 = (CGThumbnailListItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.sortValue1 = 0LL;
  v2 = (CGThumbnailListItem_o *)((char *)v2 + 48);
  *(_QWORD *)&v2[-1].fields._Id_k__BackingField = 0LL;
  *(_QWORD *)&v2[-1].fields._Type_k__BackingField = 0LL;
  v2[-1].fields.viewObject = 0LL;
  LODWORD(v2[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  sub_1B8635C(v2, 0, v3, v4);
}