void BattleInformationComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593BD4A & 1) == 0 )
  {
    sub_21FFC50(&BattleInformationComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_9893/*"NobleLevel"*/);
    byte_593BD4A = 1;
  }
  v7 = StringLiteral_9893/*"NobleLevel"*/;
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9893/*"NobleLevel"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleInformationComponent_TypeInfo->static_fields,
    v7,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x20
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UnityEngine_GameObject_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Boolean_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Single_array *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x20
  int v61; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v64; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  __int64 v77; // x20
  int32_t v78; // w1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  int32_t v85; // w1
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  int32_t v92; // w1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int32_t v99; // w1
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7

  if ( (byte_593BD49 & 1) == 0 )
  {
    sub_21FFC50(&BaseBattleInfoPosData_TypeInfo);
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    sub_21FFC50(&StringLiteral_26550/*"{0}th Attack"*/);
    sub_21FFC50(&StringLiteral_1478/*"3rd Attack"*/);
    sub_21FFC50(&StringLiteral_23614/*"overkill_"*/);
    sub_21FFC50(&StringLiteral_1392/*"1st Attack"*/);
    sub_21FFC50(&StringLiteral_1452/*"2nd Attack"*/);
    sub_21FFC50(&StringLiteral_23613/*"overgauge_"*/);
    byte_593BD49 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.infoPosData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = sub_21FFD10(string___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_18;
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24)
    || (v19 = StringLiteral_23614/*"overkill_"*/,
        *(_QWORD *)(v10 + 32) = StringLiteral_23614/*"overkill_"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17),
        (*(_DWORD *)(v18 + 24) & 0xFFFFFFFE) == 0) )
  {
LABEL_17:
    sub_21FFED4(v10);
  }
  v26 = StringLiteral_23613/*"overgauge_"*/;
  *(_QWORD *)(v18 + 40) = StringLiteral_23613/*"overgauge_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25);
  this->fields.overLabel = (struct System_String_array *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.overLabel, v18, v27, v28, v29, v30, v31, v32);
  v33 = (struct UnityEngine_GameObject_array *)sub_21FFD10(UnityEngine_GameObject___TypeInfo, 2);
  this->fields.overObjectList = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overObjectList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct System_Boolean_array *)sub_21FFD10(bool___TypeInfo, 2);
  this->fields.isAlreadyOverKill = v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isAlreadyOverKill,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (struct System_Single_array *)sub_21FFD10(float___TypeInfo, 2);
  this->fields.timeStartOverKill = v47;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.timeStartOverKill,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v10 = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 2);
  v60 = v10;
  if ( !byte_5931940 )
  {
    v10 = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v60 )
LABEL_18:
    sub_21FFECC(v10, v11);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.showPositions, v60, v54, v55, v56, v57, v58, v59);
  v64 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v64;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.motionMessageObjList,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v10 = sub_21FFD10(string___TypeInfo, 4);
  if ( !v10 )
    goto LABEL_18;
  v77 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_17;
  v78 = StringLiteral_1392/*"1st Attack"*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_1392/*"1st Attack"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 32), v78, v71, v72, v73, v74, v75, v76);
  if ( (*(_DWORD *)(v77 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  v85 = StringLiteral_1452/*"2nd Attack"*/;
  *(_QWORD *)(v77 + 40) = StringLiteral_1452/*"2nd Attack"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 40), v85, v79, v80, v81, v82, v83, v84);
  if ( *(_DWORD *)(v77 + 24) <= 2u )
    goto LABEL_17;
  v92 = StringLiteral_1478/*"3rd Attack"*/;
  *(_QWORD *)(v77 + 48) = StringLiteral_1478/*"3rd Attack"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 48), v92, v86, v87, v88, v89, v90, v91);
  if ( (*(_DWORD *)(v77 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_17;
  v99 = StringLiteral_26550/*"{0}th Attack"*/;
  *(_QWORD *)(v77 + 56) = StringLiteral_26550/*"{0}th Attack"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 56), v99, v93, v94, v95, v96, v97, v98);
  this->fields.attackCount = (struct System_String_array *)v77;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.attackCount, v77, v100, v101, v102, v103, v104, v105);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleInformationComponent__AddMotionMessageObject(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  bool v5; // w0
  const MethodInfo *v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *motionMessageObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  Il2CppClass **v19; // x0

  if ( (byte_593BD44 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD44 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  BattleInformationComponent__DestroyDisplayingMessage(this, v5, v6);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v7 )
  {
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
    if ( !motionMessageObjList
      || (items = motionMessageObjList->fields._items,
          v17 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++motionMessageObjList->fields._version,
          !items) )
    {
      sub_21FFECC(v7, v8);
    }
    size = motionMessageObjList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        motionMessageObjList,
        (Il2CppObject *)obj,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      motionMessageObjList->fields._size = size + 1;
      v19[4] = (Il2CppClass *)obj;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)obj, v9, v10, v11, v12, v13, v14);
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
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_593BD45 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD45 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v11 = UnityEngine_Object__op_Inequality(BattleMessageObject, 0, 0);
    if ( v11 )
    {
      if ( !BattleMessageObject )
        sub_21FFECC(v11, v12);
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
  __int64 v9; // x1
  __int64 v10; // x22
  void *EffectAssetName; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_String_o *ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v30; // x4

  if ( (byte_593BD35 & 1) == 0 )
  {
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    this = (BattleInformationComponent_o *)sub_21FFC50(&string___TypeInfo);
    byte_593BD35 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v10 = sub_21FFD10(string___TypeInfo, 2);
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v9);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0);
  if ( !v10 )
    sub_21FFECC(EffectAssetName, v12);
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v10 + 32) = EffectAssetName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)EffectAssetName, v13, v14, v15, v16, v17, v18);
  EffectAssetName = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v19);
  if ( (*(_DWORD *)(v10 + 24) & 0xFFFFFFFE) == 0 )
LABEL_11:
    sub_21FFED4(EffectAssetName);
  ASSET_BATTLE_COMMON = BattleDataDefine_TypeInfo->static_fields->ASSET_BATTLE_COMMON;
  *(_QWORD *)(v10 + 40) = ASSET_BATTLE_COMMON;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v10 + 40),
    (int32_t)ASSET_BATTLE_COMMON,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v27,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v10,
                                                   v28);
  return BattleInformationComponent__CreateBattleMessageObject_54427596(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v30);
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateBattleMessageObject_54427596(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x22
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v13; // x2

  if ( (byte_593BD36 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD36 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, messages);
  v9 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v10 = UnityEngine_Object__Instantiate_object__59506996(
            (Il2CppObject *)msgPrefab,
            parentTransform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    if ( !v10 )
      goto LABEL_13;
    v9 = (UnityEngine_GameObject_o *)v10;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v10 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          v13);
        return v9;
      }
LABEL_13:
      sub_21FFECC(v10, v11);
    }
  }
  return v9;
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleDataDefine_c *v21; // x8
  BattleLogic_o *v22; // x22
  struct System_String_o *ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *v28; // x19

  if ( (byte_593BD34 & 1) == 0 )
  {
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___);
    sub_21FFC50(&string___TypeInfo);
    byte_593BD34 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
    v10 = (BattleInformationComponent_o *)sub_21FFD10(string___TypeInfo, 0);
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
  logic = (BattleLogic_o *)sub_21FFD10(string___TypeInfo, 1);
  v21 = BattleDataDefine_TypeInfo;
  v22 = logic;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v9);
    v21 = BattleDataDefine_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_15;
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
    sub_21FFED4(logic);
  ASSET_BATTLE_COMMON = v21->static_fields->ASSET_BATTLE_COMMON;
  v22->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v22->fields.fsm,
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
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_54427596(
                             TargetPrefab,
                             v13,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v27);
  if ( !logic
    || (v28 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0) )
  {
LABEL_15:
    sub_21FFECC(logic, v9);
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
    sub_21FFECC(0, v6);
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
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Component_object; // x23
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_593BD37 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD37 = 1;
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
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Object,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    Object = (UnityEngine_GameObject_o *)this->fields.logic;
    if ( Object )
    {
      Object = (UnityEngine_GameObject_o *)BattleLogic__get_ParseBattleMsg((BattleLogic_o *)Object, 0);
      if ( Object )
      {
        Object = (UnityEngine_GameObject_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)Object, message, 0);
        if ( Component_object )
        {
          BattleConcatLabelMessageComponent__SetTexts(
            (BattleConcatLabelMessageComponent_o *)Component_object,
            (System_String_array *)Object,
            v15);
          if ( !showSkillSprite )
            BattleConcatLabelSkillNameComponent__SetSkillSpriteActive(
              (BattleConcatLabelSkillNameComponent_o *)Component_object,
              0,
              v16);
          return v12;
        }
      }
    }
LABEL_15:
    sub_21FFECC(Object, v11);
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
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *skillInfoEnemyPrefab; // x1
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  UnityEngine_GameObject_o *DefaultBattleMessageObject; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Component_object; // x19
  const MethodInfo *v20; // x2
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v22 = skillLevel;
  if ( (byte_593BD38 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2995/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_593BD38 = 1;
  }
  v11 = 0;
  if ( overWriteSkillInfoId > 1 )
  {
    if ( overWriteSkillInfoId != 2 )
    {
      if ( overWriteSkillInfoId != 3 )
        goto LABEL_18;
      if ( skillLevel >= 1 && isPlayer )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&overWriteSkillInfoId);
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_SKILL_NAME_LEVEL"*/, 0);
        v14 = (Il2CppObject *)System_Int32__ToString((int32_t)&v22, 0);
        message = System_String__Format_75484576(v13, (Il2CppObject *)message, v14, 0);
      }
      DefaultBattleMessageObject = BattleInformationComponent__CreateDefaultBattleMessageObject(
                                     this,
                                     message,
                                     this->fields.skillInfoRoot,
                                     2.0,
                                     (const MethodInfo *)isPlayer);
      goto LABEL_17;
    }
    skillInfoEnemyPrefab = this->fields.skillInfoEnemyPrefab;
LABEL_16:
    DefaultBattleMessageObject = BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   skillInfoEnemyPrefab,
                                   this->fields.skillInfoRoot,
                                   0,
                                   0);
LABEL_17:
    v11 = DefaultBattleMessageObject;
    goto LABEL_18;
  }
  if ( !overWriteSkillInfoId )
    return v11;
  if ( overWriteSkillInfoId == 1 )
  {
    skillInfoEnemyPrefab = this->fields.skillInfoPrefab;
    goto LABEL_16;
  }
LABEL_18:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&overWriteSkillInfoId);
  v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( v16 )
  {
    if ( !v11 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v11,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v16 )
    {
      if ( Component_object )
      {
        BattleConcatLabelSkillNameComponent__SetSkillSpriteActive(
          (BattleConcatLabelSkillNameComponent_o *)Component_object,
          0,
          v20);
        return v11;
      }
LABEL_28:
      sub_21FFECC(v16, v17);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593BD47 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD47 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v23.fields.x = v6.fields.x
                 + ((float (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.image)(
                     perf,
                     perf->klass[1]._1.gc_desc);
    v23.fields.y = v6.fields.y + v8;
    v23.fields.z = v9 + 0.0;
    GameObjectExtensions__SetLocalPosition(v7, v23, 0);
    BattleInformationComponent__DeleteSkillSkip(this, v10);
    perf = (BattlePerformance_o *)this->fields.skillSkipRoot;
    if ( !perf )
      goto LABEL_15;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0, 0);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_skillSkipObj, (int32_t)Object, v15, v16, v17, v18, v19, v20);
    v22 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
    {
      perf = (BattlePerformance_o *)*p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, 1, 0);
        return;
      }
LABEL_15:
      sub_21FFECC(perf, v4);
    }
  }
}


void BattleInformationComponent__DeleteSkillSkip(BattleInformationComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593BD48 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD48 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (MissionNaviTransitionBoardItem_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83246496(klass, 0);
    p_skillSkipObj->klass = 0;
    sub_21FFBF4(p_skillSkipObj, 0, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        bool isDisplayNextMessage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_GameObject__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  __int64 v11; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593BD3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD3F = 1;
  }
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
  memset(&v13, 0, sizeof(v13));
  if ( !motionMessageObjList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    motionMessageObjList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v8 = this->fields.motionMessageObjList;
  if ( !v8 )
    goto LABEL_21;
  size = v8->fields._size;
  v10 = v8->fields._version + 1;
  v8->fields._size = 0;
  v8->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
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
    BattleMultiMessageDisplay__ReleaseMessage_54451968(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
    if ( motionMessageObjList )
    {
      BattlePerformance__DestroySkillCutInMessage((BattlePerformance_o *)motionMessageObjList, 0);
      return;
    }
LABEL_21:
    sub_21FFECC(motionMessageObjList, isDisplayNextMessage);
  }
  v11 = *(_QWORD *)&motionMessageObjList->fields._size;
  if ( !v11 || !*(_BYTE *)(v11 + 21) )
    BattleMultiMessageDisplay__ReleaseMessage_54451968(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
}


void BattleInformationComponent__DestroyNonMotionMessage(BattleInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nonMotionMessageObject; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593BD40 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD40 = 1;
  }
  nonMotionMessageObject = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nonMotionMessageObject, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83246496(v5, 0);
    this->fields.nonMotionMessageObject = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.nonMotionMessageObject, 0, v6, v7, v8, v9, v10, v11);
  }
}


System_String_o *BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593BD33 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17793/*"battle_message_{0}"*/);
    byte_593BD33 = 1;
  }
  v6 = messageType;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v6);
  return System_String__Format((System_String_o *)StringLiteral_17793/*"battle_message_{0}"*/, v4, 0);
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
  __int64 v9; // x1
  Il2CppObject *Object_object__58323140; // x21

  if ( (byte_593BD46 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    this = (BattleInformationComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD46 = 1;
  }
  if ( !assetNames )
    goto LABEL_17;
  max_length = assetNames->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_21FFED4(this);
      v8 = assetNames->m_Items[v7];
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, prefabName);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v8, 0);
      if ( !this )
        break;
      Object_object__58323140 = AssetData__GetObject_object__58323140(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__58323140,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = assetNames->max_length;
        if ( (__int64)++v7 < (int)max_length )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__58323140;
    }
LABEL_17:
    sub_21FFECC(this, prefabName);
  }
  return 0;
}


System_String_o *BattleInformationComponent__GetTreasureDeviceUseMessageLabel(
        BattleInformationComponent_o *this,
        TreasureDvcEntity_o *treasureDvcEnt,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v5; // x22
  System_String_o *TreasureDeviceUseMessageLabel; // x20
  BattleServantData_o *ServantData; // x0

  if ( !treasureDvcEnt )
    goto LABEL_10;
  v5 = this;
  TreasureDeviceUseMessageLabel = TreasureDvcEntity__GetTreasureDeviceUseMessageLabel(treasureDvcEnt, 0);
  if ( !System_String__IsNullOrEmpty(TreasureDeviceUseMessageLabel, 0) )
    return TreasureDeviceUseMessageLabel;
  this = (BattleInformationComponent_o *)v5->fields.data;
  if ( !this )
LABEL_10:
    sub_21FFECC(this, treasureDvcEnt);
  ServantData = BattleData__getServantData((BattleData_o *)this, actorId, 0);
  if ( ServantData )
    TreasureDeviceUseMessageLabel = BattleServantData__getOverrideTDName(ServantData, 0);
  else
    TreasureDeviceUseMessageLabel = 0;
  if ( System_String__IsNullOrEmpty(TreasureDeviceUseMessageLabel, 0) )
    return treasureDvcEnt->fields.name;
  return TreasureDeviceUseMessageLabel;
}


void BattleInformationComponent__Initialize(
        BattleInformationComponent_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v26; // x1
  UnityEngine_GameObject_o *overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v36; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x9
  struct System_Single_array *timeStartOverKill; // x8
  AssetManager_c *v39; // x0
  int v40; // w9
  AssetData_o *v41; // x20
  UnityEngine_GameObject_o *v42; // x22
  struct UnityEngine_GameObject_array *v43; // x21
  UnityEngine_Transform_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct UnityEngine_GameObject_array *v51; // x8
  struct System_Boolean_array *v52; // x9
  struct System_Single_array *v53; // x8
  const MethodInfo_379F0C4 *v54; // x2
  Il2CppObject *Object_object__58323140; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x1
  UnityEngine_Object_o *fieldParam; // x21
  struct BattleData_o *data; // x8
  __int64 v65; // x1
  Il2CppObject *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  Il2CppObject *v74; // x20
  __int64 v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  UnityEngine_Object_o *fsOffsetRoot; // x20
  __int64 v84; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_593BD2E & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13413/*"SkillInfoMessagePrefab"*/);
    sub_21FFC50(&StringLiteral_13412/*"SkillInfoEnemyPrefab"*/);
    sub_21FFC50(&StringLiteral_19675/*"ef_overgauge01"*/);
    sub_21FFC50(&StringLiteral_3204/*"Battle/Common"*/);
    sub_21FFC50(&StringLiteral_19682/*"ef_skillskip"*/);
    sub_21FFC50(&StringLiteral_19734/*"effect/ef_overkill01"*/);
    byte_593BD2E = 1;
  }
  this->fields.perf = inperf;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (System_String_o *)indata,
    (System_String_o *)inlogic,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v18, v19, v20, v21, v22, v23);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0, 0) )
  {
    overRoot = this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  }
  overRoot = this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform(overRoot, 0),
        overRoot = BaseMonoBehaviour__createObject_48121252(
                     (BaseMonoBehaviour_o *)this,
                     (System_String_o *)StringLiteral_19734/*"effect/ef_overkill01"*/,
                     transform,
                     0,
                     0),
        (overObjectList = this->fields.overObjectList) == 0) )
  {
LABEL_58:
    sub_21FFECC(overRoot, v26);
  }
  if ( !LODWORD(overObjectList->max_length) )
    goto LABEL_59;
  overObjectList->m_Items[0] = overRoot;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)overObjectList->m_Items,
    (int32_t)overRoot,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v36 = this->fields.overObjectList;
  if ( !v36 )
    goto LABEL_58;
  if ( !LODWORD(v36->max_length) )
    goto LABEL_59;
  overRoot = v36->m_Items[0];
  if ( !overRoot )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_58;
  if ( !LODWORD(isAlreadyOverKill->max_length) )
    goto LABEL_59;
  timeStartOverKill = this->fields.timeStartOverKill;
  isAlreadyOverKill->m_Items[0] = 0;
  if ( !timeStartOverKill )
    goto LABEL_58;
  if ( !LODWORD(timeStartOverKill->max_length) )
    goto LABEL_59;
  v39 = AssetManager_TypeInfo;
  v40 = *(&AssetManager_TypeInfo->_2.cctor_finished + 1);
  timeStartOverKill->m_Items[0] = 0.0;
  if ( !v40 )
    j_il2cpp_runtime_class_init_0(v39, v26);
  overRoot = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3204/*"Battle/Common"*/, 0);
  if ( !overRoot )
    goto LABEL_58;
  v41 = (AssetData_o *)overRoot;
  overRoot = (UnityEngine_GameObject_o *)AssetData__GetObject_object__58323140(
                                           (AssetData_o *)overRoot,
                                           (System_String_o *)StringLiteral_19675/*"ef_overgauge01"*/,
                                           (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !this->fields.overRoot )
    goto LABEL_58;
  v42 = overRoot;
  v43 = this->fields.overObjectList;
  v44 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0);
  overRoot = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v42, v44, 0, 0);
  if ( !v43 )
    goto LABEL_58;
  if ( (v43->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_59;
  v43->m_Items[1] = overRoot;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->m_Items[1], (int32_t)overRoot, v45, v46, v47, v48, v49, v50);
  v51 = this->fields.overObjectList;
  if ( !v51 )
    goto LABEL_58;
  if ( (v51->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_59;
  overRoot = v51->m_Items[1];
  if ( !overRoot )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  v52 = this->fields.isAlreadyOverKill;
  if ( !v52 )
    goto LABEL_58;
  if ( (v52->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_59;
  v53 = this->fields.timeStartOverKill;
  v52->m_Items[1] = 0;
  if ( !v53 )
    goto LABEL_58;
  if ( (v53->max_length & 0xFFFFFFFE) == 0 )
LABEL_59:
    sub_21FFED4(overRoot);
  v54 = (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112;
  v53->m_Items[1] = 0.0;
  Object_object__58323140 = AssetData__GetObject_object__58323140(v41, (System_String_o *)StringLiteral_19682/*"ef_skillskip"*/, v54);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__58323140;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillSkipPrefab,
    (int32_t)Object_object__58323140,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  GameObjectExtensions__SafeSetParent_42881912(this->fields.overRoot, this->fields.fsOffsetRoot, 0);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  overRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(fieldParam, 0, 0);
  if ( ((unsigned __int8)overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_58;
    overRoot = (UnityEngine_GameObject_o *)this->fields.fieldParam;
    if ( !overRoot )
      goto LABEL_58;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, struct BattleFieldEnvironmentData_o *, void *))overRoot->klass[1]._1.image)(
      overRoot,
      data->fields._FieldEnvData_k__BackingField,
      overRoot->klass[1]._1.gc_desc);
  }
  v66 = AssetData__GetObject_object__58323140(
          v41,
          (System_String_o *)StringLiteral_13413/*"SkillInfoMessagePrefab"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v66, 0, 0) )
  {
    this->fields.skillInfoPrefab = (struct UnityEngine_GameObject_o *)v66;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfoPrefab,
      (int32_t)v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v74 = AssetData__GetObject_object__58323140(
          v41,
          (System_String_o *)StringLiteral_13412/*"SkillInfoEnemyPrefab"*/,
          (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v74, 0, 0) )
  {
    this->fields.skillInfoEnemyPrefab = (struct UnityEngine_GameObject_o *)v74;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfoEnemyPrefab,
      (int32_t)v74,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v75);
  if ( FSUtility__IsCalcNotch(2, 0) )
  {
    fsOffsetRoot = (UnityEngine_Object_o *)this->fields.fsOffsetRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v82);
    if ( UnityEngine_Object__op_Inequality(0, fsOffsetRoot, 0) )
    {
      overRoot = this->fields.fsOffsetRoot;
      if ( !overRoot )
        goto LABEL_58;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           overRoot,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84);
      overRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               0,
                                               (UnityEngine_Object_o *)Component_object,
                                               0);
      if ( ((unsigned __int8)overRoot & 1) != 0 )
      {
        if ( Component_object )
        {
          HIDWORD(Component_object[6].klass) = 1112014848;
          FSOffset__RestoreDefaults((FSOffset_o *)Component_object, 0);
          FSOffset__UpdateOffset((FSOffset_o *)Component_object, 0);
          return;
        }
        goto LABEL_58;
      }
    }
  }
}


void BattleInformationComponent__InitializeEachWave(BattleInformationComponent_o *this, const MethodInfo *method)
{
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v12; // x1
  BattleFieldParamComponent_o *v13; // x0

  if ( (byte_593BD2F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD2F = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.infoPosData,
    (int32_t)BattleInfoPosData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0, 0) )
  {
    v13 = this->fields.fieldParam;
    if ( !v13 )
      sub_21FFECC(0, v12);
    BattleFieldParamComponent__UpdateView(v13, v12);
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

  if ( (byte_593BD30 & 1) == 0 )
  {
    sub_21FFC50(&NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    sub_21FFC50(&PosCountNormalBattleInfoPosData_TypeInfo);
    sub_21FFC50(&PosCountSpBattleInfoPosData_TypeInfo);
    byte_593BD30 = 1;
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
    v6 = sub_21FFEBC(PosCountSpBattleInfoPosData_TypeInfo);
    v5 = v6;
    v7 = xmmword_E943A0;
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
        v6 = sub_21FFEBC(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v5 = v6;
        v7 = xmmword_E94B30;
        v8 = 1112801280;
LABEL_13:
        *(_OWORD *)(v6 + 24) = v7;
        *(_QWORD *)(v6 + 40) = v8;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_21FFECC(data, method);
  }
LABEL_10:
  v5 = sub_21FFEBC(PosCountNormalBattleInfoPosData_TypeInfo);
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

  if ( (byte_593BD3D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BD3D = 1;
  }
  time = 0.0;
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
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
                (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
          return;
        SkillMessageDisplayTime = component;
        if ( !component
          || (CommonEffectComponent__SetTime((CommonEffectComponent_o *)component, time, 0.0, 0), !component) )
        {
LABEL_14:
          sub_21FFECC(SkillMessageDisplayTime, v8);
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
    sub_21FFECC(this, actionData);
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
  System_String_o **v14; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v16; // x1
  UnityEngine_GameObject_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v19; // x3
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_593BD3E & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3375/*"Buster!"*/);
    sub_21FFC50(&StringLiteral_11399/*"Quick!"*/);
    sub_21FFC50(&StringLiteral_2470/*"Arts!"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (BattleInformationComponent_o *)sub_21FFC50(&StringLiteral_6638/*"Extra!"*/);
    byte_593BD3E = 1;
  }
  if ( !v3 )
    goto LABEL_33;
  type = v3->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, actionData);
  v6 = BattleCommand__getType(type, 0);
  this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           v4->fields.playerAttackInfoPrefab,
                                           v4->fields.attackMessageRoot,
                                           0,
                                           0);
  if ( !this )
    goto LABEL_33;
  v7 = this;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  actionIndex = v3->fields.actionIndex;
  attackCount = v4->fields.attackCount;
  v11 = (BattleInfoMessageComponent_o *)this;
  if ( (int)actionIndex < 3 )
  {
    if ( !attackCount )
      goto LABEL_33;
    if ( (unsigned int)actionIndex < LODWORD(attackCount->max_length) )
    {
      actionData = (BattleActionData_o *)attackCount->m_Items[actionIndex];
      goto LABEL_14;
    }
LABEL_34:
    sub_21FFED4(this);
  }
  if ( !attackCount )
    goto LABEL_33;
  if ( (attackCount->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_34;
  v12 = attackCount->m_Items[3];
  v21 = actionIndex + 1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21);
  this = (BattleInformationComponent_o *)System_String__Format(v12, v13, 0);
  actionData = (BattleActionData_o *)this;
LABEL_14:
  switch ( v6 )
  {
    case 1:
      v14 = (System_String_o **)&StringLiteral_2470/*"Arts!"*/;
      break;
    case 2:
      v14 = (System_String_o **)&StringLiteral_3375/*"Buster!"*/;
      break;
    case 3:
      v14 = (System_String_o **)&StringLiteral_11399/*"Quick!"*/;
      break;
    default:
      v14 = (System_String_o **)&StringLiteral_1/*""*/;
      if ( v6 == 4 )
        v14 = (System_String_o **)&StringLiteral_6638/*"Extra!"*/;
      break;
  }
  if ( !v11 )
    goto LABEL_33;
  BattleInfoMessageComponent__setText_54421408(v11, (System_String_o *)actionData, *v14, v8);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_33;
  this = (BattleInformationComponent_o *)perf->fields.commandPerf;
  if ( !this )
    goto LABEL_33;
  BattleCommandCardObject = BattlePerformanceCommandCard__getBattleCommandCardObject(
                              (BattlePerformanceCommandCard_o *)this,
                              v3->fields.actionIndex,
                              0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)BattleCommandCardObject, 0, 0) )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( this )
    {
      ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0);
      BattleInfoMessageComponent__setCommandObject(v11, BattleCommandCardObject, ServantData, v19);
      if ( BattleCommandCardObject )
      {
        this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 BattleCommandCardObject,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( this )
        {
          BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0);
          goto LABEL_32;
        }
      }
    }
LABEL_33:
    sub_21FFECC(this, actionData);
  }
LABEL_32:
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
  __int64 v9; // x1
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x8
  int32_t size; // w2
  int v13; // w9
  bool HasRubyFormat; // w24
  const MethodInfo *v15; // x3
  BattleInformationComponent_o *v16; // x23
  BattleInformationComponent_o *v17; // x21
  const MethodInfo *v18; // x2
  bool isPlayerID; // w0
  const MethodInfo *v20; // x4
  __int64 v22; // x1
  BattleEffectUtility_c *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  AssetData_o *v27; // x20
  __int64 v28; // x1
  Il2CppObject *Object_object__58323140; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_593BD43 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_17805/*"battle_states_popup"*/);
    this = (BattleInformationComponent_o *)sub_21FFC50(&StringLiteral_3209/*"Battle/Effect/"*/);
    byte_593BD43 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !motionMessage )
    goto LABEL_43;
  if ( motionMessage->fields._stringLength < 1 )
    return 0;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_43;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_43;
  size = motionMessageObjList->fields._size;
  v13 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0);
  if ( HasRubyFormat )
    goto LABEL_17;
  v16 = this;
  if ( !this )
    goto LABEL_43;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
  {
LABEL_17:
    if ( messageType == 2 )
    {
      this = (BattleInformationComponent_o *)v8->fields.data;
      if ( !this )
        goto LABEL_43;
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actorId, 0);
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultSkillMessageObject(
                                               v8,
                                               isPlayerID,
                                               motionMessage,
                                               0,
                                               v20);
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
          v17 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v18);
LABEL_27:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v17, 1, 0);
            return (UnityEngine_GameObject_o *)v17;
          }
        }
LABEL_43:
        sub_21FFECC(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v15);
    }
    v17 = this;
    if ( this )
      goto LABEL_27;
    goto LABEL_43;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_43;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0);
  v23 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v22);
    v23 = BattleEffectUtility_TypeInfo;
  }
  v24 = System_Int32__ToString((unsigned int)v23->static_fields + 24, 0);
  v26 = System_String__Concat_75438412((System_String_o *)StringLiteral_3209/*"Battle/Effect/"*/, v24, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v26, 0);
  if ( !LODWORD(v16->fields.m_CancellationTokenSource) )
LABEL_44:
    sub_21FFED4(this);
  v27 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_75438412(
                                           (System_String_o *)StringLiteral_17805/*"battle_states_popup"*/,
                                           (System_String_o *)v16->fields.perf,
                                           0);
  if ( !v27 )
    goto LABEL_43;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              v27,
                              (System_String_o *)this,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  v17 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__58323140,
                                             v8->fields.commonMessageRoot,
                                             0,
                                             0);
    if ( !this )
      goto LABEL_43;
    v17 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( ((__int64)v16->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
    {
      if ( this )
      {
        EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v16->fields.data, 0);
        goto LABEL_27;
      }
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  return (UnityEngine_GameObject_o *)v17;
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
  GameObjectExtensions__SafeSetParent_42881912(this->fields.overRoot, fsOffsetRoot, 0);
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v12; // x0
  struct System_String_array *v13; // x8
  System_String_o *v14; // x0
  struct System_Boolean_array *v15; // x8

  v4 = this;
  if ( (byte_593BD42 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)sub_21FFC50(&StringLiteral_23592/*"out"*/);
    byte_593BD42 = 1;
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
                                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
        v12 = System_String__Concat_75438412(overLabel->m_Items[type], (System_String_o *)StringLiteral_23592/*"out"*/, 0);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_78338864((SimpleAnimation_o *)v8, v12, 0);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_21FFECC(this, *(_QWORD *)&type);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
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
  v13 = v4->fields.overLabel;
  if ( !v13 )
    goto LABEL_30;
  if ( LODWORD(v13->max_length) <= type )
    goto LABEL_31;
  v14 = System_String__Concat_75438412(v13->m_Items[type], (System_String_o *)StringLiteral_23592/*"out"*/, 0);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_82865240(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v14,
                                           0);
LABEL_26:
  v15 = v4->fields.isAlreadyOverKill;
  if ( !v15 )
    goto LABEL_30;
  if ( LODWORD(v15->max_length) <= type )
LABEL_31:
    sub_21FFED4(this);
  v15->m_Items[type] = 0;
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
    sub_21FFECC(this, *(_QWORD *)&type);
  }
  if ( LODWORD(showPositions->max_length) <= zureIndex )
LABEL_9:
    sub_21FFED4(this);
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
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  BattleInfoMessageComponent_o *v16; // x22
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v19; // x0
  BattleActionData_o *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_593BD3A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_19717/*"effect/ef_boostitem01"*/);
    byte_593BD3A = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0;
  v7 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_19717/*"effect/ef_boostitem01"*/, 0);
  v9 = (UnityEngine_GameObject_o *)v7;
  if ( !v7 || (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v9, transform, 0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(Object, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      if ( !Object
        || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0 )
      {
        sub_21FFECC(Component_object, v14);
      }
      v16 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v15);
      BattleInfoMessageComponent__setItemSprite(v16, imageId, 0, v17);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_220024C(v7, UnityEngine_GameObject_TypeInfo, v8);
  BattleInformationComponent__showSpecialName(v19, v20, v21);
  return result;
}


void BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  int32_t type; // w21
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x2
  System_String_o *motionMessage; // x1
  const MethodInfo *v10; // x3
  BattleInformationComponent_o *v11; // x21
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t v13; // w9
  int32_t skilllv; // w21
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  bool isPlayerID; // w0
  const MethodInfo *v24; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v26; // x4
  bool v27; // w1
  BattleInformationComponent_o *v28; // x0
  int32_t v29; // w3
  struct BattleSkillInfoData_o *v30; // x8
  bool v31; // w0

  v4 = this;
  if ( (byte_593BD3C & 1) == 0 )
  {
    this = (BattleInformationComponent_o *)sub_21FFC50(&BattleCommand_TypeInfo);
    byte_593BD3C = 1;
  }
  if ( !actionData )
    goto LABEL_34;
  if ( actionData->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyNonMotionMessage(v4, (const MethodInfo *)actionData);
  type = actionData->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v5);
  if ( BattleCommand__isShowCommandAction(type, 0) )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_34;
    if ( BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0) && !actionData->fields.isCounter )
    {
      v15 = BattleInformationComponent__ShowCommandCardMessage(v4, actionData, v8);
      v4->fields.nonMotionMessageObject = v15;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v4->fields.nonMotionMessageObject,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      goto LABEL_23;
    }
  }
  motionMessage = actionData->fields.motionMessage;
  if ( !motionMessage )
  {
    this = (BattleInformationComponent_o *)BattleActionData__IsGimmick(actionData, 0);
    v11 = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_24;
    this = (BattleInformationComponent_o *)BattleActionData__isSkill(actionData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      skillInfo = actionData->fields.skillInfo;
      if ( skillInfo )
      {
        v13 = skillInfo->fields.type;
        if ( v13 == 11 || v13 == 1 )
          skilllv = skillInfo->fields.skilllv;
        else
          skilllv = 0;
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0);
          skillMessage = actionData->fields.skillMessage;
          v26 = actionData->fields.skillInfo;
          v27 = isPlayerID;
          v28 = v4;
          v29 = skilllv;
LABEL_28:
          this = (BattleInformationComponent_o *)BattleInformationComponent__showSkillName(
                                                   v28,
                                                   v27,
                                                   skillMessage,
                                                   v29,
                                                   v26,
                                                   v24);
          goto LABEL_13;
        }
      }
      goto LABEL_34;
    }
    this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(actionData, 0);
    v11 = 0;
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_24;
    if ( !actionData->fields.noOperation )
    {
      v30 = actionData->fields.skillInfo;
      if ( v30 )
      {
        if ( v30->fields.itemImageId != -1 )
        {
          this = (BattleInformationComponent_o *)BattleInformationComponent__showBoostSkillName(
                                                   v4,
                                                   actionData->fields.imageId,
                                                   actionData->fields.skillMessage,
                                                   v10);
          goto LABEL_13;
        }
        this = (BattleInformationComponent_o *)v4->fields.data;
        if ( this )
        {
          v31 = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0);
          skillMessage = actionData->fields.skillMessage;
          v26 = actionData->fields.skillInfo;
          v27 = v31;
          v28 = v4;
          v29 = 0;
          goto LABEL_28;
        }
      }
LABEL_34:
      sub_21FFECC(this, actionData);
    }
LABEL_23:
    v11 = 0;
    goto LABEL_24;
  }
  this = (BattleInformationComponent_o *)BattleInformationComponent__ShowMotionMessage(
                                           v4,
                                           motionMessage,
                                           actionData->fields.actorId,
                                           actionData->fields._MessageType_k__BackingField,
                                           v7);
LABEL_13:
  v11 = this;
LABEL_24:
  BattleInformationComponent__OverwriteMessageDisplayTime(this, (UnityEngine_GameObject_o *)v11, actionData, v10);
  BattleInformationComponent__AddMotionMessageObject(v4, (UnityEngine_GameObject_o *)v11, v22);
}


void BattleInformationComponent__showCommonMessage_54436312(
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
  __int64 v32; // x1
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  int v35; // w9
  int v36; // w8
  Il2CppObject *v37; // x20
  __int64 v38; // x1
  Il2CppObject *v39; // x19
  __int64 v40; // x1
  BattleInformationComponent_c *v41; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v43; // x0
  __int64 v44; // x1
  BattleInformationComponent_c *v45; // x0
  System_String_o *v46; // x20
  System_String_o *v47; // x0
  int v48; // [xsp+Ch] [xbp-64h] BYREF
  int v49; // [xsp+18h] [xbp-58h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-54h] BYREF

  v50 = treasureDeviceLevel;
  if ( (byte_593BD32 & 1) == 0 )
  {
    sub_21FFC50(&BattleInformationComponent_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9644/*"NOBLEINFO_NP_PER"*/);
    sub_21FFC50(&StringLiteral_24328/*"rubyLabel"*/);
    sub_21FFC50(&StringLiteral_11026/*"PerLabel"*/);
    sub_21FFC50(&StringLiteral_8758/*"LevelLabel"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_9965/*"NpLevelBase"*/);
    sub_21FFC50(&StringLiteral_22433/*"mainLabel"*/);
    byte_593BD32 = 1;
  }
  v49 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_53;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
      goto LABEL_53;
    v16 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_22433/*"mainLabel"*/,
                                  0,
                                  0);
    if ( !Instance )
      goto LABEL_53;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v19 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_24328/*"rubyLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_53;
    v20 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v21 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v21, (System_String_o *)StringLiteral_8758/*"LevelLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_53;
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v23 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v23, (System_String_o *)StringLiteral_11026/*"PerLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_53;
    v24 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v25 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v25, (System_String_o *)StringLiteral_9965/*"NpLevelBase"*/, 0, 0);
    if ( !Instance )
      goto LABEL_53;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !v20 )
      goto LABEL_53;
    v26 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v20, (System_String_o *)v15[2].klass, 0);
    monitor = (System_String_o *)v15[1].monitor;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_54;
      if ( overrideTd->m_Items[0] )
        monitor = overrideTd->m_Items[0];
      if ( max_length == 1 )
LABEL_54:
        sub_21FFED4(v27);
      v30 = overrideTd->m_Items[1];
      if ( v30 )
        UILabel__set_text((UILabel_o *)v20, v30, 0);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v16, 0);
      if ( !Instance )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    if ( !Component_object )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v50, 0);
    if ( !v22 )
      goto LABEL_53;
    if ( Instance )
      v31 = (System_String_o *)Instance;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v22, v31, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9644/*"NOBLEINFO_NP_PER"*/, 0);
    v48 = 100 * (treasureDevicePer / 100);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v48);
    Instance = (DataManager_o *)System_String__Format(v33, v34, 0);
    if ( !v24 || (UILabel__set_text((UILabel_o *)v24, (System_String_o *)Instance, 0), !v26) )
LABEL_53:
      sub_21FFECC(Instance, v13);
    UnityEngine_GameObject__SetActive(v26, !isHideInfo, 0);
    if ( (unsigned int)(treasureDevicePer / 100) >= 5 )
      v35 = 5;
    else
      v35 = treasureDevicePer / 100;
    v49 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v36 = 1;
    else
      v36 = v35;
    v49 = v36;
    v37 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v39 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0) )
    {
      v41 = BattleInformationComponent_TypeInfo;
      if ( !*(&BattleInformationComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo, v40);
        v41 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v41->static_fields->NobleInfoAnimPrefix;
      v43 = System_Int32__ToString((int32_t)&v49, 0);
      Instance = (DataManager_o *)System_String__Concat_75438412(NobleInfoAnimPrefix, v43, 0);
      if ( v37 )
      {
        SimpleAnimation__Play_78338864((SimpleAnimation_o *)v37, (System_String_o *)Instance, 0);
        return;
      }
      goto LABEL_53;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0) )
    {
      v45 = BattleInformationComponent_TypeInfo;
      if ( !*(&BattleInformationComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo, v44);
        v45 = BattleInformationComponent_TypeInfo;
      }
      v46 = v45->static_fields->NobleInfoAnimPrefix;
      v47 = System_Int32__ToString((int32_t)&v49, 0);
      Instance = (DataManager_o *)System_String__Concat_75438412(v46, v47, 0);
      if ( !v39 )
        goto LABEL_53;
      UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v39, (System_String_o *)Instance, 0);
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
    sub_21FFECC(this, actionData);
  if ( !LODWORD(isAlreadyOverKill->max_length) )
    sub_21FFED4(this);
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
    sub_21FFECC(this, actionData);
  if ( (isAlreadyOverKill->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(this);
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
  __int64 v7; // x1
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_Vector2_o v9; // kr00_8
  UnityEngine_GameObject_o *v10; // x21
  float v11; // s0
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Object_o *v17; // x22
  __int64 v18; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v20; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v22; // s0
  struct System_Single_array *v23; // x8
  struct System_String_array *v24; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v26; // x8
  struct System_Boolean_array *v27; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v30; // x8

  v6 = this;
  if ( (byte_593BD41 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21694/*"in"*/);
    this = (BattleInformationComponent_o *)sub_21FFC50(&StringLiteral_20353/*"flash"*/);
    byte_593BD41 = 1;
  }
  if ( !actionData )
    goto LABEL_72;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_72;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_72;
    v9 = BattlePerformance__GetExBattleUiOverKillPosAdjust((BattlePerformance_o *)this, 0);
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_72;
    v10 = v6->fields.overRoot;
    v11 = ((float (__fastcall *)(BattleInformationComponent_o *, const char *))this->klass[1]._1.name)(
            this,
            this->klass[1]._1.namespaze);
    GameObjectExtensions__SetLocalPositionX(v10, v9.fields.x + v11, 0);
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_72;
    v12 = v6->fields.overRoot;
    v13 = ((float (__fastcall *)(BattleInformationComponent_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
            this,
            *(_QWORD *)&this->klass[1]._1.byval_arg.bits);
    GameObjectExtensions__SetLocalPositionY(v12, v9.fields.y + v13, 0);
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
  v15 = v6->fields.overObjectList;
  if ( !v15 )
    goto LABEL_72;
  if ( LODWORD(v15->max_length) <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)v15->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v16 = v6->fields.overObjectList) == 0) )
  {
LABEL_72:
    sub_21FFECC(this, actionData);
  }
  if ( LODWORD(v16->max_length) <= inOverType )
    goto LABEL_73;
  v17 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v16->m_Items[inOverType];
  if ( !this )
    goto LABEL_72;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = (UnityEngine_Behaviour_o *)v17;
    if ( !v17 )
      goto LABEL_72;
    goto LABEL_31;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_72;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v20, 0, 0);
    UnityEngine_Behaviour__set_enabled(v20, 1, 0);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_72;
  if ( LODWORD(isAlreadyOverKill->max_length) <= inOverType )
    goto LABEL_73;
  if ( !isAlreadyOverKill->m_Items[inOverType] )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_72;
      if ( LODWORD(overLabel->max_length) <= inOverType )
        goto LABEL_73;
      this = (BattleInformationComponent_o *)System_String__Concat_75438412(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_21694/*"in"*/,
                                               0);
      if ( !v17 )
        goto LABEL_72;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_78338864(
                                               (SimpleAnimation_o *)v17,
                                               (System_String_o *)this,
                                               0);
    }
    else
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v26 = v6->fields.overLabel;
        if ( !v26 )
          goto LABEL_72;
        if ( LODWORD(v26->max_length) <= inOverType )
          goto LABEL_73;
        this = (BattleInformationComponent_o *)System_String__Concat_75438412(
                                                 v26->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_21694/*"in"*/,
                                                 0);
        if ( !Component_object )
          goto LABEL_72;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_82865240(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0);
      }
    }
    v27 = v6->fields.isAlreadyOverKill;
    if ( !v27 )
      goto LABEL_72;
    if ( LODWORD(v27->max_length) > inOverType )
    {
      timeStartOverKill = v6->fields.timeStartOverKill;
      v27->m_Items[inOverType] = 1;
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
    sub_21FFED4(this);
  }
  v22 = UnityEngine_Time__get_time(0);
  v23 = v6->fields.timeStartOverKill;
  if ( !v23 )
    goto LABEL_72;
  if ( LODWORD(v23->max_length) <= inOverType )
    goto LABEL_73;
  if ( (float)(v22 - v23->m_Items[inOverType]) <= 0.2 )
    return;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v24 = v6->fields.overLabel;
    if ( !v24 )
      goto LABEL_72;
    if ( LODWORD(v24->max_length) > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_75438412(
                                               v24->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20353/*"flash"*/,
                                               0);
      if ( !v17 )
        goto LABEL_72;
      SimpleAnimation__Play_78338864((SimpleAnimation_o *)v17, (System_String_o *)this, 0);
      return;
    }
    goto LABEL_73;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actionData);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v30 = v6->fields.overLabel;
  if ( !v30 )
    goto LABEL_72;
  if ( LODWORD(v30->max_length) <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)System_String__Concat_75438412(
                                           v30->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_20353/*"flash"*/,
                                           0);
  if ( !Component_object )
    goto LABEL_72;
  UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  bool v9; // w20
  Il2CppObject *Master_object; // x24
  BattleLogic_o *logic; // x0
  int32_t v13; // w0
  const MethodInfo *v14; // x5
  UnityEngine_Object_o *Object; // x22
  __int64 v16; // x1
  __int64 v17; // x8
  __int64 v18; // x1
  Il2CppObject *Component_object; // x23
  __int64 v20; // x1
  ParseBattleMessage_o *ParseBattleMsg; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  const MethodInfo *v25; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-34h] BYREF

  v9 = isPlayer;
  v28 = skillLevel;
  if ( (byte_593BD39 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2995/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_593BD39 = 1;
  }
  entity = 0;
  if ( !message || message->fields._stringLength < 1 )
    return 0;
  if ( !skillInfo )
    goto LABEL_13;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isPlayer);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  logic = (BattleLogic_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                             skillInfo,
                             skillInfo->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    goto LABEL_41;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)logic,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    logic = (BattleLogic_o *)entity;
    if ( !entity )
      goto LABEL_41;
    v13 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0);
    Object = (UnityEngine_Object_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                       this,
                                       v13,
                                       message,
                                       v9,
                                       skillLevel,
                                       v14);
  }
  else
  {
LABEL_13:
    Object = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlayer);
  if ( UnityEngine_Object__op_Equality(Object, 0, 0) )
  {
    v17 = 136;
    if ( v9 )
      v17 = 128;
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       *(UnityEngine_GameObject_o **)((char *)&this->klass + v17),
                                       this->fields.skillInfoRoot,
                                       0,
                                       0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  logic = (BattleLogic_o *)UnityEngine_Object__op_Inequality(Object, 0, 0);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    if ( !Object )
      goto LABEL_41;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      goto LABEL_39;
    logic = this->fields.logic;
    if ( v9 && v28 >= 1 )
    {
      if ( !logic )
        goto LABEL_41;
      ParseBattleMsg = BattleLogic__get_ParseBattleMsg(logic, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_SKILL_NAME_LEVEL"*/, 0);
      v23 = (Il2CppObject *)System_Int32__ToString((int32_t)&v28, 0);
      logic = (BattleLogic_o *)System_String__Format_75484576(v22, (Il2CppObject *)message, v23, 0);
      if ( !ParseBattleMsg )
        goto LABEL_41;
      v24 = (System_String_o *)logic;
      logic = (BattleLogic_o *)ParseBattleMsg;
    }
    else
    {
      if ( !logic )
        goto LABEL_41;
      logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0);
      if ( !logic )
        goto LABEL_41;
      v24 = message;
    }
    logic = (BattleLogic_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, v24, 0);
    *(_QWORD *)&isPlayer = logic;
    if ( Component_object )
    {
      BattleConcatLabelMessageComponent__SetTexts(
        (BattleConcatLabelMessageComponent_o *)Component_object,
        (System_String_array *)logic,
        v25);
LABEL_39:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
      return (UnityEngine_GameObject_o *)Object;
    }
LABEL_41:
    sub_21FFECC(logic, isPlayer);
  }
  return (UnityEngine_GameObject_o *)Object;
}


void BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  TreasureDvcEntity_o *v8; // x23
  bool isPlayerID; // w0
  __int64 v10; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  System_String_o *TreasureDeviceUseMessageLabel; // x20
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_593BD3B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593BD3B = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    if ( !Instance )
      goto LABEL_27;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               actionData->fields.treasureDvcId,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v8 = (TreasureDvcEntity_o *)Entity;
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
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Instance,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelSkillNameComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
          Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_27;
            BattleConcatLabelSkillNameComponent__SetSkillSpriteActive(
              (BattleConcatLabelSkillNameComponent_o *)Component_object,
              0,
              v14);
          }
          TreasureDeviceUseMessageLabel = BattleInformationComponent__GetTreasureDeviceUseMessageLabel(
                                            this,
                                            v8,
                                            actionData->fields.actorId,
                                            v15);
          if ( System_String__IsNullOrEmpty(TreasureDeviceUseMessageLabel, 0) )
          {
            UnityEngine_GameObject__SetActive(v11, 0, 0);
            return;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
            goto LABEL_26;
          Instance = (DataManager_o *)this->fields.logic;
          if ( Instance )
          {
            Instance = (DataManager_o *)BattleLogic__get_ParseBattleMsg((BattleLogic_o *)Instance, 0);
            if ( Instance )
            {
              Instance = (DataManager_o *)ParseBattleMessage__Replace(
                                            (ParseBattleMessage_o *)Instance,
                                            TreasureDeviceUseMessageLabel,
                                            0);
              if ( Component_object )
              {
                BattleConcatLabelMessageComponent__SetTexts(
                  (BattleConcatLabelMessageComponent_o *)Component_object,
                  (System_String_array *)Instance,
                  v18);
LABEL_26:
                UnityEngine_GameObject__SetActive(v11, 1, 0);
                BattleInformationComponent__AddMotionMessageObject(this, v11, v19);
                return;
              }
            }
          }
        }
      }
LABEL_27:
      sub_21FFECC(Instance, v6);
    }
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
  if ( (byte_593BD31 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_21FFC50(&StringLiteral_22275/*"line1"*/);
    sub_21FFC50(&StringLiteral_15124/*"Total {0:#,0}"*/);
    this = (BattleInformationComponent_o *)sub_21FFC50(&StringLiteral_22276/*"line2"*/);
    byte_593BD31 = 1;
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
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
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
            sub_21FFED4(this);
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
          if ( System_String__Equals_75473208((System_String_o *)this, (System_String_o *)StringLiteral_22275/*"line1"*/, 0) )
          {
            v13 = v6;
            v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
            v12 = System_String__Format((System_String_o *)StringLiteral_15124/*"Total {0:#,0}"*/, v11, 0);
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
            this = (BattleInformationComponent_o *)System_String__Equals_75473208(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_22276/*"line2"*/,
                                                     0);
          }
          m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
          if ( (int)++v9 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_21FFECC(this, actionData);
      }
    }
  }
}