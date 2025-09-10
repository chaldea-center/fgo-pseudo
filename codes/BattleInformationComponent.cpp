void BattleInformationComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2A6E7 & 1) == 0 )
  {
    sub_1C2D490(&BattleInformationComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_9507/*"NobleLevel"*/);
    byte_4C2A6E7 = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9507/*"NobleLevel"*/;
  sub_1C2D434((CGThumbnailListItem_o *)BattleInformationComponent_TypeInfo->static_fields, StringLiteral_9507/*"NobleLevel"*/, v1, v2);
}


void BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UnityEngine_GameObject_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Boolean_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Single_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  __int64 v26; // x20
  int v27; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  __int64 v34; // x20
  int32_t v35; // w1
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4C2A6E6 & 1) == 0 )
  {
    sub_1C2D490(&BaseBattleInfoPosData_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3___TypeInfo);
    sub_1C2D490(&StringLiteral_25179/*"{0}th Attack"*/);
    sub_1C2D490(&StringLiteral_1402/*"3rd Attack"*/);
    sub_1C2D490(&StringLiteral_22501/*"overkill_"*/);
    sub_1C2D490(&StringLiteral_1316/*"1st Attack"*/);
    sub_1C2D490(&StringLiteral_1376/*"2nd Attack"*/);
    sub_1C2D490(&StringLiteral_22500/*"overgauge_"*/);
    byte_4C2A6E6 = 1;
  }
  v3 = (Il2CppObject *)sub_1C2D6DC(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.infoPosData, (int32_t)v3, v4, v5);
  v6 = sub_1C2D538(string___TypeInfo, 2);
  if ( !v6 )
    goto LABEL_18;
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_22501/*"overkill_"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_22501/*"overkill_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
LABEL_17:
    sub_1C2D6F4(v6, v7, v8);
  }
  v13 = StringLiteral_22500/*"overgauge_"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_22500/*"overgauge_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 40), v13, v8, v12);
  this->fields.overLabel = (struct System_String_array *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overLabel, v10, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1C2D538(UnityEngine_GameObject___TypeInfo, 2);
  this->fields.overObjectList = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overObjectList, (int32_t)v16, v17, v18);
  v19 = (struct System_Boolean_array *)sub_1C2D538(bool___TypeInfo, 2);
  this->fields.isAlreadyOverKill = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.isAlreadyOverKill, (int32_t)v19, v20, v21);
  v22 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2);
  this->fields.timeStartOverKill = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.timeStartOverKill, (int32_t)v22, v23, v24);
  v6 = sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
  v26 = v6;
  if ( !byte_4C20DA1 )
  {
    v6 = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v26 )
LABEL_18:
    sub_1C2D6EC(v6, v7);
  v27 = *(_DWORD *)(v26 + 24);
  if ( !v27 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v26 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v26 + 40) = z;
  if ( v27 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v26 + 52) = 0;
  *(_QWORD *)(v26 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v26;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.showPositions, v26, v8, v25);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.motionMessageObjList, (int32_t)v30, v31, v32);
  v6 = sub_1C2D538(string___TypeInfo, 4);
  if ( !v6 )
    goto LABEL_18;
  v34 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_17;
  v35 = StringLiteral_1316/*"1st Attack"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_1316/*"1st Attack"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), v35, v8, v33);
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_17;
  v37 = StringLiteral_1376/*"2nd Attack"*/;
  *(_QWORD *)(v34 + 40) = StringLiteral_1376/*"2nd Attack"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v34 + 40), v37, v8, v36);
  if ( *(_DWORD *)(v34 + 24) <= 2u )
    goto LABEL_17;
  v39 = StringLiteral_1402/*"3rd Attack"*/;
  *(_QWORD *)(v34 + 48) = StringLiteral_1402/*"3rd Attack"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v34 + 48), v39, v8, v38);
  if ( *(_DWORD *)(v34 + 24) <= 3u )
    goto LABEL_17;
  v41 = StringLiteral_25179/*"{0}th Attack"*/;
  *(_QWORD *)(v34 + 56) = StringLiteral_25179/*"{0}th Attack"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v34 + 56), v41, v8, v40);
  this->fields.attackCount = (struct System_String_array *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.attackCount, v34, v42, v43);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C2A6E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6E1 = 1;
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
          v12 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++motionMessageObjList->fields._version,
          !items) )
    {
      sub_1C2D6EC(motionMessageObjList, v7);
    }
    size = motionMessageObjList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        motionMessageObjList,
        (Il2CppObject *)obj,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      motionMessageObjList->fields._size = size + 1;
      v14[4] = (Il2CppClass *)obj;
      sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)obj, v8, v9);
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

  if ( (byte_4C2A6E2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6E2 = 1;
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
        sub_1C2D6EC(v10, v11);
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
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  BattleInformationComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v19; // x4

  if ( (byte_4C2A6D2 & 1) == 0 )
  {
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C2D490(&string___TypeInfo);
    byte_4C2A6D2 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v9 = sub_1C2D538(string___TypeInfo, 2);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0);
  if ( !v9 )
    sub_1C2D6EC(EffectAssetName, v11);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v9 + 32) = EffectAssetName;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)EffectAssetName, v12, v13);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v9 + 24) <= 1u )
LABEL_11:
    sub_1C2D6F4(EffectAssetName, v11, v12);
  v15 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v9 + 40) = v15;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), v15, v12, v14);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v16,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v9,
                                                   v17);
  return BattleInformationComponent__CreateBattleMessageObject_47010536(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v19);
}


UnityEngine_GameObject_o *BattleInformationComponent__CreateBattleMessageObject_47010536(
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

  if ( (byte_4C2A6D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6D3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__51752420(
           (Il2CppObject *)msgPrefab,
           parentTransform,
           (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    if ( !v9 )
      goto LABEL_13;
    v8 = (UnityEngine_GameObject_o *)v9;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
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
      sub_1C2D6EC(v9, v10);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  BattleDataDefine_c *v17; // x8
  BattleLogic_o *v18; // x22
  struct System_String_o *ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v23; // x4
  UnityEngine_GameObject_o *v24; // x19

  if ( (byte_4C2A6D1 & 1) == 0 )
  {
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___);
    sub_1C2D490(&string___TypeInfo);
    byte_4C2A6D1 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
    v10 = (BattleInformationComponent_o *)sub_1C2D538(string___TypeInfo, 0);
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
  logic = (BattleLogic_o *)sub_1C2D538(string___TypeInfo, 1);
  v17 = BattleDataDefine_TypeInfo;
  v18 = logic;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v17 = BattleDataDefine_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_15;
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    sub_1C2D6F4(logic, v9, v15);
  ASSET_BATTLE_COMMON = v17->static_fields->ASSET_BATTLE_COMMON;
  v18->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1C2D434((CGThumbnailListItem_o *)&v18->fields.fsm, (int32_t)ASSET_BATTLE_COMMON, v15, v16);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v20,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v18,
                                                   v21);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_47010536(
                             TargetPrefab,
                             v13,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v23);
  if ( !logic
    || (v24 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(logic, v9);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0);
  return v24;
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

  if ( (byte_4C2A6D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6D4 = 1;
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
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
      sub_1C2D6EC(Object, v11);
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
  if ( (byte_4C2A6D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_2879/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_4C2A6D5 = 1;
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
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_SKILL_NAME_LEVEL"*/, 0);
        v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
        message = System_String__Format_63499156(v14, (Il2CppObject *)message, v15, 0);
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
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
        sub_1C2D6EC(gameObject, v17);
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
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A6E4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6E4 = 1;
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
    v18.fields.x = v6.fields.x
                 + ((float (__fastcall *)(BattlePerformance_o *, void *))perf->klass[1]._1.image)(
                     perf,
                     perf->klass[1]._1.gc_desc);
    v18.fields.y = v6.fields.y + v8;
    v18.fields.z = v9 + 0.0;
    GameObjectExtensions__SetLocalPosition(v7, v18, 0);
    BattleInformationComponent__DeleteSkillSkip(this, v10);
    perf = (BattlePerformance_o *)this->fields.skillSkipRoot;
    if ( !perf )
      goto LABEL_15;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0, 0);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1C2D434((CGThumbnailListItem_o *)p_skillSkipObj, (int32_t)Object, v15, v16);
    v17 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
    {
      perf = (BattlePerformance_o *)*p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, 1, 0);
        return;
      }
LABEL_15:
      sub_1C2D6EC(perf, v4);
    }
  }
}


void BattleInformationComponent__DeleteSkillSkip(BattleInformationComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A6E5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6E5 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (CGThumbnailListItem_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(klass, 0);
    p_skillSkipObj->klass = 0;
    sub_1C2D434(p_skillSkipObj, 0, v7, v8);
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

  if ( (byte_4C2A6DC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6DC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    motionMessageObjList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    BattleMultiMessageDisplay__ReleaseMessage_47034656(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
    if ( motionMessageObjList )
    {
      BattlePerformance__DestroySkillCutInMessage((BattlePerformance_o *)motionMessageObjList, 0);
      return;
    }
LABEL_21:
    sub_1C2D6EC(motionMessageObjList, isDisplayNextMessage);
  }
  v10 = *(_QWORD *)&motionMessageObjList->fields._size;
  if ( !v10 || !*(_BYTE *)(v10 + 21) )
    BattleMultiMessageDisplay__ReleaseMessage_47034656(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
}


void BattleInformationComponent__DestroyNonMotionMessage(BattleInformationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nonMotionMessageObject; // x20
  CGThumbnailListItem_o *p_nonMotionMessageObject; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A6DD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6DD = 1;
  }
  nonMotionMessageObject = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nonMotionMessageObject, 0, 0) )
  {
    p_nonMotionMessageObject = (CGThumbnailListItem_o *)&this->fields.nonMotionMessageObject;
    klass = (UnityEngine_Object_o *)p_nonMotionMessageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(klass, 0);
    p_nonMotionMessageObject->klass = 0;
    sub_1C2D434(p_nonMotionMessageObject, 0, v6, v7);
  }
}


System_String_o *BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2A6D0 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_17091/*"battle_message_{0}"*/);
    byte_4C2A6D0 = 1;
  }
  v8 = messageType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_17091/*"battle_message_{0}"*/, v6, 0);
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
  Il2CppObject *Object_object__51051712; // x21

  if ( (byte_4C2A6E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6E3 = 1;
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
        sub_1C2D6F4(this, prefabName, assetNames);
      v8 = assetNames->m_Items[v7];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v8, 0);
      if ( !this )
        break;
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__51051712,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(max_length) = assetNames->max_length;
        if ( (__int64)++v7 < (int)max_length )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__51051712;
    }
LABEL_18:
    sub_1C2D6EC(this, prefabName);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v14; // x1
  UnityEngine_GameObject_o *overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v23; // x20
  struct UnityEngine_GameObject_array *v24; // x21
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *v26; // x0
  const MethodInfo *v27; // x3
  struct UnityEngine_GameObject_array *v28; // x8
  struct System_Boolean_array *v29; // x8
  struct System_Single_array *v30; // x8
  Il2CppObject *Object_object__51051712; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4C2A6CB & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18839/*"ef_overgauge01"*/);
    sub_1C2D490(&StringLiteral_3084/*"Battle/Common"*/);
    sub_1C2D490(&StringLiteral_18846/*"ef_skillskip"*/);
    sub_1C2D490(&StringLiteral_18895/*"effect/ef_overkill01"*/);
    byte_4C2A6CB = 1;
  }
  this->fields.perf = inperf;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (const MethodInfo *)inlogic);
  this->fields.data = indata;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.data, (int32_t)indata, v9, v10);
  this->fields.logic = inlogic;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)inlogic, v11, v12);
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
        overRoot = BaseMonoBehaviour__createObject_40963840(
                     (BaseMonoBehaviour_o *)this,
                     (System_String_o *)StringLiteral_18895/*"effect/ef_overkill01"*/,
                     transform,
                     0,
                     0),
        (overObjectList = this->fields.overObjectList) == 0) )
  {
LABEL_38:
    sub_1C2D6EC(overRoot, v14);
  }
  if ( !LODWORD(overObjectList->max_length) )
    goto LABEL_39;
  overObjectList->m_Items[0] = overRoot;
  sub_1C2D434((CGThumbnailListItem_o *)overObjectList->m_Items, (int32_t)overRoot, v17, v18);
  v20 = this->fields.overObjectList;
  if ( !v20 )
    goto LABEL_38;
  if ( !LODWORD(v20->max_length) )
    goto LABEL_39;
  overRoot = v20->m_Items[0];
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
  overRoot = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3084/*"Battle/Common"*/, 0);
  if ( !overRoot )
    goto LABEL_38;
  v23 = (AssetData_o *)overRoot;
  overRoot = (UnityEngine_GameObject_o *)AssetData__GetObject_object__51051712(
                                           (AssetData_o *)overRoot,
                                           (System_String_o *)StringLiteral_18839/*"ef_overgauge01"*/,
                                           (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v24 = this->fields.overObjectList;
  v25 = overRoot;
  v26 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0);
  overRoot = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v25, v26, 0, 0);
  if ( !v24 )
    goto LABEL_38;
  if ( LODWORD(v24->max_length) <= 1 )
    goto LABEL_39;
  v24->m_Items[1] = overRoot;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->m_Items[1], (int32_t)overRoot, v17, v27);
  v28 = this->fields.overObjectList;
  if ( !v28 )
    goto LABEL_38;
  if ( LODWORD(v28->max_length) <= 1 )
    goto LABEL_39;
  overRoot = v28->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0);
  v29 = this->fields.isAlreadyOverKill;
  if ( !v29 )
    goto LABEL_38;
  if ( LODWORD(v29->max_length) <= 1 )
    goto LABEL_39;
  v29->m_Items[1] = 0;
  v30 = this->fields.timeStartOverKill;
  if ( !v30 )
    goto LABEL_38;
  if ( LODWORD(v30->max_length) <= 1 )
LABEL_39:
    sub_1C2D6F4(overRoot, v14, v17);
  v30->m_Items[1] = 0.0;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              v23,
                              (System_String_o *)StringLiteral_18846/*"ef_skillskip"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__51051712;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillSkipPrefab, (int32_t)Object_object__51051712, v32, v33);
  GameObjectExtensions__SafeSetParent_35924288(this->fields.overRoot, this->fields.fsOffsetRoot, 0);
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
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v7; // x1
  BattleFieldParamComponent_o *v8; // x0

  if ( (byte_4C2A6CC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6CC = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.infoPosData, (int32_t)BattleInfoPosData, v4, v5);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0, 0) )
  {
    v8 = this->fields.fieldParam;
    if ( !v8 )
      sub_1C2D6EC(0, v7);
    BattleFieldParamComponent__UpdateView(v8, v7);
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

  if ( (byte_4C2A6CD & 1) == 0 )
  {
    sub_1C2D490(&NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    sub_1C2D490(&PosCountNormalBattleInfoPosData_TypeInfo);
    sub_1C2D490(&PosCountSpBattleInfoPosData_TypeInfo);
    byte_4C2A6CD = 1;
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
    v6 = sub_1C2D6DC(PosCountSpBattleInfoPosData_TypeInfo);
    v7 = xmmword_C09950;
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
        v6 = sub_1C2D6DC(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v7 = xmmword_C09E00;
        v8 = 1112801280;
LABEL_13:
        v5 = v6;
        *(_OWORD *)(v6 + 24) = v7;
        *(_QWORD *)(v6 + 40) = v8;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C2D6EC(data, method);
  }
LABEL_10:
  v5 = sub_1C2D6DC(PosCountNormalBattleInfoPosData_TypeInfo);
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
  Il2CppObject *SkillMessageDisplayTime; // x0
  __int64 v7; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF
  float time; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C2A6DA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6DA = 1;
  }
  time = 0.0;
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SkillMessageDisplayTime = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( ((unsigned __int8)SkillMessageDisplayTime & 1) == 0 )
  {
    if ( !actionData )
      goto LABEL_14;
    SkillMessageDisplayTime = (Il2CppObject *)BattleActionData__TryGetSkillMessageDisplayTime(actionData, &time, 0);
    if ( ((unsigned __int8)SkillMessageDisplayTime & 1) == 0 )
      return;
    if ( !obj )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            obj,
            &component,
            (const MethodInfo_3127160 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      return;
    SkillMessageDisplayTime = component;
    if ( !component || (CommonEffectComponent__SetTime((CommonEffectComponent_o *)component, time, 0.0, 0), !component) )
LABEL_14:
      sub_1C2D6EC(SkillMessageDisplayTime, v7);
    BYTE1(component[12].monitor) = 1;
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
    sub_1C2D6EC(this, actionData);
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
  if ( (byte_4C2A6DB & 1) == 0 )
  {
    sub_1C2D490(&BattleCommand_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3248/*"Buster!"*/);
    sub_1C2D490(&StringLiteral_10935/*"Quick!"*/);
    sub_1C2D490(&StringLiteral_2363/*"Arts!"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (BattleInformationComponent_o *)sub_1C2D490(&StringLiteral_6373/*"Extra!"*/);
    byte_4C2A6DB = 1;
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
                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  actionIndex = v3->fields.actionIndex;
  attackCount = v4->fields.attackCount;
  v13 = (BattleInfoMessageComponent_o *)this;
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
    sub_1C2D6F4(this, actionData, v8);
  }
  if ( !attackCount )
    goto LABEL_40;
  if ( LODWORD(attackCount->max_length) <= 3 )
    goto LABEL_41;
  v14 = attackCount->m_Items[3];
  v24 = actionIndex + 1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v8, v9, v10);
  this = (BattleInformationComponent_o *)System_String__Format(v14, v15, 0);
  actionData = (BattleActionData_o *)this;
LABEL_14:
  if ( v6 == 3 )
    v16 = 0;
  else
    v16 = v7;
  if ( v6 == 3 )
  {
    v17 = &StringLiteral_10935/*"Quick!"*/;
    goto LABEL_22;
  }
  if ( v6 == 2 )
  {
    v18 = (System_String_o *)StringLiteral_3248/*"Buster!"*/;
    goto LABEL_28;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 4 )
      v18 = (System_String_o *)StringLiteral_6373/*"Extra!"*/;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
    v7 = v16;
    if ( !v13 )
      goto LABEL_40;
    goto LABEL_29;
  }
  v17 = &StringLiteral_2363/*"Arts!"*/;
LABEL_22:
  v18 = (System_String_o *)*v17;
  if ( !v13 )
    goto LABEL_40;
LABEL_29:
  BattleInfoMessageComponent__setText_47004720(v13, (System_String_o *)actionData, v18, v9);
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
        v13,
        (UnityEngine_GameObject_o *)BattleCommandCardObject,
        ServantData,
        v22);
      if ( BattleCommandCardObject )
      {
        this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( this )
        {
          BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0);
          goto LABEL_38;
        }
      }
    }
LABEL_40:
    sub_1C2D6EC(this, actionData);
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
  __int64 v24; // x2
  AssetData_o *v25; // x20
  Il2CppObject *Object_object__51051712; // x20
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4C2A6E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17102/*"battle_states_popup"*/);
    this = (BattleInformationComponent_o *)sub_1C2D490(&StringLiteral_3089/*"Battle/Effect/"*/);
    byte_4C2A6E0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !motionMessage )
    goto LABEL_44;
  if ( motionMessage->fields._stringLength < 1 )
    return 0;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v17);
LABEL_28:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0);
            return (UnityEngine_GameObject_o *)v16;
          }
        }
LABEL_44:
        sub_1C2D6EC(this, motionMessage);
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
  v23 = System_String__Concat_63457864((System_String_o *)StringLiteral_3089/*"Battle/Effect/"*/, v22, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v23, 0);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_45:
    sub_1C2D6F4(this, motionMessage, v24);
  v25 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_63457864(
                                           (System_String_o *)StringLiteral_17102/*"battle_states_popup"*/,
                                           (System_String_o *)v15->fields.perf,
                                           0);
  if ( !v25 )
    goto LABEL_44;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              v25,
                              (System_String_o *)this,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__51051712,
                                             v8->fields.commonMessageRoot,
                                             0,
                                             0);
    if ( !this )
      goto LABEL_44;
    v16 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
  GameObjectExtensions__SafeSetParent_35924288(this->fields.overRoot, fsOffsetRoot, 0);
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
  if ( (byte_4C2A6DF & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)sub_1C2D490(&StringLiteral_22482/*"out"*/);
    byte_4C2A6DF = 1;
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
                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v11 = System_String__Concat_63457864(overLabel->m_Items[type], (System_String_o *)StringLiteral_22482/*"out"*/, 0);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_66404364((SimpleAnimation_o *)v8, v11, 0);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1C2D6EC(this, *(_QWORD *)&type);
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
  v13 = System_String__Concat_63457864(v12->m_Items[type], (System_String_o *)StringLiteral_22482/*"out"*/, 0);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_70908988(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v13,
                                           0);
LABEL_26:
  v14 = v4->fields.isAlreadyOverKill;
  if ( !v14 )
    goto LABEL_30;
  if ( LODWORD(v14->max_length) <= type )
LABEL_31:
    sub_1C2D6F4(this, *(_QWORD *)&type, method);
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
    sub_1C2D6EC(this, *(_QWORD *)&type);
  }
  if ( LODWORD(showPositions->max_length) <= zureIndex )
LABEL_9:
    sub_1C2D6F4(this, *(_QWORD *)&type, *(_QWORD *)&zureIndex);
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

  if ( (byte_4C2A6D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_18878/*"effect/ef_boostitem01"*/);
    byte_4C2A6D7 = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0;
  v7 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18878/*"effect/ef_boostitem01"*/, 0);
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
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0 )
      {
        sub_1C2D6EC(Component_object, v12);
      }
      v14 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v13);
      BattleInfoMessageComponent__setItemSprite(v14, imageId, 0, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1C2D9AC(v7);
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
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  bool isPlayerID; // w0
  const MethodInfo *v19; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v21; // x4
  bool v22; // w1
  BattleInformationComponent_o *v23; // x0
  int32_t v24; // w3
  struct BattleSkillInfoData_o *v25; // x8
  bool v26; // w0

  v4 = this;
  if ( (byte_4C2A6D9 & 1) == 0 )
  {
    this = (BattleInformationComponent_o *)sub_1C2D490(&BattleCommand_TypeInfo);
    byte_4C2A6D9 = 1;
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
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.nonMotionMessageObject, (int32_t)v14, v15, v16);
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
          v21 = actionData->fields.skillInfo;
          v22 = isPlayerID;
          v23 = v4;
          v24 = skilllv;
LABEL_28:
          this = (BattleInformationComponent_o *)BattleInformationComponent__showSkillName(
                                                   v23,
                                                   v22,
                                                   skillMessage,
                                                   v24,
                                                   v21,
                                                   v19);
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
      v25 = actionData->fields.skillInfo;
      if ( v25 )
      {
        if ( v25->fields.itemImageId != -1 )
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
          v26 = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0);
          skillMessage = actionData->fields.skillMessage;
          v21 = actionData->fields.skillInfo;
          v22 = v26;
          v23 = v4;
          v24 = 0;
          goto LABEL_28;
        }
      }
LABEL_34:
      sub_1C2D6EC(this, actionData);
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
  BattleInformationComponent__AddMotionMessageObject(v4, (UnityEngine_GameObject_o *)v10, v17);
}


void BattleInformationComponent__showCommonMessage_47018976(
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
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *monitor; // x26
  int max_length; // w8
  System_String_o *v32; // x1
  System_String_o *v33; // x1
  System_String_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  int v39; // w8
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x19
  BattleInformationComponent_c *v42; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v44; // x0
  BattleInformationComponent_c *v45; // x0
  System_String_o *v46; // x20
  System_String_o *v47; // x0
  int v48; // [xsp+Ch] [xbp-64h] BYREF
  int v49; // [xsp+18h] [xbp-58h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-54h] BYREF

  v50 = treasureDeviceLevel;
  if ( (byte_4C2A6CF & 1) == 0 )
  {
    sub_1C2D490(&BattleInformationComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C2D490(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9265/*"NOBLEINFO_NP_PER"*/);
    sub_1C2D490(&StringLiteral_23146/*"rubyLabel"*/);
    sub_1C2D490(&StringLiteral_10594/*"PerLabel"*/);
    sub_1C2D490(&StringLiteral_8403/*"LevelLabel"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_9578/*"NpLevelBase"*/);
    sub_1C2D490(&StringLiteral_21377/*"mainLabel"*/);
    byte_4C2A6CF = 1;
  }
  v49 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
                                  (System_String_o *)StringLiteral_21377/*"mainLabel"*/,
                                  0,
                                  0);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v19 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_23146/*"rubyLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    v20 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v21 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v21, (System_String_o *)StringLiteral_8403/*"LevelLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v23 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v23, (System_String_o *)StringLiteral_10594/*"PerLabel"*/, 0, 0);
    if ( !Instance )
      goto LABEL_52;
    v24 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v25 = UnityEngine_GameObject__get_transform(v16, 0);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v25, (System_String_o *)StringLiteral_9578/*"NpLevelBase"*/, 0, 0);
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
        sub_1C2D6F4(v27, v28, v29);
      v32 = overrideTd->m_Items[1];
      if ( v32 )
        UILabel__set_text((UILabel_o *)v20, v32, 0);
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
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v50, 0);
    if ( !v22 )
      goto LABEL_52;
    if ( Instance )
      v33 = (System_String_o *)Instance;
    else
      v33 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v22, v33, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9265/*"NOBLEINFO_NP_PER"*/, 0);
    v48 = 100 * (treasureDevicePer / 100);
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v35, v36, v37);
    Instance = (DataManager_o *)System_String__Format(v34, v38, 0);
    if ( !v24 || (UILabel__set_text((UILabel_o *)v24, (System_String_o *)Instance, 0), !v26) )
LABEL_52:
      sub_1C2D6EC(Instance, v13);
    UnityEngine_GameObject__SetActive(v26, !isHideInfo, 0);
    if ( treasureDevicePer / 100 >= 5 )
      v39 = 5;
    else
      v39 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v39 = 1;
    v49 = v39;
    v40 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v41 = UnityEngine_GameObject__GetComponent_object_(
            v16,
            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0) )
    {
      v42 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v42 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v42->static_fields->NobleInfoAnimPrefix;
      v44 = System_Int32__ToString((int32_t)&v49, 0);
      Instance = (DataManager_o *)System_String__Concat_63457864(NobleInfoAnimPrefix, v44, 0);
      if ( v40 )
      {
        SimpleAnimation__Play_66404364((SimpleAnimation_o *)v40, (System_String_o *)Instance, 0);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0, 0) )
    {
      v45 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v45 = BattleInformationComponent_TypeInfo;
      }
      v46 = v45->static_fields->NobleInfoAnimPrefix;
      v47 = System_Int32__ToString((int32_t)&v49, 0);
      Instance = (DataManager_o *)System_String__Concat_63457864(v46, v47, 0);
      if ( !v41 )
        goto LABEL_52;
      UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v41, (System_String_o *)Instance, 0);
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
    sub_1C2D6EC(this, actionData);
  if ( !LODWORD(isAlreadyOverKill->max_length) )
    sub_1C2D6F4(this, actionData, method);
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
    sub_1C2D6EC(this, actionData);
  if ( LODWORD(isAlreadyOverKill->max_length) <= 1 )
    sub_1C2D6F4(this, actionData, method);
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
  __int64 v8; // x2
  UnityEngine_Vector2_o v9; // kr00_8
  UnityEngine_GameObject_o *v10; // x21
  float v11; // s0
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Object_o *v17; // x22
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v19; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v21; // s0
  struct System_Single_array *v22; // x8
  struct System_String_array *v23; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v25; // x8
  struct System_Boolean_array *v26; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v29; // x8

  v6 = this;
  if ( (byte_4C2A6DE & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20721/*"in"*/);
    this = (BattleInformationComponent_o *)sub_1C2D490(&StringLiteral_19466/*"flash"*/);
    byte_4C2A6DE = 1;
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
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v16 = v6->fields.overObjectList) == 0) )
  {
LABEL_72:
    sub_1C2D6EC(this, actionData);
  }
  if ( LODWORD(v16->max_length) <= inOverType )
    goto LABEL_73;
  v17 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v16->m_Items[inOverType];
  if ( !this )
    goto LABEL_72;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = (UnityEngine_Behaviour_o *)v17;
    if ( !v17 )
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
    v19 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_72;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v19, 0, 0);
    UnityEngine_Behaviour__set_enabled(v19, 1, 0);
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
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_72;
      if ( LODWORD(overLabel->max_length) <= inOverType )
        goto LABEL_73;
      this = (BattleInformationComponent_o *)System_String__Concat_63457864(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20721/*"in"*/,
                                               0);
      if ( !v17 )
        goto LABEL_72;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_66404364(
                                               (SimpleAnimation_o *)v17,
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
        v25 = v6->fields.overLabel;
        if ( !v25 )
          goto LABEL_72;
        if ( LODWORD(v25->max_length) <= inOverType )
          goto LABEL_73;
        this = (BattleInformationComponent_o *)System_String__Concat_63457864(
                                                 v25->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20721/*"in"*/,
                                                 0);
        if ( !Component_object )
          goto LABEL_72;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_70908988(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0);
      }
    }
    v26 = v6->fields.isAlreadyOverKill;
    if ( !v26 )
      goto LABEL_72;
    if ( LODWORD(v26->max_length) > inOverType )
    {
      v26->m_Items[inOverType] = 1;
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
    sub_1C2D6F4(this, actionData, v8);
  }
  v21 = UnityEngine_Time__get_time(0);
  v22 = v6->fields.timeStartOverKill;
  if ( !v22 )
    goto LABEL_72;
  if ( LODWORD(v22->max_length) <= inOverType )
    goto LABEL_73;
  if ( (float)(v21 - v22->m_Items[inOverType]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = v6->fields.overLabel;
    if ( !v23 )
      goto LABEL_72;
    if ( LODWORD(v23->max_length) > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_63457864(
                                               v23->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19466/*"flash"*/,
                                               0);
      if ( !v17 )
        goto LABEL_72;
      SimpleAnimation__Play_66404364((SimpleAnimation_o *)v17, (System_String_o *)this, 0);
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
  v29 = v6->fields.overLabel;
  if ( !v29 )
    goto LABEL_72;
  if ( LODWORD(v29->max_length) <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)System_String__Concat_63457864(
                                           v29->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19466/*"flash"*/,
                                           0);
  if ( !Component_object )
    goto LABEL_72;
  UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0);
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

  if ( (byte_4C2A6D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A6D6 = 1;
  }
  entity = 0;
  if ( !message || message->fields._stringLength < 1 )
    return 0;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                            skillInfo,
                            skillInfo->klass->vtable._5_get_skillId.method);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v12,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
    sub_1C2D6EC(v12, v13);
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

  if ( (byte_4C2A6D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C2D490(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A6D8 = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
    sub_1C2D6EC(Instance, v6);
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
  __int64 v7; // x2
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v9; // x20
  __int64 v10; // x22
  UILabel_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4C2A6CE & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_21228/*"line1"*/);
    sub_1C2D490(&StringLiteral_14557/*"Total {0:#,0}"*/);
    this = (BattleInformationComponent_o *)sub_1C2D490(&StringLiteral_21229/*"line2"*/);
    byte_4C2A6CE = 1;
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
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v9 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= m_CancellationTokenSource )
            sub_1C2D6F4(this, actionData, v7);
          v11 = (UILabel_o *)*((_QWORD *)&v9->fields.perf + v10);
          if ( !v11 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v9->fields.perf + v10),
                                                   0);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          if ( !this )
            break;
          if ( System_String__Equals_63493168((System_String_o *)this, (System_String_o *)StringLiteral_21228/*"line1"*/, 0) )
          {
            v17 = v6;
            v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v12, v13, v14);
            v16 = System_String__Format((System_String_o *)StringLiteral_14557/*"Total {0:#,0}"*/, v15, 0);
            UILabel__set_text(v11, v16, 0);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v11,
                                                     0);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_63493168(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21229/*"line2"*/,
                                                     0);
          }
          m_CancellationTokenSource = (int)v9->fields.m_CancellationTokenSource;
          if ( (int)++v10 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1C2D6EC(this, actionData);
      }
    }
  }
}