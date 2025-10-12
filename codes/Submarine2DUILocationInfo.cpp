// local variable allocation has failed, the output may be wrong!
void Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Rect__o *v3; // x20
  __int64 v4; // x0
  int v5; // s0 OVERLAPPED
  int v6; // s1
  int v7; // s2
  int v8; // s3
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v10; // x8
  __int64 size; // x10
  Il2CppObject *v12; // x9
  int v13; // s0 OVERLAPPED
  int v14; // s1
  int v15; // s2
  int v16; // s3
  struct UnityEngine_Rect_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppObject *v20; // x8
  int v21; // s0 OVERLAPPED
  int v22; // s1
  int v23; // s2
  int v24; // s3
  struct UnityEngine_Rect_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppObject *v28; // x8
  int v29; // s0 OVERLAPPED
  int v30; // s1
  int v31; // s2
  int v32; // s3
  struct UnityEngine_Rect_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppObject *v36; // x8
  int v37; // s0 OVERLAPPED
  int v38; // s1
  int v39; // s2
  int v40; // s3
  struct UnityEngine_Rect_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppObject *v44; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int v47; // s0 OVERLAPPED
  int v48; // s1
  int v49; // s2
  int v50; // s3
  struct UnityEngine_Rect_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppObject *v54; // x8

  if ( (byte_4C342F7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Rect__TypeInfo);
    byte_4C342F7 = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0);
  v3 = (System_Collections_Generic_List_Rect__o *)sub_1C32E6C(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v3,
    (const MethodInfo_37AE0D0 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._8_GetScanDialogRect.methodPtr)(
         this,
         this->klass->vtable._8_GetScanDialogRect.method);
  if ( !v3 )
    goto LABEL_29;
  items = v3->fields._items;
  v10 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v5,
      *(const MethodInfo_37AE95C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj + size;
    v3->fields._size = size + 1;
    LODWORD(v12[2].klass) = v5;
    HIDWORD(v12[2].klass) = v6;
    LODWORD(v12[2].monitor) = v7;
    HIDWORD(v12[2].monitor) = v8;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._9_GetStorageRect.methodPtr)(
         this,
         this->klass->vtable._9_GetStorageRect.method);
  v17 = v3->fields._items;
  v18 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v17 )
    goto LABEL_29;
  v19 = v3->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v13,
      *(const MethodInfo_37AE95C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj + v19;
    v3->fields._size = v19 + 1;
    LODWORD(v20[2].klass) = v13;
    HIDWORD(v20[2].klass) = v14;
    LODWORD(v20[2].monitor) = v15;
    HIDWORD(v20[2].monitor) = v16;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._4_GetTitleInfoRect.methodPtr)(
         this,
         this->klass->vtable._4_GetTitleInfoRect.method);
  v25 = v3->fields._items;
  v26 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v25 )
    goto LABEL_29;
  v27 = v3->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v21,
      *(const MethodInfo_37AE95C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj + v27;
    v3->fields._size = v27 + 1;
    LODWORD(v28[2].klass) = v21;
    HIDWORD(v28[2].klass) = v22;
    LODWORD(v28[2].monitor) = v23;
    HIDWORD(v28[2].monitor) = v24;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._6_GetMapChangeButtonRect.methodPtr)(
         this,
         this->klass->vtable._6_GetMapChangeButtonRect.method);
  v33 = v3->fields._items;
  v34 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v33 )
    goto LABEL_29;
  v35 = v3->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v29,
      *(const MethodInfo_37AE95C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj + v35;
    v3->fields._size = v35 + 1;
    LODWORD(v36[2].klass) = v29;
    HIDWORD(v36[2].klass) = v30;
    LODWORD(v36[2].monitor) = v31;
    HIDWORD(v36[2].monitor) = v32;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._5_GetMenuButtonRect.methodPtr)(
         this,
         this->klass->vtable._5_GetMenuButtonRect.method);
  v41 = v3->fields._items;
  v42 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v41 )
    goto LABEL_29;
  v43 = v3->fields._size;
  if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v37,
      *(const MethodInfo_37AE95C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &v41->obj + v43;
    v3->fields._size = v43 + 1;
    LODWORD(v44[2].klass) = v37;
    HIDWORD(v44[2].klass) = v38;
    LODWORD(v44[2].monitor) = v39;
    HIDWORD(v44[2].monitor) = v40;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr)(
         this,
         this->klass->vtable._7_GetMasterIconSurroundsRect.method);
  v51 = v3->fields._items;
  v52 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v51 )
LABEL_29:
    sub_1C32E7C(v4);
  v53 = v3->fields._size;
  if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v47,
      *(const MethodInfo_37AE95C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &v51->obj + v53;
    v3->fields._size = v53 + 1;
    LODWORD(v54[2].klass) = v47;
    HIDWORD(v54[2].klass) = v48;
    LODWORD(v54[2].monitor) = v49;
    HIDWORD(v54[2].monitor) = v50;
  }
  this->fields._rects_k__BackingField = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v45, v46);
}


UnityEngine_Rect_o Submarine2DUILocationInfo__GetScanDialogRect(
        Submarine2DUILocationInfo_o *this,
        const MethodInfo *method)
{
  return UiRectFactory__CenterRect(0.0, -160.0, 500.0, 160.0, 0);
}


UnityEngine_Rect_o Submarine2DUILocationInfo__GetStorageRect(
        Submarine2DUILocationInfo_o *this,
        const MethodInfo *method)
{
  return UiRectFactory__LeftTopRect(0.0, 0.0, 160.0, 160.0, 0);
}