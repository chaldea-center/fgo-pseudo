// local variable allocation has failed, the output may be wrong!
void Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Rect__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0 OVERLAPPED
  int v7; // s1
  int v8; // s2
  int v9; // s3
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v11; // x8
  __int64 size; // x10
  Il2CppObject *v13; // x9
  int v14; // s0 OVERLAPPED
  int v15; // s1
  int v16; // s2
  int v17; // s3
  struct UnityEngine_Rect_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppObject *v21; // x8
  int v22; // s0 OVERLAPPED
  int v23; // s1
  int v24; // s2
  int v25; // s3
  struct UnityEngine_Rect_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppObject *v29; // x8
  int v30; // s0 OVERLAPPED
  int v31; // s1
  int v32; // s2
  int v33; // s3
  struct UnityEngine_Rect_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppObject *v37; // x8
  int v38; // s0 OVERLAPPED
  int v39; // s1
  int v40; // s2
  int v41; // s3
  struct UnityEngine_Rect_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppObject *v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int v52; // s0 OVERLAPPED
  int v53; // s1
  int v54; // s2
  int v55; // s3
  struct UnityEngine_Rect_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppObject *v59; // x8

  if ( (byte_4D29029 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Rect__TypeInfo);
    byte_4D29029 = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0);
  v3 = (System_Collections_Generic_List_Rect__o *)sub_1C942E4(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v3,
    (const MethodInfo_3880748 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._8_GetScanDialogRect.methodPtr)(
         this,
         this->klass->vtable._8_GetScanDialogRect.method);
  if ( !v3 )
    goto LABEL_29;
  items = v3->fields._items;
  v11 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v6,
      *(const MethodInfo_3880FD4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj + size;
    v3->fields._size = size + 1;
    LODWORD(v13[2].klass) = v6;
    HIDWORD(v13[2].klass) = v7;
    LODWORD(v13[2].monitor) = v8;
    HIDWORD(v13[2].monitor) = v9;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._9_GetStorageRect.methodPtr)(
         this,
         this->klass->vtable._9_GetStorageRect.method);
  v18 = v3->fields._items;
  v19 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v18 )
    goto LABEL_29;
  v20 = v3->fields._size;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v14,
      *(const MethodInfo_3880FD4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v18->obj + v20;
    v3->fields._size = v20 + 1;
    LODWORD(v21[2].klass) = v14;
    HIDWORD(v21[2].klass) = v15;
    LODWORD(v21[2].monitor) = v16;
    HIDWORD(v21[2].monitor) = v17;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._4_GetTitleInfoRect.methodPtr)(
         this,
         this->klass->vtable._4_GetTitleInfoRect.method);
  v26 = v3->fields._items;
  v27 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v26 )
    goto LABEL_29;
  v28 = v3->fields._size;
  if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v22,
      *(const MethodInfo_3880FD4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj + v28;
    v3->fields._size = v28 + 1;
    LODWORD(v29[2].klass) = v22;
    HIDWORD(v29[2].klass) = v23;
    LODWORD(v29[2].monitor) = v24;
    HIDWORD(v29[2].monitor) = v25;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._6_GetMapChangeButtonRect.methodPtr)(
         this,
         this->klass->vtable._6_GetMapChangeButtonRect.method);
  v34 = v3->fields._items;
  v35 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v34 )
    goto LABEL_29;
  v36 = v3->fields._size;
  if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v30,
      *(const MethodInfo_3880FD4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj + v36;
    v3->fields._size = v36 + 1;
    LODWORD(v37[2].klass) = v30;
    HIDWORD(v37[2].klass) = v31;
    LODWORD(v37[2].monitor) = v32;
    HIDWORD(v37[2].monitor) = v33;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._5_GetMenuButtonRect.methodPtr)(
         this,
         this->klass->vtable._5_GetMenuButtonRect.method);
  v42 = v3->fields._items;
  v43 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v42 )
    goto LABEL_29;
  v44 = v3->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v38,
      *(const MethodInfo_3880FD4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj + v44;
    v3->fields._size = v44 + 1;
    LODWORD(v45[2].klass) = v38;
    HIDWORD(v45[2].klass) = v39;
    LODWORD(v45[2].monitor) = v40;
    HIDWORD(v45[2].monitor) = v41;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr)(
         this,
         this->klass->vtable._7_GetMasterIconSurroundsRect.method);
  v56 = v3->fields._items;
  v57 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v56 )
LABEL_29:
    sub_1C942F0(v4, v5);
  v58 = v3->fields._size;
  if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      *(UnityEngine_Rect_o *)&v52,
      *(const MethodInfo_3880FD4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &v56->obj + v58;
    v3->fields._size = v58 + 1;
    LODWORD(v59[2].klass) = v52;
    HIDWORD(v59[2].klass) = v53;
    LODWORD(v59[2].monitor) = v54;
    HIDWORD(v59[2].monitor) = v55;
  }
  this->fields._rects_k__BackingField = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v46, v47, v48, v49, v50, v51);
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