void Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Rect__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v10; // x8
  __int64 size; // x10
  struct UnityEngine_Rect_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  struct UnityEngine_Rect_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct UnityEngine_Rect_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct UnityEngine_Rect_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct UnityEngine_Rect_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2D23E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Rect__TypeInfo);
    byte_4D2D23E = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0);
  v3 = (System_Collections_Generic_List_Rect__o *)sub_1C93D20(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v3,
    (const MethodInfo_388CA04 *)Method_System_Collections_Generic_List_Rect___ctor__);
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
      v48,
      *(const MethodInfo_388D290 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = size + 1;
    items->m_Items[size] = v48;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._9_GetStorageRect.methodPtr)(
         this,
         this->klass->vtable._9_GetStorageRect.method);
  v15 = v3->fields._items;
  v16 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v15 )
    goto LABEL_29;
  v17 = v3->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      v49,
      *(const MethodInfo_388D290 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v17 + 1;
    v15->m_Items[v17] = v49;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._4_GetTitleInfoRect.methodPtr)(
         this,
         this->klass->vtable._4_GetTitleInfoRect.method);
  v21 = v3->fields._items;
  v22 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v21 )
    goto LABEL_29;
  v23 = v3->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      v50,
      *(const MethodInfo_388D290 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v23 + 1;
    v21->m_Items[v23] = v50;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._6_GetMapChangeButtonRect.methodPtr)(
         this,
         this->klass->vtable._6_GetMapChangeButtonRect.method);
  v27 = v3->fields._items;
  v28 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v27 )
    goto LABEL_29;
  v29 = v3->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      v51,
      *(const MethodInfo_388D290 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v29 + 1;
    v27->m_Items[v29] = v51;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._5_GetMenuButtonRect.methodPtr)(
         this,
         this->klass->vtable._5_GetMenuButtonRect.method);
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
      v52,
      *(const MethodInfo_388D290 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v35 + 1;
    v33->m_Items[v35] = v52;
  }
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, const MethodInfo *))this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr)(
         this,
         this->klass->vtable._7_GetMasterIconSurroundsRect.method);
  v45 = v3->fields._items;
  v46 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v3->fields._version;
  if ( !v45 )
LABEL_29:
    sub_1C93D2C(v4, v5);
  v47 = v3->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v3,
      v53,
      *(const MethodInfo_388D290 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v47 + 1;
    v45->m_Items[v47] = v53;
  }
  this->fields._rects_k__BackingField = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v36, v37, v38, v39, v40, v41);
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