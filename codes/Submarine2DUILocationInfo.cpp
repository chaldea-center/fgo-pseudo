// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Collections_Generic_List_Rect__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // s0
  int v15; // s1
  int v16; // s2
  int v17; // s3
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v19; // x8
  __int64 size; // x10
  Il2CppObject *v21; // x9
  int v22; // s0
  int v23; // s1
  int v24; // s2
  int v25; // s3
  struct UnityEngine_Rect_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppObject *v29; // x8
  int v30; // s0
  int v31; // s1
  int v32; // s2
  int v33; // s3
  struct UnityEngine_Rect_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppObject *v37; // x8
  int v38; // s0
  int v39; // s1
  int v40; // s2
  int v41; // s3
  struct UnityEngine_Rect_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppObject *v45; // x8
  int v46; // s0
  int v47; // s1
  int v48; // s2
  int v49; // s3
  struct UnityEngine_Rect_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppObject *v53; // x8
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int v60; // s0
  int v61; // s1
  int v62; // s2
  int v63; // s3
  struct UnityEngine_Rect_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppObject *v67; // x8

  if ( (byte_4B12D7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rect__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rect___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_Rect__TypeInfo, v6, v7);
    byte_4B12D7E = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v11 = (System_Collections_Generic_List_Rect__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_Rect__TypeInfo,
                                                     v8,
                                                     v9,
                                                     v10);
  System_Collections_Generic_List_Rect____ctor(
    v11,
    (const MethodInfo_35B2170 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
          this,
          this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v11 )
    goto LABEL_29;
  items = v11->fields._items;
  v19 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v11,
      *(UnityEngine_Rect_o *)&v14,
      *(const MethodInfo_35B29FC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj + size;
    v11->fields._size = size + 1;
    LODWORD(v21[2].klass) = v14;
    HIDWORD(v21[2].klass) = v15;
    LODWORD(v21[2].monitor) = v16;
    HIDWORD(v21[2].monitor) = v17;
  }
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
          this,
          this->klass[1]._1.image);
  v26 = v11->fields._items;
  v27 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v11->fields._version;
  if ( !v26 )
    goto LABEL_29;
  v28 = v11->fields._size;
  if ( (unsigned int)v28 >= v26->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v11,
      *(UnityEngine_Rect_o *)&v22,
      *(const MethodInfo_35B29FC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj + v28;
    v11->fields._size = v28 + 1;
    LODWORD(v29[2].klass) = v22;
    HIDWORD(v29[2].klass) = v23;
    LODWORD(v29[2].monitor) = v24;
    HIDWORD(v29[2].monitor) = v25;
  }
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
          this,
          this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  v34 = v11->fields._items;
  v35 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v11->fields._version;
  if ( !v34 )
    goto LABEL_29;
  v36 = v11->fields._size;
  if ( (unsigned int)v36 >= v34->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v11,
      *(UnityEngine_Rect_o *)&v30,
      *(const MethodInfo_35B29FC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj + v36;
    v11->fields._size = v36 + 1;
    LODWORD(v37[2].klass) = v30;
    HIDWORD(v37[2].klass) = v31;
    LODWORD(v37[2].monitor) = v32;
    HIDWORD(v37[2].monitor) = v33;
  }
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
          this,
          this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  v42 = v11->fields._items;
  v43 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v11->fields._version;
  if ( !v42 )
    goto LABEL_29;
  v44 = v11->fields._size;
  if ( (unsigned int)v44 >= v42->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v11,
      *(UnityEngine_Rect_o *)&v38,
      *(const MethodInfo_35B29FC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj + v44;
    v11->fields._size = v44 + 1;
    LODWORD(v45[2].klass) = v38;
    HIDWORD(v45[2].klass) = v39;
    LODWORD(v45[2].monitor) = v40;
    HIDWORD(v45[2].monitor) = v41;
  }
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
          this,
          this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  v50 = v11->fields._items;
  v51 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v11->fields._version;
  if ( !v50 )
    goto LABEL_29;
  v52 = v11->fields._size;
  if ( (unsigned int)v52 >= v50->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v11,
      *(UnityEngine_Rect_o *)&v46,
      *(const MethodInfo_35B29FC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj + v52;
    v11->fields._size = v52 + 1;
    LODWORD(v53[2].klass) = v46;
    HIDWORD(v53[2].klass) = v47;
    LODWORD(v53[2].monitor) = v48;
    HIDWORD(v53[2].monitor) = v49;
  }
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
          this,
          this->klass->vtable._8_GetScanDialogRect.methodPtr);
  v64 = v11->fields._items;
  v65 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v11->fields._version;
  if ( !v64 )
LABEL_29:
    sub_1BCAA3C(v12, v13);
  v66 = v11->fields._size;
  if ( (unsigned int)v66 >= v64->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v11,
      *(UnityEngine_Rect_o *)&v60,
      *(const MethodInfo_35B29FC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = &v64->obj + v66;
    v11->fields._size = v66 + 1;
    LODWORD(v67[2].klass) = v60;
    HIDWORD(v67[2].klass) = v61;
    LODWORD(v67[2].monitor) = v62;
    HIDWORD(v67[2].monitor) = v63;
  }
  this->fields._rects_k__BackingField = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v54, v55, v56, v57, v58, v59);
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