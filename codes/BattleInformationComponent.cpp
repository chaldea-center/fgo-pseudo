void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B05215 & 1) == 0 )
  {
    sub_1BC3008(&BattleInformationComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_9427/*"NobleLevel"*/, v4);
    byte_4B05215 = 1;
  }
  BattleInformationComponent_TypeInfo->static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9427/*"NobleLevel"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleInformationComponent_TypeInfo->static_fields, StringLiteral_9427/*"NobleLevel"*/, v2, v3);
}


void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  __int64 v23; // x20
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct UnityEngine_GameObject_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Boolean_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Single_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  __int64 v39; // x20
  int v40; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  System_Collections_Generic_List_object__o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  __int64 v47; // x20
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  if ( (byte_4B05214 & 1) == 0 )
  {
    sub_1BC3008(&BaseBattleInfoPosData_TypeInfo, method);
    sub_1BC3008(&bool___TypeInfo, v3);
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1BC3008(&float___TypeInfo, v7);
    sub_1BC3008(&string___TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Vector3___TypeInfo, v9);
    sub_1BC3008(&StringLiteral_24961/*"{0}th Attack"*/, v10);
    sub_1BC3008(&StringLiteral_1393/*"3rd Attack"*/, v11);
    sub_1BC3008(&StringLiteral_22302/*"overkill_"*/, v12);
    sub_1BC3008(&StringLiteral_1307/*"1st Attack"*/, v13);
    sub_1BC3008(&StringLiteral_1367/*"2nd Attack"*/, v14);
    sub_1BC3008(&StringLiteral_22301/*"overgauge_"*/, v15);
    byte_4B05214 = 1;
  }
  v16 = (Il2CppObject *)sub_1BC3254(BaseBattleInfoPosData_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields.infoPosData = (struct BaseBattleInfoPosData_o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.infoPosData, (int32_t)v16, v17, v18);
  v19 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !v19 )
    goto LABEL_18;
  v23 = v19;
  if ( !*(_DWORD *)(v19 + 24)
    || (v24 = StringLiteral_22302/*"overkill_"*/,
        *(_QWORD *)(v19 + 32) = StringLiteral_22302/*"overkill_"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 32), v24, v21, v22),
        *(_DWORD *)(v23 + 24) <= 1u) )
  {
LABEL_17:
    sub_1BC326C(v19, v20, v21);
  }
  v26 = StringLiteral_22301/*"overgauge_"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_22301/*"overgauge_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 40), v26, v21, v25);
  this->fields.overLabel = (struct System_String_array *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.overLabel, v23, v27, v28);
  v29 = (struct UnityEngine_GameObject_array *)sub_1BC30B0(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.overObjectList = v29;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.overObjectList, (int32_t)v29, v30, v31);
  v32 = (struct System_Boolean_array *)sub_1BC30B0(bool___TypeInfo, 2LL);
  this->fields.isAlreadyOverKill = v32;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.isAlreadyOverKill, (int32_t)v32, v33, v34);
  v35 = (struct System_Single_array *)sub_1BC30B0(float___TypeInfo, 2LL);
  this->fields.timeStartOverKill = v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.timeStartOverKill, (int32_t)v35, v36, v37);
  v19 = sub_1BC30B0(UnityEngine_Vector3___TypeInfo, 2LL);
  v39 = v19;
  if ( !byte_4AFBDB1 )
  {
    v19 = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v20);
    byte_4AFBDB1 = 1;
  }
  if ( !v39 )
LABEL_18:
    sub_1BC3264(v19, v20);
  v40 = *(_DWORD *)(v39 + 24);
  if ( !v40 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v39 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v39 + 40) = z;
  if ( v40 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v39 + 52) = 0;
  *(_QWORD *)(v39 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v39;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.showPositions, v39, v21, v38);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v43;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.motionMessageObjList, (int32_t)v43, v44, v45);
  v19 = sub_1BC30B0(string___TypeInfo, 4LL);
  if ( !v19 )
    goto LABEL_18;
  v47 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_17;
  v48 = StringLiteral_1307/*"1st Attack"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_1307/*"1st Attack"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 32), v48, v21, v46);
  if ( *(_DWORD *)(v47 + 24) <= 1u )
    goto LABEL_17;
  v50 = StringLiteral_1367/*"2nd Attack"*/;
  *(_QWORD *)(v47 + 40) = StringLiteral_1367/*"2nd Attack"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 40), v50, v21, v49);
  if ( *(_DWORD *)(v47 + 24) <= 2u )
    goto LABEL_17;
  v52 = StringLiteral_1393/*"3rd Attack"*/;
  *(_QWORD *)(v47 + 48) = StringLiteral_1393/*"3rd Attack"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 48), v52, v21, v51);
  if ( *(_DWORD *)(v47 + 24) <= 3u )
    goto LABEL_17;
  v54 = StringLiteral_24961/*"{0}th Attack"*/;
  *(_QWORD *)(v47 + 56) = StringLiteral_24961/*"{0}th Attack"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 56), v54, v21, v53);
  this->fields.attackCount = (struct System_String_array *)v47;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.attackCount, v47, v55, v56);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleInformationComponent__AddMotionMessageObject(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4B0520F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B0520F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  BattleInformationComponent__DestroyDisplayingMessage(this, v6, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
    if ( !motionMessageObjList
      || (items = motionMessageObjList->fields._items,
          v13 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++motionMessageObjList->fields._version,
          !items) )
    {
      sub_1BC3264(motionMessageObjList, v8);
    }
    size = motionMessageObjList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        motionMessageObjList,
        (Il2CppObject *)obj,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      motionMessageObjList->fields._size = size + 1;
      v15[4] = (Il2CppClass *)obj;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)obj, v9, v10);
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

  if ( (byte_4B05210 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, messages);
    byte_4B05210 = 1;
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
        sub_1BC3264(v10, v11);
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
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *MessageObjectAssetName; // x21
  __int64 v11; // x22
  _QWORD *EffectAssetName; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  BattleInformationComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v21; // x4

  if ( (byte_4B05200 & 1) == 0 )
  {
    sub_1BC3008(&BattleDataDefine_TypeInfo, messages);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v8);
    this = (BattleInformationComponent_o *)sub_1BC3008(&string___TypeInfo, v9);
    byte_4B05200 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v11 = sub_1BC30B0(string___TypeInfo, 2LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v11 )
    sub_1BC3264(EffectAssetName, v13);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v11 + 32) = EffectAssetName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)EffectAssetName, v14, v15);
  EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = &BattleDataDefine_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v11 + 24) <= 1u )
LABEL_11:
    sub_1BC326C(EffectAssetName, v13, v14);
  v17 = *(_QWORD *)(EffectAssetName[23] + 40LL);
  *(_QWORD *)(v11 + 40) = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 40), v17, v14, v16);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v18,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v11,
                                                   v19);
  return BattleInformationComponent__CreateBattleMessageObject_46000032(
           TargetPrefab,
           messages,
           (UnityEngine_GameObject_o *)TargetPrefab,
           parentTransform,
           v21);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_46000032(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x22
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B05201 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___, messages);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B05201 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object__50900816(
            (Il2CppObject *)msgPrefab,
            parentTransform,
            (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
    if ( !v11 )
      goto LABEL_13;
    v10 = (UnityEngine_GameObject_o *)v11;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v11,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v11 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      if ( Component_object )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_object,
          messages,
          v14);
        return v10;
      }
LABEL_13:
      sub_1BC3264(v11, v12);
    }
  }
  return v10;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleInformationComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v15; // x20
  System_String_o *MessageObjectAssetName; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  BattleDataDefine_c *v19; // x8
  BattleLogic_o *v20; // x22
  struct System_String_o *ASSET_BATTLE_COMMON; // x1
  BattleInformationComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  BattleInformationComponent_o *TargetPrefab; // x0
  const MethodInfo *v25; // x4
  UnityEngine_GameObject_o *v26; // x19

  if ( (byte_4B051FF & 1) == 0 )
  {
    sub_1BC3008(&BattleDataDefine_TypeInfo, message);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___, v9);
    sub_1BC3008(&string___TypeInfo, v10);
    byte_4B051FF = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v12 = (BattleInformationComponent_o *)sub_1BC30B0(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_15;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, 0LL);
    if ( !logic )
      goto LABEL_15;
    v12 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v15 = (System_String_array *)v12;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v12, 0, v13);
  logic = (BattleLogic_o *)sub_1BC30B0(string___TypeInfo, 1LL);
  v19 = BattleDataDefine_TypeInfo;
  v20 = logic;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v19 = BattleDataDefine_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_15;
  if ( !LODWORD(v20->fields.m_CancellationTokenSource) )
    sub_1BC326C(logic, v11, v17);
  ASSET_BATTLE_COMMON = v19->static_fields->ASSET_BATTLE_COMMON;
  v20->fields.fsm = (struct PlayMakerFSM_o *)ASSET_BATTLE_COMMON;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v20->fields.fsm, (int32_t)ASSET_BATTLE_COMMON, v17, v18);
  TargetPrefab = (BattleInformationComponent_o *)BattleInformationComponent__GetTargetPrefab(
                                                   v22,
                                                   MessageObjectAssetName,
                                                   (System_String_array *)v20,
                                                   v23);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_46000032(
                             TargetPrefab,
                             v15,
                             (UnityEngine_GameObject_o *)TargetPrefab,
                             parentTransform,
                             v25);
  if ( !logic
    || (v26 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_object_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_15:
    sub_1BC3264(logic, v11);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v26;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultSkillMessageObject(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        bool showSkillSprite,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x8
  UnityEngine_GameObject_o *Object; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x19
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4B05202 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, isPlayer);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B05202 = 1;
  }
  v10 = 136LL;
  if ( isPlayer )
    v10 = 128LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_15;
  v13 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         Object,
                                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_15;
  v15 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v14);
  if ( !showSkillSprite )
  {
    klass = (UnityEngine_Object_o *)v15[3].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      Object = (UnityEngine_GameObject_o *)v15[3].klass;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v13;
        }
      }
LABEL_15:
      sub_1BC3264(Object, v12);
    }
  }
  return v13;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v17; // x19
  Il2CppObject *v18; // x0
  UnityEngine_Component_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *klass; // x21
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = skillLevel;
  if ( (byte_4B05203 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      *(_QWORD *)&overWriteSkillInfoId);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_2863/*"BATTLE_SKILL_NAME_LEVEL"*/, v13);
    byte_4B05203 = 1;
  }
  v14 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v14;
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
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&v24, 0LL);
        message = System_String__Format_62389940(v17, (Il2CppObject *)message, v18, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 message,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_13:
      v14 = Object;
      break;
    default:
      break;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_29;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v14,
                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
            return v14;
          }
        }
LABEL_29:
        sub_1BC3264(gameObject, v20);
      }
    }
  }
  return v14;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B05212 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05212 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_15;
    v6 = BattlePerformance__GetExBattleUiSkillSkipPosAdjust(perf, 0LL);
    perf = (BattlePerformance_o *)this->fields.infoPosData;
    if ( !perf )
      goto LABEL_15;
    v7 = this->fields.skillSkipRoot;
    v18.fields.x = v6.fields.x
                 + ((float (__fastcall *)(BattlePerformance_o *, const char *))perf->klass[1]._1.gc_desc)(
                     perf,
                     perf->klass[1]._1.name);
    v18.fields.y = v6.fields.y + v8;
    v18.fields.z = v9 + 0.0;
    GameObjectExtensions__SetLocalPosition(v7, v18, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v10);
    perf = (BattlePerformance_o *)this->fields.skillSkipRoot;
    if ( !perf )
      goto LABEL_15;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    this->fields.skillSkipObj = Object;
    p_skillSkipObj = &this->fields.skillSkipObj;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_skillSkipObj, (int32_t)Object, v15, v16);
    v17 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      perf = (BattlePerformance_o *)*p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, 1, 0LL);
        return;
      }
LABEL_15:
      sub_1BC3264(perf, v4);
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B05213 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05213 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = (CGThumbnailListItem_o *)&this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_skillSkipObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(klass, 0LL);
    p_skillSkipObj->klass = 0LL;
    sub_1BC2FAC(p_skillSkipObj, 0, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        bool isDisplayNextMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *motionMessageObjList; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  __int64 v15; // x8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B0520A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, isDisplayNextMessage);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B0520A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    motionMessageObjList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.motionMessageObjList;
  if ( !v12 )
    goto LABEL_21;
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
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
    BattleMultiMessageDisplay__ReleaseMessage_46024084(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
    motionMessageObjList = (System_Collections_Generic_List_object__o *)this->fields.perf;
    if ( motionMessageObjList )
    {
      BattlePerformance__DestroySkillCutInMessage((BattlePerformance_o *)motionMessageObjList, 0LL);
      return;
    }
LABEL_21:
    sub_1BC3264(motionMessageObjList, isDisplayNextMessage);
  }
  v15 = *(_QWORD *)&motionMessageObjList->fields._size;
  if ( !v15 || !*(_BYTE *)(v15 + 21) )
    BattleMultiMessageDisplay__ReleaseMessage_46024084(
      (BattleMultiMessageDisplay_o *)motionMessageObjList,
      (const MethodInfo *)isDisplayNextMessage);
}


void __fastcall BattleInformationComponent__DestroyNonMotionMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nonMotionMessageObject; // x20
  CGThumbnailListItem_o *p_nonMotionMessageObject; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B0520B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0520B = 1;
  }
  nonMotionMessageObject = (UnityEngine_Object_o *)this->fields.nonMotionMessageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nonMotionMessageObject, 0LL, 0LL) )
  {
    p_nonMotionMessageObject = (CGThumbnailListItem_o *)&this->fields.nonMotionMessageObject;
    klass = (UnityEngine_Object_o *)p_nonMotionMessageObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(klass, 0LL);
    p_nonMotionMessageObject->klass = 0LL;
    sub_1BC2FAC(p_nonMotionMessageObject, 0, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B051FE & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&messageType);
    sub_1BC3008(&StringLiteral_16946/*"battle_message_{0}"*/, v6);
    byte_4B051FE = 1;
  }
  v9 = messageType;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_16946/*"battle_message_{0}"*/, v7, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  System_String_o *v10; // x21
  Il2CppObject *Object_object__50213776; // x21

  if ( (byte_4B05211 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, prefabName);
    sub_1BC3008(&AssetManager_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B05211 = 1;
  }
  if ( !assetNames )
    goto LABEL_18;
  v8 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1BC326C(this, prefabName, assetNames);
      v10 = assetNames->m_Items[v9];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v10, 0LL);
      if ( !this )
        break;
      Object_object__50213776 = AssetData__GetObject_object__50213776(
                                  (AssetData_o *)this,
                                  prefabName,
                                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Object_object__50213776,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v8) = assetNames->max_length;
        if ( (__int64)++v9 < (int)v8 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_object__50213776;
    }
LABEL_18:
    sub_1BC3264(this, prefabName);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v20; // x1
  UnityEngine_GameObject_o *overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v29; // x20
  struct UnityEngine_GameObject_array *v30; // x21
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_Transform_o *v32; // x0
  const MethodInfo *v33; // x3
  struct UnityEngine_GameObject_array *v34; // x8
  struct System_Boolean_array *v35; // x8
  struct System_Single_array *v36; // x8
  Il2CppObject *Object_object__50213776; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8

  if ( (byte_4B051F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, inperf);
    sub_1BC3008(&AssetManager_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_18672/*"ef_overgauge01"*/, v11);
    sub_1BC3008(&StringLiteral_3066/*"Battle/Common"*/, v12);
    sub_1BC3008(&StringLiteral_18679/*"ef_skillskip"*/, v13);
    sub_1BC3008(&StringLiteral_18728/*"effect/ef_overkill01"*/, v14);
    byte_4B051F9 = 1;
  }
  this->fields.perf = inperf;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (const MethodInfo *)inlogic);
  this->fields.data = indata;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)indata, v15, v16);
  this->fields.logic = inlogic;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)inlogic, v17, v18);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    overRoot = this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(overRoot, 0, 0LL);
  }
  overRoot = this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform(overRoot, 0LL),
        overRoot = BaseMonoBehaviour__createObject_40210276(
                     (BaseMonoBehaviour_o *)this,
                     (System_String_o *)StringLiteral_18728/*"effect/ef_overkill01"*/,
                     transform,
                     0LL,
                     0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_38:
    sub_1BC3264(overRoot, v20);
  }
  if ( !overObjectList->max_length )
    goto LABEL_39;
  overObjectList->m_Items[0] = overRoot;
  sub_1BC2FAC((CGThumbnailListItem_o *)overObjectList->m_Items, (int32_t)overRoot, v23, v24);
  v26 = this->fields.overObjectList;
  if ( !v26 )
    goto LABEL_38;
  if ( !v26->max_length )
    goto LABEL_39;
  overRoot = v26->m_Items[0];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0LL);
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
  overRoot = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3066/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_38;
  v29 = (AssetData_o *)overRoot;
  overRoot = (UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                           (AssetData_o *)overRoot,
                                           (System_String_o *)StringLiteral_18672/*"ef_overgauge01"*/,
                                           (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !this->fields.overRoot )
    goto LABEL_38;
  v30 = this->fields.overObjectList;
  v31 = overRoot;
  v32 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v31, v32, 0LL, 0LL);
  if ( !v30 )
    goto LABEL_38;
  if ( v30->max_length <= 1 )
    goto LABEL_39;
  v30->m_Items[1] = overRoot;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v30->m_Items[1], (int32_t)overRoot, v23, v33);
  v34 = this->fields.overObjectList;
  if ( !v34 )
    goto LABEL_38;
  if ( v34->max_length <= 1 )
    goto LABEL_39;
  overRoot = v34->m_Items[1];
  if ( !overRoot )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(overRoot, 0, 0LL);
  v35 = this->fields.isAlreadyOverKill;
  if ( !v35 )
    goto LABEL_38;
  if ( v35->max_length <= 1 )
    goto LABEL_39;
  v35->m_Items[5] = 0;
  v36 = this->fields.timeStartOverKill;
  if ( !v36 )
    goto LABEL_38;
  if ( v36->max_length <= 1 )
LABEL_39:
    sub_1BC326C(overRoot, v20, v23);
  v36->m_Items[2] = 0.0;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              v29,
                              (System_String_o *)StringLiteral_18679/*"ef_skillskip"*/,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)Object_object__50213776;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillSkipPrefab, (int32_t)Object_object__50213776, v38, v39);
  GameObjectExtensions__SafeSetParent_35217712(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  overRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL);
  if ( ((unsigned __int8)overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (UnityEngine_GameObject_o *)this->fields.fieldParam;
      if ( overRoot )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, struct BattleFieldEnvironmentData_o *, const char *))overRoot->klass[1]._1.gc_desc)(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          overRoot->klass[1]._1.name);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v7; // x1
  BattleFieldParamComponent_o *v8; // x0

  if ( (byte_4B051FA & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B051FA = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.infoPosData, (int32_t)BattleInfoPosData, v4, v5);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v8 = this->fields.fieldParam;
    if ( !v8 )
      sub_1BC3264(0LL, v7);
    BattleFieldParamComponent__UpdateView(v8, v7);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  int v6; // w20
  __int64 v7; // x20
  __int64 v8; // x0
  __int128 v9; // q0
  __int64 v10; // d1

  if ( (byte_4B051FB & 1) == 0 )
  {
    sub_1BC3008(&NormalRaidTypeBossBattleInfoPosData_TypeInfo, method);
    sub_1BC3008(&PosCountNormalBattleInfoPosData_TypeInfo, v3);
    sub_1BC3008(&PosCountSpBattleInfoPosData_TypeInfo, v4);
    byte_4B051FB = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v6 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v8 = sub_1BC3254(PosCountSpBattleInfoPosData_TypeInfo);
    v9 = xmmword_BDE7B0;
    v10 = 1127153664LL;
    goto LABEL_13;
  }
  if ( v6 )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getStageEntity(data, 0LL);
      if ( data )
      {
        if ( StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
          goto LABEL_10;
        v8 = sub_1BC3254(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
        v9 = xmmword_BDEC30;
        v10 = 1112801280LL;
LABEL_13:
        v7 = v8;
        *(_OWORD *)(v8 + 24) = v9;
        *(_QWORD *)(v8 + 40) = v10;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1BC3264(data, method);
  }
LABEL_10:
  v7 = sub_1BC3254(PosCountNormalBattleInfoPosData_TypeInfo);
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 24) = 0x43070000C3FA0000LL;
LABEL_14:
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  (*(void (__fastcall **)(__int64, struct BattlePerformance_o *, _QWORD))(*(_QWORD *)v7 + 424LL))(
    v7,
    this->fields.perf,
    *(_QWORD *)(*(_QWORD *)v7 + 432LL));
  return (BaseBattleInfoPosData_o *)v7;
}


void __fastcall BattleInformationComponent__OverwriteMessageDisplayTime(
        BattleInformationComponent_o *this,
        UnityEngine_GameObject_o *obj,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *SkillMessageDisplayTime; // x0
  __int64 v8; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF
  float time; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B05208 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, obj);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B05208 = 1;
  }
  time = 0.0;
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SkillMessageDisplayTime = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( ((unsigned __int8)SkillMessageDisplayTime & 1) == 0 )
  {
    if ( !actionData )
      goto LABEL_14;
    SkillMessageDisplayTime = (Il2CppObject *)BattleActionData__TryGetSkillMessageDisplayTime(actionData, &time, 0LL);
    if ( ((unsigned __int8)SkillMessageDisplayTime & 1) == 0 )
      return;
    if ( !obj )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            obj,
            &component,
            (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      return;
    SkillMessageDisplayTime = component;
    if ( !component
      || (CommonEffectComponent__SetTime((CommonEffectComponent_o *)component, time, 0.0, 0LL), !component) )
    {
LABEL_14:
      sub_1BC3264(SkillMessageDisplayTime, v8);
    }
    BYTE1(component[12].monitor) = 1;
  }
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
    sub_1BC3264(this, actionData);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t type; // w21
  int32_t v15; // w23
  BattleInformationComponent_o *v16; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  __int64 v19; // x4
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  BattleInfoMessageComponent_o *v22; // x22
  System_String_o *v23; // x24
  Il2CppObject *v24; // x0
  BattleInformationComponent_o *v25; // x8
  __int64 *v26; // x8
  System_String_o *v27; // x2
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v31; // x3
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4B05209 & 1) == 0 )
  {
    sub_1BC3008(&BattleCommand_TypeInfo, actionData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_3224/*"Buster!"*/, v9);
    sub_1BC3008(&StringLiteral_10849/*"Quick!"*/, v10);
    sub_1BC3008(&StringLiteral_2349/*"Arts!"*/, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    this = (BattleInformationComponent_o *)sub_1BC3008(&StringLiteral_6327/*"Extra!"*/, v13);
    byte_4B05209 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  type = v3->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  v15 = BattleCommand__getType(type, 0LL);
  this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           v4->fields.playerAttackInfoPrefab,
                                           v4->fields.attackMessageRoot,
                                           0LL,
                                           0LL);
  if ( !this )
    goto LABEL_40;
  v16 = this;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  actionIndex = v3->fields.actionIndex;
  attackCount = v4->fields.attackCount;
  v22 = (BattleInfoMessageComponent_o *)this;
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
    sub_1BC326C(this, actionData, v17);
  }
  if ( !attackCount )
    goto LABEL_40;
  if ( attackCount->max_length <= 3 )
    goto LABEL_41;
  v23 = attackCount->m_Items[3];
  v33 = actionIndex + 1;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v17, v18, v19);
  this = (BattleInformationComponent_o *)System_String__Format(v23, v24, 0LL);
  actionData = (BattleActionData_o *)this;
LABEL_14:
  if ( v15 == 3 )
    v25 = 0LL;
  else
    v25 = v16;
  if ( v15 == 3 )
  {
    v26 = &StringLiteral_10849/*"Quick!"*/;
    goto LABEL_22;
  }
  if ( v15 == 2 )
  {
    v27 = (System_String_o *)StringLiteral_3224/*"Buster!"*/;
    goto LABEL_28;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 4 )
      v27 = (System_String_o *)StringLiteral_6327/*"Extra!"*/;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
    v16 = v25;
    if ( !v22 )
      goto LABEL_40;
    goto LABEL_29;
  }
  v26 = &StringLiteral_2349/*"Arts!"*/;
LABEL_22:
  v27 = (System_String_o *)*v26;
  if ( !v22 )
    goto LABEL_40;
LABEL_29:
  BattleInfoMessageComponent__setText_45994216(v22, (System_String_o *)actionData, v27, v18);
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
        v22,
        (UnityEngine_GameObject_o *)BattleCommandCardObject,
        ServantData,
        v31);
      if ( BattleCommandCardObject )
      {
        this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( this )
        {
          BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
          goto LABEL_38;
        }
      }
    }
LABEL_40:
    sub_1BC3264(this, actionData);
  }
LABEL_38:
  if ( !v16 )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  return (UnityEngine_GameObject_o *)v16;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__ShowMotionMessage(
        BattleInformationComponent_o *this,
        System_String_o *motionMessage,
        int32_t actorId,
        int32_t messageType,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x8
  int32_t size; // w2
  int v24; // w9
  bool HasRubyFormat; // w24
  const MethodInfo *v26; // x3
  BattleInformationComponent_o *v27; // x23
  BattleInformationComponent_o *v28; // x21
  const MethodInfo *v29; // x2
  bool isPlayerID; // w0
  const MethodInfo *v31; // x4
  BattleEffectUtility_c *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x20
  __int64 v36; // x2
  AssetData_o *v37; // x20
  Il2CppObject *Object_object__50213776; // x20
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4B0520E & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, motionMessage);
    sub_1BC3008(&AssetManager_TypeInfo, v9);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v14);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v18);
    sub_1BC3008(&StringLiteral_16957/*"battle_states_popup"*/, v19);
    this = (BattleInformationComponent_o *)sub_1BC3008(&StringLiteral_3071/*"Battle/Effect/"*/, v20);
    byte_4B0520E = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !motionMessage )
    goto LABEL_44;
  if ( motionMessage->fields._stringLength < 1 )
    return 0LL;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v40.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = v8->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_44;
  size = motionMessageObjList->fields._size;
  v24 = motionMessageObjList->fields._version + 1;
  motionMessageObjList->fields._size = 0;
  motionMessageObjList->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)motionMessageObjList->fields._items, 0, size, 0LL);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, 0x3Au, 0, 0LL);
  if ( HasRubyFormat )
    goto LABEL_17;
  v27 = this;
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
                                               v31);
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
          v28 = this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v29);
LABEL_28:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, 1, 0LL);
            return (UnityEngine_GameObject_o *)v28;
          }
        }
LABEL_44:
        sub_1BC3264(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v26);
      if ( !this )
        goto LABEL_44;
    }
    v28 = this;
    goto LABEL_28;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_44;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v33 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v33 = BattleEffectUtility_TypeInfo;
  }
  v34 = System_Int32__ToString((unsigned int)v33->static_fields + 24, 0LL);
  v35 = System_String__Concat_62348648((System_String_o *)StringLiteral_3071/*"Battle/Effect/"*/, v34, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v35, 0LL);
  if ( !LODWORD(v27->fields.m_CancellationTokenSource) )
LABEL_45:
    sub_1BC326C(this, motionMessage, v36);
  v37 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_62348648(
                                           (System_String_o *)StringLiteral_16957/*"battle_states_popup"*/,
                                           (System_String_o *)v27->fields.perf,
                                           0LL);
  if ( !v37 )
    goto LABEL_44;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              v37,
                              (System_String_o *)this,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50213776, 0LL, 0LL) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             (UnityEngine_GameObject_o *)Object_object__50213776,
                                             v8->fields.commonMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_44;
    v28 = this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v27->fields.m_CancellationTokenSource) > 1 )
    {
      if ( this )
      {
        EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v27->fields.data, 0LL);
        goto LABEL_28;
      }
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  return (UnityEngine_GameObject_o *)v28;
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
  GameObjectExtensions__SafeSetParent_35217712(this->fields.overRoot, fsOffsetRoot, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x21
  Il2CppObject *Component_object; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v14; // x0
  struct System_String_array *v15; // x8
  System_String_o *v16; // x0
  struct System_Boolean_array *v17; // x8

  v4 = this;
  if ( (byte_4B0520D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&type);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_1BC3008(&StringLiteral_22283/*"out"*/, v7);
    byte_4B0520D = 1;
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
                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v10 = v4->fields.overObjectList;
  if ( !v10 )
    goto LABEL_30;
  if ( v10->max_length <= type )
    goto LABEL_31;
  v11 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v10->m_Items[type];
  if ( !this )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_31;
        v14 = System_String__Concat_62348648(overLabel->m_Items[type], (System_String_o *)StringLiteral_22283/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_65293968((SimpleAnimation_o *)v11, v14, 0LL);
        goto LABEL_26;
      }
    }
LABEL_30:
    sub_1BC3264(this, *(_QWORD *)&type);
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
  v15 = v4->fields.overLabel;
  if ( !v15 )
    goto LABEL_30;
  if ( v15->max_length <= type )
    goto LABEL_31;
  v16 = System_String__Concat_62348648(v15->m_Items[type], (System_String_o *)StringLiteral_22283/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_69779584(
                                           (UnityEngine_Animation_o *)Component_object,
                                           v16,
                                           0LL);
LABEL_26:
  v17 = v4->fields.isAlreadyOverKill;
  if ( !v17 )
    goto LABEL_30;
  if ( v17->max_length <= type )
LABEL_31:
    sub_1BC326C(this, *(_QWORD *)&type, method);
  v17->m_Items[type + 4] = 0;
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
    sub_1BC3264(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
LABEL_9:
    sub_1BC326C(this, *(_QWORD *)&type, *(_QWORD *)&zureIndex);
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&showPositions->m_Items[zureIndex].fields.y,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showBoostSkillName(
        BattleInformationComponent_o *this,
        int32_t imageId,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  BattleInfoMessageComponent_o *v17; // x22
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v20; // x0
  BattleActionData_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4B05205 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, *(_QWORD *)&imageId);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_18711/*"effect/ef_boostitem01"*/, v9);
    byte_4B05205 = 1;
  }
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  v10 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18711/*"effect/ef_boostitem01"*/, 0LL);
  v11 = (UnityEngine_GameObject_o *)v10;
  if ( !v10 || (UnityEngine_GameObject_c *)v10->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v11,
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
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_1BC3264(Component_object, v15);
      }
      v17 = (BattleInfoMessageComponent_o *)Component_object;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v16);
      BattleInfoMessageComponent__setItemSprite(v17, imageId, 0, v18);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  sub_1BC3524(v10);
  BattleInformationComponent__showSpecialName(v20, v21, v22);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
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
  if ( (byte_4B05207 & 1) == 0 )
  {
    this = (BattleInformationComponent_o *)sub_1BC3008(&BattleCommand_TypeInfo, actionData);
    byte_4B05207 = 1;
  }
  if ( !actionData )
    goto LABEL_34;
  if ( actionData->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyNonMotionMessage(v4, (const MethodInfo *)actionData);
  type = actionData->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isShowCommandAction(type, 0LL) )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_34;
    if ( BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL) && !actionData->fields.isCounter )
    {
      v14 = BattleInformationComponent__ShowCommandCardMessage(v4, actionData, v7);
      v4->fields.nonMotionMessageObject = v14;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.nonMotionMessageObject, (int32_t)v14, v15, v16);
      goto LABEL_23;
    }
  }
  motionMessage = actionData->fields.motionMessage;
  if ( !motionMessage )
  {
    this = (BattleInformationComponent_o *)BattleActionData__IsGimmick(actionData, 0LL);
    v10 = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_24;
    this = (BattleInformationComponent_o *)BattleActionData__isSkill(actionData, 0LL);
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
          isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
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
    this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(actionData, 0LL);
    v10 = 0LL;
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
          v26 = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
          skillMessage = actionData->fields.skillMessage;
          v21 = actionData->fields.skillInfo;
          v22 = v26;
          v23 = v4;
          v24 = 0;
          goto LABEL_28;
        }
      }
LABEL_34:
      sub_1BC3264(this, actionData);
    }
LABEL_23:
    v10 = 0LL;
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


void __fastcall BattleInformationComponent__showCommonMessage_46008472(
        BattleInformationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__showNoblePhantasmInfo(
        BattleInformationComponent_o *this,
        int32_t tresureDeviceId,
        int32_t treasureDeviceLevel,
        int32_t treasureDevicePer,
        bool isHideInfo,
        System_String_array *overrideTd,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v31; // x26
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *v35; // x0
  Il2CppObject *v36; // x28
  UnityEngine_Transform_o *v37; // x0
  Il2CppObject *v38; // x27
  UnityEngine_Transform_o *v39; // x0
  Il2CppObject *v40; // x24
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x25
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *monitor; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v48; // x1
  System_String_o *v49; // x1
  System_String_o *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  int v55; // w8
  Il2CppObject *v56; // x20
  Il2CppObject *v57; // x19
  BattleInformationComponent_c *v58; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v60; // x0
  BattleInformationComponent_c *v61; // x0
  System_String_o *v62; // x20
  System_String_o *v63; // x0
  int v64; // [xsp+Ch] [xbp-64h] BYREF
  int v65; // [xsp+18h] [xbp-58h] BYREF
  int32_t v66; // [xsp+1Ch] [xbp-54h] BYREF

  v66 = treasureDeviceLevel;
  if ( (byte_4B051FD & 1) == 0 )
  {
    sub_1BC3008(&BattleInformationComponent_TypeInfo, *(_QWORD *)&tresureDeviceId);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UILabel___, v12);
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v13);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v16);
    sub_1BC3008(&int_TypeInfo, v17);
    sub_1BC3008(&LocalizationManager_TypeInfo, v18);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BC3008(&StringLiteral_9190/*"NOBLEINFO_NP_PER"*/, v21);
    sub_1BC3008(&StringLiteral_22939/*"rubyLabel"*/, v22);
    sub_1BC3008(&StringLiteral_10508/*"PerLabel"*/, v23);
    sub_1BC3008(&StringLiteral_8330/*"LevelLabel"*/, v24);
    sub_1BC3008(&StringLiteral_1/*""*/, v25);
    sub_1BC3008(&StringLiteral_9498/*"NpLevelBase"*/, v26);
    sub_1BC3008(&StringLiteral_21182/*"mainLabel"*/, v27);
    byte_4B051FD = 1;
  }
  v65 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v31 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    v32 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_21182/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v35 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v35, (System_String_o *)StringLiteral_22939/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v36 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v37 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v37, (System_String_o *)StringLiteral_8330/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v38 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v39 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v39, (System_String_o *)StringLiteral_10508/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    v40 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v41 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v41, (System_String_o *)StringLiteral_9498/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_52;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v36 )
      goto LABEL_52;
    v42 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v36, (System_String_o *)v31[2].klass, 0LL);
    monitor = (System_String_o *)v31[1].monitor;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_53;
      if ( overrideTd->m_Items[0] )
        monitor = overrideTd->m_Items[0];
      if ( max_length == 1 )
LABEL_53:
        sub_1BC326C(v43, v44, v45);
      v48 = overrideTd->m_Items[1];
      if ( v48 )
        UILabel__set_text((UILabel_o *)v36, v48, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(monitor, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v32, 0LL);
      if ( !Instance )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_object )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)Component_object, monitor, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v66, 0LL);
    if ( !v38 )
      goto LABEL_52;
    if ( Instance )
      v49 = (System_String_o *)Instance;
    else
      v49 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v38, v49, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9190/*"NOBLEINFO_NP_PER"*/, 0LL);
    v64 = 100 * (treasureDevicePer / 100);
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v51, v52, v53);
    Instance = (DataManager_o *)System_String__Format(v50, v54, 0LL);
    if ( !v40 || (UILabel__set_text((UILabel_o *)v40, (System_String_o *)Instance, 0LL), !v42) )
LABEL_52:
      sub_1BC3264(Instance, v29);
    UnityEngine_GameObject__SetActive(v42, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v55 = 5;
    else
      v55 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v55 = 1;
    v65 = v55;
    v56 = UnityEngine_GameObject__GetComponent_object_(
            v32,
            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v57 = UnityEngine_GameObject__GetComponent_object_(
            v32,
            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0LL, 0LL) )
    {
      v58 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v58 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v58->static_fields->NobleInfoAnimPrefix;
      v60 = System_Int32__ToString((int32_t)&v65, 0LL);
      Instance = (DataManager_o *)System_String__Concat_62348648(NobleInfoAnimPrefix, v60, 0LL);
      if ( v56 )
      {
        SimpleAnimation__Play_65293968((SimpleAnimation_o *)v56, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_52;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
    {
      v61 = BattleInformationComponent_TypeInfo;
      if ( !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v61 = BattleInformationComponent_TypeInfo;
      }
      v62 = v61->static_fields->NobleInfoAnimPrefix;
      v63 = System_Int32__ToString((int32_t)&v65, 0LL);
      Instance = (DataManager_o *)System_String__Concat_62348648(v62, v63, 0LL);
      if ( !v57 )
        goto LABEL_52;
      UnityEngine_Animation__Play_69779584((UnityEngine_Animation_o *)v57, (System_String_o *)Instance, 0LL);
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
    sub_1BC3264(this, actionData);
  if ( !isAlreadyOverKill->max_length )
    sub_1BC326C(this, actionData, method);
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
    sub_1BC3264(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
    sub_1BC326C(this, actionData, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *overRoot; // x21
  __int64 v12; // x2
  UnityEngine_Vector2_o v13; // kr00_8
  UnityEngine_GameObject_o *v14; // x21
  float v15; // s0
  UnityEngine_GameObject_o *v16; // x21
  float v17; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_Object_o *v21; // x22
  Il2CppObject *Component_object; // x21
  UnityEngine_Behaviour_o *v23; // x23
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v25; // s0
  struct System_Single_array *v26; // x8
  struct System_String_array *v27; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v29; // x8
  struct System_Boolean_array *v30; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v33; // x8

  v6 = this;
  if ( (byte_4B0520C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, actionData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_20533/*"in"*/, v9);
    this = (BattleInformationComponent_o *)sub_1BC3008(&StringLiteral_19294/*"flash"*/, v10);
    byte_4B0520C = 1;
  }
  if ( !actionData )
    goto LABEL_72;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_72;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_72;
    v13 = BattlePerformance__GetExBattleUiOverKillPosAdjust((BattlePerformance_o *)this, 0LL);
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_72;
    v14 = v6->fields.overRoot;
    v15 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionX(v14, v13.fields.x + v15, 0LL);
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_72;
    v16 = v6->fields.overRoot;
    v17 = (*(float (__fastcall **)(BattleInformationComponent_o *, void *))&this->klass[1]._1.byval_arg.bits)(
            this,
            this->klass[1]._1.this_arg.data);
    GameObjectExtensions__SetLocalPositionY(v16, v13.fields.y + v17, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_72;
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v19 = v6->fields.overObjectList;
  if ( !v19 )
    goto LABEL_72;
  if ( v19->max_length <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)v19->m_Items[inOverType];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (v20 = v6->fields.overObjectList) == 0LL) )
  {
LABEL_72:
    sub_1BC3264(this, actionData);
  }
  if ( v20->max_length <= inOverType )
    goto LABEL_73;
  v21 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v20->m_Items[inOverType];
  if ( !this )
    goto LABEL_72;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = (UnityEngine_Behaviour_o *)v21;
    if ( !v21 )
      goto LABEL_72;
    goto LABEL_31;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = (UnityEngine_Behaviour_o *)Component_object;
    if ( !Component_object )
      goto LABEL_72;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v23, 0, 0LL);
    UnityEngine_Behaviour__set_enabled(v23, 1, 0LL);
  }
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_72;
  if ( isAlreadyOverKill->max_length <= inOverType )
    goto LABEL_73;
  if ( !isAlreadyOverKill->m_Items[inOverType + 4] )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_72;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_73;
      this = (BattleInformationComponent_o *)System_String__Concat_62348648(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_20533/*"in"*/,
                                               0LL);
      if ( !v21 )
        goto LABEL_72;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_65293968(
                                               (SimpleAnimation_o *)v21,
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
        v29 = v6->fields.overLabel;
        if ( !v29 )
          goto LABEL_72;
        if ( v29->max_length <= inOverType )
          goto LABEL_73;
        this = (BattleInformationComponent_o *)System_String__Concat_62348648(
                                                 v29->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_20533/*"in"*/,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_72;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_69779584(
                                                 (UnityEngine_Animation_o *)Component_object,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v30 = v6->fields.isAlreadyOverKill;
    if ( !v30 )
      goto LABEL_72;
    if ( v30->max_length > inOverType )
    {
      v30->m_Items[inOverType + 4] = 1;
      timeStartOverKill = v6->fields.timeStartOverKill;
      time = UnityEngine_Time__get_time(0LL);
      if ( !timeStartOverKill )
        goto LABEL_72;
      if ( timeStartOverKill->max_length > inOverType )
      {
        timeStartOverKill->m_Items[inOverType + 1] = time;
        return;
      }
    }
LABEL_73:
    sub_1BC326C(this, actionData, v12);
  }
  v25 = UnityEngine_Time__get_time(0LL);
  v26 = v6->fields.timeStartOverKill;
  if ( !v26 )
    goto LABEL_72;
  if ( v26->max_length <= inOverType )
    goto LABEL_73;
  if ( (float)(v25 - v26->m_Items[inOverType + 1]) <= 0.2 )
    return;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = v6->fields.overLabel;
    if ( !v27 )
      goto LABEL_72;
    if ( v27->max_length > inOverType )
    {
      this = (BattleInformationComponent_o *)System_String__Concat_62348648(
                                               v27->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19294/*"flash"*/,
                                               0LL);
      if ( !v21 )
        goto LABEL_72;
      SimpleAnimation__Play_65293968((SimpleAnimation_o *)v21, (System_String_o *)this, 0LL);
      return;
    }
    goto LABEL_73;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v33 = v6->fields.overLabel;
  if ( !v33 )
    goto LABEL_72;
  if ( v33->max_length <= inOverType )
    goto LABEL_73;
  this = (BattleInformationComponent_o *)System_String__Concat_62348648(
                                           v33->m_Items[inOverType],
                                           (System_String_o *)StringLiteral_19294/*"flash"*/,
                                           0LL);
  if ( !Component_object )
    goto LABEL_72;
  UnityEngine_Animation__Play_69779584((UnityEngine_Animation_o *)Component_object, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x24
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w0
  const MethodInfo *v19; // x5
  __int64 v20; // x8
  Il2CppObject *Component_object; // x22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B05204 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, isPlayer);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    byte_4B05204 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields._stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_object )
      goto LABEL_34;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           (int32_t)v16,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v16 = entity;
      if ( !entity )
        goto LABEL_34;
      v18 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v18,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v19);
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
    v20 = 136LL;
    if ( isPlayer )
      v20 = 128LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v20),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)skillInfo,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)v16 & 1) == 0 )
        goto LABEL_32;
      if ( Component_object )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_object,
            message,
            skillLevel,
            v23);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_object, message, v22);
LABEL_32:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_34:
    sub_1BC3264(v16, v17);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x22
  bool isPlayerID; // w0
  __int64 v14; // x8
  UnityEngine_GameObject_o *v15; // x21
  BattleInfoMessageComponent_o *v16; // x23
  UnityEngine_Object_o *saveDataMapList; // x24
  System_String_o *monitor; // x22
  System_String_o *OverrideTDName; // x0
  System_String_o *v20; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4B05206 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_TreasureDvcMaster___, actionData);
    sub_1BC3008(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B05206 = 1;
  }
  if ( actionData )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v12 = Entity;
        Instance = (DataManager_o *)this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v14 = 136LL;
          if ( isPlayerID )
            v14 = 128LL;
          Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        *(UnityEngine_GameObject_o **)((char *)&this->klass + v14),
                                        this->fields.skillInfoRoot,
                                        0LL,
                                        0LL);
          if ( Instance )
          {
            v15 = (UnityEngine_GameObject_o *)Instance;
            Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v16 = (BattleInfoMessageComponent_o *)Instance;
              saveDataMapList = (UnityEngine_Object_o *)Instance->fields.saveDataMapList;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(saveDataMapList, 0LL, 0LL) )
              {
                Instance = (DataManager_o *)v16->fields.skillSprite;
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
                monitor = (System_String_o *)v12[1].monitor;
                Instance = (DataManager_o *)BattleData__getServantData(
                                              (BattleData_o *)Instance,
                                              actionData->fields.actorId,
                                              0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v20 = OverrideTDName;
                  else
                    v20 = monitor;
                  if ( System_String__IsNullOrEmpty(v20, 0LL) )
                  {
                    UnityEngine_GameObject__SetActive(v15, 0, 0LL);
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v16, v20, v21);
                    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
                    BattleInformationComponent__AddMotionMessageObject(this, v15, v22);
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
    sub_1BC3264(Instance, v10);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t TotalDamage; // w0
  int v10; // w19
  __int64 v11; // x2
  int m_CancellationTokenSource; // w8
  BattleInformationComponent_o *v13; // x20
  __int64 v14; // x22
  UILabel_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B051FC & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, actionData);
    sub_1BC3008(&int_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_21033/*"line1"*/, v6);
    sub_1BC3008(&StringLiteral_14428/*"Total {0:#,0}"*/, v7);
    this = (BattleInformationComponent_o *)sub_1BC3008(&StringLiteral_21034/*"line2"*/, v8);
    byte_4B051FC = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v10 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v13 = this;
      if ( m_CancellationTokenSource >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v14 >= m_CancellationTokenSource )
            sub_1BC326C(this, actionData, v11);
          v15 = (UILabel_o *)*((_QWORD *)&v13->fields.perf + v14);
          if ( !v15 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v13->fields.perf + v14),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_62383952((System_String_o *)this, (System_String_o *)StringLiteral_21033/*"line1"*/, 0LL) )
          {
            v21 = v10;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v16, v17, v18);
            v20 = System_String__Format((System_String_o *)StringLiteral_14428/*"Total {0:#,0}"*/, v19, 0LL);
            UILabel__set_text(v15, v20, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v15,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_62383952(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_21034/*"line2"*/,
                                                     0LL);
          }
          m_CancellationTokenSource = (int)v13->fields.m_CancellationTokenSource;
          if ( (int)++v14 >= m_CancellationTokenSource )
            return;
        }
LABEL_20:
        sub_1BC3264(this, actionData);
      }
    }
  }
}