void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v4; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  struct BillBoardGroupManager_StaticFields *v7; // x9
  float v8; // s1

  if ( (byte_4B1562C & 1) == 0 )
  {
    sub_1BCA7E0(&BillBoardGroupManager_TypeInfo, v1, v2);
    byte_4B1562C = 1;
  }
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    byte_4B109C1 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v4->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v4->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !byte_4B12CDB )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    byte_4B12CDB = 1;
  }
  v6 = UnityEngine_Vector3_TypeInfo->static_fields;
  v7 = BillBoardGroupManager_TypeInfo->static_fields;
  v8 = v6->backVector.fields.z;
  *(_QWORD *)&v7->VecBack.fields.x = *(_QWORD *)&v6->backVector.fields.x;
  v7->VecBack.fields.z = v8;
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1562B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__, method, v2);
    byte_4B1562B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BillBoardGroupManager__AddData(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        UnityEngine_Camera_o *cam,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_int__object__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__object__o *v30; // x24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_Dictionary_int__object__o *Values; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_Dictionary_int__object__o *v42; // x22
  const MethodInfo *v43; // x2
  BillBoardGroupManager_GroupData_o *v44; // x20
  const MethodInfo *v45; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B15628 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__,
      *(_QWORD *)&groupId,
      cam);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__,
      v15,
      v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__,
      v23,
      v24);
    sub_1BCA7E0(&BillBoardGroupManager_GroupData_TypeInfo, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__,
      v27,
      v28);
    byte_4B15628 = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo,
                                                                    *(_QWORD *)&groupId,
                                                                    cam,
                                                                    obj);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v30,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v30;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.datas, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = *p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                       Values,
                                                                       (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v46,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v46;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &i,
            (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields._currentValue, cam, v39) )
    {
      if ( !i.fields._currentValue )
        sub_1BCAA3C(0LL, v38);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &i,
      (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = *p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                     Values,
                                                                     groupId,
                                                                     (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v42 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v42 )
    {
      Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         *p_datas,
                                                                         groupId,
                                                                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, v43);
        return;
      }
    }
LABEL_22:
    sub_1BCAA3C(Values, *(_QWORD *)&groupId);
  }
  v44 = (BillBoardGroupManager_GroupData_o *)sub_1BCAA2C(
                                               BillBoardGroupManager_GroupData_TypeInfo,
                                               *(_QWORD *)&groupId,
                                               v40,
                                               v41);
  BillBoardGroupManager_GroupData___ctor(v44, cam, v45);
  if ( !v42 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v42,
    groupId,
    (Il2CppObject *)v44,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager__GetLookVec(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        bool disableZRot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__o *datas; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  BillBoardGroupManager_c *v13; // x0
  float *p_targetFov; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15629 & 1) == 0 )
  {
    sub_1BCA7E0(&BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId, disableZRot);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__,
      v7,
      v8);
    byte_4B15629 = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_1BCAA3C(0LL, *(_QWORD *)&groupId);
    *(UnityEngine_Vector3_o *)&v10 = BillBoardGroupManager_GroupData__GetLookVec(
                                       (BillBoardGroupManager_GroupData_o *)value,
                                       *(const MethodInfo **)&groupId);
    if ( disableZRot )
      v11 = 0.0;
  }
  else
  {
    v13 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId);
      v13 = BillBoardGroupManager_TypeInfo;
    }
    p_targetFov = &v13->static_fields->targetFov;
    v10 = p_targetFov[1];
    v11 = p_targetFov[2];
    v12 = p_targetFov[3];
  }
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


float __fastcall BillBoardGroupManager__GetMagnifier(float angleRad, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  BillBoardGroupManager_c *v5; // x0
  float v6; // s0
  float v7; // s8
  float targetFov; // s0

  if ( (byte_4B1562A & 1) == 0 )
  {
    sub_1BCA7E0(&BillBoardGroupManager_TypeInfo, v2, v3);
    byte_4B1562A = 1;
  }
  v5 = BillBoardGroupManager_TypeInfo;
  v6 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v6 = angleRad;
  if ( v6 >= 0.0 )
    v7 = v6;
  else
    v7 = -v6;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v2);
    v5 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v5->static_fields->targetFov;
  if ( v7 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, v2);
    targetFov = BillBoardGroupManager_TypeInfo->static_fields->targetFov;
  }
  return cosf(v7 * (float)(90.0 / targetFov));
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager__GetNormalizedLookAt(
        UnityEngine_Vector3_o fromPos,
        UnityEngine_Vector3_o toPos,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s11
  float v8; // s10
  float v9; // s12
  float v10; // s13
  float v11; // s11
  float v12; // s9
  float v13; // s8
  float v14; // s2
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = toPos.fields.z;
  y = toPos.fields.y;
  x = toPos.fields.x;
  v8 = fromPos.fields.z;
  v9 = fromPos.fields.y;
  v10 = fromPos.fields.x;
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v3, v4);
    byte_4B109C4 = 1;
  }
  v11 = x - v10;
  v12 = y - v9;
  v13 = z - v8;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v14 = sqrtf((float)(v13 * v13) + (float)((float)(v11 * v11) + (float)(v12 * v12)));
  if ( v14 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v3, v4);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields->zeroVector.fields.x;
    v16 = static_fields->zeroVector.fields.y;
    v17 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v15 = v11 / v14;
    v16 = v12 / v14;
    v17 = v13 / v14;
  }
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData___ctor(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BillBoardGroupManager_c *v18; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v21; // x8
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B1562D & 1) == 0 )
  {
    sub_1BCA7E0(&BillBoardGroupManager_TypeInfo, pCam, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v7, v8);
    byte_4B1562D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)pCam, v9, v10, v11, v12, v13, v14);
  v18 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v15);
    v18 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v18->static_fields;
  z = static_fields->VecZero.fields.z;
  v21 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v21;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objs, (int64_t)v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *objs; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4B1562F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, obj, method);
    byte_4B1562F = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_1BCAA3C(objs, obj);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *cam; // x20
  __int64 v19; // x1
  float x; // s8
  float32x2_t v21; // d9
  BillBoardGroupManager_c *v22; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v24; // d1
  unsigned __int64 v25; // d1
  System_Collections_Generic_List_object__o *objs; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  float v34; // s0
  float v35; // s1
  float v36; // s2
  UnityEngine_Component_o *v37; // x0
  float v38; // s8
  float v39; // s9
  float v40; // s10
  UnityEngine_Transform_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  BillBoardGroupManager_c *v44; // x0
  float v45; // s11
  float y; // s12
  float z; // s13
  __int64 v48; // x1
  float v49; // s2
  float v50; // s0
  float v51; // s1
  UnityEngine_Component_o *v52; // x0
  float v53; // s8
  UnityEngine_Transform_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  float v58; // s11
  float v59; // s9
  float v60; // s10
  System_Math_c *v61; // x0
  float v62; // s0
  float v63; // s1
  float v64; // s0
  float v65; // s1
  float v66; // s9
  float v67; // s0
  float Magnifier; // s0
  float v69; // s1
  struct System_Collections_Generic_List_GameObject__o *v70; // x8
  int32_t size; // w2
  int v72; // w9
  float v73; // s0
  float v74; // s1
  float v75; // s2
  float v76; // [xsp+0h] [xbp-F0h]
  float v77; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+40h] [xbp-B0h] BYREF
  float v80; // [xsp+ACh] [xbp-44h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B15630 & 1) == 0 )
  {
    sub_1BCA7E0(&BillBoardGroupManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    byte_4B15630 = 1;
  }
  memset(&v79, 0, sizeof(v79));
  cam = (UnityEngine_Object_o *)this->fields.cam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(cam, 0LL, 0LL) )
  {
    x = this->fields.resVec.fields.x;
    v21.n64_u64[0] = *(unsigned __int64 *)&this->fields.resVec.fields.y;
    v22 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v19);
      v22 = BillBoardGroupManager_TypeInfo;
    }
    static_fields = (float32x2_t *)v22->static_fields;
    v24.n64_u64[0] = vsub_f32(v21, static_fields[1]).n64_u64[0];
    v25 = vmul_f32(v24, v24).n64_u64[0];
    if ( (float)(*((float *)&v25 + 1)
               + (float)((float)((float)(x - static_fields->n64_f32[1]) * (float)(x - static_fields->n64_f32[1]))
                       + *(float *)&v25)) < 1.0e-10 )
    {
      objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_46;
      if ( objs->fields._size < 1 )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v78,
        objs,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v80 = 57.296;
      v79 = v78;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v79,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v79.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
        v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
        if ( !v29 )
        {
          if ( !current )
            sub_1BCAA3C(v29, v30);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
          if ( !transform )
            sub_1BCAA3C(0LL, v32);
          *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_position(transform, 0LL);
          v37 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v37 )
            sub_1BCAA3C(0LL, v33);
          v38 = v34;
          v39 = v35;
          v40 = v36;
          v41 = UnityEngine_Component__get_transform(v37, 0LL);
          if ( !v41 )
            sub_1BCAA3C(0LL, v42);
          position = UnityEngine_Transform__get_position(v41, 0LL);
          v44 = BillBoardGroupManager_TypeInfo;
          v45 = position.fields.x;
          y = position.fields.y;
          z = position.fields.z;
          if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v43);
          v82.fields.x = v38;
          v82.fields.y = v39;
          v82.fields.z = v40;
          v85.fields.x = v45;
          v85.fields.y = y;
          v85.fields.z = z;
          *(UnityEngine_Vector3_o *)(&v49 - 2) = BillBoardGroupManager__GetNormalizedLookAt(
                                                   v82,
                                                   v85,
                                                   (const MethodInfo *)v44);
          v77 = v50;
          v76 = v51;
          v52 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v52 )
            sub_1BCAA3C(0LL, v48);
          v53 = v49;
          v54 = UnityEngine_Component__get_transform(v52, 0LL);
          if ( !v54 )
            sub_1BCAA3C(0LL, v55);
          forward = UnityEngine_Transform__get_forward(v54, 0LL);
          v58 = forward.fields.x;
          v59 = forward.fields.y;
          v60 = forward.fields.z;
          if ( !byte_4B12CE3 )
          {
            sub_1BCA7E0(&System_Math_TypeInfo, v56, v57);
            byte_4B12CE3 = 1;
          }
          v61 = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56);
          v62 = sqrtf(
                  (float)((float)(v53 * v53) + (float)((float)(v77 * v77) + (float)(v76 * v76)))
                * (float)((float)(v60 * v60) + (float)((float)(v58 * v58) + (float)(v59 * v59))));
          v63 = 0.0;
          if ( v62 >= 1.0e-15 )
          {
            v64 = (float)((float)((float)(v59 * (float)-v76) - (float)(v77 * v58)) - (float)(v53 * v60)) / v62;
            v65 = fminf(v64, 1.0);
            if ( v64 < -1.0 )
              v66 = -1.0;
            else
              v66 = v65;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56);
            v67 = acos(v66);
            v63 = v67 * v80;
          }
          Magnifier = BillBoardGroupManager__GetMagnifier(v63 * 0.017453, (const MethodInfo *)v61);
          v69 = (float)(v53 * Magnifier) + this->fields.resVec.fields.z;
          *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                            vmul_n_f32(
                                                              (float32x2_t)__PAIR64__(LODWORD(v76), LODWORD(v77)),
                                                              Magnifier),
                                                            *(float32x2_t *)&this->fields.resVec.fields.x);
          this->fields.resVec.fields.z = v69;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v79,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v70 = this->fields.objs;
      if ( !v70 )
LABEL_46:
        sub_1BCAA3C(objs, v19);
      size = v70->fields._size;
      v72 = v70->fields._version + 1;
      v70->fields._size = 0;
      v70->fields._version = v72;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v70->fields._items, 0, size, 0LL);
    }
  }
LABEL_39:
  v73 = this->fields.resVec.fields.x;
  v74 = this->fields.resVec.fields.y;
  v75 = this->fields.resVec.fields.z;
  result.fields.z = v75;
  result.fields.y = v74;
  result.fields.x = v73;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  BillBoardGroupManager_c *v11; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v14; // x8

  if ( (byte_4B1562E & 1) == 0 )
  {
    sub_1BCA7E0(&BillBoardGroupManager_TypeInfo, pCam, method);
    byte_4B1562E = 1;
  }
  this->fields.cam = pCam;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)pCam, (int64_t)method, v3, v4, v5, v6, v7);
  v11 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v10);
    v11 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  z = static_fields->VecZero.fields.z;
  v14 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v14;
}