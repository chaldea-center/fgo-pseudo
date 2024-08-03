// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_Rect__o *v7; // x20
  __int64 v8; // x0
  int v9; // s0
  int v10; // s1
  int v11; // s2
  int v12; // s3
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v14; // x8
  __int64 size; // x10
  Il2CppObject *v16; // x9
  int v17; // s0
  int v18; // s1
  int v19; // s2
  int v20; // s3
  struct UnityEngine_Rect_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppObject *v24; // x8
  int v25; // s0
  int v26; // s1
  int v27; // s2
  int v28; // s3
  struct UnityEngine_Rect_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppObject *v32; // x8
  int v33; // s0
  int v34; // s1
  int v35; // s2
  int v36; // s3
  struct UnityEngine_Rect_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppObject *v40; // x8
  int v41; // s0
  int v42; // s1
  int v43; // s2
  int v44; // s3
  struct UnityEngine_Rect_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppObject *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  int v51; // s0
  int v52; // s1
  int v53; // s2
  int v54; // s3
  struct UnityEngine_Rect_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppObject *v58; // x8

  if ( (byte_49F909D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Rect__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rect___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_Rect__TypeInfo, v4);
    byte_49F909D = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v7 = (System_Collections_Generic_List_Rect__o *)sub_1B64314(System_Collections_Generic_List_Rect__TypeInfo, v5, v6);
  System_Collections_Generic_List_Rect____ctor(
    v7,
    (const MethodInfo_34BE0DC *)Method_System_Collections_Generic_List_Rect___ctor__);
  v8 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
         this,
         this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v7 )
    goto LABEL_29;
  items = v7->fields._items;
  v14 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v7,
      *(UnityEngine_Rect_o *)&v9,
      *(const MethodInfo_34BE968 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj + size;
    v7->fields._size = size + 1;
    LODWORD(v16[2].klass) = v9;
    HIDWORD(v16[2].klass) = v10;
    LODWORD(v16[2].monitor) = v11;
    HIDWORD(v16[2].monitor) = v12;
  }
  v8 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
         this,
         this->klass[1]._1.image);
  v21 = v7->fields._items;
  v22 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v7->fields._version;
  if ( !v21 )
    goto LABEL_29;
  v23 = v7->fields._size;
  if ( (unsigned int)v23 >= v21->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v7,
      *(UnityEngine_Rect_o *)&v17,
      *(const MethodInfo_34BE968 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj + v23;
    v7->fields._size = v23 + 1;
    LODWORD(v24[2].klass) = v17;
    HIDWORD(v24[2].klass) = v18;
    LODWORD(v24[2].monitor) = v19;
    HIDWORD(v24[2].monitor) = v20;
  }
  v8 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
         this,
         this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  v29 = v7->fields._items;
  v30 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v7->fields._version;
  if ( !v29 )
    goto LABEL_29;
  v31 = v7->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v7,
      *(UnityEngine_Rect_o *)&v25,
      *(const MethodInfo_34BE968 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj + v31;
    v7->fields._size = v31 + 1;
    LODWORD(v32[2].klass) = v25;
    HIDWORD(v32[2].klass) = v26;
    LODWORD(v32[2].monitor) = v27;
    HIDWORD(v32[2].monitor) = v28;
  }
  v8 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
         this,
         this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  v37 = v7->fields._items;
  v38 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v7->fields._version;
  if ( !v37 )
    goto LABEL_29;
  v39 = v7->fields._size;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v7,
      *(UnityEngine_Rect_o *)&v33,
      *(const MethodInfo_34BE968 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v37->obj + v39;
    v7->fields._size = v39 + 1;
    LODWORD(v40[2].klass) = v33;
    HIDWORD(v40[2].klass) = v34;
    LODWORD(v40[2].monitor) = v35;
    HIDWORD(v40[2].monitor) = v36;
  }
  v8 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
         this,
         this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  v45 = v7->fields._items;
  v46 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v7->fields._version;
  if ( !v45 )
    goto LABEL_29;
  v47 = v7->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v7,
      *(UnityEngine_Rect_o *)&v41,
      *(const MethodInfo_34BE968 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj + v47;
    v7->fields._size = v47 + 1;
    LODWORD(v48[2].klass) = v41;
    HIDWORD(v48[2].klass) = v42;
    LODWORD(v48[2].monitor) = v43;
    HIDWORD(v48[2].monitor) = v44;
  }
  v8 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
         this,
         this->klass->vtable._8_GetScanDialogRect.methodPtr);
  v55 = v7->fields._items;
  v56 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v7->fields._version;
  if ( !v55 )
LABEL_29:
    sub_1B64324(v8);
  v57 = v7->fields._size;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v7,
      *(UnityEngine_Rect_o *)&v51,
      *(const MethodInfo_34BE968 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj + v57;
    v7->fields._size = v57 + 1;
    LODWORD(v58[2].klass) = v51;
    HIDWORD(v58[2].klass) = v52;
    LODWORD(v58[2].monitor) = v53;
    HIDWORD(v58[2].monitor) = v54;
  }
  this->fields._rects_k__BackingField = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v49, v50);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall Submarine2DUILocationInfo__GetScanDialogRect(
        Submarine2DUILocationInfo_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(UnityEngine_Rect_o *)&v2 = UiRectFactory__CenterRect(0.0, -160.0, 500.0, 160.0, 0LL);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall Submarine2DUILocationInfo__GetStorageRect(
        Submarine2DUILocationInfo_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(UnityEngine_Rect_o *)&v2 = UiRectFactory__LeftTopRect(0.0, 0.0, 160.0, 160.0, 0LL);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}