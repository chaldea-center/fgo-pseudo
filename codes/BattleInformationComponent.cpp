void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDF4E3 & 1) == 0 )
  {
    sub_1C21E38(&BattleInformationComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_9694/*"NobleLevel"*/);
    byte_4BDF4E3 = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9694/*"NobleLevel"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleInformationComponent_TypeInfo->static_fields,
    StringLiteral_9694/*"NobleLevel"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x20
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UnityEngine_GameObject_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Boolean_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Single_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x20
  int v61; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x20
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7

  if ( (byte_4BDF4E2 & 1) == 0 )
  {
    sub_1C21E38(&BaseBattleInfoPosData_TypeInfo);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3___TypeInfo);
    sub_1C21E38(&StringLiteral_25547/*"{0}th Attack"*/);
    sub_1C21E38(&StringLiteral_1491/*"3rd Attack"*/);
    sub_1C21E38(&StringLiteral_22774/*"overkill_"*/);
    sub_1C21E38(&StringLiteral_1411/*"1st Attack"*/);
    sub_1C21E38(&StringLiteral_1472/*"2nd Attack"*/);
    sub_1C21E38(&StringLiteral_22773/*"overgauge_"*/);
    byte_4BDF4E2 = 1;
  }
  v3 = (Il2CppObject *)sub_1C22084(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.infoPosData, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_18;
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24)
    || (v19 = StringLiteral_22774/*"overkill_"*/,
        *(_QWORD *)(v10 + 32) = StringLiteral_22774/*"overkill_"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17),
        *(_DWORD *)(v18 + 24) <= 1u) )
  {
LABEL_17:
    sub_1C2209C(v10, v11);
  }
  v26 = StringLiteral_22773/*"overgauge_"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_22773/*"overgauge_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25);
  this->fields.overLabel = (struct System_String_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.overLabel, v18, v27, v28, v29, v30, v31, v32);
  v33 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.overObjectList = v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.overObjectList, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (struct System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, 2LL);
  this->fields.isAlreadyOverKill = v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.isAlreadyOverKill, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (struct System_Single_array *)sub_1C21EE0(float___TypeInfo, 2LL);
  this->fields.timeStartOverKill = v47;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.timeStartOverKill, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v10 = sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
  v60 = v10;
  if ( !byte_4BD6BB1 )
  {
    v10 = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v60 )
LABEL_18:
    sub_1C22094(v10, v11);
  v61 = *(_DWORD *)(v60 + 24);
  if ( !v61 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v60 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v60 + 40) = z;
  if ( v61 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v60 + 52) = 0;
  *(_QWORD *)(v60 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v60;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.showPositions, v60, v54, v55, v56, v57, v58, v59);
  v64 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v64;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.motionMessageObjList,
    (int64_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v10 = sub_1C21EE0(string___TypeInfo, 4LL);
  if ( !v10 )
    goto LABEL_18;
  v77 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_17;
  v78 = StringLiteral_1411/*"1st Attack"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_1411/*"1st Attack"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), v78, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v77 + 24) <= 1u )
    goto LABEL_17;
  v85 = StringLiteral_1472/*"2nd Attack"*/;
  *(_QWORD *)(v77 + 40) = StringLiteral_1472/*"2nd Attack"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v77 + 40), v85, v79, v80, v81, v82, v83, v84);
  if ( *(_DWORD *)(v77 + 24) <= 2u )
    goto LABEL_17;
  v92 = StringLiteral_1491/*"3rd Attack"*/;
  *(_QWORD *)(v77 + 48) = StringLiteral_1491/*"3rd Attack"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v77 + 48), v92, v86, v87, v88, v89, v90, v91);
  if ( *(_DWORD *)(v77 + 24) <= 3u )
    goto LABEL_17;
  v99 = StringLiteral_25547/*"{0}th Attack"*/;
  *(_QWORD *)(v77 + 56) = StringLiteral_25547/*"{0}th Attack"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v77 + 56), v99, v93, v94, v95, v96, v97, v98);
  this->fields.attackCount = (struct System_String_array *)v77;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.attackCount, v77, v100, v101, v102, v103, v104, v105);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleInformationComponent__AddMotionMessageObject(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  bool v5; // w0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4BDF4DD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4DD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  BattleInformationComponent__DestroyDisplayingMessage(this, v5, v6);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
    if ( !motionMessageObjList
      || (items = motionMessageObjList->fields._items,
          v16 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++motionMessageObjList->fields._version,
          !items) )
    {
      sub_1C22094(motionMessageObjList, v7);
    }
    size = motionMessageObjList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        motionMessageObjList,
        (Il2CppObject *)obj,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      motionMessageObjList->fields._size = size + 1;
      v18[4] = (Il2CppClass *)obj;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)obj, v8, v9, v10, v11, v12, v13);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v8; // x4
  UnityEngine_Object_o *BattleMessageObject; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BDF4DE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4DE = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)messages, 0LL);
  BattleMessageObject = 0LL;
  if ( !IsNullOrEmpty )
  {
    BattleMessageObject = (UnityEngine_Object_o *)BattleInformationComponent__CreateBattleMessageObject(
                                                    (BattleInformationComponent_o *)IsNullOrEmpty,
                                                    messages,
                                                    messageType,
                                                    this->fields.skillInfoRoot,
                                                    v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(BattleMessageObject, 0LL, 0LL);
    if ( v10 )
    {
      if ( !BattleMessageObject )
        sub_1C22094(v10, v11);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BattleMessageObject, 1, 0LL);
    }
  }
  return (UnityEngine_GameObject_o *)BattleMessageObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  System_String_o *MessageObjectAssetName; // x21
  __int64 v9; // x22
  _QWORD *EffectAssetName; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  BattleInformationComponent_o *v25; // x0
  const MethodInfo *v26; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v28; // x4

  if ( (byte_4BDF4CF & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C21E38(&string___TypeInfo);
    byte_4BDF4CF = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v9 = sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v9 )
    sub_1C22094(EffectAssetName, v11);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v9 + 32) = EffectAssetName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)EffectAssetName, v12, v13, v14, v15, v16, v17);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v9 + 24) <= 1u )
LABEL_11:
    sub_1C2209C(EffectAssetName, v11);
  v24 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v9 + 40) = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), v24, v18, v19, v20, v21, v22, v23);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v25,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v9,
                                                   v26);
  return BattleInformationComponent__CreateBattleMessageObject_45165568(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v28);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_45165568(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v8; // x22
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4BDF4D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4D0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__50551272(
           (Il2CppObject *)msgPrefab,
           parentTransform,
           (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    if ( !v9 )
      goto LABEL_13;
    v8 = (UnityEngine_GameObject_o *)v9;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          v12);
        return v8;
      }
LABEL_13:
      sub_1C22094(v9, v10);
    }
  }
  return v8;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleInformationComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v13; // x20
  System_String_o *MessageObjectAssetName; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleDataDefine_c *v21; // x8
  BattleLogic_o *v22; // x22
  int64_t ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *v28; // x19

  if ( (byte_4BDF4CE & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDF4CE = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v10 = (BattleInformationComponent_o *)sub_1C21EE0(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_15;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
    if ( !logic )
      goto LABEL_15;
    v10 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v13 = (System_String_array *)v10;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v10, 0, v11);
  logic = (BattleLogic_o *)sub_1C21EE0(string___TypeInfo, 1LL);
  v21 = BattleDataDefine_TypeInfo;
  v22 = logic;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v21 = BattleDataDefine_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_15;
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    sub_1C2209C(logic, v9);
  ASSET_BATTLE_COMMON = (int64_t)v21->static_fields->ASSET_BATTLE_COMMON;
  v22->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v22->fields.fsm, ASSET_BATTLE_COMMON, v15, v16, v17, v18, v19, v20);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v24,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v22,
                                                   v25);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_45165568(
                             TargetPrefab,
                             v13,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v27);
  if ( !logic
    || (v28 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_15:
    sub_1C22094(logic, v9);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v28;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultSkillMessageObject(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        bool showSkillSprite,
        const MethodInfo *method)
{
  __int64 v9; // x8
  UnityEngine_GameObject_o *Object; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4BDF4D1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4D1 = 1;
  }
  v9 = 136LL;
  if ( isPlayer )
    v9 = 128LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v9),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_15;
  v12 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         Object,
                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_15;
  v14 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v13);
  if ( !showSkillSprite )
  {
    klass = (UnityEngine_Object_o *)v14[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      Object = (UnityEngine_GameObject_o *)v14[3].klass;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v12;
        }
      }
LABEL_15:
      sub_1C22094(Object, v11);
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateOverWriteSkillInfoObject(
        BattleInformationComponent_o *this,
        int32_t overWriteSkillInfoId,
        System_String_o *message,
        bool isPlayer,
        int32_t skillLevel,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v14; // x19
  Il2CppObject *v15; // x0
  UnityEngine_Component_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *klass; // x21
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = skillLevel;
  if ( (byte_4BDF4D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3035/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_4BDF4D2 = 1;
  }
  v11 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v11;
    case 1:
      skillInfoPrefab = this->fields.skillInfoPrefab;
      goto LABEL_6;
    case 2:
      skillInfoPrefab = this->fields.skillInfoEnemyPrefab;
LABEL_6:
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 skillInfoPrefab,
                 this->fields.skillInfoRoot,
                 0LL,
                 0LL);
      goto LABEL_13;
    case 3:
      if ( skillLevel >= 1 && isPlayer )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3035/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0LL);
        message = System_String__Format_63129848(v14, (Il2CppObject *)message, v15, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 message,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_13:
      v11 = Object;
      break;
    default:
      break;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_29;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v11,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      klass = (UnityEngine_Object_o *)Component_object[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)Component_object[3].klass;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            return v11;
          }
        }
LABEL_29:
        sub_1C22094(gameObject, v17);
      }
    }
  }
  return v11;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSkipRoot; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *infoPosData; // x0
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *v18; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF4E0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4E0 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    infoPosData = (UnityEngine_GameObject_o *)this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_14;
    v6 = this->fields.skillSkipRoot;
    v19.fields.x = ((float (__fastcall *)(UnityEngine_GameObject_o *, const char *))infoPosData->klass[1]._1.gc_desc)(
                     infoPosData,
                     infoPosData->klass[1]._1.name);
    GameObjectExtensions__SetLocalPosition(v6, v19, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v7);
    infoPosData = this->fields.skillSkipRoot;
    if ( !infoPosData )
      goto LABEL_14;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(infoPosData, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_skillSkipObj, (int64_t)Object, v12, v13, v14, v15, v16, v17);
    v18 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      infoPosData = *p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive(infoPosData, 1, 0LL);
        return;
      }
LABEL_14:
      sub_1C22094(infoPosData, v4);
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF4E1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4E1 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (PartyOrganizationUtility_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_skillSkipObj->klass = 0LL;
    sub_1C21DDC(p_skillSkipObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        bool isDisplayNextMessage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  __int64 v10; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF4D8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4D8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    motionMessageObjList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v7 = this->fields.motionMessageObjList;
  if ( !v7 )
    goto LABEL_21;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
  if ( !motionMessageObjList )
    goto LABEL_21;
  motionMessageObjList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_MultiMessageDisplay(
                                                                        (BattlePerformance_o *)motionMessageObjList,
                                                                        0LL);
  if ( !motionMessageObjList )
    goto LABEL_21;
  if ( isDisplayNextMessage )
  {
    BattleMultiMessageDisplay__ReleaseMessage_45189768(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
    if ( motionMessageObjList )
    {
      BattlePerformance__DestroySkillCutInMessage((BattlePerformance_o *)motionMessageObjList, 0LL);
      return;
    }
LABEL_21:
    sub_1C22094(motionMessageObjList, isDisplayNextMessage);
  }
  v10 = *(_QWORD *)&motionMessageObjList->fields._size;
  if ( !v10 || !*(_BYTE *)(v10 + 21) )
    BattleMultiMessageDisplay__ReleaseMessage_45189768(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
}


void __fastcall BattleInformationComponent__DestroyNonMotionMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nonMotionMessageObject; // x20
  PartyOrganizationUtility_o *p_nonMotionMessageObject; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF4D9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4D9 = 1;
  }
  nonMotionMessageObject = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nonMotionMessageObject, 0LL, 0LL) )
  {
    p_nonMotionMessageObject = (PartyOrganizationUtility_o *)&this->fields.nonMotionMessageObject;
    klass = (UnityEngine_Object_o *)p_nonMotionMessageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_nonMotionMessageObject->klass = 0LL;
    sub_1C21DDC(p_nonMotionMessageObject, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDF4CD & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_17415/*"battle_message_{0}"*/);
    byte_4BDF4CD = 1;
  }
  v8 = messageType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17415/*"battle_message_{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  System_String_o *v8; // x21
  Il2CppObject *Object_object__49880776; // x21

  if ( (byte_4BDF4DF & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4DF = 1;
  }
  if ( !assetNames )
    goto LABEL_18;
  v6 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1C2209C(this, prefabName);
      v8 = assetNames->m_Items[v7];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v8, 0LL);
      if ( !this )
        break;
      Object_object__49880776 = AssetData__GetObject_object__49880776(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__49880776,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v6) = assetNames->max_length;
        if ( (__int64)++v7 < (int)v6 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__49880776;
    }
LABEL_18:
    sub_1C22094(this, prefabName);
  }
  return 0LL;
}


void __fastcall BattleInformationComponent__Initialize(
        BattleInformationComponent_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v25; // x1
  int64_t overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v35; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v38; // x20
  struct UnityEngine_GameObject_array *v39; // x21
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_Transform_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct UnityEngine_GameObject_array *v48; // x8
  struct System_Boolean_array *v49; // x8
  struct System_Single_array *v50; // x8
  Il2CppObject *Object_object__49880776; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4BDF4C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19169/*"ef_overgauge01"*/);
    sub_1C21E38(&StringLiteral_3256/*"Battle/Common"*/);
    sub_1C21E38(&StringLiteral_19176/*"ef_skillskip"*/);
    sub_1C21E38(&StringLiteral_19225/*"effect/ef_overkill01"*/);
    byte_4BDF4C8 = 1;
  }
  this->fields.perf = inperf;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v18, v19, v20, v21, v22, v23);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    overRoot = (int64_t)this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  }
  overRoot = (int64_t)this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)overRoot, 0LL),
        overRoot = (int64_t)BaseMonoBehaviour__createObject_39485728(
                              (BaseMonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_19225/*"effect/ef_overkill01"*/,
                              transform,
                              0LL,
                              0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_38:
    sub_1C22094(overRoot, v25);
  }
  if ( !overObjectList->max_length )
    goto LABEL_39;
  overObjectList->m_Items[0] = (UnityEngine_GameObject_o *)overRoot;
  sub_1C21DDC((PartyOrganizationUtility_o *)overObjectList->m_Items, overRoot, v28, v29, v30, v31, v32, v33);
  v35 = this->fields.overObjectList;
  if ( !v35 )
    goto LABEL_38;
  if ( !v35->max_length )
    goto LABEL_39;
  overRoot = (int64_t)v35->m_Items[0];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_38;
  if ( !isAlreadyOverKill->max_length )
    goto LABEL_39;
  isAlreadyOverKill->m_Items[4] = 0;
  timeStartOverKill = this->fields.timeStartOverKill;
  if ( !timeStartOverKill )
    goto LABEL_38;
  if ( !timeStartOverKill->max_length )
    goto LABEL_39;
  timeStartOverKill->m_Items[1] = 0.0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (int64_t)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3256/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_38;
  v38 = (AssetData_o *)overRoot;
  overRoot = (int64_t)AssetData__GetObject_object__49880776(
                        (AssetData_o *)overRoot,
                        (System_String_o *)StringLiteral_19169/*"ef_overgauge01"*/,
                        (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v39 = this->fields.overObjectList;
  v40 = (UnityEngine_GameObject_o *)overRoot;
  v41 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = (int64_t)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v40, v41, 0LL, 0LL);
  if ( !v39 )
    goto LABEL_38;
  if ( v39->max_length <= 1 )
    goto LABEL_39;
  v39->m_Items[1] = (UnityEngine_GameObject_o *)overRoot;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v39->m_Items[1], overRoot, v42, v43, v44, v45, v46, v47);
  v48 = this->fields.overObjectList;
  if ( !v48 )
    goto LABEL_38;
  if ( v48->max_length <= 1 )
    goto LABEL_39;
  overRoot = (int64_t)v48->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  v49 = this->fields.isAlreadyOverKill;
  if ( !v49 )
    goto LABEL_38;
  if ( v49->max_length <= 1 )
    goto LABEL_39;
  v49->m_Items[5] = 0;
  v50 = this->fields.timeStartOverKill;
  if ( !v50 )
    goto LABEL_38;
  if ( v50->max_length <= 1 )
LABEL_39:
    sub_1C2209C(overRoot, v25);
  v50->m_Items[2] = 0.0;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              v38,
                              (System_String_o *)StringLiteral_19176/*"ef_skillskip"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__49880776;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillSkipPrefab,
    (int64_t)Object_object__49880776,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  GameObjectExtensions__SafeSetParent_34803616(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overRoot = UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL);
  if ( (overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (int64_t)this->fields.fieldParam;
      if ( overRoot )
      {
        (*(void (__fastcall **)(int64_t, struct BattleFieldEnvironmentData_o *, _QWORD))(*(_QWORD *)overRoot + 376LL))(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          *(_QWORD *)(*(_QWORD *)overRoot + 384LL));
        return;
      }
    }
    goto LABEL_38;
  }
}


void __fastcall BattleInformationComponent__InitializeEachWave(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v11; // x1
  BattleFieldParamComponent_o *v12; // x0

  if ( (byte_4BDF4C9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4C9 = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.infoPosData,
    (int64_t)BattleInfoPosData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v12 = this->fields.fieldParam;
    if ( !v12 )
      sub_1C22094(0LL, v11);
    BattleFieldParamComponent__UpdateView(v12, v11);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int v4; // w20
  __int64 v5; // x20
  __int64 v6; // x0
  __int128 v7; // q0
  __int64 v8; // d1

  if ( (byte_4BDF4CA & 1) == 0 )
  {
    sub_1C21E38(&NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    sub_1C21E38(&PosCountNormalBattleInfoPosData_TypeInfo);
    sub_1C21E38(&PosCountSpBattleInfoPosData_TypeInfo);
    byte_4BDF4CA = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v4 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v6 = sub_1C22084(PosCountSpBattleInfoPosData_TypeInfo);
    v7 = xmmword_BFE420;
    v8 = 1127153664LL;
    goto LABEL_13;
  }
  if ( v4 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getStageEntity(data, 0LL);
      if ( data )
      {
        if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
          goto LABEL_10;
        v6 = sub_1C22084(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v7 = xmmword_BFE880;
        v8 = 1112801280LL;
LABEL_13:
        v5 = v6;
        *(_OWORD *)(v6 + 24) = v7;
        *(_QWORD *)(v6 + 40) = v8;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C22094(data, method);
  }
LABEL_10:
  v5 = sub_1C22084(PosCountNormalBattleInfoPosData_TypeInfo);
  *(_DWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 24) = 0x43070000C3FA0000LL;
LABEL_14:
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  (*(void (__fastcall **)(__int64, struct BattlePerformance_o *, _QWORD))(*(_QWORD *)v5 + 408LL))(
    v5,
    this->fields.perf,
    *(_QWORD *)(*(_QWORD *)v5 + 416LL));
  return (BaseBattleInfoPosData_o *)v5;
}


void __fastcall BattleInformationComponent__SerializeFieldNotNullCheck(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleInformationComponent__ShowActionMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v3; // x19
  bool isPlayerID; // w0
  const MethodInfo *v6; // x5
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0LL) )
    sub_1C22094(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v7 = BattleInformationComponent__showSkillName(
         v3,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v6);
  BattleInformationComponent__AddMotionMessageObject(v3, v7, v8);
}


void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *BattleMessage; // x1
  const MethodInfo *v6; // x2

  BattleMessage = BattleInformationComponent__CreateBattleMessage(this, messages, messageType, method);
  BattleInformationComponent__AddMotionMessageObject(this, BattleMessage, v6);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__ShowCommandCardMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x19
  BattleInformationComponent_o *v4; // x20
  int32_t type; // w21
  int32_t v6; // w23
  BattleInformationComponent_o *v7; // x21
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x4
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  BattleInfoMessageComponent_o *v13; // x22
  System_String_o *v14; // x24
  Il2CppObject *v15; // x0
  BattleInformationComponent_o *v16; // x8
  __int64 *v17; // x8
  System_String_o *v18; // x2
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v22; // x3
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4BDF4D7 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3418/*"Buster!"*/);
    sub_1C21E38(&StringLiteral_11147/*"Quick!"*/);
    sub_1C21E38(&StringLiteral_2518/*"Arts!"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (BattleInformationComponent_o *)sub_1C21E38(&StringLiteral_6514/*"Extra!"*/);
    byte_4BDF4D7 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  type = v3->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  v6 = BattleCommand__getType(type, 0LL);
  this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           v4->fields.playerAttackInfoPrefab,
                                           v4->fields.attackMessageRoot,
                                           0LL,
                                           0LL);
  if ( !this )
    goto LABEL_40;
  v7 = this;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  actionIndex = v3->fields.actionIndex;
  attackCount = v4->fields.attackCount;
  v13 = (BattleInfoMessageComponent_o *)this;
  if ( (int)actionIndex < 3 )
  {
    if ( !attackCount )
      goto LABEL_40;
    if ( (unsigned int)actionIndex < attackCount->max_length )
    {
      actionData = (BattleActionData_o *)attackCount->m_Items[actionIndex];
      goto LABEL_14;
    }
LABEL_41:
    sub_1C2209C(this, actionData);
  }
  if ( !attackCount )
    goto LABEL_40;
  if ( attackCount->max_length <= 3 )
    goto LABEL_41;
  v14 = attackCount->m_Items[3];
  v24 = actionIndex + 1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v8, v9, v10);
  this = (BattleInformationComponent_o *)System_String__Format(v14, v15, 0LL);
  actionData = (BattleActionData_o *)this;
LABEL_14:
  if ( v6 == 3 )
    v16 = 0LL;
  else
    v16 = v7;
  if ( v6 == 3 )
  {
    v17 = &StringLiteral_11147/*"Quick!"*/;
    goto LABEL_22;
  }
  if ( v6 == 2 )
  {
    v18 = (System_String_o *)StringLiteral_3418/*"Buster!"*/;
    goto LABEL_28;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 4 )
      v18 = (System_String_o *)StringLiteral_6514/*"Extra!"*/;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
    v7 = v16;
    if ( !v13 )
      goto LABEL_40;
    goto LABEL_29;
  }
  v17 = &StringLiteral_2518/*"Arts!"*/;
LABEL_22:
  v18 = (System_String_o *)*v17;
  if ( !v13 )
    goto LABEL_40;
LABEL_29:
  BattleInfoMessageComponent__setText_45159760(v13, (System_String_o *)actionData, v18, v9);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_40;
  this = (BattleInformationComponent_o *)perf->fields.commandPerf;
  if ( !this )
    goto LABEL_40;
  BattleCommandCardObject = (UnityEngine_Object_o *)BattlePerformanceCommandCard__getBattleCommandCardObject(
                                                      (BattlePerformanceCommandCard_o *)this,
                                                      v3->fields.actionIndex,
                                                      0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( this )
    {
      ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0LL);
      BattleInfoMessageComponent__setCommandObject(
        v13,
        (UnityEngine_GameObject_o *)BattleCommandCardObject,
        ServantData,
        v22);
      if ( BattleCommandCardObject )
      {
        this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( this )
        {
          BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_40:
    sub_1C22094(this, actionData);
  }
LABEL_38:
  if ( !v7 )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 1, 0LL);
  return (UnityEngine_GameObject_o *)v7;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__ShowMotionMessage(
        BattleInformationComponent_o *this,
        System_String_o *motionMessage,
        int32_t actorId,
        int32_t messageType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v8; // x19
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x8
  int32_t size; // w2
  int v12; // w9
  bool HasRubyFormat; // w24
  const MethodInfo *v14; // x3
  BattleInformationComponent_o *v15; // x23
  BattleInformationComponent_o *v16; // x21
  const MethodInfo *v17; // x2
  bool isPlayerID; // w0
  const MethodInfo *v19; // x4
  BattleEffectUtility_c *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  AssetData_o *v24; // x20
  Il2CppObject *Object_object__49880776; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4BDF4DC & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17426/*"battle_states_popup"*/);
    this = (BattleInformationComponent_o *)sub_1C21E38(&StringLiteral_3261/*"Battle/Effect/"*/);
    byte_4BDF4DC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !motionMessage )
    goto LABEL_44;
  if ( motionMessage->fields._stringLength < 1 )
    return 0LL;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_44;
  size = motionMessageObjList->fields._size;
  v12 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0LL);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0LL);
  if ( HasRubyFormat )
    goto LABEL_17;
  v15 = this;
  if ( !this )
    goto LABEL_44;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
  {
LABEL_17:
    if ( messageType == 2 )
    {
      this = (BattleInformationComponent_o *)v8->fields.data;
      if ( !this )
        goto LABEL_44;
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actorId, 0LL);
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultSkillMessageObject(
                                               v8,
                                               isPlayerID,
                                               motionMessage,
                                               0,
                                               v19);
      if ( !this )
        goto LABEL_44;
    }
    else
    {
      if ( messageType == 1 )
      {
        this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v8,
                                                 v8->fields.commonLabelPrefab,
                                                 v8->fields.commonMessageRoot,
                                                 0LL,
                                                 0LL);
        if ( this )
        {
          v16 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v17);
LABEL_28:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
            return (UnityEngine_GameObject_o *)v16;
          }
        }
LABEL_44:
        sub_1C22094(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v14);
      if ( !this )
        goto LABEL_44;
    }
    v16 = this;
    goto LABEL_28;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_44;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v21 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v21 = BattleEffectUtility_TypeInfo;
  }
  v22 = System_Int32__ToString((unsigned int)v21->static_fields + 24, 0LL);
  v23 = System_String__Concat_63115476((System_String_o *)StringLiteral_3261/*"Battle/Effect/"*/, v22, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v23, 0LL);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_45:
    sub_1C2209C(this, motionMessage);
  v24 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_63115476(
                                           (System_String_o *)StringLiteral_17426/*"battle_states_popup"*/,
                                           (System_String_o *)v15->fields.perf,
                                           0LL);
  if ( !v24 )
    goto LABEL_44;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              v24,
                              (System_String_o *)this,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__49880776,
                                             v8->fields.commonMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_44;
    v16 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
    {
      if ( this )
      {
        EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v15->fields.data, 0LL);
        goto LABEL_28;
      }
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  return (UnityEngine_GameObject_o *)v16;
}


void __fastcall BattleInformationComponent__SwitchPopupFullScreen(
        BattleInformationComponent_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *fsOffsetRoot; // x1

  if ( isFullScreen )
    fsOffsetRoot = this->fields.fsOffsetRoot;
  else
    fsOffsetRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_34803616(this->fields.overRoot, fsOffsetRoot, 0LL);
}


System_Collections_Generic_List_GameObject__o *__fastcall BattleInformationComponent__get_MotionMessageObjList(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.motionMessageObjList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__hideOverBase(
        BattleInformationComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x21
  Il2CppObject *Component_object; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v11; // x0
  struct System_String_array *v12; // x8
  System_String_o *v13; // x0
  struct System_Boolean_array *v14; // x8

  v4 = this;
  if ( (byte_4BDF4DB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C21E38(&StringLiteral_22755/*"out"*/);
    byte_4BDF4DB = 1;
  }
  isAlreadyOverKill = v4->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_30;
  if ( isAlreadyOverKill->max_length <= type )
    goto LABEL_31;
  if ( !isAlreadyOverKill->m_Items[type + 4] )
    return;
  overObjectList = v4->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_30;
  if ( overObjectList->max_length <= type )
    goto LABEL_31;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this )
    goto LABEL_30;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v7 = v4->fields.overObjectList;
  if ( !v7 )
    goto LABEL_30;
  if ( v7->max_length <= type )
    goto LABEL_31;
  v8 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v7->m_Items[type];
  if ( !this )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_31;
        v11 = System_String__Concat_63115476(overLabel->m_Items[type], (System_String_o *)StringLiteral_22755/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_65253852((SimpleAnimation_o *)v8, v11, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1C22094(this, *(_QWORD *)&type);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
  v12 = v4->fields.overLabel;
  if ( !v12 )
    goto LABEL_30;
  if ( v12->max_length <= type )
    goto LABEL_31;
  v13 = System_String__Concat_63115476(v12->m_Items[type], (System_String_o *)StringLiteral_22755/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_70614020(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v13,
                                           0LL);
LABEL_26:
  v14 = v4->fields.isAlreadyOverKill;
  if ( !v14 )
    goto LABEL_30;
  if ( v14->max_length <= type )
LABEL_31:
    sub_1C2209C(this, *(_QWORD *)&type);
  v14->m_Items[type + 4] = 0;
}


void __fastcall BattleInformationComponent__hideOverGaugeMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 1, v2);
}


void __fastcall BattleInformationComponent__hideOverKillMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__shiftOverMessage(
        BattleInformationComponent_o *this,
        int32_t type,
        int32_t zureIndex,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *overObjectList; // x8
  BattleInformationComponent_o *v5; // x20
  struct UnityEngine_Vector3_array *showPositions; // x8

  overObjectList = this->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_8;
  if ( overObjectList->max_length <= type )
    goto LABEL_9;
  v5 = this;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL),
        (showPositions = v5->fields.showPositions) == 0LL) )
  {
LABEL_8:
    sub_1C22094(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
LABEL_9:
    sub_1C2209C(this, *(_QWORD *)&type);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&showPositions->m_Items[zureIndex].fields.y,
    0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showBoostSkillName(
        BattleInformationComponent_o *this,
        int32_t imageId,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  BattleInfoMessageComponent_o *v14; // x22
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v17; // x0
  BattleActionData_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4BDF4D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_19208/*"effect/ef_boostitem01"*/);
    byte_4BDF4D4 = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  v7 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_19208/*"effect/ef_boostitem01"*/, 0LL);
  v8 = (UnityEngine_GameObject_o *)v7;
  if ( !v7 || (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v8,
                                       transform,
                                       0LL,
                                       0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !Object
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_1C22094(Component_object, v12);
      }
      v14 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v13);
      BattleInfoMessageComponent__setItemSprite(v14, imageId, 0, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1C22354(v7);
  BattleInformationComponent__showSpecialName(v17, v18, v19);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x20
  BattleInformationComponent_o *v4; // x19
  int32_t type; // w21
  const MethodInfo *v6; // x4
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  System_String_o *motionMessage; // x1
  BattleActionData_o *v17; // x0
  bool IsGimmick; // w0
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t v20; // w9
  int32_t skilllv; // w21
  const MethodInfo *v22; // x3
  struct BattleSkillInfoData_o *v23; // x8
  bool isPlayerID; // w0
  const MethodInfo *v25; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v27; // x4
  bool v28; // w1
  BattleInformationComponent_o *v29; // x0
  int32_t v30; // w3
  bool v31; // w0

  v3 = actionData;
  v4 = this;
  if ( (byte_4BDF4D6 & 1) == 0 )
  {
    this = (BattleInformationComponent_o *)sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDF4D6 = 1;
  }
  if ( !v3 )
    goto LABEL_33;
  if ( v3->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyNonMotionMessage(v4, (const MethodInfo *)actionData);
  type = v3->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( !BattleCommand__isShowCommandAction(type, 0LL) )
    goto LABEL_12;
  this = (BattleInformationComponent_o *)v4->fields.data;
  if ( !this )
    goto LABEL_33;
  if ( !BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL) )
  {
LABEL_12:
    motionMessage = v3->fields.motionMessage;
    if ( motionMessage )
    {
      v17 = (BattleActionData_o *)BattleInformationComponent__ShowMotionMessage(
                                    v4,
                                    motionMessage,
                                    v3->fields.actorId,
                                    v3->fields._MessageType_k__BackingField,
                                    v6);
LABEL_14:
      actionData = v17;
      goto LABEL_26;
    }
    IsGimmick = BattleActionData__IsGimmick(v3, 0LL);
    actionData = 0LL;
    if ( IsGimmick )
      goto LABEL_26;
    this = (BattleInformationComponent_o *)BattleActionData__isSkill(v3, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      skillInfo = v3->fields.skillInfo;
      if ( skillInfo )
      {
        v20 = skillInfo->fields.type;
        if ( v20 == 11 || v20 == 1 )
          skilllv = skillInfo->fields.skilllv;
        else
          skilllv = 0;
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
          skillMessage = v3->fields.skillMessage;
          v27 = v3->fields.skillInfo;
          v28 = isPlayerID;
          v29 = v4;
          v30 = skilllv;
LABEL_30:
          v17 = (BattleActionData_o *)BattleInformationComponent__showSkillName(v29, v28, skillMessage, v30, v27, v25);
          goto LABEL_14;
        }
      }
    }
    else
    {
      this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v3, 0LL);
      actionData = 0LL;
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_26;
      if ( v3->fields.noOperation )
        goto LABEL_11;
      v23 = v3->fields.skillInfo;
      if ( v23 )
      {
        if ( v23->fields.itemImageId != -1 )
        {
          v17 = (BattleActionData_o *)BattleInformationComponent__showBoostSkillName(
                                        v4,
                                        v3->fields.imageId,
                                        v3->fields.skillMessage,
                                        v22);
          goto LABEL_14;
        }
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          v31 = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
          skillMessage = v3->fields.skillMessage;
          v27 = v3->fields.skillInfo;
          v28 = v31;
          v29 = v4;
          v30 = 0;
          goto LABEL_30;
        }
      }
    }
LABEL_33:
    sub_1C22094(this, actionData);
  }
  v8 = BattleInformationComponent__ShowCommandCardMessage(v4, v3, v7);
  v4->fields.nonMotionMessageObject = v8;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v4->fields.nonMotionMessageObject,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
LABEL_11:
  actionData = 0LL;
LABEL_26:
  BattleInformationComponent__AddMotionMessageObject(v4, (UnityEngine_GameObject_o *)actionData, v15);
}


void __fastcall BattleInformationComponent__showCommonMessage_45173660(
        BattleInformationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleInformationComponent__showNoblePhantasmInfo(
        BattleInformationComponent_o *this,
        int32_t tresureDeviceId,
        int32_t treasureDeviceLevel,
        int32_t treasureDevicePer,
        bool isHideInfo,
        System_String_array *overrideTd,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v15; // x26
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *v19; // x0
  Il2CppObject *v20; // x28
  UnityEngine_Transform_o *v21; // x0
  Il2CppObject *v22; // x27
  UnityEngine_Transform_o *v23; // x0
  Il2CppObject *v24; // x24
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x25
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *monitor; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v31; // x1
  System_String_o *v32; // x1
  System_String_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  int v38; // w8
  Il2CppObject *v39; // x20
  Il2CppObject *v40; // x19
  BattleInformationComponent_c *v41; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v43; // x0
  BattleInformationComponent_c *v44; // x0
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  int v47; // [xsp+Ch] [xbp-64h] BYREF
  int v48; // [xsp+18h] [xbp-58h] BYREF
  int32_t v49; // [xsp+1Ch] [xbp-54h] BYREF

  v49 = treasureDeviceLevel;
  if ( (byte_4BDF4CC & 1) == 0 )
  {
    sub_1C21E38(&BattleInformationComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C21E38(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9440/*"NOBLEINFO_NP_PER"*/);
    sub_1C21E38(&StringLiteral_23407/*"rubyLabel"*/);
    sub_1C21E38(&StringLiteral_10805/*"PerLabel"*/);
    sub_1C21E38(&StringLiteral_8562/*"LevelLabel"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_9770/*"NpLevelBase"*/);
    sub_1C21E38(&StringLiteral_21632/*"mainLabel"*/);
    byte_4BDF4CC = 1;
  }
  v48 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v15 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    v16 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_21632/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v19 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_23407/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v20 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v21 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v21, (System_String_o *)StringLiteral_8562/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v23 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v23, (System_String_o *)StringLiteral_10805/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v24 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v25 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v25, (System_String_o *)StringLiteral_9770/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v20 )
      goto LABEL_52;
    v26 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v20, (System_String_o *)v15[2].klass, 0LL);
    monitor = (System_String_o *)v15[1].monitor;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_53;
      if ( overrideTd->m_Items[0] )
        monitor = overrideTd->m_Items[0];
      if ( max_length == 1 )
LABEL_53:
        sub_1C2209C(v27, v28);
      v31 = overrideTd->m_Items[1];
      if ( v31 )
        UILabel__set_text((UILabel_o *)v20, v31, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v16, 0LL);
      if ( !Instance )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_object )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v49, 0LL);
    if ( !v22 )
      goto LABEL_52;
    if ( Instance )
      v32 = (System_String_o *)Instance;
    else
      v32 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v22, v32, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NOBLEINFO_NP_PER"*/, 0LL);
    v47 = 100 * (treasureDevicePer / 100);
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v34, v35, v36);
    Instance = (DataManager_o *)System_String__Format(v33, v37, 0LL);
    if ( !v24 || (UILabel__set_text((UILabel_o *)v24, (System_String_o *)Instance, 0LL), !v26) )
LABEL_52:
      sub_1C22094(Instance, v13);
    UnityEngine_GameObject__SetActive(v26, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v38 = 5;
    else
      v38 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v38 = 1;
    v48 = v38;
    v39 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v40 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
    {
      v41 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v41 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v41->static_fields->NobleInfoAnimPrefix;
      v43 = System_Int32__ToString((int32_t)&v48, 0LL);
      Instance = (DataManager_o *)System_String__Concat_63115476(NobleInfoAnimPrefix, v43, 0LL);
      if ( v39 )
      {
        SimpleAnimation__Play_65253852((SimpleAnimation_o *)v39, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
    {
      v44 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v44 = BattleInformationComponent_TypeInfo;
      }
      v45 = v44->static_fields->NobleInfoAnimPrefix;
      v46 = System_Int32__ToString((int32_t)&v48, 0LL);
      Instance = (DataManager_o *)System_String__Concat_63115476(v45, v46, 0LL);
      if ( !v40 )
        goto LABEL_52;
      UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)v40, (System_String_o *)Instance, 0LL);
    }
  }
}


void __fastcall BattleInformationComponent__showOverGaugeMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_1C22094(this, actionData);
  if ( !isAlreadyOverKill->max_length )
    sub_1C2209C(this, actionData);
  if ( isAlreadyOverKill->m_Items[4] )
    BattleInformationComponent__shiftOverMessage(this, 0, 1, v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 1, v3);
}


void __fastcall BattleInformationComponent__showOverKillMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8
  const MethodInfo *v7; // x3

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_1C22094(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
    sub_1C2209C(this, actionData);
  BattleInformationComponent__shiftOverMessage(this, 0, isAlreadyOverKill->m_Items[5], v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 0, v7);
}


void __fastcall BattleInformationComponent__showOverMessageBase(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        int32_t inOverType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v6; // x20
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_GameObject_o *v8; // x21
  float v9; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x22
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v15; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v17; // s0
  struct System_Single_array *v18; // x8
  struct System_String_array *v19; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v21; // x8
  struct System_Boolean_array *v22; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v25; // x8

  v6 = this;
  if ( (byte_4BDF4DA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20975/*"in"*/);
    this = (BattleInformationComponent_o *)sub_1C21E38(&StringLiteral_19793/*"flash"*/);
    byte_4BDF4DA = 1;
  }
  if ( !actionData )
    goto LABEL_70;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_70;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_70;
    v8 = v6->fields.overRoot;
    v9 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v8, v9, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_70;
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = v6->fields.overObjectList;
  if ( !v11 )
    goto LABEL_70;
  if ( v11->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)v11->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v12 = v6->fields.overObjectList) == 0LL) )
  {
LABEL_70:
    sub_1C22094(this, actionData);
  }
  if ( v12->max_length <= inOverType )
    goto LABEL_71;
  v13 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v12->m_Items[inOverType];
  if ( !this )
    goto LABEL_70;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = (UnityEngine_Behaviour_o *)v13;
    if ( !v13 )
      goto LABEL_70;
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_70;
LABEL_29:
    UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
    UnityEngine_Behaviour__set_enabled(v15, 1, 0LL);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_70;
  if ( isAlreadyOverKill->max_length <= inOverType )
    goto LABEL_71;
  if ( !isAlreadyOverKill->m_Items[inOverType + 4] )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_70;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_71;
      this = (BattleInformationComponent_o *)System_String__Concat_63115476(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20975/*"in"*/,
                                               0LL);
      if ( !v13 )
        goto LABEL_70;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_65253852(
                                               (SimpleAnimation_o *)v13,
                                               (System_String_o *)this,
                                               0LL);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v21 = v6->fields.overLabel;
        if ( !v21 )
          goto LABEL_70;
        if ( v21->max_length <= inOverType )
          goto LABEL_71;
        this = (BattleInformationComponent_o *)System_String__Concat_63115476(
                                                 v21->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20975/*"in"*/,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_70;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_70614020(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v22 = v6->fields.isAlreadyOverKill;
    if ( !v22 )
      goto LABEL_70;
    if ( v22->max_length > inOverType )
    {
      v22->m_Items[inOverType + 4] = 1;
      timeStartOverKill = v6->fields.timeStartOverKill;
      time = UnityEngine_Time__get_time(0LL);
      if ( !timeStartOverKill )
        goto LABEL_70;
      if ( timeStartOverKill->max_length > inOverType )
      {
        timeStartOverKill->m_Items[inOverType + 1] = time;
        return;
      }
    }
LABEL_71:
    sub_1C2209C(this, actionData);
  }
  v17 = UnityEngine_Time__get_time(0LL);
  v18 = v6->fields.timeStartOverKill;
  if ( !v18 )
    goto LABEL_70;
  if ( v18->max_length <= inOverType )
    goto LABEL_71;
  if ( (float)(v17 - v18->m_Items[inOverType + 1]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v6->fields.overLabel;
    if ( !v19 )
      goto LABEL_70;
    if ( v19->max_length > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_63115476(
                                               v19->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19793/*"flash"*/,
                                               0LL);
      if ( !v13 )
        goto LABEL_70;
      SimpleAnimation__Play_65253852((SimpleAnimation_o *)v13, (System_String_o *)this, 0LL);
      return;
    }
    goto LABEL_71;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v25 = v6->fields.overLabel;
  if ( !v25 )
    goto LABEL_70;
  if ( v25->max_length <= inOverType )
    goto LABEL_71;
  this = (BattleInformationComponent_o *)System_String__Concat_63115476(
                                           v25->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19793/*"flash"*/,
                                           0LL);
  if ( !Component_object )
    goto LABEL_70;
  UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  Il2CppObject *Component_object; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF4D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF4D3 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v12,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v12 = entity;
      if ( !entity )
        goto LABEL_34;
      v14 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v14,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v15);
    }
    else
    {
      skillInfo = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL) )
  {
    v16 = 136LL;
    if ( isPlayer )
      v16 = 128LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v16),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)skillInfo,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) == 0 )
        goto LABEL_32;
      if ( Component_object )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_object,
            message,
            skillLevel,
            v19);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v18);
LABEL_32:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_34:
    sub_1C22094(v12, v13);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v8; // x22
  bool isPlayerID; // w0
  __int64 v10; // x8
  UnityEngine_GameObject_o *v11; // x21
  BattleInfoMessageComponent_o *v12; // x23
  UnityEngine_Object_o *saveDataMapList; // x24
  System_String_o *monitor; // x22
  System_String_o *OverrideTDName; // x0
  System_String_o *v16; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4BDF4D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C21E38(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF4D5 = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v8 = Entity;
        Instance = (DataManager_o *)this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v10 = 136LL;
          if ( isPlayerID )
            v10 = 128LL;
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
                                        this->fields.skillInfoRoot,
                                        0LL,
                                        0LL);
          if ( Instance )
          {
            v11 = (UnityEngine_GameObject_o *)Instance;
            Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v12 = (BattleInfoMessageComponent_o *)Instance;
              saveDataMapList = (UnityEngine_Object_o *)Instance->fields.saveDataMapList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(saveDataMapList, 0LL, 0LL) )
              {
                Instance = (DataManager_o *)v12->fields.skillSprite;
                if ( !Instance )
                  goto LABEL_27;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0LL);
                if ( !Instance )
                  goto LABEL_27;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              Instance = (DataManager_o *)this->fields.data;
              if ( Instance )
              {
                monitor = (System_String_o *)v8[1].monitor;
                Instance = (DataManager_o *)BattleData__getServantData(
                                              (BattleData_o *)Instance,
                                              actionData->fields.actorId,
                                              0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v16 = OverrideTDName;
                  else
                    v16 = monitor;
                  if ( System_String__IsNullOrEmpty(v16, 0LL) )
                  {
                    UnityEngine_GameObject__SetActive(v11, 0, 0LL);
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v12, v16, v17);
                    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
                    BattleInformationComponent__AddMotionMessageObject(this, v11, v18);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C22094(Instance, v6);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  int32_t TotalDamage; // w0
  int v6; // w19
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v8; // x20
  __int64 v9; // x22
  UILabel_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int v16; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4BDF4CB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_21489/*"line1"*/);
    sub_1C21E38(&StringLiteral_14799/*"Total {0:#,0}"*/);
    this = (BattleInformationComponent_o *)sub_1C21E38(&StringLiteral_21490/*"line2"*/);
    byte_4BDF4CB = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v6 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v8 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= m_CancellationTokenSource )
            sub_1C2209C(this, actionData);
          v10 = (UILabel_o *)*((_QWORD *)&v8->fields.perf + v9);
          if ( !v10 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v8->fields.perf + v9),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_63123792((System_String_o *)this, (System_String_o *)StringLiteral_21489/*"line1"*/, 0LL) )
          {
            v16 = v6;
            v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
            v15 = System_String__Format((System_String_o *)StringLiteral_14799/*"Total {0:#,0}"*/, v14, 0LL);
            UILabel__set_text(v10, v15, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v10,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_63123792(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21490/*"line2"*/,
                                                     0LL);
          }
          m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
          if ( (int)++v9 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1C22094(this, actionData);
      }
    }
  }
}