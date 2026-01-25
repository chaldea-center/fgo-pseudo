void BattleInformationComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CF1B60 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleInformationComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9539/*"NobleLevel"*/);
    byte_4CF1B60 = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9539/*"NobleLevel"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleInformationComponent_TypeInfo->static_fields,
    StringLiteral_9539/*"NobleLevel"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x20
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct UnityEngine_GameObject_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Boolean_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_Single_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  __int64 v60; // x20
  int v61; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v64; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x20
  int32_t v78; // w1
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  int32_t v85; // w1
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  int32_t v92; // w1
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  int32_t v99; // w1
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7

  if ( (byte_4CF1B5F & 1) == 0 )
  {
    sub_1C7BAE8(&BaseBattleInfoPosData_TypeInfo);
    sub_1C7BAE8(&bool___TypeInfo);
    sub_1C7BAE8(&UnityEngine_GameObject___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&float___TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3___TypeInfo);
    sub_1C7BAE8(&StringLiteral_25458/*"{0}th Attack"*/);
    sub_1C7BAE8(&StringLiteral_1396/*"3rd Attack"*/);
    sub_1C7BAE8(&StringLiteral_22731/*"overkill_"*/);
    sub_1C7BAE8(&StringLiteral_1310/*"1st Attack"*/);
    sub_1C7BAE8(&StringLiteral_1370/*"2nd Attack"*/);
    sub_1C7BAE8(&StringLiteral_22730/*"overgauge_"*/);
    byte_4CF1B5F = 1;
  }
  v3 = (Il2CppObject *)sub_1C7BD34(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.infoPosData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_1C7BB90(string___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_18;
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24)
    || (v19 = StringLiteral_22731/*"overkill_"*/,
        *(_QWORD *)(v10 + 32) = StringLiteral_22731/*"overkill_"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17),
        *(_DWORD *)(v18 + 24) <= 1u) )
  {
LABEL_17:
    sub_1C7BD48(v10);
  }
  v26 = StringLiteral_22730/*"overgauge_"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_22730/*"overgauge_"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25);
  this->fields.overLabel = (struct System_String_array *)v18;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.overLabel, v18, v27, v28, v29, v30, v31, v32);
  v33 = (struct UnityEngine_GameObject_array *)sub_1C7BB90(UnityEngine_GameObject___TypeInfo, 2);
  this->fields.overObjectList = v33;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.overObjectList, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (struct System_Boolean_array *)sub_1C7BB90(bool___TypeInfo, 2);
  this->fields.isAlreadyOverKill = v40;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.isAlreadyOverKill,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (struct System_Single_array *)sub_1C7BB90(float___TypeInfo, 2);
  this->fields.timeStartOverKill = v47;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.timeStartOverKill,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v10 = sub_1C7BB90(UnityEngine_Vector3___TypeInfo, 2);
  v60 = v10;
  if ( !byte_4CE7E59 )
  {
    v10 = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v60 )
LABEL_18:
    sub_1C7BD40(v10, v11);
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.showPositions, v60, v54, v55, v56, v57, v58, v59);
  v64 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v64;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.motionMessageObjList,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v10 = sub_1C7BB90(string___TypeInfo, 4);
  if ( !v10 )
    goto LABEL_18;
  v77 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_17;
  v78 = StringLiteral_1310/*"1st Attack"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_1310/*"1st Attack"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 32), v78, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v77 + 24) <= 1u )
    goto LABEL_17;
  v85 = StringLiteral_1370/*"2nd Attack"*/;
  *(_QWORD *)(v77 + 40) = StringLiteral_1370/*"2nd Attack"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v77 + 40), v85, v79, v80, v81, v82, v83, v84);
  if ( *(_DWORD *)(v77 + 24) <= 2u )
    goto LABEL_17;
  v92 = StringLiteral_1396/*"3rd Attack"*/;
  *(_QWORD *)(v77 + 48) = StringLiteral_1396/*"3rd Attack"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v77 + 48), v92, v86, v87, v88, v89, v90, v91);
  if ( *(_DWORD *)(v77 + 24) <= 3u )
    goto LABEL_17;
  v99 = StringLiteral_25458/*"{0}th Attack"*/;
  *(_QWORD *)(v77 + 56) = StringLiteral_25458/*"{0}th Attack"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v77 + 56), v99, v93, v94, v95, v96, v97, v98);
  this->fields.attackCount = (struct System_String_array *)v77;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.attackCount, v77, v100, v101, v102, v103, v104, v105);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleInformationComponent__AddMotionMessageObject(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  bool v5; // w0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4CF1B5A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B5A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  BattleInformationComponent__DestroyDisplayingMessage(this, v5, v6);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
    if ( !motionMessageObjList
      || (items = motionMessageObjList->fields._items,
          v16 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++motionMessageObjList->fields._version,
          !items) )
    {
      sub_1C7BD40(motionMessageObjList, v7);
    }
    size = motionMessageObjList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        motionMessageObjList,
        (Il2CppObject *)obj,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      motionMessageObjList->fields._size = size + 1;
      v18[4] = (Il2CppClass *)obj;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)obj, v8, v9, v10, v11, v12, v13);
    }
  }
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateBattleMessage(
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

  if ( (byte_4CF1B5B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B5B = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)messages, 0);
  BattleMessageObject = 0;
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
    v10 = UnityEngine_Object__op_Inequality(BattleMessageObject, 0, 0);
    if ( v10 )
    {
      if ( !BattleMessageObject )
        sub_1C7BD40(v10, v11);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BattleMessageObject, 1, 0);
    }
  }
  return (UnityEngine_GameObject_o *)BattleMessageObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleInformationComponent__CreateBattleMessageObject(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1
  BattleInformationComponent_o *v25; // x0
  const MethodInfo *v26; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v28; // x4

  if ( (byte_4CF1B4B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&BattleEffectUtility_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&string___TypeInfo);
    byte_4CF1B4B = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v9 = sub_1C7BB90(string___TypeInfo, 2);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0);
  if ( !v9 )
    sub_1C7BD40(EffectAssetName, v11);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v9 + 32) = EffectAssetName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)EffectAssetName, v12, v13, v14, v15, v16, v17);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v9 + 24) <= 1u )
LABEL_11:
    sub_1C7BD48(EffectAssetName);
  v24 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v9 + 40) = v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), v24, v18, v19, v20, v21, v22, v23);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v25,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v9,
                                                   v26);
  return BattleInformationComponent__CreateBattleMessageObject_47890120(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v28);
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateBattleMessageObject_47890120(
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

  if ( (byte_4CF1B4C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B4C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__52412380(
           (Il2CppObject *)msgPrefab,
           parentTransform,
           (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    if ( !v9 )
      goto LABEL_13;
    v8 = (UnityEngine_GameObject_o *)v9;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          0);
        return v8;
      }
LABEL_13:
      sub_1C7BD40(v9, v10);
    }
  }
  return v8;
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateDefaultBattleMessageObject(
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BattleDataDefine_c *v21; // x8
  BattleLogic_o *v22; // x22
  struct System_String_o *ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *v28; // x19

  if ( (byte_4CF1B4A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___);
    sub_1C7BAE8(&string___TypeInfo);
    byte_4CF1B4A = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
    v10 = (BattleInformationComponent_o *)sub_1C7BB90(string___TypeInfo, 0);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_15;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0);
    if ( !logic )
      goto LABEL_15;
    v10 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0);
  }
  v13 = (System_String_array *)v10;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v10, 0, v11);
  logic = (BattleLogic_o *)sub_1C7BB90(string___TypeInfo, 1);
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
    sub_1C7BD48(logic);
  ASSET_BATTLE_COMMON = v21->static_fields->ASSET_BATTLE_COMMON;
  v22->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v22->fields.fsm,
    (int32_t)ASSET_BATTLE_COMMON,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v24,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v22,
                                                   v25);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_47890120(
                             TargetPrefab,
                             v13,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v27);
  if ( !logic
    || (v28 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0) )
  {
LABEL_15:
    sub_1C7BD40(logic, v9);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0);
  return v28;
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateDefaultBattleMessageObjectForBattleScript(
        BattleInformationComponent_o *this,
        System_String_o *message,
        float lifeTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_GameObject_o *DefaultBattleMessageObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19

  if ( lifeTime <= 0.0 )
    lifeTime = 1.5;
  DefaultBattleMessageObject = BattleInformationComponent__CreateDefaultBattleMessageObject(
                                 this,
                                 message,
                                 this->fields.skillInfoRoot,
                                 lifeTime,
                                 v4);
  if ( !DefaultBattleMessageObject )
    sub_1C7BD40(0, v6);
  v7 = DefaultBattleMessageObject;
  UnityEngine_GameObject__SetActive(DefaultBattleMessageObject, 1, 0);
  return v7;
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateDefaultSkillMessageObject(
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

  if ( (byte_4CF1B4D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B4D = 1;
  }
  v9 = 136;
  if ( isPlayer )
    v9 = 128;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v9),
             this->fields.skillInfoRoot,
             0,
             0);
  if ( !Object )
    goto LABEL_15;
  v12 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         Object,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_15;
  v14 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v13);
  if ( !showSkillSprite )
  {
    klass = (UnityEngine_Object_o *)v14[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
    {
      Object = (UnityEngine_GameObject_o *)v14[3].klass;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0);
          return v12;
        }
      }
LABEL_15:
      sub_1C7BD40(Object, v11);
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleInformationComponent__CreateOverWriteSkillInfoObject(
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
  if ( (byte_4CF1B4E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2880/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_4CF1B4E = 1;
  }
  v11 = 0;
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
                 0,
                 0);
      goto LABEL_13;
    case 3:
      if ( skillLevel >= 1 && isPlayer )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2880/*"BATTLE_SKILL_NAME_LEVEL"*/, 0);
        v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
        message = System_String__Format_64218220(v14, (Il2CppObject *)message, v15, 0);
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
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_29;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v11,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      klass = (UnityEngine_Object_o *)Component_object[3].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)Component_object[3].klass;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
            return v11;
          }
        }
LABEL_29:
        sub_1C7BD40(gameObject, v17);
      }
    }
  }
  return v11;
}


void BattleInformationComponent__CreateSkillSkip(BattleInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *skillSkipRoot; // x20
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  UnityEngine_Vector2_o v6; // kr00_8
  UnityEngine_GameObject_o *v7; // x20
  float v8; // s1
  float v9; // s2
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1B5D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B5D = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0, 0) )
  {
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_15;
    v6 = BattlePerformance__GetExBattleUiSkillSkipPosAdjust(perf, 0);
    perf = (BattlePerformance_o *)this->fields.infoPosData;
    if ( !perf )
      goto LABEL_15;
    v7 = this->fields.skillSkipRoot;
    v22.fields.x = v6.fields.x
                 + ((float (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.image)(
                     perf,
                     perf->klass[1]._1.gc_desc);
    v22.fields.y = v6.fields.y + v8;
    v22.fields.z = v9 + 0.0;
    GameObjectExtensions__SetLocalPosition(v7, v22, 0);
    BattleInformationComponent__DeleteSkillSkip(this, v10);
    perf = (BattlePerformance_o *)this->fields.skillSkipRoot;
    if ( !perf )
      goto LABEL_15;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0, 0);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_skillSkipObj, (int32_t)Object, v15, v16, v17, v18, v19, v20);
    v21 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
    {
      perf = (BattlePerformance_o *)*p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, 1, 0);
        return;
      }
LABEL_15:
      sub_1C7BD40(perf, v4);
    }
  }
}


void BattleInformationComponent__DeleteSkillSkip(BattleInformationComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF1B5E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B5E = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (GrandQuestFolderBoardItem_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(klass, 0);
    p_skillSkipObj->klass = 0;
    sub_1C7BA8C(p_skillSkipObj, 0, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleInformationComponent__DestroyDisplayingMessage(
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

  if ( (byte_4CF1B55 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B55 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    motionMessageObjList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v7 = this->fields.motionMessageObjList;
  if ( !v7 )
    goto LABEL_21;
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
  if ( !motionMessageObjList )
    goto LABEL_21;
  motionMessageObjList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_MultiMessageDisplay(
                                                                        (BattlePerformance_o *)motionMessageObjList,
                                                                        0);
  if ( !motionMessageObjList )
    goto LABEL_21;
  if ( isDisplayNextMessage )
  {
    BattleMultiMessageDisplay__ReleaseMessage_47914304(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
    if ( motionMessageObjList )
    {
      BattlePerformance__DestroySkillCutInMessage((BattlePerformance_o *)motionMessageObjList, 0);
      return;
    }
LABEL_21:
    sub_1C7BD40(motionMessageObjList, isDisplayNextMessage);
  }
  v10 = *(_QWORD *)&motionMessageObjList->fields._size;
  if ( !v10 || !*(_BYTE *)(v10 + 21) )
    BattleMultiMessageDisplay__ReleaseMessage_47914304(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
}


void BattleInformationComponent__DestroyNonMotionMessage(BattleInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nonMotionMessageObject; // x20
  GrandQuestFolderBoardItem_o *p_nonMotionMessageObject; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF1B56 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B56 = 1;
  }
  nonMotionMessageObject = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nonMotionMessageObject, 0, 0) )
  {
    p_nonMotionMessageObject = (GrandQuestFolderBoardItem_o *)&this->fields.nonMotionMessageObject;
    klass = (UnityEngine_Object_o *)p_nonMotionMessageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(klass, 0);
    p_nonMotionMessageObject->klass = 0;
    sub_1C7BA8C(p_nonMotionMessageObject, 0, v6, v7, v8, v9, v10, v11);
  }
}


System_String_o *BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CF1B49 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17180/*"battle_message_{0}"*/);
    byte_4CF1B49 = 1;
  }
  v6 = messageType;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_17180/*"battle_message_{0}"*/, v4, 0);
}


UnityEngine_GameObject_o *BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x22
  System_String_o *v8; // x21
  Il2CppObject *Object_object__51713432; // x21

  if ( (byte_4CF1B5C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B5C = 1;
  }
  if ( !assetNames )
    goto LABEL_18;
  max_length = assetNames->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C7BD48(this);
      v8 = assetNames->m_Items[v7];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v8, 0);
      if ( !this )
        break;
      Object_object__51713432 = AssetData__GetObject_object__51713432(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__51713432,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = assetNames->max_length;
        if ( (__int64)++v7 < (int)max_length )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__51713432;
    }
LABEL_18:
    sub_1C7BD40(this, prefabName);
  }
  return 0;
}


void BattleInformationComponent__Initialize(
        BattleInformationComponent_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v25; // x1
  UnityEngine_GameObject_o *overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v35; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v38; // x20
  struct UnityEngine_GameObject_array *v39; // x21
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_Transform_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UnityEngine_GameObject_array *v48; // x8
  struct System_Boolean_array *v49; // x8
  struct System_Single_array *v50; // x8
  Il2CppObject *Object_object__51713432; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4CF1B44 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18974/*"ef_overgauge01"*/);
    sub_1C7BAE8(&StringLiteral_3088/*"Battle/Common"*/);
    sub_1C7BAE8(&StringLiteral_18981/*"ef_skillskip"*/);
    sub_1C7BAE8(&StringLiteral_19033/*"effect/ef_overkill01"*/);
    byte_4CF1B44 = 1;
  }
  this->fields.perf = inperf;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v18, v19, v20, v21, v22, v23);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0, 0) )
  {
    overRoot = this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  }
  overRoot = this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform(overRoot, 0),
        overRoot = BaseMonoBehaviour__createObject_41756748(
                     (BaseMonoBehaviour_o *)this,
                     (System_String_o *)StringLiteral_19033/*"effect/ef_overkill01"*/,
                     transform,
                     0,
                     0),
        (overObjectList = this->fields.overObjectList) == 0) )
  {
LABEL_38:
    sub_1C7BD40(overRoot, v25);
  }
  if ( !LODWORD(overObjectList->max_length) )
    goto LABEL_39;
  overObjectList->m_Items[0] = overRoot;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overObjectList->m_Items, (int32_t)overRoot, v28, v29, v30, v31, v32, v33);
  v35 = this->fields.overObjectList;
  if ( !v35 )
    goto LABEL_38;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_39;
  overRoot = v35->m_Items[0];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_38;
  if ( !LODWORD(isAlreadyOverKill->max_length) )
    goto LABEL_39;
  isAlreadyOverKill->m_Items[0] = 0;
  timeStartOverKill = this->fields.timeStartOverKill;
  if ( !timeStartOverKill )
    goto LABEL_38;
  if ( !LODWORD(timeStartOverKill->max_length) )
    goto LABEL_39;
  timeStartOverKill->m_Items[0] = 0.0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3088/*"Battle/Common"*/, 0);
  if ( !overRoot )
    goto LABEL_38;
  v38 = (AssetData_o *)overRoot;
  overRoot = (UnityEngine_GameObject_o *)AssetData__GetObject_object__51713432(
                                           (AssetData_o *)overRoot,
                                           (System_String_o *)StringLiteral_18974/*"ef_overgauge01"*/,
                                           (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v39 = this->fields.overObjectList;
  v40 = overRoot;
  v41 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0);
  overRoot = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v40, v41, 0, 0);
  if ( !v39 )
    goto LABEL_38;
  if ( LODWORD(v39->max_length) <= 1 )
    goto LABEL_39;
  v39->m_Items[1] = overRoot;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v39->m_Items[1], (int32_t)overRoot, v42, v43, v44, v45, v46, v47);
  v48 = this->fields.overObjectList;
  if ( !v48 )
    goto LABEL_38;
  if ( LODWORD(v48->max_length) <= 1 )
    goto LABEL_39;
  overRoot = v48->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  v49 = this->fields.isAlreadyOverKill;
  if ( !v49 )
    goto LABEL_38;
  if ( LODWORD(v49->max_length) <= 1 )
    goto LABEL_39;
  v49->m_Items[1] = 0;
  v50 = this->fields.timeStartOverKill;
  if ( !v50 )
    goto LABEL_38;
  if ( LODWORD(v50->max_length) <= 1 )
LABEL_39:
    sub_1C7BD48(overRoot);
  v50->m_Items[1] = 0.0;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              v38,
                              (System_String_o *)StringLiteral_18981/*"ef_skillskip"*/,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__51713432;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillSkipPrefab,
    (int32_t)Object_object__51713432,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  GameObjectExtensions__SafeSetParent_36529116(this->fields.overRoot, this->fields.fsOffsetRoot, 0);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(fieldParam, 0, 0);
  if ( ((unsigned __int8)overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (UnityEngine_GameObject_o *)this->fields.fieldParam;
      if ( overRoot )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, struct BattleFieldEnvironmentData_o *, void *))overRoot->klass[1]._1.image)(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          overRoot->klass[1]._1.gc_desc);
        return;
      }
    }
    goto LABEL_38;
  }
}


void BattleInformationComponent__InitializeEachWave(BattleInformationComponent_o *this, const MethodInfo *method)
{
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v11; // x1
  BattleFieldParamComponent_o *v12; // x0

  if ( (byte_4CF1B45 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B45 = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.infoPosData,
    (int32_t)BattleInfoPosData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0, 0) )
  {
    v12 = this->fields.fieldParam;
    if ( !v12 )
      sub_1C7BD40(0, v11);
    BattleFieldParamComponent__UpdateView(v12, v11);
  }
}


BaseBattleInfoPosData_o *BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int v4; // w20
  __int64 v5; // x20
  __int64 v6; // x0
  __int128 v7; // q0
  __int64 v8; // d1

  if ( (byte_4CF1B46 & 1) == 0 )
  {
    sub_1C7BAE8(&NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    sub_1C7BAE8(&PosCountNormalBattleInfoPosData_TypeInfo);
    sub_1C7BAE8(&PosCountSpBattleInfoPosData_TypeInfo);
    byte_4CF1B46 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0);
  if ( !this->fields.data )
    goto LABEL_15;
  v4 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0) )
  {
    v6 = sub_1C7BD34(PosCountSpBattleInfoPosData_TypeInfo);
    v7 = xmmword_CF5BE0;
    v8 = 1127153664;
    goto LABEL_13;
  }
  if ( v4 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getStageEntity(data, 0);
      if ( data )
      {
        if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0) )
          goto LABEL_10;
        v6 = sub_1C7BD34(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v7 = xmmword_CF60A0;
        v8 = 1112801280;
LABEL_13:
        v5 = v6;
        *(_OWORD *)(v6 + 24) = v7;
        *(_QWORD *)(v6 + 40) = v8;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C7BD40(data, method);
  }
LABEL_10:
  v5 = sub_1C7BD34(PosCountNormalBattleInfoPosData_TypeInfo);
  *(_DWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 24) = 0x43070000C3FA0000LL;
LABEL_14:
  System_Object___ctor((Il2CppObject *)v5, 0);
  (*(void (__fastcall **)(__int64, struct BattlePerformance_o *, _QWORD))(*(_QWORD *)v5 + 424LL))(
    v5,
    this->fields.perf,
    *(_QWORD *)(*(_QWORD *)v5 + 432LL));
  return (BaseBattleInfoPosData_o *)v5;
}


void BattleInformationComponent__OverwriteMessageDisplayTime(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  bool v6; // w0
  Il2CppObject *SkillMessageDisplayTime; // x0
  __int64 v8; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF
  float time; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CF1B53 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B53 = 1;
  }
  time = 0.0;
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( actionData )
  {
    if ( !v6 )
    {
      SkillMessageDisplayTime = (Il2CppObject *)BattleActionData__TryGetSkillMessageDisplayTime(actionData, &time, 0);
      if ( ((unsigned __int8)SkillMessageDisplayTime & 1) != 0 )
      {
        if ( !obj )
          goto LABEL_14;
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                obj,
                &component,
                (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
          return;
        SkillMessageDisplayTime = component;
        if ( !component
          || (CommonEffectComponent__SetTime((CommonEffectComponent_o *)component, time, 0.0, 0), !component) )
        {
LABEL_14:
          sub_1C7BD40(SkillMessageDisplayTime, v8);
        }
        BYTE1(component[12].monitor) = 1;
      }
    }
  }
}


void BattleInformationComponent__SerializeFieldNotNullCheck(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleInformationComponent__ShowActionMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v3; // x19
  bool isPlayerID; // w0
  const MethodInfo *v6; // x5
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0) )
    sub_1C7BD40(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0);
  v7 = BattleInformationComponent__showSkillName(
         v3,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v6);
  BattleInformationComponent__AddMotionMessageObject(v3, v7, v8);
}


void BattleInformationComponent__ShowBattleMessage(
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


UnityEngine_GameObject_o *BattleInformationComponent__ShowCommandCardMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x19
  BattleInformationComponent_o *v4; // x20
  int32_t type; // w21
  int32_t v6; // w23
  BattleInformationComponent_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  BattleInfoMessageComponent_o *v11; // x22
  System_String_o *v12; // x24
  Il2CppObject *v13; // x0
  BattleInformationComponent_o *v14; // x8
  __int64 *v15; // x8
  System_String_o *v16; // x2
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v20; // x3
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4CF1B54 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3253/*"Buster!"*/);
    sub_1C7BAE8(&StringLiteral_10985/*"Quick!"*/);
    sub_1C7BAE8(&StringLiteral_2363/*"Arts!"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&StringLiteral_6390/*"Extra!"*/);
    byte_4CF1B54 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  type = v3->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  v6 = BattleCommand__getType(type, 0);
  this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           v4->fields.playerAttackInfoPrefab,
                                           v4->fields.attackMessageRoot,
                                           0,
                                           0);
  if ( !this )
    goto LABEL_40;
  v7 = this;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  actionIndex = v3->fields.actionIndex;
  attackCount = v4->fields.attackCount;
  v11 = (BattleInfoMessageComponent_o *)this;
  if ( (int)actionIndex < 3 )
  {
    if ( !attackCount )
      goto LABEL_40;
    if ( (unsigned int)actionIndex < LODWORD(attackCount->max_length) )
    {
      actionData = (BattleActionData_o *)attackCount->m_Items[actionIndex];
      goto LABEL_14;
    }
LABEL_41:
    sub_1C7BD48(this);
  }
  if ( !attackCount )
    goto LABEL_40;
  if ( LODWORD(attackCount->max_length) <= 3 )
    goto LABEL_41;
  v12 = attackCount->m_Items[3];
  v22 = actionIndex + 1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  this = (BattleInformationComponent_o *)System_String__Format(v12, v13, 0);
  actionData = (BattleActionData_o *)this;
LABEL_14:
  if ( v6 == 3 )
    v14 = 0;
  else
    v14 = v7;
  if ( v6 == 3 )
  {
    v15 = &StringLiteral_10985/*"Quick!"*/;
    goto LABEL_22;
  }
  if ( v6 == 2 )
  {
    v16 = (System_String_o *)StringLiteral_3253/*"Buster!"*/;
    goto LABEL_28;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 4 )
      v16 = (System_String_o *)StringLiteral_6390/*"Extra!"*/;
    else
      v16 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
    v7 = v14;
    if ( !v11 )
      goto LABEL_40;
    goto LABEL_29;
  }
  v15 = &StringLiteral_2363/*"Arts!"*/;
LABEL_22:
  v16 = (System_String_o *)*v15;
  if ( !v11 )
    goto LABEL_40;
LABEL_29:
  BattleInfoMessageComponent__setText_47883840(v11, (System_String_o *)actionData, v16, v8);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_40;
  this = (BattleInformationComponent_o *)perf->fields.commandPerf;
  if ( !this )
    goto LABEL_40;
  BattleCommandCardObject = (UnityEngine_Object_o *)BattlePerformanceCommandCard__getBattleCommandCardObject(
                                                      (BattlePerformanceCommandCard_o *)this,
                                                      v3->fields.actionIndex,
                                                      0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( this )
    {
      ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0);
      BattleInfoMessageComponent__setCommandObject(
        v11,
        (UnityEngine_GameObject_o *)BattleCommandCardObject,
        ServantData,
        v20);
      if ( BattleCommandCardObject )
      {
        this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( this )
        {
          BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0);
          goto LABEL_38;
        }
      }
    }
LABEL_40:
    sub_1C7BD40(this, actionData);
  }
LABEL_38:
  if ( !v7 )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 1, 0);
  return (UnityEngine_GameObject_o *)v7;
}


UnityEngine_GameObject_o *BattleInformationComponent__ShowMotionMessage(
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
  Il2CppObject *Object_object__51713432; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4CF1B59 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&BattleEffectUtility_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17192/*"battle_states_popup"*/);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&StringLiteral_3093/*"Battle/Effect/"*/);
    byte_4CF1B59 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !motionMessage )
    goto LABEL_44;
  if ( motionMessage->fields._stringLength < 1 )
    return 0;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_44;
  size = motionMessageObjList->fields._size;
  v12 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0);
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
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actorId, 0);
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
                                                 0,
                                                 0);
        if ( this )
        {
          v16 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v17);
LABEL_28:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0);
            return (UnityEngine_GameObject_o *)v16;
          }
        }
LABEL_44:
        sub_1C7BD40(this, motionMessage);
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
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0);
  v21 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v21 = BattleEffectUtility_TypeInfo;
  }
  v22 = System_Int32__ToString((unsigned int)v21->static_fields + 24, 0);
  v23 = System_String__Concat_64176912((System_String_o *)StringLiteral_3093/*"Battle/Effect/"*/, v22, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v23, 0);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_45:
    sub_1C7BD48(this);
  v24 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_64176912(
                                           (System_String_o *)StringLiteral_17192/*"battle_states_popup"*/,
                                           (System_String_o *)v15->fields.perf,
                                           0);
  if ( !v24 )
    goto LABEL_44;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              v24,
                              (System_String_o *)this,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__51713432,
                                             v8->fields.commonMessageRoot,
                                             0,
                                             0);
    if ( !this )
      goto LABEL_44;
    v16 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
    {
      if ( this )
      {
        EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v15->fields.data, 0);
        goto LABEL_28;
      }
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  return (UnityEngine_GameObject_o *)v16;
}


void BattleInformationComponent__SwitchPopupFullScreen(
        BattleInformationComponent_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *fsOffsetRoot; // x1

  if ( isFullScreen )
    fsOffsetRoot = this->fields.fsOffsetRoot;
  else
    fsOffsetRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SafeSetParent_36529116(this->fields.overRoot, fsOffsetRoot, 0);
}


System_Collections_Generic_List_GameObject__o *BattleInformationComponent__get_MotionMessageObjList(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.motionMessageObjList;
}


// local variable allocation has failed, the output may be wrong!
void BattleInformationComponent__hideOverBase(
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
  if ( (byte_4CF1B58 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&StringLiteral_22711/*"out"*/);
    byte_4CF1B58 = 1;
  }
  isAlreadyOverKill = v4->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_30;
  if ( LODWORD(isAlreadyOverKill->max_length) <= type )
    goto LABEL_31;
  if ( !isAlreadyOverKill->m_Items[type] )
    return;
  overObjectList = v4->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_30;
  if ( LODWORD(overObjectList->max_length) <= type )
    goto LABEL_31;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this )
    goto LABEL_30;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v7 = v4->fields.overObjectList;
  if ( !v7 )
    goto LABEL_30;
  if ( LODWORD(v7->max_length) <= type )
    goto LABEL_31;
  v8 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v7->m_Items[type];
  if ( !this )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( LODWORD(overLabel->max_length) <= type )
          goto LABEL_31;
        v11 = System_String__Concat_64176912(overLabel->m_Items[type], (System_String_o *)StringLiteral_22711/*"out"*/, 0);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_67121960((SimpleAnimation_o *)v8, v11, 0);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1C7BD40(this, *(_QWORD *)&type);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  v12 = v4->fields.overLabel;
  if ( !v12 )
    goto LABEL_30;
  if ( LODWORD(v12->max_length) <= type )
    goto LABEL_31;
  v13 = System_String__Concat_64176912(v12->m_Items[type], (System_String_o *)StringLiteral_22711/*"out"*/, 0);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_71613624(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v13,
                                           0);
LABEL_26:
  v14 = v4->fields.isAlreadyOverKill;
  if ( !v14 )
    goto LABEL_30;
  if ( LODWORD(v14->max_length) <= type )
LABEL_31:
    sub_1C7BD48(this);
  v14->m_Items[type] = 0;
}


void BattleInformationComponent__hideOverGaugeMessage(BattleInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 1, v2);
}


void BattleInformationComponent__hideOverKillMessage(BattleInformationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void BattleInformationComponent__shiftOverMessage(
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
  if ( LODWORD(overObjectList->max_length) <= type )
    goto LABEL_9;
  v5 = this;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0),
        (showPositions = v5->fields.showPositions) == 0) )
  {
LABEL_8:
    sub_1C7BD40(this, *(_QWORD *)&type);
  }
  if ( LODWORD(showPositions->max_length) <= zureIndex )
LABEL_9:
    sub_1C7BD48(this);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, showPositions->m_Items[zureIndex], 0);
}


UnityEngine_GameObject_o *BattleInformationComponent__showBoostSkillName(
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

  if ( (byte_4CF1B50 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19016/*"effect/ef_boostitem01"*/);
    byte_4CF1B50 = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0;
  v7 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_19016/*"effect/ef_boostitem01"*/, 0);
  v8 = (UnityEngine_GameObject_o *)v7;
  if ( !v7 || (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v8, transform, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(Object, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !Object
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0 )
      {
        sub_1C7BD40(Component_object, v12);
      }
      v14 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v13);
      BattleInfoMessageComponent__setItemSprite(v14, imageId, 0, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1C7C0DC(v7);
  BattleInformationComponent__showSpecialName(v17, v18, v19);
  return result;
}


void BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  int32_t type; // w21
  const MethodInfo *v6; // x4
  const MethodInfo *v7; // x2
  System_String_o *motionMessage; // x1
  const MethodInfo *v9; // x3
  BattleInformationComponent_o *v10; // x21
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t v12; // w9
  int32_t skilllv; // w21
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  bool isPlayerID; // w0
  const MethodInfo *v23; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v25; // x4
  bool v26; // w1
  BattleInformationComponent_o *v27; // x0
  int32_t v28; // w3
  struct BattleSkillInfoData_o *v29; // x8
  bool v30; // w0

  v4 = this;
  if ( (byte_4CF1B52 & 1) == 0 )
  {
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&BattleCommand_TypeInfo);
    byte_4CF1B52 = 1;
  }
  if ( !actionData )
    goto LABEL_34;
  if ( actionData->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyNonMotionMessage(v4, (const MethodInfo *)actionData);
  type = actionData->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isShowCommandAction(type, 0) )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_34;
    if ( BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0) && !actionData->fields.isCounter )
    {
      v14 = BattleInformationComponent__ShowCommandCardMessage(v4, actionData, v7);
      v4->fields.nonMotionMessageObject = v14;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v4->fields.nonMotionMessageObject,
        (int32_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      goto LABEL_23;
    }
  }
  motionMessage = actionData->fields.motionMessage;
  if ( !motionMessage )
  {
    this = (BattleInformationComponent_o *)BattleActionData__IsGimmick(actionData, 0);
    v10 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_24;
    this = (BattleInformationComponent_o *)BattleActionData__isSkill(actionData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      skillInfo = actionData->fields.skillInfo;
      if ( skillInfo )
      {
        v12 = skillInfo->fields.type;
        if ( v12 == 11 || v12 == 1 )
          skilllv = skillInfo->fields.skilllv;
        else
          skilllv = 0;
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0);
          skillMessage = actionData->fields.skillMessage;
          v25 = actionData->fields.skillInfo;
          v26 = isPlayerID;
          v27 = v4;
          v28 = skilllv;
LABEL_28:
          this = (BattleInformationComponent_o *)BattleInformationComponent__showSkillName(
                                                   v27,
                                                   v26,
                                                   skillMessage,
                                                   v28,
                                                   v25,
                                                   v23);
          goto LABEL_13;
        }
      }
      goto LABEL_34;
    }
    this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(actionData, 0);
    v10 = 0;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_24;
    if ( !actionData->fields.noOperation )
    {
      v29 = actionData->fields.skillInfo;
      if ( v29 )
      {
        if ( v29->fields.itemImageId != -1 )
        {
          this = (BattleInformationComponent_o *)BattleInformationComponent__showBoostSkillName(
                                                   v4,
                                                   actionData->fields.imageId,
                                                   actionData->fields.skillMessage,
                                                   v9);
          goto LABEL_13;
        }
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          v30 = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0);
          skillMessage = actionData->fields.skillMessage;
          v25 = actionData->fields.skillInfo;
          v26 = v30;
          v27 = v4;
          v28 = 0;
          goto LABEL_28;
        }
      }
LABEL_34:
      sub_1C7BD40(this, actionData);
    }
LABEL_23:
    v10 = 0;
    goto LABEL_24;
  }
  this = (BattleInformationComponent_o *)BattleInformationComponent__ShowMotionMessage(
                                           v4,
                                           motionMessage,
                                           actionData->fields.actorId,
                                           actionData->fields._MessageType_k__BackingField,
                                           v6);
LABEL_13:
  v10 = this;
LABEL_24:
  BattleInformationComponent__OverwriteMessageDisplayTime(this, (UnityEngine_GameObject_o *)v10, actionData, v9);
  BattleInformationComponent__AddMotionMessageObject(v4, (UnityEngine_GameObject_o *)v10, v21);
}


void BattleInformationComponent__showCommonMessage_47898624(
        BattleInformationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ;
}


void BattleInformationComponent__showNoblePhantasmInfo(
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
  System_String_o *monitor; // x26
  int max_length; // w8
  System_String_o *v30; // x1
  System_String_o *v31; // x1
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  int v34; // w8
  Il2CppObject *v35; // x20
  Il2CppObject *v36; // x19
  BattleInformationComponent_c *v37; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v39; // x0
  BattleInformationComponent_c *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  int v43; // [xsp+Ch] [xbp-64h] BYREF
  int v44; // [xsp+18h] [xbp-58h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-54h] BYREF

  v45 = treasureDeviceLevel;
  if ( (byte_4CF1B48 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleInformationComponent_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_9298/*"NOBLEINFO_NP_PER"*/);
    sub_1C7BAE8(&StringLiteral_23392/*"rubyLabel"*/);
    sub_1C7BAE8(&StringLiteral_10637/*"PerLabel"*/);
    sub_1C7BAE8(&StringLiteral_8434/*"LevelLabel"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_9609/*"NpLevelBase"*/);
    sub_1C7BAE8(&StringLiteral_21593/*"mainLabel"*/);
    byte_4CF1B48 = 1;
  }
  v44 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v15 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0,
                                  0);
    if ( !Instance )
      goto LABEL_52;
    v16 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_21593/*"mainLabel"*/,
                                  0,
                                  0);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v19 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_23392/*"rubyLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    v20 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v21 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v21, (System_String_o *)StringLiteral_8434/*"LevelLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v23 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v23, (System_String_o *)StringLiteral_10637/*"PerLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    v24 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v25 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v25, (System_String_o *)StringLiteral_9609/*"NpLevelBase"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !v20 )
      goto LABEL_52;
    v26 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v20, (System_String_o *)v15[2].klass, 0);
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
        sub_1C7BD48(v27);
      v30 = overrideTd->m_Items[1];
      if ( v30 )
        UILabel__set_text((UILabel_o *)v20, v30, 0);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v16, 0);
      if ( !Instance )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    if ( !Component_object )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v45, 0);
    if ( !v22 )
      goto LABEL_52;
    if ( Instance )
      v31 = (System_String_o *)Instance;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v22, v31, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9298/*"NOBLEINFO_NP_PER"*/, 0);
    v43 = 100 * (treasureDevicePer / 100);
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
    Instance = (DataManager_o *)System_String__Format(v32, v33, 0);
    if ( !v24 || (UILabel__set_text((UILabel_o *)v24, (System_String_o *)Instance, 0), !v26) )
LABEL_52:
      sub_1C7BD40(Instance, v13);
    UnityEngine_GameObject__SetActive(v26, !isHideInfo, 0);
    if ( treasureDevicePer / 100 >= 5 )
      v34 = 5;
    else
      v34 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v34 = 1;
    v44 = v34;
    v35 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v36 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0) )
    {
      v37 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v37 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v37->static_fields->NobleInfoAnimPrefix;
      v39 = System_Int32__ToString((int32_t)&v44, 0);
      Instance = (DataManager_o *)System_String__Concat_64176912(NobleInfoAnimPrefix, v39, 0);
      if ( v35 )
      {
        SimpleAnimation__Play_67121960((SimpleAnimation_o *)v35, (System_String_o *)Instance, 0);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0) )
    {
      v40 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v40 = BattleInformationComponent_TypeInfo;
      }
      v41 = v40->static_fields->NobleInfoAnimPrefix;
      v42 = System_Int32__ToString((int32_t)&v44, 0);
      Instance = (DataManager_o *)System_String__Concat_64176912(v41, v42, 0);
      if ( !v36 )
        goto LABEL_52;
      UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)v36, (System_String_o *)Instance, 0);
    }
  }
}


void BattleInformationComponent__showOverGaugeMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_1C7BD40(this, actionData);
  if ( !LODWORD(isAlreadyOverKill->max_length) )
    sub_1C7BD48(this);
  if ( isAlreadyOverKill->m_Items[0] )
    BattleInformationComponent__shiftOverMessage(this, 0, 1, v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 1, v3);
}


void BattleInformationComponent__showOverKillMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8
  const MethodInfo *v7; // x3

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_1C7BD40(this, actionData);
  if ( LODWORD(isAlreadyOverKill->max_length) <= 1 )
    sub_1C7BD48(this);
  BattleInformationComponent__shiftOverMessage(this, 0, isAlreadyOverKill->m_Items[1], v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 0, v7);
}


void BattleInformationComponent__showOverMessageBase(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        int32_t inOverType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v6; // x20
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_Vector2_o v8; // kr00_8
  UnityEngine_GameObject_o *v9; // x21
  float v10; // s0
  UnityEngine_GameObject_o *v11; // x21
  float v12; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v14; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Object_o *v16; // x22
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v18; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v20; // s0
  struct System_Single_array *v21; // x8
  struct System_String_array *v22; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v24; // x8
  struct System_Boolean_array *v25; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v28; // x8

  v6 = this;
  if ( (byte_4CF1B57 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20908/*"in"*/);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&StringLiteral_19636/*"flash"*/);
    byte_4CF1B57 = 1;
  }
  if ( !actionData )
    goto LABEL_72;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_72;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_72;
    v8 = BattlePerformance__GetExBattleUiOverKillPosAdjust((BattlePerformance_o *)this, 0);
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_72;
    v9 = v6->fields.overRoot;
    v10 = ((float (__fastcall *)(BattleInformationComponent_o *, const char *))this->klass[1]._1.name)(
            this,
            this->klass[1]._1.namespaze);
    GameObjectExtensions__SetLocalPositionX(v9, v8.fields.x + v10, 0);
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_72;
    v11 = v6->fields.overRoot;
    v12 = ((float (__fastcall *)(BattleInformationComponent_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
            this,
            *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
    GameObjectExtensions__SetLocalPositionY(v11, v8.fields.y + v12, 0);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_72;
  if ( LODWORD(overObjectList->max_length) <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v14 = v6->fields.overObjectList;
  if ( !v14 )
    goto LABEL_72;
  if ( LODWORD(v14->max_length) <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)v14->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v15 = v6->fields.overObjectList) == 0) )
  {
LABEL_72:
    sub_1C7BD40(this, actionData);
  }
  if ( LODWORD(v15->max_length) <= inOverType )
    goto LABEL_73;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v15->m_Items[inOverType];
  if ( !this )
    goto LABEL_72;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = (UnityEngine_Behaviour_o *)v16;
    if ( !v16 )
      goto LABEL_72;
    goto LABEL_31;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_72;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v18, 0, 0);
    UnityEngine_Behaviour__set_enabled(v18, 1, 0);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_72;
  if ( LODWORD(isAlreadyOverKill->max_length) <= inOverType )
    goto LABEL_73;
  if ( !isAlreadyOverKill->m_Items[inOverType] )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_72;
      if ( LODWORD(overLabel->max_length) <= inOverType )
        goto LABEL_73;
      this = (BattleInformationComponent_o *)System_String__Concat_64176912(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20908/*"in"*/,
                                               0);
      if ( !v16 )
        goto LABEL_72;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_67121960(
                                               (SimpleAnimation_o *)v16,
                                               (System_String_o *)this,
                                               0);
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v6->fields.overLabel;
        if ( !v24 )
          goto LABEL_72;
        if ( LODWORD(v24->max_length) <= inOverType )
          goto LABEL_73;
        this = (BattleInformationComponent_o *)System_String__Concat_64176912(
                                                 v24->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20908/*"in"*/,
                                                 0);
        if ( !Component_object )
          goto LABEL_72;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_71613624(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0);
      }
    }
    v25 = v6->fields.isAlreadyOverKill;
    if ( !v25 )
      goto LABEL_72;
    if ( LODWORD(v25->max_length) > inOverType )
    {
      v25->m_Items[inOverType] = 1;
      timeStartOverKill = v6->fields.timeStartOverKill;
      time = UnityEngine_Time__get_time(0);
      if ( !timeStartOverKill )
        goto LABEL_72;
      if ( LODWORD(timeStartOverKill->max_length) > inOverType )
      {
        timeStartOverKill->m_Items[inOverType] = time;
        return;
      }
    }
LABEL_73:
    sub_1C7BD48(this);
  }
  v20 = UnityEngine_Time__get_time(0);
  v21 = v6->fields.timeStartOverKill;
  if ( !v21 )
    goto LABEL_72;
  if ( LODWORD(v21->max_length) <= inOverType )
    goto LABEL_73;
  if ( (float)(v20 - v21->m_Items[inOverType]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v22 = v6->fields.overLabel;
    if ( !v22 )
      goto LABEL_72;
    if ( LODWORD(v22->max_length) > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_64176912(
                                               v22->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19636/*"flash"*/,
                                               0);
      if ( !v16 )
        goto LABEL_72;
      SimpleAnimation__Play_67121960((SimpleAnimation_o *)v16, (System_String_o *)this, 0);
      return;
    }
    goto LABEL_73;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v28 = v6->fields.overLabel;
  if ( !v28 )
    goto LABEL_72;
  if ( LODWORD(v28->max_length) <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)System_String__Concat_64176912(
                                           v28->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19636/*"flash"*/,
                                           0);
  if ( !Component_object )
    goto LABEL_72;
  UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0);
}


UnityEngine_GameObject_o *BattleInformationComponent__showSkillName(
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

  if ( (byte_4CF1B4F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1B4F = 1;
  }
  entity = 0;
  if ( !message || message->fields._stringLength < 1 )
    return 0;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillMaster___);
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                            skillInfo,
                            skillInfo->klass->vtable._5_get_skillId.method);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v12,
           (const MethodInfo_342E348 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v12 = entity;
      if ( !entity )
        goto LABEL_34;
      v14 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0);
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
      skillInfo = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)skillInfo, 0, 0) )
  {
    v16 = 136;
    if ( isPlayer )
      v16 = 128;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v16),
                                           this->fields.skillInfoRoot,
                                           0,
                                           0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)skillInfo,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
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
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_34:
    sub_1C7BD40(v12, v13);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void BattleInformationComponent__showSpecialName(
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

  if ( (byte_4CF1B51 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1B51 = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v8 = Entity;
        Instance = (DataManager_o *)this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0);
          v10 = 136;
          if ( isPlayerID )
            v10 = 128;
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
                                        this->fields.skillInfoRoot,
                                        0,
                                        0);
          if ( Instance )
          {
            v11 = (UnityEngine_GameObject_o *)Instance;
            Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v12 = (BattleInfoMessageComponent_o *)Instance;
              saveDataMapList = (UnityEngine_Object_o *)Instance->fields.saveDataMapList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(saveDataMapList, 0, 0) )
              {
                Instance = (DataManager_o *)v12->fields.skillSprite;
                if ( !Instance )
                  goto LABEL_27;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0);
                if ( !Instance )
                  goto LABEL_27;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              }
              Instance = (DataManager_o *)this->fields.data;
              if ( Instance )
              {
                monitor = (System_String_o *)v8[1].monitor;
                Instance = (DataManager_o *)BattleData__getServantData(
                                              (BattleData_o *)Instance,
                                              actionData->fields.actorId,
                                              0);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0);
                  if ( OverrideTDName )
                    v16 = OverrideTDName;
                  else
                    v16 = monitor;
                  if ( System_String__IsNullOrEmpty(v16, 0) )
                  {
                    UnityEngine_GameObject__SetActive(v11, 0, 0);
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v12, v16, v17);
                    UnityEngine_GameObject__SetActive(v11, 1, 0);
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
    sub_1C7BD40(Instance, v6);
  }
}


void BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  int32_t TotalDamage; // w0
  int32_t v6; // w19
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v8; // x20
  __int64 v9; // x22
  UILabel_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4CF1B47 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21440/*"line1"*/);
    sub_1C7BAE8(&StringLiteral_14617/*"Total {0:#,0}"*/);
    this = (BattleInformationComponent_o *)sub_1C7BAE8(&StringLiteral_21441/*"line2"*/);
    byte_4CF1B47 = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0);
  if ( TotalDamage >= 1 )
  {
    v6 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0,
                                             0);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v8 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= m_CancellationTokenSource )
            sub_1C7BD48(this);
          v10 = (UILabel_o *)*((_QWORD *)&v8->fields.perf + v9);
          if ( !v10 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v8->fields.perf + v9),
                                                   0);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          if ( !this )
            break;
          if ( System_String__Equals_64212232((System_String_o *)this, (System_String_o *)StringLiteral_21440/*"line1"*/, 0) )
          {
            v13 = v6;
            v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
            v12 = System_String__Format((System_String_o *)StringLiteral_14617/*"Total {0:#,0}"*/, v11, 0);
            UILabel__set_text(v10, v12, 0);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v10,
                                                     0);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_64212232(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21441/*"line2"*/,
                                                     0);
          }
          m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
          if ( (int)++v9 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1C7BD40(this, actionData);
      }
    }
  }
}