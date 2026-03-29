void BattleServantParamComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct BattleServantParamComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct BattleServantParamComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct BattleServantParamComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  struct BattleServantParamComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  struct BattleServantParamComponent_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct BattleServantParamComponent_StaticFields *v41; // x8

  if ( (byte_4D341F7 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_17631/*"btn_menu_select_grand"*/);
    sub_1C93AD4(&StringLiteral_17609/*"btn_cs_select"*/);
    sub_1C93AD4(&StringLiteral_17630/*"btn_menu_select"*/);
    sub_1C93AD4(&StringLiteral_17611/*"btn_cs_select_grand_2"*/);
    sub_1C93AD4(&StringLiteral_17610/*"btn_cs_select_grand"*/);
    byte_4D341F7 = 1;
  }
  static_fields = BattleServantParamComponent_TypeInfo->static_fields;
  static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH = 42;
  v8 = StringLiteral_17630/*"btn_menu_select"*/;
  static_fields->TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17630/*"btn_menu_select"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->TARGET_SP_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_17609/*"btn_cs_select"*/;
  v10 = BattleServantParamComponent_TypeInfo->static_fields;
  v10->FIX_TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17609/*"btn_cs_select"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->FIX_TARGET_SP_NAME, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_17631/*"btn_menu_select_grand"*/;
  v18 = BattleServantParamComponent_TypeInfo->static_fields;
  v18->TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17631/*"btn_menu_select_grand"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->TARGET_GRAND_SP_NAME, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_17610/*"btn_cs_select_grand"*/;
  v26 = BattleServantParamComponent_TypeInfo->static_fields;
  v26->FIX_TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17610/*"btn_cs_select_grand"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26->FIX_TARGET_GRAND_SP_NAME, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_17611/*"btn_cs_select_grand_2"*/;
  v34 = BattleServantParamComponent_TypeInfo->static_fields;
  v34->FIX_TARGETING_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17611/*"btn_cs_select_grand_2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v34->FIX_TARGETING_GRAND_SP_NAME, v33, v35, v36, v37, v38, v39, v40);
  v41 = BattleServantParamComponent_TypeInfo->static_fields;
  *(_OWORD *)&v41->TARGET_ICON_SPRITE_WIDTH = xmmword_D00420;
  *(_OWORD *)&v41->GRAND_TARGET_ICON_SPRITE_HEIGHT = xmmword_D01A60;
  *(_OWORD *)&v41->FIX_TARGET_ICON_SPRITE_DEPTH = xmmword_D005B0;
  *(_OWORD *)&v41->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX = xmmword_D00FB0;
  *(_OWORD *)&v41->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET = xmmword_D00CA0;
  *(_OWORD *)&v41->TARGET_ICON_SPRITE_POSX = xmmword_D00190;
}


void BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Queue_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v18; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_Dictionary_int__object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4D341F6 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
    byte_4D341F6 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C93B7C(UnityEngine_GameObject___TypeInfo, 1);
  this->fields.effectobj = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Queue_T__o *)sub_1C93D20(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v10,
    (const MethodInfo_3A217C4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.sideEffectShowQueue,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v18 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_D002A0;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v18;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v20;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.classIconEffectDict,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v27,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v27;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandSpellEffectDict,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (Il2CppObject *)sub_1C93D20(BattleServantParamComponent_BaseClassIconData_TypeInfo);
  System_Object___ctor(v34, 0);
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v34;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.classIconData, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantParamComponent__AddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v6; // x1

  v6 = BattleServantParamComponent__CoAddClassIconEffect(this, effectId, priority, servantData, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__ChangeTargetMarkSprite(
        BattleServantParamComponent_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetMark; // x0
  UISprite_o *v6; // x20
  Il2CppObject *Component_object; // x19
  UnityEngine_Object_o *battleUIAtlas; // x23
  BattleDataDefine_c *v9; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UIAtlas_o *v11; // x21
  BattleServantParamComponent_c *v12; // x0
  BattleServantParamComponent_c *v13; // x0
  BattleServantParamComponent_c *v14; // x0
  System_String_o *FIX_TARGET_GRAND_SP_NAME; // x1
  UIAtlas_o *v16; // x22
  BattleServantParamComponent_c *v17; // x0
  UIAtlas_o *v18; // x20
  BattleServantParamComponent_c *v19; // x0

  if ( (byte_4D341F5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&BattleDataDefine_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3122/*"BattleAssetUIAtlas"*/);
    byte_4D341F5 = 1;
  }
  targetMark = this->fields.targetMark;
  if ( !targetMark )
    goto LABEL_54;
  targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             targetMark,
                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark )
    goto LABEL_54;
  v6 = (UISprite_o *)targetMark;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.lockTargetMark,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    battleUIAtlas = (UnityEngine_Object_o *)this->fields.battleUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleUIAtlas, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        if ( isGrand )
        {
          v9 = BattleDataDefine_TypeInfo;
          if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
            v9 = BattleDataDefine_TypeInfo;
          }
          ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          targetMark = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
          if ( targetMark )
          {
            targetMark = (UnityEngine_GameObject_o *)AssetData__GetObject_object__51927708(
                                                       (AssetData_o *)targetMark,
                                                       (System_String_o *)StringLiteral_3122/*"BattleAssetUIAtlas"*/,
                                                       (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
            if ( targetMark )
            {
              targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         targetMark,
                                                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
              v11 = (UIAtlas_o *)targetMark;
              if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
              if ( v11 )
              {
                targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                           v11,
                                                           BattleServantParamComponent_TypeInfo->static_fields->TARGET_GRAND_SP_NAME,
                                                           0);
                if ( targetMark )
                {
                  if ( !v6 )
                    goto LABEL_54;
                  UISprite__set_atlas(v6, v11, 0);
                  v12 = BattleServantParamComponent_TypeInfo;
                  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                    v12 = BattleServantParamComponent_TypeInfo;
                  }
                  UISprite__set_spriteName(v6, v12->static_fields->TARGET_GRAND_SP_NAME, 0);
                }
                v13 = BattleServantParamComponent_TypeInfo;
                if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                  v13 = BattleServantParamComponent_TypeInfo;
                }
                targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                           v11,
                                                           v13->static_fields->FIX_TARGET_GRAND_SP_NAME,
                                                           0);
                if ( !targetMark )
                  return;
                if ( Component_object )
                {
                  UISprite__set_atlas((UISprite_o *)Component_object, v11, 0);
                  v14 = BattleServantParamComponent_TypeInfo;
                  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                    v14 = BattleServantParamComponent_TypeInfo;
                  }
                  FIX_TARGET_GRAND_SP_NAME = v14->static_fields->FIX_TARGET_GRAND_SP_NAME;
LABEL_53:
                  UISprite__set_spriteName((UISprite_o *)Component_object, FIX_TARGET_GRAND_SP_NAME, 0);
                  return;
                }
              }
            }
          }
        }
        else
        {
          v16 = this->fields.battleUIAtlas;
          targetMark = (UnityEngine_GameObject_o *)BattleServantParamComponent_TypeInfo;
          if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
          if ( v16 )
          {
            targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                       v16,
                                                       BattleServantParamComponent_TypeInfo->static_fields->TARGET_SP_NAME,
                                                       0);
            if ( targetMark )
            {
              if ( !v6 )
                goto LABEL_54;
              UISprite__set_atlas(v6, this->fields.battleUIAtlas, 0);
              v17 = BattleServantParamComponent_TypeInfo;
              if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                v17 = BattleServantParamComponent_TypeInfo;
              }
              UISprite__set_spriteName(v6, v17->static_fields->TARGET_SP_NAME, 0);
            }
            targetMark = (UnityEngine_GameObject_o *)BattleServantParamComponent_TypeInfo;
            v18 = this->fields.battleUIAtlas;
            if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
            if ( v18 )
            {
              targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                         v18,
                                                         BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_SP_NAME,
                                                         0);
              if ( !targetMark )
                return;
              if ( Component_object )
              {
                UISprite__set_atlas((UISprite_o *)Component_object, this->fields.battleUIAtlas, 0);
                v19 = BattleServantParamComponent_TypeInfo;
                if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                  v19 = BattleServantParamComponent_TypeInfo;
                }
                FIX_TARGET_GRAND_SP_NAME = v19->static_fields->FIX_TARGET_SP_NAME;
                goto LABEL_53;
              }
            }
          }
        }
LABEL_54:
        sub_1C93D2C(targetMark, isGrand);
      }
    }
  }
}


void BattleServantParamComponent__ClassIconEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.classIconEffectDict, isStart, v3);
}


System_Collections_IEnumerator_o *BattleServantParamComponent__CoAddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D341EA & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent__CoAddClassIconEffect_d__193_TypeInfo);
    byte_4D341EA = 1;
  }
  v9 = sub_1C93D20(BattleServantParamComponent__CoAddClassIconEffect_d__193_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 48) = effectId;
  *(_DWORD *)(v9 + 52) = priority;
  *(_QWORD *)(v9 + 40) = servantData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)servantData, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v9;
}


void BattleServantParamComponent__CommandSpellEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, isStart, v3);
}


void BattleServantParamComponent__ComplateUpdateShiftHplabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  int32_t NowHp; // w1
  const MethodInfo *v5; // x2

  data = this->fields.data;
  if ( !data )
    sub_1C93D2C(0, method);
  NowHp = BattleServantData__getNowHp(data, 0);
  BattleServantParamComponent__updateShiftHplabel(this, NowHp, v5);
}


void BattleServantParamComponent__DelayCoroutine(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleServantParamComponent__DelayMethod(this, waitTime, callBack, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_Collections_IEnumerator_o *BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D341E3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent__DelayMethod_d__182_TypeInfo);
    byte_4D341E3 = 1;
  }
  v6 = sub_1C93D20(BattleServantParamComponent__DelayMethod_d__182_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)callBack, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleServantParamComponent__DeleteSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v4; // w20

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C93D34(this);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C93D2C(this, method);
  }
}


void BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  System_Int32_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v9; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v11; // x21
  unsigned __int64 v12; // x22
  bool v13; // w20

  if ( (byte_4D341E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4D341E8 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_34BCA44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
    {
      sub_1C93D2C(IsNullOrEmpty, v7);
    }
    max_length = IsNullOrEmpty->max_length;
    v11 = IsNullOrEmpty;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      v13 = forceDestroy;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_1C93D34(IsNullOrEmpty);
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v11->m_Items[v12],
          v13,
          v9);
        LODWORD(max_length) = v11->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)max_length );
    }
  }
}


void BattleServantParamComponent__DestroyBattlePointGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D341EF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341EF = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0, 0) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1C93D2C(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_battlePointGaugeComponent = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_battlePointGaugeComponent, 0, v7, v8, v9, v10, v11, v12);
  }
}


void BattleServantParamComponent__DestroyEffectObject(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        int32_t id,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v8; // x19
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject **v17; // x20
  System_Collections_ICollection_o *v18; // x0
  Il2CppObject *v19; // x20
  System_Action_o *v20; // x21
  Il2CppObject *v21; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D341E9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattleServantParamComponent___c__DisplayClass191_0__DestroyEffectObject_b__0__);
    sub_1C93AD4(&BattleServantParamComponent___c__DisplayClass191_0_TypeInfo);
    byte_4D341E9 = 1;
  }
  component = 0;
  v8 = sub_1C93D20(BattleServantParamComponent___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_19;
  *(_QWORD *)(v8 + 16) = effectDict;
  v17 = (Il2CppObject **)(v8 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)effectDict, v11, v12, v13, v14, v15, v16);
  v18 = *(System_Collections_ICollection_o **)(v8 + 16);
  *(_DWORD *)(v8 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v18, 0) )
  {
    Item = *v17;
    if ( !*v17 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v8 + 24),
           (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v17;
        if ( !*v17 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v8 + 24),
                 (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v19 = component;
          v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v20,
            (Il2CppObject *)v8,
            Method_BattleServantParamComponent___c__DisplayClass191_0__DestroyEffectObject_b__0__,
            0);
          if ( v19 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))v19->klass->vtable[8].methodPtr)(
              v19,
              1,
              v20,
              v19->klass->vtable[8].method);
            return;
          }
LABEL_19:
          sub_1C93D2C(Item, v10);
        }
      }
      Item = *v17;
      if ( !*v17 )
        goto LABEL_19;
      v21 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v8 + 24),
              (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v21, 0);
      Item = *v17;
      if ( !*v17 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v8 + 24),
        (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


void BattleServantParamComponent__DestroyGrandEffectObject(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectObj; // x20
  UnityEngine_Object_o *grandEffectRoot; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  GrandQuestFolderBoardItem_o *p_grandEffectObj; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D341F4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341F4 = 1;
  }
  grandEffectObj = (UnityEngine_Object_o *)this->fields.grandEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandEffectObj, 0, 0) )
  {
    grandEffectRoot = (UnityEngine_Object_o *)this->fields.grandEffectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(grandEffectRoot, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.grandEffectRoot;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
      {
        sub_1C93D2C(gameObject, v5);
      }
      p_grandEffectObj = (GrandQuestFolderBoardItem_o *)&this->fields.grandEffectObj;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      klass = (UnityEngine_Object_o *)p_grandEffectObj->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(klass, 0);
      p_grandEffectObj->klass = 0;
      sub_1C93A78(p_grandEffectObj, 0, v9, v10, v11, v12, v13, v14);
    }
  }
}


void BattleServantParamComponent__DisplayClassIconChangeEffect(
        BattleServantParamComponent_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_BaseClassIconData_o *classIconData; // x0

  classIconData = this->fields.classIconData;
  if ( !classIconData )
    sub_1C93D2C(0, isSkipEffect);
  ((void (__fastcall *)(struct BattleServantParamComponent_BaseClassIconData_o *, bool, bool, const MethodInfo *, float))classIconData->klass->vtable._5_DisplayIconEffect.methodPtr)(
    classIconData,
    isSkipEffect,
    isAddBuff,
    classIconData->klass->vtable._5_DisplayIconEffect.method,
    delayTime);
}


void BattleServantParamComponent__EffectStartStop(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool isStart,
        const MethodInfo *method)
{
  bool i; // w19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D341EB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4D341EB = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_34BCB94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
    sub_1C93D2C(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3BB31C0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  for ( i = isStart;
        ;
        BattleServantParamComponent__EffectStartStop_48373756(
          (BattleServantParamComponent_o *)v7,
          (UnityEngine_GameObject_o *)v9.fields._currentValue,
          i,
          v8) )
  {
    v7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
           &v9,
           (const MethodInfo_361E884 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    if ( !v7 )
      break;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v9,
    (const MethodInfo_361E880 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void BattleServantParamComponent__EffectStartStop_48373756(
        BattleServantParamComponent_o *this,
        UnityEngine_GameObject_o *effect,
        bool isStart,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D341EC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341EC = 1;
  }
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !effect )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            effect,
            &component,
            (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
    {
      UnityEngine_GameObject__SetActive(effect, isStart, 0);
      return;
    }
    UnityEngine_GameObject__SetActive(effect, 1, 0);
    v6 = component;
    if ( !component )
LABEL_14:
      sub_1C93D2C(v6, v7);
    if ( isStart )
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0);
    else
      component->klass->vtable[9].methodPtr();
  }
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A3 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->FIX_TARGET_ICON_SPRITE_WIDTH;
  FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconViewInfo_48337944(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t FixTargetIconDepth; // w20
  __int64 v5; // x19
  struct UnityEngine_Color_o FixTargetIconColor; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_4D341AA & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341AA = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.FixTargetIconWidth;
  FixTargetIconDepth = v2->fields.FixTargetIconDepth;
  FixTargetIconColor = v2->fields.FixTargetIconColor;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = FixTargetIconDepth;
  *(struct UnityEngine_Color_o *)(v5 + 28) = FixTargetIconColor;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A7 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A7 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET;
  FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = xmmword_D02030;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_48338216(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t FixTargetIconDepthWhenTarget; // w20
  __int64 v5; // x19
  struct UnityEngine_Color_o FixTargetIconColorWhenTarget; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_4D341AC & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341AC = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.FixTargetIconWidthWhenTarget;
  FixTargetIconDepthWhenTarget = v2->fields.FixTargetIconDepthWhenTarget;
  FixTargetIconColorWhenTarget = v2->fields.FixTargetIconColorWhenTarget;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = FixTargetIconDepthWhenTarget;
  *(struct UnityEngine_Color_o *)(v5 + 28) = FixTargetIconColorWhenTarget;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


void BattleServantParamComponent__ForceDestroyAllEffect(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  BattleServantParamComponent__DestroyAllEffect(this, this->fields.classIconEffectDict, 1, v2);
  BattleServantParamComponent__DestroyAllEffect(this, this->fields.commandSpellEffectDict, 1, v4);
}


BattleServantParamSetting_o *BattleServantParamComponent__GetBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  System_String_o *EnemyUiAssetStoragePath; // x20
  int32_t v7; // w20
  struct BattleServantData_o *v8; // x8
  int32_t v9; // w19
  _BOOL4 isForceAppearance; // w21
  BattleServantParamSetting_o *result; // x0
  AssetData_o *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t index; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D341B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_BattleServantParamSetting___);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&StringLiteral_3145/*"BattleServantParamSettingData_{0}"*/);
    byte_4D341B3 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_20;
  if ( !data->fields.isEnemy )
    return 0;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  EnemyUiAssetStoragePath = BattleServantParamComponent__GetEnemyUiAssetStoragePath(
                              stageEntity,
                              (const MethodInfo *)stageEntity);
  if ( System_String__IsNullOrEmpty(EnemyUiAssetStoragePath, 0) )
  {
    this = (BattleServantParamComponent_o *)v4->fields.data;
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantData__getAppearanceId((BattleServantData_o *)this, 0);
      if ( v4->fields.data )
      {
        v7 = (int)this;
        this = (BattleServantParamComponent_o *)BattleServantData__getDispLimitCount(v4->fields.data, 1, 0);
        v8 = v4->fields.data;
        if ( v8 )
        {
          v9 = (int)this;
          isForceAppearance = v8->fields.isForceAppearance;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          return ServantAssetLoadManager__LoadBattleServantParamSetting(v7, v9, isForceAppearance, 0);
        }
      }
    }
LABEL_20:
    sub_1C93D2C(this, stageEntity);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (BattleServantParamSetting_o *)AssetManager__getAssetStorageData(EnemyUiAssetStoragePath, 0);
  if ( result )
  {
    v12 = (AssetData_o *)result;
    index = v4->fields.index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index);
    v14 = System_String__Format((System_String_o *)StringLiteral_3145/*"BattleServantParamSettingData_{0}"*/, v13, 0);
    return (BattleServantParamSetting_o *)AssetData__GetObject_object__51927708(
                                            v12,
                                            v14,
                                            (const MethodInfo_3185A9C *)Method_AssetData_GetObject_BattleServantParamSetting___);
  }
  return result;
}


System_String_o *BattleServantParamComponent__GetEnemyUiAssetStoragePath(
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  int32_t EnemyUiId; // w0
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D341B1 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_3107/*"Battle/EnemyUI/{0}"*/);
    byte_4D341B1 = 1;
  }
  if ( !stageEntity )
    return 0;
  EnemyUiId = StageEntity__GetEnemyUiId(stageEntity, 0);
  if ( EnemyUiId < 1 )
    return 0;
  v6 = EnemyUiId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_3107/*"Battle/EnemyUI/{0}"*/, v4, 0);
}


void BattleServantParamComponent__GrandEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop_48373756(this, this->fields.grandEffectObj, isStart, v3);
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A4 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A4 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->GRAND_FIX_TARGET_ICON_SPRITE_WIDTH;
  GRAND_FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo_48338492(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t GrandFixTargetIconDepth; // w20
  __int64 v5; // x19
  struct UnityEngine_Color_o GrandFixTargetIconColor; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_4D341AE & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341AE = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.GrandFixTargetIconWidth;
  GrandFixTargetIconDepth = v2->fields.GrandFixTargetIconDepth;
  GrandFixTargetIconColor = v2->fields.GrandFixTargetIconColor;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GrandFixTargetIconDepth;
  *(struct UnityEngine_Color_o *)(v5 + 28) = GrandFixTargetIconColor;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A8 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A8 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->GRAND_FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET;
  GRAND_FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = xmmword_D02030;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_48338764(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t GrandFixTargetIconDepthWhenTarget; // w20
  __int64 v5; // x19
  struct UnityEngine_Color_o GrandFixTargetIconColorWhenTarget; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_4D341B0 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341B0 = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.GrandFixTargetIconWidthWhenTarget;
  GrandFixTargetIconDepthWhenTarget = v2->fields.GrandFixTargetIconDepthWhenTarget;
  GrandFixTargetIconColorWhenTarget = v2->fields.GrandFixTargetIconColorWhenTarget;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GrandFixTargetIconDepthWhenTarget;
  *(struct UnityEngine_Color_o *)(v5 + 28) = GrandFixTargetIconColorWhenTarget;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandNormalTargetIconViewInfo(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t GrandTargetIconDepth; // w20
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_4D341AD & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341AD = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.GrandTargetIconWidth;
  GrandTargetIconDepth = v2->fields.GrandTargetIconDepth;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GrandTargetIconDepth;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t GRAND_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A2 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->GRAND_TARGET_ICON_SPRITE_WIDTH;
  GRAND_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GRAND_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t GRAND_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A6 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A6 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->GRAND_TARGET_ICON_SPRITE_WIDTH_WHEN_FIX;
  GRAND_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GRAND_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_48338636(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t GrandTargetIconDepthWhenFix; // w20
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_4D341AF & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341AF = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.GrandTargetIconWidthWhenFix;
  GrandTargetIconDepthWhenFix = v2->fields.GrandTargetIconDepthWhenFix;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = GrandTargetIconDepthWhenFix;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


void BattleServantParamComponent__InitNextTdGauge(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  struct BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v5; // x19
  int32_t nexttpturn; // w20
  int32_t maxtpturn; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v9; // x1

  if ( (byte_4D341D9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D9 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      isTDSeraled = BattleServantData__isTDSeraled(data, 0);
      if ( !v5 )
        sub_1C93D2C(isTDSeraled, v9);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0);
    }
  }
}


void BattleServantParamComponent__InstantiateGrandEffectObject(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectRoot; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct BattlePerformance_o *perf; // x8
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21

  if ( (byte_4D341F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__204_0__);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_5911/*"Effect/GrandServant"*/);
    byte_4D341F1 = 1;
  }
  grandEffectRoot = (UnityEngine_Object_o *)this->fields.grandEffectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandEffectRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.grandEffectRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (perf = this->fields.perf) == 0)
      || (assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField,
          v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo),
          AssetLoader_LoadEndDataHandler___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__204_0__,
            0),
          !assetStorageLoadWrapper_k__BackingField) )
    {
      sub_1C93D2C(gameObject, v4);
    }
    AssetStorageLoadWrapper__LoadAssetStorage(
      assetStorageLoadWrapper_k__BackingField,
      (System_String_o *)StringLiteral_5911/*"Effect/GrandServant"*/,
      v8,
      1,
      0);
  }
}


bool BattleServantParamComponent__IsMatchOwner(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return svtData == this->fields.data;
}


bool BattleServantParamComponent__IsRaidStatusUi(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool BattleServantParamComponent__IsSuperBossStatusUi(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  return 0;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__NormalTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A1 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A1 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->TARGET_ICON_SPRITE_WIDTH;
  TARGET_ICON_SPRITE_DEPTH = static_fields->TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__NormalTargetIconViewInfo_48337816(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t TargetIconDepth; // w20
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_4D341A9 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A9 = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.TargetIconWidth;
  TargetIconDepth = v2->fields.TargetIconDepth;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = TargetIconDepth;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


void BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D341B6 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_22678/*"onClickServant"*/);
    byte_4D341B6 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId);
      if ( !v5 )
        sub_1C93D2C(v6, v7);
      UnityEngine_GameObject__SendMessage_72101188(v5, (System_String_o *)StringLiteral_22678/*"onClickServant"*/, v6, 0);
    }
  }
}


void BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1C93D2C(this, 0);
  BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
    this,
    playShiftGauge->fields._ChangeToHp_k__BackingField,
    method);
  ((void (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, BattleServantParamComponent_o *, const MethodInfo *))playShiftGauge->klass->vtable._6_OnCompleteChangeHp.methodPtr)(
    playShiftGauge,
    this,
    playShiftGauge->klass->vtable._6_OnCompleteChangeHp.method);
}


void BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Object_o *hpGauge; // x21
  __int64 v7; // x1
  BattleHpGaugeBarComponent_o *v8; // x0

  if ( (byte_4D341DC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341DC = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
  {
    v8 = this->fields.hpGauge;
    if ( !v8
      || (BattleHpGaugeBarComponent__updateDamageGauge(v8, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0),
          (v8 = this->fields.hpGauge) == 0) )
    {
      sub_1C93D2C(v8, v7);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v8, nowHp, 0);
  }
}


void BattleServantParamComponent__PlayDownShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  __int64 v8; // x1
  BattleServantHpShiftComponent_o *v9; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D341D7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D7 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v9 = this->fields.hpShift;
    if ( !v9
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(v9, index, effectData, this, &nextAnimationTime, 0, 0),
          (v9 = this->fields.hpShift) == 0) )
    {
      sub_1C93D2C(v9, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v9, index, 1, 1, 0);
  }
}


void BattleServantParamComponent__PlayHpBarEffect(
        BattleServantParamComponent_o *this,
        System_String_o *effectName,
        System_Action_o *updateHpBarFunc,
        System_Action_o *updateHpLabelFunc,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x24
  __int64 v12; // x1
  BattleServantChangeBarComponent_o *v13; // x0

  if ( (byte_4D341D5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D5 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    v13 = this->fields.hpChange;
    if ( !v13 )
      sub_1C93D2C(0, v12);
    BattleServantChangeBarComponent__PlayHpBarEffect(v13, effectName, updateHpBarFunc, updateHpLabelFunc, callback, 0);
  }
}


float BattleServantParamComponent__PlayShiftEffectGeneral(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        System_Action_int__o *callBack,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x23
  bool v10; // w0
  __int64 v11; // x1
  float result; // s0
  BattleServantHpShiftComponent_o *v13; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D341D4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D4 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(hpShift, 0, 0);
  result = 0.0;
  if ( v10 )
  {
    v13 = this->fields.hpShift;
    if ( !v13 )
      sub_1C93D2C(0, v11);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v13, index, effectData, this, &nextAnimationTime, callBack, 0);
    return nextAnimationTime;
  }
  return result;
}


void BattleServantParamComponent__PlayUpShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        float delayTime,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  __int64 v10; // x1
  BattleServantHpShiftComponent_o *v11; // x0
  Il2CppObject *v12; // x21
  System_Action_int__bool__bool__o *v13; // x22
  BattleCallBack_int__bool__bool__o *v14; // x21
  BattleServantParamComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D341D6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__bool__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleCallBack_int__bool__bool___ctor__);
    sub_1C93AD4(&BattleCallBack_int__bool__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleServantHpShiftComponent_UpdateIcon__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D6 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v11 = this->fields.hpShift;
    if ( !v11 || (BattleServantHpShiftComponent__UpdateIconActive(v11, index, 1, 0), (v11 = this->fields.hpShift) == 0) )
      sub_1C93D2C(v11, v10);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v11, index, effectData, this, &nextAnimationTime, 0, 0);
    v12 = (Il2CppObject *)this->fields.hpShift;
    v13 = (System_Action_int__bool__bool__o *)sub_1C93D20(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v13, v12, Method_BattleServantHpShiftComponent_UpdateIcon__, 0);
    v14 = (BattleCallBack_int__bool__bool__o *)sub_1C93D20(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v14,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v13,
      (const MethodInfo_33D9A80 *)Method_BattleCallBack_int__bool__bool___ctor__);
    v17 = BattleServantParamComponent__DelayMethod(v15, delayTime, (BattleCallBackBase_o *)v14, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v17, 0);
  }
}


void BattleServantParamComponent__RemoveEffectClearRankUpBuff(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v4; // w20

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C93D34(this);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C93D2C(this, method);
  }
}


void BattleServantParamComponent__ResetDefaultBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultServantParam; // x19
  void *Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Vector3_o **p_defaultServantParam; // x19
  struct BattleServantParamSetting_o *v7; // x8
  struct BattleServantParamSetting_o *v8; // x8
  struct BattleServantParamSetting_o *v9; // x8
  struct BattleServantParamSetting_o *v10; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D341B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341B5 = 1;
  }
  component = 0;
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(defaultServantParam, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    p_defaultServantParam = (UnityEngine_Vector3_o **)&this->fields.defaultServantParam;
    v7 = this->fields.defaultServantParam;
    if ( v7 )
    {
      BasicHelper__SetActiveSafely(
        (UnityEngine_Component_o *)this->fields.clsIconComponent,
        v7->fields.IsDispClassIcon,
        0);
      v8 = this->fields.defaultServantParam;
      if ( v8 )
      {
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this, v8->fields.UiPosition, 0);
        v9 = this->fields.defaultServantParam;
        if ( v9 )
        {
          ComponentHelper__SetLocalScale((UnityEngine_Component_o *)this, v9->fields.UiScale, 0);
          v10 = this->fields.defaultServantParam;
          if ( v10 )
          {
            BuffIconMax = v10->fields.BuffIconMax;
            if ( (BuffIconMax & 0x80000000) == 0 )
            {
              showBuffComponent = this->fields.showBuffComponent;
              if ( !showBuffComponent )
                goto LABEL_26;
              showBuffComponent->fields.maxCount = BuffIconMax;
            }
            BuffIconMaxLine = v10->fields.BuffIconMaxLine;
            if ( BuffIconMaxLine < 0 )
            {
              Component_object = this->fields.showBuffComponent;
            }
            else
            {
              Component_object = this->fields.showBuffComponent;
              if ( !Component_object )
                goto LABEL_26;
              *((_DWORD *)Component_object + 11) = BuffIconMaxLine;
            }
            ComponentHelper__SetLocalPosition(
              (UnityEngine_Component_o *)Component_object,
              v10->fields.BuffIconPosition,
              0);
            if ( *p_defaultServantParam )
            {
              GameObjectHelper__SetActiveSafely(this->fields.levelRoot, BYTE1((*p_defaultServantParam)[2].fields.x), 0);
              Component_object = (void *)UnityEngine_Component__TryGetComponent_object_(
                                           (UnityEngine_Component_o *)this,
                                           &component,
                                           (const MethodInfo_319C308 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
              if ( ((unsigned __int8)Component_object & 1) == 0 )
              {
LABEL_24:
                *p_defaultServantParam = 0;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&this->fields.defaultServantParam,
                  0,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19);
                return;
              }
              if ( *p_defaultServantParam )
              {
                Component_object = component;
                if ( component )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)component,
                    (*p_defaultServantParam)[6],
                    0);
                  if ( *p_defaultServantParam )
                  {
                    Component_object = component;
                    if ( component )
                    {
                      UnityEngine_BoxCollider__set_size(
                        (UnityEngine_BoxCollider_o *)component,
                        (*p_defaultServantParam)[7],
                        0);
                      goto LABEL_24;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C93D2C(Component_object, v5);
  }
}


void BattleServantParamComponent__SetActiveParameterView(
        BattleServantParamComponent_o *this,
        bool val,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *root; // x0
  bool v8; // w1
  bool v9; // w20

  data = this->fields.data;
  if ( data && !BattleServantData__isDead(data, 0) )
  {
    v9 = val;
    BattleServantParamComponent__setTouch(this, v9, method);
    root = this->fields.root;
    if ( root )
    {
      v8 = v9;
      goto LABEL_7;
    }
LABEL_8:
    sub_1C93D2C(root, v6);
  }
  BattleServantParamComponent__setTouch(this, 0, method);
  root = this->fields.root;
  if ( !root )
    goto LABEL_8;
  v8 = 0;
LABEL_7:
  UnityEngine_GameObject__SetActive(root, v8, 0);
}


void BattleServantParamComponent__SetBreakSpriteDisplay(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *breakSprite; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Object_o *hplabel; // x21
  UnityEngine_Object_o *maxhplabel; // x21
  UnityEngine_Object_o *totalhplabel; // x21

  if ( (byte_4D341F0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341F0 = 1;
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, flg, 0);
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0);
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled(v7, !flg, 0);
      return;
    }
LABEL_24:
    sub_1C93D2C(v7, v6);
  }
}


void BattleServantParamComponent__SetEnemyParamPosition(
        BattleServantParamComponent_o *this,
        BaseEnemyParamPosData_o *paramPosData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleServantParamSetting; // x21
  __int64 showBuffComponent; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  struct BattleServantShowBuffComponent_o *v11; // x19
  struct BattleServantParamSetting_o *v12; // x8
  struct BattleServantParamSetting_o *v13; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *v15; // x10
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D341BF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341BF = 1;
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  showBuffComponent = UnityEngine_Object__op_Equality(battleServantParamSetting, 0, 0);
  if ( (showBuffComponent & 1) != 0 )
  {
    showBuffComponent = (__int64)this->fields.showBuffComponent;
    if ( !showBuffComponent )
      goto LABEL_22;
    showBuffComponent = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)showBuffComponent, 0);
    if ( !this->fields.showBuffComponent )
      goto LABEL_22;
    v8 = (UnityEngine_Transform_o *)showBuffComponent;
    showBuffComponent = (__int64)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.showBuffComponent,
                                   0);
    if ( !showBuffComponent )
      goto LABEL_22;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)showBuffComponent, 0);
    if ( !paramPosData )
      goto LABEL_22;
    showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *, float, float, float))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.methodPtr)(
                          paramPosData,
                          paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method,
                          localPosition.fields.x,
                          localPosition.fields.y,
                          localPosition.fields.z);
    if ( !v8 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v8, v17, 0);
    v11 = this->fields.showBuffComponent;
    showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))paramPosData->klass->vtable._7_get_BuffIconMaxLine.methodPtr)(
                          paramPosData,
                          paramPosData->klass->vtable._7_get_BuffIconMaxLine.method);
    if ( !v11 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v12 = this->fields.battleServantParamSetting;
  if ( !v12
    || (ComponentHelper__SetLocalPosition(
          (UnityEngine_Component_o *)this->fields.showBuffComponent,
          v12->fields.BuffIconPosition,
          0),
        (v13 = this->fields.battleServantParamSetting) == 0) )
  {
LABEL_22:
    sub_1C93D2C(showBuffComponent, v7);
  }
  BuffIconMax = v13->fields.BuffIconMax;
  if ( (BuffIconMax & 0x80000000) == 0 )
  {
    v15 = this->fields.showBuffComponent;
    if ( !v15 )
      goto LABEL_22;
    v15->fields.maxCount = BuffIconMax;
  }
  showBuffComponent = (unsigned int)v13->fields.BuffIconMaxLine;
  if ( (showBuffComponent & 0x80000000) == 0 )
  {
    v11 = this->fields.showBuffComponent;
    if ( !v11 )
      goto LABEL_22;
LABEL_20:
    v11->fields.maxLine = showBuffComponent;
  }
}


void BattleServantParamComponent__SetGrandEffectDepth(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_c *v3; // x0
  int32_t PARTY_ORGANIZATION_CLASS_ICON_DEPTH; // w20
  Il2CppObject *Component_object; // x0
  int32_t klass; // w1
  int32_t v7; // w1
  int v8; // w20
  void *grandEffectObj; // x0
  int v10; // w8
  void *v11; // x19
  unsigned int v12; // w21
  __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D341F2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    byte_4D341F2 = 1;
  }
  v3 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v3 = BattleServantParamComponent_TypeInfo;
  }
  if ( this->fields.clsIconComponent
    && (PARTY_ORGANIZATION_CLASS_ICON_DEPTH = v3->static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH,
        (Component_object = UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this->fields.clsIconComponent,
                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___)) != 0)
    && (klass = (int32_t)Component_object[11].klass,
        v13 = 0,
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v13,
          klass,
          (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v13) )
  {
    v7 = PARTY_ORGANIZATION_CLASS_ICON_DEPTH - HIDWORD(v13);
    v13 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v13,
      v7,
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
    v8 = HIDWORD(v13);
  }
  else
  {
    v8 = 0;
  }
  grandEffectObj = this->fields.grandEffectObj;
  if ( !grandEffectObj )
    goto LABEL_19;
  grandEffectObj = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                     (UnityEngine_GameObject_o *)grandEffectObj,
                     (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !grandEffectObj )
    goto LABEL_19;
  v10 = *((_DWORD *)grandEffectObj + 6);
  v11 = grandEffectObj;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1C93D34(grandEffectObj);
      grandEffectObj = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !grandEffectObj )
        break;
      UIWidget__set_depth((UIWidget_o *)grandEffectObj, *((_DWORD *)grandEffectObj + 44) - v8, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_19:
    sub_1C93D2C(grandEffectObj, method);
  }
}


void BattleServantParamComponent__SetupDefaultBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultServantParam; // x20
  Il2CppObject *Component_object; // x21
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Object_o *levelRoot; // x22
  bool activeSelf; // w0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  GrandQuestFolderBoardItem_o *p_defaultServantParam; // x19
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  float v23; // s0
  float v24; // s1
  float v25; // s2
  UnityEngine_Vector3_o center; // 0:kr34_12.12
  UnityEngine_Vector3_o size; // 0:kr40_12.12

  if ( (byte_4D341B4 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamSetting_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341B4 = 1;
  }
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(defaultServantParam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    v5 = sub_1C93D20(BattleServantParamSetting_TypeInfo);
    BattleServantParamSetting___ctor((BattleServantParamSetting_o *)v5, v6);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(clsIconComponent, 0);
      if ( clsIconComponent )
      {
        clsIconComponent = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                        (UnityEngine_GameObject_o *)clsIconComponent,
                                                        0);
        if ( v5 )
        {
          *(_BYTE *)(v5 + 24) = (unsigned __int8)clsIconComponent & 1;
          levelRoot = (UnityEngine_Object_o *)this->fields.levelRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(levelRoot, 0, 0) )
          {
            clsIconComponent = (UnityEngine_Component_o *)this->fields.levelRoot;
            if ( !clsIconComponent )
              goto LABEL_30;
            activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)clsIconComponent, 0);
          }
          else
          {
            activeSelf = 0;
          }
          *(_BYTE *)(v5 + 25) = activeSelf;
          clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
          if ( clsIconComponent )
          {
            *(UnityEngine_Vector3_o *)(v5 + 28) = UnityEngine_Transform__get_localPosition(
                                                    (UnityEngine_Transform_o *)clsIconComponent,
                                                    0);
            clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
            if ( clsIconComponent )
            {
              *(UnityEngine_Vector3_o *)(v5 + 40) = UnityEngine_Transform__get_localScale(
                                                      (UnityEngine_Transform_o *)clsIconComponent,
                                                      0);
              clsIconComponent = (UnityEngine_Component_o *)this->fields.showBuffComponent;
              if ( clsIconComponent )
              {
                *(_QWORD *)(v5 + 64) = clsIconComponent[1].fields.m_CachedPtr;
                clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(clsIconComponent, 0);
                if ( clsIconComponent )
                {
                  *(UnityEngine_Vector3_o *)(v5 + 52) = UnityEngine_Transform__get_localPosition(
                                                          (UnityEngine_Transform_o *)clsIconComponent,
                                                          0);
                  if ( Component_object )
                  {
                    center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
                    x = center.fields.x;
                    y = center.fields.y;
                    z = center.fields.z;
                  }
                  else
                  {
                    if ( !byte_4D2A139 )
                    {
                      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                      byte_4D2A139 = 1;
                    }
                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                    x = static_fields->zeroVector.fields.x;
                    y = static_fields->zeroVector.fields.y;
                    z = static_fields->zeroVector.fields.z;
                  }
                  p_defaultServantParam = (GrandQuestFolderBoardItem_o *)&this->fields.defaultServantParam;
                  *(float *)(v5 + 72) = x;
                  *(float *)(v5 + 76) = y;
                  *(float *)(v5 + 80) = z;
                  if ( Component_object )
                  {
                    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
                    v23 = size.fields.x;
                    v24 = size.fields.y;
                    v25 = size.fields.z;
                  }
                  else
                  {
                    if ( !byte_4D2A139 )
                    {
                      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                      byte_4D2A139 = 1;
                    }
                    v19 = UnityEngine_Vector3_TypeInfo->static_fields;
                    v23 = v19->zeroVector.fields.x;
                    v24 = v19->zeroVector.fields.y;
                    v25 = v19->zeroVector.fields.z;
                  }
                  *(float *)(v5 + 84) = v23;
                  *(float *)(v5 + 88) = v24;
                  *(float *)(v5 + 92) = v25;
                  p_defaultServantParam->klass = (GrandQuestFolderBoardItem_c *)v5;
                  sub_1C93A78(p_defaultServantParam, v5, v11, v12, v13, v14, v15, v16);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C93D2C(clsIconComponent, v7);
  }
}


void BattleServantParamComponent__ShowFaceIcon(
        BattleServantParamComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v9; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D341BA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341BA = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    v9.fields.r = 1.0;
    v9.fields.g = 1.0;
    v9.fields.b = 1.0;
    v9.fields.a = 1.0;
    TweenColor__Begin(gameObject, duration, v9, 0);
  }
}


void BattleServantParamComponent__SyncGrandEffectParticle(
        BattleServantParamComponent_o *this,
        float syncTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectObj; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4D341F3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341F3 = 1;
  }
  grandEffectObj = (UnityEngine_Object_o *)this->fields.grandEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandEffectObj, 0, 0) )
  {
    Component_object = this->fields.grandEffectObj;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___)) == 0 )
    {
      sub_1C93D2C(Component_object, v6);
    }
    CommonEffectComponent__SyncParticleList((CommonEffectComponent_o *)Component_object, syncTime, 0);
  }
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  __int64 v3; // d8
  int32_t TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // x19

  if ( (byte_4D341A5 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341A5 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = *(_QWORD *)&static_fields->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX;
  TARGET_ICON_SPRITE_DEPTH = static_fields->TARGET_ICON_SPRITE_DEPTH;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo_48338088(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  __int64 v3; // d8
  int32_t TargetIconDepthWhenFix; // w20
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_4D341AB & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C93AD4(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4D341AB = 1;
  }
  if ( !v2 )
    sub_1C93D2C(setting, method);
  v3 = *(_QWORD *)&v2->fields.TargetIconWidthWhenFix;
  TargetIconDepthWhenFix = v2->fields.TargetIconDepthWhenFix;
  v5 = sub_1C93D20(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 24) = TargetIconDepthWhenFix;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


void BattleServantParamComponent__UpdateBattlePoint(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  struct BattlePointGaugeComponent_o *v7; // x8
  BattlePointGaugeComponent_o *v8; // x8

  v4 = this;
  if ( (byte_4D341ED & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341ED = 1;
  }
  if ( !svtdata )
    goto LABEL_15;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    battlePointGaugeComponent = (UnityEngine_Object_o *)v4->fields.battlePointGaugeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v4->fields.battlePointGaugeComponent;
      if ( !v7 )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)BattleServantData__GetBattlePointData(
                                                (BattleServantData_o *)this,
                                                v7->fields.battlePointId,
                                                0);
      if ( this )
      {
        v8 = v4->fields.battlePointGaugeComponent;
        if ( v8 )
        {
          BattlePointGaugeComponent__UpdateBattlePoint(v8, HIDWORD(this->fields.m_CachedPtr), 0);
          return;
        }
LABEL_15:
        sub_1C93D2C(this, svtdata);
      }
    }
  }
}


void BattleServantParamComponent__UpdateBattlePointImmediately(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  struct BattlePointGaugeComponent_o *v7; // x8
  BattlePointGaugeComponent_o *v8; // x8

  v4 = this;
  if ( (byte_4D341EE & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341EE = 1;
  }
  if ( !svtdata )
    goto LABEL_15;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    battlePointGaugeComponent = (UnityEngine_Object_o *)v4->fields.battlePointGaugeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v4->fields.battlePointGaugeComponent;
      if ( !v7 )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)BattleServantData__GetBattlePointData(
                                                (BattleServantData_o *)this,
                                                v7->fields.battlePointId,
                                                0);
      if ( this )
      {
        v8 = v4->fields.battlePointGaugeComponent;
        if ( v8 )
        {
          BattlePointGaugeComponent__UpdateBattlePointImmediately(v8, HIDWORD(this->fields.m_CachedPtr), 0);
          return;
        }
LABEL_15:
        sub_1C93D2C(this, svtdata);
      }
    }
  }
}


void BattleServantParamComponent__UpdateClassIconEffect(
        BattleServantParamComponent_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_Collections_IEnumerator_o *v16; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v26; // w20
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x4
  BattleServantParamComponent_o *v29; // x0
  const MethodInfo *v30; // x4
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4D341E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D341E7 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  entity = 0;
  memset(&v32, 0, sizeof(v32));
  if ( !servantData )
    goto LABEL_38;
  this = (BattleServantParamComponent_o *)BattleServantData__get_BuffData(servantData, 0);
  if ( !this )
    goto LABEL_38;
  ClassIconEffectBuffList = (System_Collections_ICollection_o *)BattleBuffData__GetClassIconEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0);
  if ( BasicHelper__IsNullOrEmpty(ClassIconEffectBuffList, 0) )
  {
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.classIconEffectDict, 0, v6);
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.commandSpellEffectDict, 0, v7);
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v34 = v31;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C93D2C(v10, v11);
    if ( !v9 )
      sub_1C93D2C(v10, v11);
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v9,
            &entity,
            (int32_t)v34.fields._current[21].monitor,
            (const MethodInfo_34632C0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C93D2C(v13, v14);
      v16 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v15);
      started = UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)v4, v16, 0);
      if ( !v8 )
        sub_1C93D2C(started, v18);
      v19 = System_Collections_Generic_List_int___Contains(
              v8,
              (int32_t)current[21].monitor,
              (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v19 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C93D2C(v19, monitor_low);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            monitor_low,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = monitor_low;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v8 )
LABEL_38:
    sub_1C93D2C(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v8,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = (System_Collections_Generic_List_Enumerator_int__o)v31;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v32,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1C93D2C(0, v24);
    v26 = v32.fields._current;
    v27 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            v32.fields._current,
            (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v27 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v27,
        v4->fields.classIconEffectDict,
        v26,
        0,
        v28);
      BattleServantParamComponent__DestroyEffectObject(v29, v4->fields.commandSpellEffectDict, v26, 0, v30);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v32,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void BattleServantParamComponent__UpdateConditionBuffIcon(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        bool isPlayFlashEffect,
        bool isUpdateShowBuffDataReady,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v5; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  BattleBuffData_ShowBuffData_array *ShowConditionBuff; // x22

  if ( !svtData )
    goto LABEL_8;
  v5 = this;
  this = (BattleServantParamComponent_o *)BattleServantData__get_BuffData(svtData, 0);
  if ( !this )
    goto LABEL_8;
  ShowConditionBuff = BattleBuffData__GetShowConditionBuff((BattleBuffData_o *)this, 0);
  if ( isUpdateShowBuffDataReady )
  {
    this = (BattleServantParamComponent_o *)v5->fields.showBuffComponent;
    if ( !this )
      goto LABEL_8;
    BattleServantShowBuffComponent__UpdateShowConditionBuffDataReady(
      (BattleServantShowBuffComponent_o *)this,
      ShowConditionBuff,
      v8);
  }
  this = (BattleServantParamComponent_o *)v5->fields.showBuffComponent;
  if ( !this )
LABEL_8:
    sub_1C93D2C(this, svtData);
  BattleServantShowBuffComponent__UpdateConditionBuffList(
    (BattleServantShowBuffComponent_o *)this,
    ShowConditionBuff,
    isPlayFlashEffect,
    v9);
}


void BattleServantParamComponent__UpdateHp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  int32_t NowHp; // w22
  int32_t MaxHp; // w0
  const MethodInfo *v9; // x4
  int32_t v10; // w22
  int32_t v11; // w0
  const MethodInfo *v12; // x4

  if ( !svtData )
    sub_1C93D2C(this, 0);
  NowHp = BattleServantData__getNowHp(svtData, 0);
  MaxHp = BattleServantData__getMaxHp(svtData, 0);
  BattleServantParamComponent__updateHplabel(this, NowHp, MaxHp, 1, v9);
  v10 = BattleServantData__getNowHp(svtData, 0);
  v11 = BattleServantData__getMaxHp(svtData, 0);
  BattleServantParamComponent__updateHpbar(this, v10, v11, isUpdateDamageBarImmediately, v12);
}


void BattleServantParamComponent__UpdateHpAndDamageBar(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__UpdateHp(this, svtData, 1, v3);
}


void BattleServantParamComponent__UpdateHpBarUi(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  BattleServantData_o *IsShiftablePhaseServant; // x0
  __int64 v5; // x1
  struct BattleServantData_o *v6; // x9
  struct System_Int32_array *shiftDeckList; // x10
  int32_t v8; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v10; // x4

  data = this->fields.data;
  if ( data )
  {
    IsShiftablePhaseServant = (BattleServantData_o *)BattleServantData__IsShiftablePhaseServant(data, 0);
    v6 = this->fields.data;
    if ( !v6
      || (shiftDeckList = v6->fields.shiftDeckList) == 0
      || !this->fields.hpChange
      || (BattleServantChangeBarComponent__setBarType(
            this->fields.hpChange,
            1,
            ((int)((_DWORD)IsShiftablePhaseServant << 31) >> 31)
          - v6->fields.shiftDeckIndex
          + LODWORD(shiftDeckList->max_length),
            0),
          (IsShiftablePhaseServant = this->fields.data) == 0)
      || (IsShiftablePhaseServant = (BattleServantData_o *)BattleServantData__getNowHp(IsShiftablePhaseServant, 0),
          !this->fields.data) )
    {
      sub_1C93D2C(IsShiftablePhaseServant, v5);
    }
    v8 = (int)IsShiftablePhaseServant;
    MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
    BattleServantParamComponent__updateHpbar(this, v8, MaxHp, 1, v10);
  }
}


void BattleServantParamComponent__UpdateHpLabel(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  __int64 NowHp; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v8; // x4

  data = this->fields.data;
  if ( data )
  {
    NowHp = BattleServantData__getNowHp(data, 0);
    if ( !this->fields.data )
      sub_1C93D2C(NowHp, v5);
    v6 = NowHp;
    MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
    BattleServantParamComponent__updateHplabel(this, v6, MaxHp, 1, v8);
  }
}


void BattleServantParamComponent__UpdateNameLabel(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_4D341E5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341E5 = 1;
  }
  if ( this->fields.data )
  {
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
    {
      data = this->fields.data;
      if ( !data
        || (v6 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0), !v6) )
      {
        sub_1C93D2C(data, v4);
      }
      UILabel__set_text(v6, (System_String_o *)data, 0);
    }
  }
}


void BattleServantParamComponent__UpdateNpImmediately(
        BattleServantParamComponent_o *this,
        int32_t np,
        const MethodInfo *method)
{
  UnityEngine_Object_o *npcomp; // x21
  __int64 v6; // x1
  BattleNpGaugeSystemComponent_o *v7; // x0

  if ( (byte_4D341C2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341C2 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    BattleNpGaugeSystemComponent__setNowParam(v7, np, 0);
  }
}


void BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  __int64 v6; // x1
  BattleServantChangeBarComponent_o *v7; // x0

  if ( (byte_4D341D8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D8 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    BattleServantChangeBarComponent__setBarType(v7, 1, curGaugeIndex, 0);
  }
}


void BattleServantParamComponent__UpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t fromHp,
        int32_t toHp,
        int32_t maxHp,
        float time,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpGauge; // x24
  BattleHpGaugeBarComponent_o *v14; // x0
  __int64 v15; // x1
  System_Collections_Hashtable_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v21[4]; // [xsp+8h] [xbp-78h] BYREF
  float v22; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v23; // [xsp+18h] [xbp-68h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D341DB & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&System_Collections_Hashtable_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&StringLiteral_19902/*"from"*/);
    sub_1C93AD4(&StringLiteral_20509/*"ignoretimescale"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22703/*"oncompleteparams"*/);
    sub_1C93AD4(&StringLiteral_22710/*"onupdate"*/);
    sub_1C93AD4(&StringLiteral_10035/*"OnUpdateShiftGaugeChangeHp"*/);
    sub_1C93AD4(&StringLiteral_9937/*"OnCompleteShiftGaugeChangeHp"*/);
    sub_1C93AD4(&StringLiteral_24415/*"to"*/);
    sub_1C93AD4(&StringLiteral_22702/*"oncomplete"*/);
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D341DB = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v14 = this->fields.hpGauge;
    if ( !v14 )
      goto LABEL_13;
    BattleHpGaugeBarComponent__setInitValue(v14, fromHp, maxHp, 0);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v16 = (System_Collections_Hashtable_o *)sub_1C93D20(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_65788340(v16, 0),
        v24 = fromHp,
        v14 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v24),
        !v16) )
  {
LABEL_13:
    sub_1C93D2C(v14, v15);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_19902/*"from"*/,
    v14,
    v16->klass->vtable._22_Add.method);
  v23 = toHp;
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_24415/*"to"*/,
    v17,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_22710/*"onupdate"*/,
    StringLiteral_10035/*"OnUpdateShiftGaugeChangeHp"*/,
    v16->klass->vtable._22_Add.method);
  v22 = time;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_24376/*"time"*/,
    v18,
    v16->klass->vtable._22_Add.method);
  v21[0] = 1;
  v19 = j_il2cpp_value_box_0(bool_TypeInfo, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_20509/*"ignoretimescale"*/,
    v19,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_22702/*"oncomplete"*/,
    StringLiteral_9937/*"OnCompleteShiftGaugeChangeHp"*/,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_22703/*"oncompleteparams"*/,
    playShiftGauge,
    v16->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v16, 0);
}


void BattleServantParamComponent__UpdateShortNameLabel(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *shortNameLabel; // x20
  __int64 defaultShortNameLabelWidth; // x1
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v9; // w21
  UnityEngine_Object_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v14; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UILabel_o *v23; // x20
  __int64 v24; // x8
  float v25; // s8
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D341E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17224/*"battle_name"*/);
    byte_4D341E6 = 1;
  }
  if ( this->fields.data )
  {
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(shortNameLabel, 0, 0) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_44;
      EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0);
      p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
      enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
      v9 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0, 0) )
      {
        v10 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(v10, 0);
      }
      if ( v9 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
        GameObjectExtensions__ResetLocalScale(gameObject, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v9, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0);
        v14 = AssetStorage
            ? AssetData__GetObject_object__51927708(
                AssetStorage,
                (System_String_o *)StringLiteral_17224/*"battle_name"*/,
                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v16 = UnityEngine_Object__Instantiate_object__52629400(
                v14,
                transform,
                (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v16;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.enemyNameEffectPrefab,
          (int32_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      data = this->fields.data;
      if ( data )
      {
        v23 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0);
        if ( v23 )
        {
          UILabel__set_text(v23, (System_String_o *)data, 0);
          defaultShortNameLabelWidth = (unsigned int)this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( (int)defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_44;
            defaultShortNameLabelWidth = (unsigned int)data->fields._iconLimitCount_k__BackingField.fields.fakeValue;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_44;
          }
          v24 = *(_QWORD *)&data->fields.equiphp;
          if ( !v24 )
            goto LABEL_44;
          v25 = (float)(data->fields.nexttpturn * *(_DWORD *)(v24 + 16));
          if ( (float)(int)defaultShortNameLabelWidth >= v25 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
              if ( data )
              {
                v27.fields.x = 1.0;
                v27.fields.y = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v25, 0);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
              if ( data )
              {
                v27.fields.y = 1.0;
                v27.fields.x = (float)this->fields.defaultShortNameLabelWidth / v25;
LABEL_43:
                v27.fields.z = 1.0;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)data, v27, 0);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_1C93D2C(data, defaultShortNameLabelWidth);
    }
  }
}


void BattleServantParamComponent__UpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *updated; // x1

  if ( this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v4);
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    {
      updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, v5);
      UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, updated, 0);
    }
  }
  else
  {
    BattleServantParamComponent__DeleteSkillRankUpEffect(this, method);
  }
}


void BattleServantParamComponent__UpdateStatusByTransform(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *classIconData; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v9; // x19

  if ( (byte_4D341C9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341C9 = 1;
  }
  if ( this->fields.data )
  {
    BattleServantParamComponent__UpdateStatusFace(this, method);
    classIconData = (BattleServantData_o *)this->fields.classIconData;
    if ( !classIconData )
      goto LABEL_12;
    ((void (__fastcall *)(BattleServantData_o *, const MethodInfo *))classIconData->klass->vtable._4_unknown.methodPtr)(
      classIconData,
      classIconData->klass->vtable._4_unknown.method);
    BattleServantParamComponent__UpdateNameLabel(this, v5);
    BattleServantParamComponent__UpdateShortNameLabel(this, v6);
    BattleServantParamComponent__updateSkillIcon(this, 0, v7);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      classIconData = this->fields.data;
      if ( classIconData )
      {
        v9 = this->fields.levelLabel;
        classIconData = (BattleServantData_o *)BattleServantData__getLevelLabel(classIconData, 0);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)classIconData, 0);
          return;
        }
      }
LABEL_12:
      sub_1C93D2C(classIconData, v3);
    }
  }
}


void BattleServantParamComponent__UpdateStatusFace(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x21
  BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D341E4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    byte_4D341E4 = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (GrandQuestFolderBoardItem_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
    {
      data = this->fields.data;
      if ( !data
        || (v7 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0),
            (v8 = this->fields.data) == 0) )
      {
        sub_1C93D2C(data, v5);
      }
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v7, v9, DispLimitCount, 0);
      p_facetex->klass = (GrandQuestFolderBoardItem_c *)Manager__loadStatusFace;
      sub_1C93A78(p_facetex, (int32_t)Manager__loadStatusFace, v12, v13, v14, v15, v16, v17);
    }
  }
}


void BattleServantParamComponent__UpdateTdGauge(
        BattleServantParamComponent_o *this,
        System_Int32_array *nowAndMaxArray,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x21
  BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v7; // x20
  int32_t v8; // w19
  int32_t v9; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v11; // x1

  if ( (byte_4D341DA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341DA = 1;
  }
  if ( nowAndMaxArray && LODWORD(nowAndMaxArray->max_length) == 2 )
  {
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0) )
    {
      data = this->fields.data;
      if ( data )
      {
        if ( LODWORD(nowAndMaxArray->max_length) < 2 )
          sub_1C93D34(data);
        v7 = this->fields.nextTdGauge;
        v9 = nowAndMaxArray->m_Items[0];
        v8 = nowAndMaxArray->m_Items[1];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0);
        if ( !v7 )
          sub_1C93D2C(isTDSeraled, v11);
        BattleNextTDgaugeComponent__setInitGauge(v7, v9, v8, isTDSeraled, 0);
      }
    }
  }
}


void BattleServantParamComponent___InstantiateGrandEffectObject_b__204_0(
        BattleServantParamComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  int32_t frameType_k__BackingField; // w21
  Il2CppObject *v7; // x0
  Il2CppObject *Object_object__51927708; // x21
  UnityEngine_Transform_o *grandEffectRoot; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4D341F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_18991/*"ef_classicon_flash_{0}"*/);
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&StringLiteral_18989/*"ef_classicon_flash"*/);
    byte_4D341F8 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_14;
  frameType_k__BackingField = data->fields._frameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType_k__BackingField, 1, 0);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &AdjustFrameTypeForClass);
  this = (BattleServantParamComponent_o *)System_String__Format((System_String_o *)StringLiteral_18991/*"ef_classicon_flash_{0}"*/, v7, 0);
  if ( !assetData )
LABEL_14:
    sub_1C93D2C(this, assetData);
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              assetData,
                              (System_String_o *)this,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51927708, 0, 0) )
    Object_object__51927708 = AssetData__GetObject_object__51927708(
                                assetData,
                                (System_String_o *)StringLiteral_18989/*"ef_classicon_flash"*/,
                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  grandEffectRoot = v4->fields.grandEffectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__52629400(
          Object_object__51927708,
          grandEffectRoot,
          (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  v4->fields.grandEffectObj = (struct UnityEngine_GameObject_o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.grandEffectObj, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  BattleServantParamComponent__SetGrandEffectDepth(v4, v17);
}


void BattleServantParamComponent__callSkillIcon(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  __int64 v4; // x20
  char v5; // w22
  int max_length; // w9
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  v2 = this;
  if ( (byte_4D341CC & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&Method_BattleServantParamComponent_callSkillIcon__);
    byte_4D341CC = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1C93D2C(this, method);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C93D34(this);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                method);
      if ( !(v5 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v7 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C93AEC(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
        OverwriteAssetSoundName__PlayCommonSe(v8, 2, 0, 0);
        v5 = 1;
      }
      skillIcon = v2->fields.skillIcon;
      ++v4;
      if ( skillIcon )
        continue;
    }
    goto LABEL_13;
  }
  if ( v2->fields.modeWindow == 2 )
    BattleServantParamComponent__UpdateSkillRankUpEffect(v2, method);
}


void BattleServantParamComponent__changeHp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__UpdateHp(this, svtData, 0, v3);
}


void BattleServantParamComponent__changeUpdateStatus(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantData_o *NowHp; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct BattleServantData_o *data; // x8
  int32_t v8; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v10; // x4

  BattleServantParamComponent__initUpdateView(this, 0, v2);
  data = this->fields.data;
  if ( !data
    || (BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v6), (NowHp = this->fields.data) == 0)
    || (NowHp = (BattleServantData_o *)BattleServantData__getNowHp(NowHp, 0), !this->fields.data) )
  {
    sub_1C93D2C(NowHp, v5);
  }
  v8 = (int)NowHp;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
  BattleServantParamComponent__updateHplabel(this, v8, MaxHp, 1, v10);
}


bool BattleServantParamComponent__checkId(BattleServantParamComponent_o *this, int32_t Id, const MethodInfo *method)
{
  BattleServantData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = BattleServantData__checkID(data, Id, 0);
  return (char)data;
}


void BattleServantParamComponent__clearBuffIconList(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Object_array *v4; // x0
  __int64 v5; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4D341E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_4D341E2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3
    || (showBuffComponent = this->fields.showBuffComponent,
        v4 = System_Collections_Generic_List_object___ToArray(
               v3,
               (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1C93D2C(v4, v5);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v4, v7);
}


void BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x22
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4D341CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341CE = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0 )
    {
      sub_1C93D2C(Component_object, v8);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D341CD & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_TypeInfo);
    byte_4D341CD = 1;
  }
  v3 = sub_1C93D20(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleServantParamComponent__fixUpdateStatus(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleServantParamComponent__initUpdateView(this, 0, v2);
}


BattleServantData_o *BattleServantParamComponent__getData(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


void BattleServantParamComponent__initUpdateView(
        BattleServantParamComponent_o *this,
        int32_t notUpdateFlag,
        const MethodInfo *method)
{
  char v3; // w20
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v6; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v8; // x22
  int32_t v9; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v19; // x21
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v21; // x8
  struct BattleServantParamSetting_o *v22; // x8
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  struct BattleServantParamSetting_o *v28; // x8
  struct BattleServantParamSetting_o *v29; // x8
  struct BattleServantParamSetting_o *v30; // x8
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v32; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v34; // x21
  int32_t v35; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v37; // x9
  struct System_Int32_array *shiftDeckList; // x10
  UnityEngine_Object_o *hpShift; // x21
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v41; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v43; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v45; // x21
  struct BattleServantData_o *v46; // x8
  BattleNpGaugeSystemComponent_o *v47; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v49; // w0
  const MethodInfo *v50; // x2
  BattleNextTDgaugeComponent_o *v51; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v55; // x8
  UISprite_o *v56; // x20
  UISprite_o *v57; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v60; // x8
  struct BattleServantData_o *v61; // x8
  ServantBattlePointMaster_o *v62; // x20
  __int64 v63; // x21
  __int64 v64; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v66; // x20
  __int64 v67; // x9
  int *p_offset; // x10
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x20
  BattlePointData_o *v72; // x23
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x21
  BattleServantData_o *v83; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v85; // x1
  BattlePointData_o *v86; // x28
  struct BattleServantData_o *v87; // x8
  UnityEngine_Object_o *battlePointRoot; // x22
  int32_t v89; // w22
  UnityEngine_Transform_o *v90; // x23
  UnityEngine_Object_o *Manager__LoadBattlePointGauge; // x22
  _BOOL8 v92; // x0
  __int64 v93; // x1
  Il2CppObject *Component_object; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  __int64 v101; // x1
  BattlePointGaugeComponent_o *battlePointGaugeComponent; // x0
  const MethodInfo *v103; // x2
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4D341C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantBattlePointMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&FileName_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    byte_4D341C8 = 1;
  }
  component = 0;
  if ( !this->fields.data )
    return;
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v8 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0);
    if ( !this->fields.data )
      goto LABEL_177;
    v9 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v9, DispLimitCount, 0);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.facetex,
      (int32_t)Manager__loadStatusFace,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  data = (BattleServantData_o *)this->fields.classIconData;
  if ( !data )
    goto LABEL_177;
  ((void (__fastcall *)(BattleServantData_o *, const MethodInfo *))data->klass->vtable._4_unknown.methodPtr)(
    data,
    data->klass->vtable._4_unknown.method);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v19 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0);
    if ( !v19 )
      goto LABEL_177;
    UILabel__set_text(v19, (System_String_o *)data, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v21 = this->fields.battleServantParamSetting;
    if ( !v21 )
      goto LABEL_177;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.clsIconComponent,
      v21->fields.IsDispClassIcon,
      0);
    v22 = this->fields.battleServantParamSetting;
    if ( !v22 )
      goto LABEL_177;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this, v22->fields.UiPosition, 0);
    v23 = this->fields.battleServantParamSetting;
    if ( !v23 )
      goto LABEL_177;
    ComponentHelper__SetLocalScale((UnityEngine_Component_o *)this, v23->fields.UiScale, 0);
    v24 = this->fields.battleServantParamSetting;
    if ( !v24 )
      goto LABEL_177;
    BuffIconMax = v24->fields.BuffIconMax;
    if ( (BuffIconMax & 0x80000000) == 0 )
    {
      showBuffComponent = this->fields.showBuffComponent;
      if ( !showBuffComponent )
        goto LABEL_177;
      showBuffComponent->fields.maxCount = BuffIconMax;
    }
    BuffIconMaxLine = v24->fields.BuffIconMaxLine;
    if ( BuffIconMaxLine < 0 )
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
    }
    else
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
      if ( !data )
        goto LABEL_177;
      HIDWORD(data->fields.userSvtId.fields.hiddenValue) = BuffIconMaxLine;
    }
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)data, v24->fields.BuffIconPosition, 0);
    v28 = this->fields.battleServantParamSetting;
    if ( !v28 )
      goto LABEL_177;
    GameObjectHelper__SetActiveSafely(this->fields.levelRoot, v28->fields.IsDispLevel, 0);
    data = (BattleServantData_o *)UnityEngine_Component__TryGetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    &component,
                                    (const MethodInfo_319C308 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v29 = this->fields.battleServantParamSetting;
      if ( !v29 )
        goto LABEL_177;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_177;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)component, v29->fields.BoxColliderPosition, 0);
      v30 = this->fields.battleServantParamSetting;
      if ( !v30 )
        goto LABEL_177;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_177;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)component, v30->fields.BoxColliderSize, 0);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v32 = this->fields.nameLabel;
    data = (BattleServantData_o *)BattleServantData__getServantName(data, 0);
    if ( !v32 )
      goto LABEL_177;
    UILabel__set_text(v32, (System_String_o *)data, 0);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v6);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v34 = this->fields.hpGauge;
    data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0);
    if ( !this->fields.data )
      goto LABEL_177;
    v35 = (int)data;
    data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0);
    if ( !v34 )
      goto LABEL_177;
    BattleHpGaugeBarComponent__setInitValue(v34, v35, (int32_t)data, 0);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    data = (BattleServantData_o *)BattleServantData__IsShiftablePhaseServant(data, 0);
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_177;
    shiftDeckList = v37->fields.shiftDeckList;
    if ( !shiftDeckList || !this->fields.hpChange )
      goto LABEL_177;
    BattleServantChangeBarComponent__setBarType(
      this->fields.hpChange,
      1,
      ((int)((_DWORD)data << 31) >> 31) - v37->fields.shiftDeckIndex + LODWORD(shiftDeckList->max_length),
      0);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    data = (BattleServantData_o *)this->fields.hpShift;
    if ( !data )
      goto LABEL_177;
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, 0, 0);
  }
  BattleServantParamComponent__setAtlas(this, v6);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    data = (BattleServantData_o *)this->fields.breakSprite;
    if ( !data )
      goto LABEL_177;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_177;
  data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0);
  if ( !this->fields.data )
    goto LABEL_177;
  v41 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
  BattleServantParamComponent__updateHplabel(this, v41, MaxHp, 1, v43);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v45 = this->fields.npcomp;
    if ( !v45 )
      goto LABEL_177;
    v45->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v45->fields.maxparam = BattleServantData__getCountMaxNp(data, 0);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_177;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0);
    v46 = this->fields.data;
    if ( !v46 )
      goto LABEL_177;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_177;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v46->fields.np, 0);
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v47 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0);
    if ( !v47 )
      goto LABEL_177;
    BattleNpGaugeSystemComponent__setUseNp(v47, (unsigned __int8)data & 1, 0);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v49 = UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0);
  if ( (v3 & 1) == 0 && v49 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_177;
    v51 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0);
    if ( !v51 )
      goto LABEL_177;
    BattleNextTDgaugeComponent__setInitGauge(v51, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v50);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0, 0) )
  {
    data = (BattleServantData_o *)this->fields.friendIcon;
    if ( !data )
      goto LABEL_177;
    data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !data )
      goto LABEL_177;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
    v55 = this->fields.data;
    if ( !v55 )
      goto LABEL_177;
    if ( v55->fields.followerType )
    {
      v56 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v56 )
        goto LABEL_177;
      UISprite__set_spriteName(v56, FileName_TypeInfo->static_fields->friendIconName, 0);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_177;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
      if ( !data )
        goto LABEL_177;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
      v55 = this->fields.data;
      if ( !v55 )
        goto LABEL_177;
    }
    if ( v55->fields.flgEventJoin )
    {
      v57 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v57 )
        goto LABEL_177;
      UISprite__set_spriteName(v57, FileName_TypeInfo->static_fields->eventJoinIconName, 0);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_177;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
      if ( !data )
        goto LABEL_177;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v6);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_177;
  data = (BattleServantData_o *)perf->fields.data;
  if ( !data )
    goto LABEL_177;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v60 = this->fields.data;
      if ( !v60 )
        goto LABEL_177;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_177;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v60->fields.defeatPoint,
        v60->fields.maxDefeatPoint,
        v60->fields.isEnemy,
        0);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v61 = this->fields.data;
  if ( !v61 )
    goto LABEL_177;
  v62 = (ServantBattlePointMaster_o *)data;
  v64 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v64;
  *(_QWORD *)&v109.fields.fakeValue = v63;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v109, 0);
  if ( !v62
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v62, (int32_t)data, 0)) == 0 )
  {
LABEL_177:
    sub_1C93D2C(data, v6);
  }
  klass = data->klass;
  v66 = data;
  v67 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v67;
      p_offset += 4;
      if ( !v67 )
        goto LABEL_131;
    }
    v69 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_131:
    v69 = sub_1C69E5C(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0);
  }
  v71 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
  if ( !v71 )
    sub_1C93D2C(0, v70);
  v72 = 0;
  while ( 1 )
  {
    v73 = *(_QWORD *)v71;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v75 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_139;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_139:
      v76 = sub_1C69E5C(v71, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v71, *(_QWORD *)(v76 + 8)) & 1) == 0 )
      break;
    v77 = *(_QWORD *)v71;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v79 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_146;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_146:
      v80 = sub_1C69E5C(v71, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0);
    }
    v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v71, *(_QWORD *)(v80 + 8));
    if ( !v82 )
      sub_1C93D2C(0, v81);
    v83 = this->fields.data;
    if ( !v83 )
      sub_1C93D2C(0, v81);
    BattlePointData = BattleServantData__GetBattlePointData(v83, *(_DWORD *)(v82 + 20), 0);
    if ( BattlePointData )
      v86 = BattlePointData;
    else
      v86 = v72;
    if ( !BattlePointData )
      goto LABEL_187;
    if ( !v86 )
      sub_1C93D2C(BattlePointData, v85);
    v72 = BattlePointData;
    if ( !v86->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_187:
      v87 = this->fields.data;
      if ( !v87 )
        sub_1C93D2C(BattlePointData, v85);
      v72 = v86;
      if ( !v87->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v72 = v86;
        if ( UnityEngine_Object__op_Inequality(battlePointRoot, 0, 0) )
        {
          v89 = *(_DWORD *)(v82 + 20);
          v90 = this->fields.battlePointRoot;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__LoadBattlePointGauge = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadBattlePointGauge(
                                                                    v89,
                                                                    v90,
                                                                    0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v92 = UnityEngine_Object__op_Equality(Manager__LoadBattlePointGauge, 0, 0);
          v72 = v86;
          if ( !v92 )
          {
            if ( !Manager__LoadBattlePointGauge )
              sub_1C93D2C(v92, v93);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Manager__LoadBattlePointGauge,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
            this->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)Component_object;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields.battlePointGaugeComponent,
              (int32_t)Component_object,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100);
            battlePointGaugeComponent = this->fields.battlePointGaugeComponent;
            if ( !battlePointGaugeComponent )
              sub_1C93D2C(0, v101);
            BattlePointGaugeComponent__Init(battlePointGaugeComponent, *(_DWORD *)(v82 + 20), 0);
            BattleServantParamComponent__UpdateBattlePointImmediately(this, this->fields.data, v103);
            break;
          }
        }
      }
    }
  }
  v104 = *(_QWORD *)v71;
  v105 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
  {
    v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_173;
    }
    v107 = v104 + 16LL * *v106 + 312;
  }
  else
  {
LABEL_173:
    v107 = sub_1C69E5C(v71, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v107)(v71, *(_QWORD *)(v107 + 8));
}


bool BattleServantParamComponent__isNone(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  return this->fields.uniqueID == -1;
}


void BattleServantParamComponent__onClickEnemyTarget(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleServantParamComponent_o *v3; // x19
  struct BattlePerformance_o *v4; // x8
  struct BattleData_o *data; // x9
  struct BattlePerformanceStatus_o *statusPerf; // x8

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  v3 = this;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_16;
  this = (BattleServantParamComponent_o *)BattleData__isTutorial((BattleData_o *)this, 0);
  v4 = v3->fields.perf;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v4 )
      goto LABEL_16;
LABEL_10:
    statusPerf = v4->fields.statusPerf;
    if ( statusPerf )
    {
      this = (BattleServantParamComponent_o *)statusPerf->fields.masterPerf;
      if ( this )
      {
        if ( !BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)this, 0) )
          return;
        this = (BattleServantParamComponent_o *)v3->fields.perf;
        if ( this )
        {
          *((_BYTE *)this + 692) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C93D2C(this, method);
  }
  if ( !v4 )
    goto LABEL_16;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( data->fields.tutorialId != 3 || data->fields.tutorialState )
    goto LABEL_10;
}


void BattleServantParamComponent__onLongPressEnemyTarget(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x8

  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0 || (masterPerf = statusPerf->fields.masterPerf) == 0 )
    sub_1C93D2C(this, method);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0);
}


void BattleServantParamComponent__playAddition(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4D341DE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3112/*"Battle/Prefab/ef_add_enemy"*/);
    byte_4D341DE = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_41910396(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3112/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0,
                                                          0),
          (v6 = this->fields.data) == 0) )
    {
      sub_1C93D2C(clsIconComponent, method);
    }
    v6->fields.isAddition = 0;
  }
}


void BattleServantParamComponent__playAttackEffect(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *facetex; // x20
  struct UnityEngine_GameObject_array *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v2 = this;
  if ( (byte_4D341C7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&StringLiteral_19079/*"effect/ef_cwflash01"*/);
    byte_4D341C7 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_22;
  if ( !LODWORD(effectobj->max_length) )
    goto LABEL_23;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_22;
    if ( !LODWORD(v5->max_length) )
      goto LABEL_23;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v6, 0);
  }
  facetex = (UnityEngine_Object_o *)v2->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    this = (BattleServantParamComponent_o *)v2->fields.facetex;
    if ( this )
    {
      v8 = v2->fields.effectobj;
      this = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_41910396(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_19079/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0,
                                                  0);
        if ( v8 )
        {
          if ( LODWORD(v8->max_length) )
          {
            v8->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)v8->m_Items, (int32_t)this, v10, v11, v12, v13, v14, v15);
            return;
          }
LABEL_23:
          sub_1C93D34(this);
        }
      }
    }
LABEL_22:
    sub_1C93D2C(this, method);
  }
}


void BattleServantParamComponent__playCloseSelectServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D341B8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341B8 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C93D2C(0, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0);
    v8.fields.r = 0.5;
    v8.fields.g = 0.5;
    v8.fields.b = 0.5;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void BattleServantParamComponent__playEndShowServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D341B9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341B9 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C93D2C(0, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void BattleServantParamComponent__playSelectServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D341B7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341B7 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C93D2C(0, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void BattleServantParamComponent__playShiftEffect(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_4D341D3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D3 = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
    {
      v5 = this->fields.hpShift;
      if ( !v5 )
        sub_1C93D2C(0, v4);
      BattleServantHpShiftComponent__playShiftEffect(v5, this->fields.data, 0);
    }
  }
}


float BattleServantParamComponent__playShiftEffectBefore(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_4D341D2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341D2 = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
    return 0.0;
  v5 = this->fields.hpShift;
  if ( !v5 )
    sub_1C93D2C(0, v4);
  return BattleServantHpShiftComponent__PlayShiftEffectBefore(v5, this, 0);
}


void BattleServantParamComponent__playStartShowServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__popBuffLabel(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v9; // s8
  float v10; // s9
  UnityEngine_Object_o *ComponentInChildren_object__52413484; // x23
  _DWORD *monitor; // x8
  int v13; // w22
  _DWORD *v14; // x8
  int v15; // w8
  float sideEffectLabelWidth; // s0
  float v17; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D341E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D341E1 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_34;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0);
  if ( !buffData || !perf )
    goto LABEL_34;
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
                                 perf,
                                 (unsigned int)buffData->fields.popColor,
                                 perf->klass[1]._1.events);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v6 )
      goto LABEL_34;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v6,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_34;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        (BattleUIRangeLabel_o *)Component_object,
        buffData->fields.popLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0,
        0,
        0,
        0,
        0);
    }
    else if ( !Component_object )
    {
      goto LABEL_34;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth((BattleUIRangeLabel_o *)Component_object, 0);
    v9 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v10 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_object__52413484 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__52413484(
                                                                       (UnityEngine_GameObject_o *)v6,
                                                                       1,
                                                                       (const MethodInfo_31FC42C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__52413484, 0, 0);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__52413484 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__52413484,
          buffData->fields.popIcon,
          0);
        monitor = ComponentInChildren_object__52413484[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v13 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__52413484,
                                        0);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0);
        if ( !perf )
          goto LABEL_34;
        v20.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v13 * 0.5)) + 5.0);
        v20.fields.y = 0.0;
        v20.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v20, 0);
        v14 = ComponentInChildren_object__52413484[1].monitor;
        if ( !v14 )
          goto LABEL_34;
        v15 = v14[42];
        if ( v9 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v17 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v15 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v10 = 0.0;
          if ( v17 > sideEffectLabelWidth )
            v10 = v17 - sideEffectLabelWidth;
        }
        else
        {
          v10 = (float)(v9 * (float)((float)v15 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v19 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0);
      if ( v19 )
      {
        UnityEngine_Transform__SetParent(v19, (UnityEngine_Transform_o *)perf, 0);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
        if ( perf )
        {
          v21.fields.y = 1.0;
          v21.fields.z = 1.0;
          v21.fields.x = v9;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v21, 0);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
          if ( perf )
          {
            v22.fields.y = 0.0;
            v22.fields.z = 0.0;
            v22.fields.x = v10;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v22, 0);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1C93D2C(perf, buffData);
  }
}


void BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v7; // x20
  UISprite_o *v8; // x21
  Il2CppObject *v9; // x0
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v11; // x8
  struct BattleServantParamSetting_o *v12; // x8
  struct BattleServantParamSetting_o *v13; // x8
  struct BattleServantParamSetting_o *v14; // x8
  int v15; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v16; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D341CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3101/*"Battle/Common"*/);
    sub_1C93AD4(&StringLiteral_3122/*"BattleAssetUIAtlas"*/);
    sub_1C93AD4(&StringLiteral_20238/*"hp_break_"*/);
    byte_4D341CB = 1;
  }
  component = 0;
  v16 = 0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3101/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_33;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__51927708(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3122/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !AssetStorage )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v7 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( !AssetStorage )
      goto LABEL_33;
    UISprite__set_atlas((UISprite_o *)AssetStorage, v7, 0);
    v8 = this->fields.breakSprite;
    v15 = 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_20238/*"hp_break_"*/, v9, 0);
    if ( !v8 )
      goto LABEL_33;
    UISprite__set_spriteName(v8, (System_String_o *)AssetStorage, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Equality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)AssetStorage & 1) == 0 )
  {
    v11 = this->fields.battleServantParamSetting;
    if ( !v11 )
      goto LABEL_33;
    AssetStorage = (AssetData_o *)System_String__IsNullOrEmpty(v11->fields.TargetIconSpriteName, 0);
    if ( ((unsigned __int8)AssetStorage & 1) == 0 )
    {
      AssetStorage = (AssetData_o *)this->fields.targetMark;
      if ( !AssetStorage )
        goto LABEL_33;
      AssetStorage = (AssetData_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                      (UnityEngine_GameObject_o *)AssetStorage,
                                      &component,
                                      (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_atlas((UISprite_o *)component, v7, 0);
        v12 = this->fields.battleServantParamSetting;
        if ( !v12 )
          goto LABEL_33;
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_spriteName((UISprite_o *)component, v12->fields.TargetIconSpriteName, 0);
      }
    }
    v13 = this->fields.battleServantParamSetting;
    if ( v13 )
    {
      if ( System_String__IsNullOrEmpty(v13->fields.FixTargetIconSpriteName, 0) )
        return;
      AssetStorage = (AssetData_o *)this->fields.lockTargetMark;
      if ( AssetStorage )
      {
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)AssetStorage,
                &v16,
                (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
          return;
        AssetStorage = (AssetData_o *)v16;
        if ( v16 )
        {
          UISprite__set_atlas((UISprite_o *)v16, v7, 0);
          v14 = this->fields.battleServantParamSetting;
          if ( v14 )
          {
            AssetStorage = (AssetData_o *)v16;
            if ( v16 )
            {
              UISprite__set_spriteName((UISprite_o *)v16, v14->fields.FixTargetIconSpriteName, 0);
              return;
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C93D2C(AssetStorage, v4);
  }
}


void BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        bool isInstantlyClear,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UIWidget_o *Item; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v12; // x21
  UIWidget_c *klass; // x8
  UIWidget_o *v14; // x21
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UIWidget_c *v18; // x8
  UIWidget_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  UIWidget_c *v23; // x8
  SimpleAnimation_State_c *v24; // x1
  UIWidget_o *v25; // x21
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x9
  __int64 v29; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v31; // x2
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D341BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    sub_1C93AD4(&StringLiteral_13292/*"SvtW_StartClose"*/);
    byte_4D341BB = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    Item = (UIWidget_o *)this->fields.facetex;
    if ( isInstantlyClear )
    {
      if ( !Item )
        goto LABEL_63;
      v32.fields.r = 0.0;
      v32.fields.g = 0.0;
      v32.fields.b = 0.0;
      v32.fields.a = 0.0;
      UIWidget__set_color(Item, v32, 0);
    }
    else
    {
      if ( !Item )
        goto LABEL_63;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      v33.fields.r = 0.0;
      v33.fields.g = 0.0;
      v33.fields.b = 0.0;
      v33.fields.a = 0.0;
      TweenColor__Begin(gameObject, 0.4, v33, 0);
    }
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_62;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_63;
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      klass = Item->klass;
      v14 = Item;
      v15 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v15;
          p_offset += 2;
          if ( !v15 )
            goto LABEL_23;
        }
        v17 = (__int64)(&klass->vtable._4_get_isAnchoredHorizontally + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_23:
        v17 = sub_1C69E5C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      v23 = Item->klass;
      v24 = SimpleAnimation_State_TypeInfo;
      v25 = Item;
      v26 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v27 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v26;
          v27 += 2;
          if ( !v26 )
            goto LABEL_54;
        }
LABEL_55:
        v29 = (__int64)(&v23->vtable._8_set_alpha + *(_DWORD *)v27);
        goto LABEL_56;
      }
      goto LABEL_54;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_63;
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      v18 = Item->klass;
      v19 = Item;
      v20 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v21 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_33;
        }
        v22 = (__int64)(&v18->vtable._4_get_isAnchoredHorizontally + *(_DWORD *)v21);
      }
      else
      {
LABEL_33:
        v22 = sub_1C69E5C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      v23 = Item->klass;
      v24 = SimpleAnimation_State_TypeInfo;
      v25 = Item;
      v28 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v27 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v28;
          v27 += 2;
          if ( !v28 )
            goto LABEL_54;
        }
        goto LABEL_55;
      }
LABEL_54:
      v29 = sub_1C69E5C(v25, v24, 8);
LABEL_56:
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v29)(v25, *(_QWORD *)(v29 + 8), 1.0);
      SimpleAnimation__Play_67370764((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
      goto LABEL_57;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_63;
    Item = (UIWidget_o *)UnityEngine_Animation__get_Item(
                           (UnityEngine_Animation_o *)v12,
                           (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                           0);
    if ( !Item )
      goto LABEL_63;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0);
    Item = (UIWidget_o *)UnityEngine_Animation__get_Item(
                           (UnityEngine_Animation_o *)v12,
                           (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                           0);
    if ( !Item )
      goto LABEL_63;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0);
    UnityEngine_Animation__Play_71862428((UnityEngine_Animation_o *)v12, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
  }
LABEL_57:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0, 0) )
  {
    Item = (UIWidget_o *)this->fields.battlePointGaugeComponent;
    if ( Item )
    {
      BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)Item, 0, 0);
      goto LABEL_62;
    }
LABEL_63:
    sub_1C93D2C(Item, v6);
  }
LABEL_62:
  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 0, v7);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v31);
}


void BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *battleServantData,
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleServantData_o **p_data; // x20
  UnityEngine_Object_o *clsIconComponent; // x23
  ServantClassIconComponent_o *v13; // x24
  BattleServantParamComponent_ClassIconData_o *v14; // x23
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2
  struct BattleServantData_o *data; // x8
  struct BattleServantParamSetting_o *BattleServantParamSetting; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_Object_o *v31; // x21
  const MethodInfo *v32; // x1
  BattleNpGaugeSystemComponent_o *v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v37; // x2
  struct BattleServantData_o *v38; // x8
  struct BattleServantData_o *v39; // x8
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3

  if ( (byte_4D341B2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_ClassIconData_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341B2 = 1;
  }
  p_data = &this->fields.data;
  this->fields.modeWindow = 1;
  this->fields.data = battleServantData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)battleServantData,
    (int32_t)stageEntity,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !battleServantData )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0, 0) )
  {
    v13 = this->fields.clsIconComponent;
    v14 = (BattleServantParamComponent_ClassIconData_o *)sub_1C93D20(BattleServantParamComponent_ClassIconData_TypeInfo);
    BattleServantParamComponent_ClassIconData___ctor(v14, battleServantData, v13, v15);
  }
  else
  {
LABEL_8:
    v14 = (BattleServantParamComponent_ClassIconData_o *)sub_1C93D20(BattleServantParamComponent_BaseClassIconData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.classIconData, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  data = this->fields.data;
  if ( !data )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
    {
      v33 = this->fields.npcomp;
      if ( !v33 )
        goto LABEL_28;
      BattleNpGaugeSystemComponent__resetSlider(v33, 0);
    }
    this->fields.uniqueID = -1;
    goto LABEL_27;
  }
  this->fields.uniqueID = data->fields.uniqueId;
  BattleServantParamSetting = BattleServantParamComponent__GetBattleServantParamSetting(this, stageEntity, v22);
  this->fields.battleServantParamSetting = BattleServantParamSetting;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleServantParamSetting,
    (int32_t)BattleServantParamSetting,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v31, 0, 0) )
    BattleServantParamComponent__ResetDefaultBattleServantParamSetting(this, v32);
  else
    BattleServantParamComponent__SetupDefaultBattleServantParamSetting(this, v32);
  v38 = *p_data;
  if ( !*p_data )
    goto LABEL_28;
  if ( v38->fields.isEnemy )
    BattleServantParamComponent__ChangeTargetMarkSprite(this, v38->fields._IsGrand_k__BackingField, v35);
  BattleServantParamComponent__DestroyGrandEffectObject(this, v34);
  v39 = this->fields.data;
  if ( !v39 )
LABEL_28:
    sub_1C93D2C(v33, v34);
  if ( v39->fields._IsShowGrandEffect_k__BackingField )
    BattleServantParamComponent__InstantiateGrandEffectObject(this, v34);
LABEL_27:
  BattleServantParamComponent__initUpdateView(this, 0, v37);
  BattleServantParamComponent__updateView(this, v40);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v41);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v42);
}


void BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v10; // x21
  float v11; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v14; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v16; // x8
  __int64 v17; // x23
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  SimpleAnimation_State_o *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x23
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_AnimationState_o *v27; // x21
  float length; // s0
  long double v29; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v31; // q8
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v34; // x0
  long double v35; // q0
  SimpleAnimation_State_c *v36; // x8
  long double v37; // q8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  SimpleAnimation_State_c *v42; // x1
  __int64 v43; // x22
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x9
  __int64 v47; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x1
  UnityEngine_Color_o v51; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4D341BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    sub_1C93AD4(&StringLiteral_13292/*"SvtW_StartClose"*/);
    byte_4D341BC = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_78;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !this->fields.perf )
      goto LABEL_78;
    v10 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0);
    if ( !gameObject )
      goto LABEL_78;
    v11 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v51.fields.r = 1.0;
    v51.fields.g = 1.0;
    v51.fields.b = 1.0;
    v51.fields.a = 1.0;
    TweenColor__Begin(v10, v11, v51, 0);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v14 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v16 = *(_QWORD *)gameObject;
      v17 = gameObject;
      v18 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v19 = (SimpleAnimation_State_c **)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_21;
        }
        v20 = v16 + 16LL * (*(_DWORD *)v19 + 13) + 312;
      }
      else
      {
LABEL_21:
        v20 = sub_1C69E5C(gameObject, SimpleAnimation_State_TypeInfo, 13);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
      if ( !Item )
        goto LABEL_78;
      klass = Item->klass;
      v31 = v29;
      v32 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v32;
          p_offset += 2;
          if ( !v32 )
            goto LABEL_46;
        }
        v34 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
      }
      else
      {
LABEL_46:
        v34 = sub_1C69E5C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v34)(Item, *(_QWORD *)(v34 + 8), v31);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v41 = *(_QWORD *)gameObject;
      v42 = SimpleAnimation_State_TypeInfo;
      v43 = gameObject;
      v44 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v44;
          v45 += 2;
          if ( !v44 )
            goto LABEL_67;
        }
LABEL_68:
        v47 = v41 + 16LL * (*(_DWORD *)v45 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v14 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v21 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v22 = *(_QWORD *)gameObject;
      v23 = gameObject;
      v24 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v25 = (SimpleAnimation_State_c **)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_31;
        }
        v26 = v22 + 16LL * (*(_DWORD *)v25 + 13) + 312;
      }
      else
      {
LABEL_31:
        v26 = sub_1C69E5C(gameObject, SimpleAnimation_State_TypeInfo, 13);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
      if ( !v21 )
        goto LABEL_78;
      v36 = v21->klass;
      v37 = v35;
      v38 = *(unsigned __int16 *)&v21->klass->_2.rank;
      if ( *(_WORD *)&v21->klass->_2.rank )
      {
        v39 = (SimpleAnimation_State_c **)&v36->_1.interfaceOffsets->offset;
        while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v38;
          v39 += 2;
          if ( !v38 )
            goto LABEL_53;
        }
        v40 = (__int64)&v36->vtable[*(_DWORD *)v39 + 4];
      }
      else
      {
LABEL_53:
        v40 = sub_1C69E5C(v21, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v40)(v21, *(_QWORD *)(v40 + 8), v37);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v41 = *(_QWORD *)gameObject;
      v42 = SimpleAnimation_State_TypeInfo;
      v43 = gameObject;
      v46 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v46;
          v45 += 2;
          if ( !v46 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v47 = sub_1C69E5C(v43, v42, 8);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v47)(v43, *(_QWORD *)(v47 + 8), -1.0);
      SimpleAnimation__Play_67370764((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_78;
    v27 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v14, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v14,
                            (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0);
    if ( !v27 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v27, length, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v14,
                            (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0);
    UnityEngine_Animation__Play_71862428((UnityEngine_Animation_o *)v14, (System_String_o *)StringLiteral_13292/*"SvtW_StartClose"*/, 0);
  }
LABEL_70:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0, 0) )
  {
    gameObject = (__int64)this->fields.battlePointGaugeComponent;
    if ( gameObject )
    {
      BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gameObject, 0);
      goto LABEL_75;
    }
LABEL_78:
    sub_1C93D2C(gameObject, v6);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 1, v8);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v7);
  BattleServantParamComponent__updateSkillIcon(this, 0, v49);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v50);
}


void BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.perf = inperf;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *roleTypeSprite; // x20
  __int64 transform; // x0
  __int64 v5; // x1
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v8; // x8
  UnityEngine_Transform_o *v9; // x20
  bool v10; // w1

  if ( (byte_4D341C6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_19233/*"enemy_icon_leader"*/);
    sub_1C93AD4(&StringLiteral_23588/*"servant_icon"*/);
    byte_4D341C6 = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(roleTypeSprite, 0, 0);
  if ( (transform & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    if ( data->fields.isEnemy )
    {
      roleType = data->fields.roleType;
      transform = (__int64)this->fields.roleTypeSprite;
      if ( roleType == 2 )
      {
        if ( !transform )
          goto LABEL_27;
        v8 = &StringLiteral_19233/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v8 = &StringLiteral_23588/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v8, 0);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          v9 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4D2A139 )
          {
            transform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          if ( v9 )
          {
            UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            transform = (__int64)this->fields.roleTypeSprite;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              if ( transform )
              {
                v10 = 1;
LABEL_26:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v10, 0);
                return;
              }
            }
          }
        }
        goto LABEL_27;
      }
    }
    else
    {
      transform = (__int64)this->fields.roleTypeSprite;
      if ( !transform )
        goto LABEL_27;
    }
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( transform )
    {
      v10 = 0;
      goto LABEL_26;
    }
LABEL_27:
    sub_1C93D2C(transform, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__setSkillFlash(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleServantParamComponent_o *v4; // x19
  __int64 v5; // x20
  bool v6; // w21
  int max_length; // w9

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_1C93D2C(this, flg);
  v4 = this;
  v5 = 0;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      LOBYTE(this->fields.hpChange) = v6;
      BattleServantSkillIConComponent__updateFlashSkill(
        (BattleServantSkillIConComponent_o *)this,
        (const MethodInfo *)flg);
      skillIcon = v4->fields.skillIcon;
      ++v5;
      if ( skillIcon )
        continue;
    }
    goto LABEL_7;
  }
}


void BattleServantParamComponent__setTargetMark(
        BattleServantParamComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetMark; // x22
  UnityEngine_Object_o *lockTargetMark; // x22
  const MethodInfo *v9; // x1
  __int64 data; // x0
  int v11; // w26
  char isGuts; // w24
  int v13; // w28
  UnityEngine_Component_o *v14; // x23
  UnityEngine_Component_o *v15; // x21
  BattleServantParamComponent___c_c *v16; // x0
  __int64 _9__159_0; // x22
  Il2CppObject *v18; // x25
  struct BattleServantParamComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Object_o *battleServantParamSetting; // x25
  struct BattleServantParamSetting_o *v27; // x8
  struct BattleServantParamSetting_o *v28; // x8
  struct BattleServantData_o *v29; // x8
  _BOOL4 IsGrand_k__BackingField; // w29
  BattleServantParamSetting_o *v31; // x25
  int v32; // w24
  struct BattleServantParamSetting_o *v33; // x8
  BattleServantParamSetting_o *v34; // x23
  BattleServantParamComponent_TargetIconViewInfo_o *fixed; // x0
  struct BattleServantData_o *v36; // x8
  float TARGET_ICON_SPRITE_POSX; // s8
  float v38; // s9
  BattleServantParamComponent_c *v39; // x0
  float LocalPositionX; // s8
  float FIX_TARGET_ICON_SPRITE_POSX; // s9
  BattleServantParamComponent_c *v42; // x0
  struct BattleServantParamSetting_o *v43; // x8
  BattleServantParamSetting_o *v44; // x23
  struct BattleServantParamComponent_StaticFields *v45; // x8
  const MethodInfo *v46; // x1
  BattleServantParamComponent_c *v47; // x0
  int v48; // w24
  const MethodInfo *v49; // x0
  const MethodInfo *v50; // x0
  const MethodInfo *v51; // x1
  BattleServantParamComponent_c *v52; // x0
  int v53; // w24
  const MethodInfo *v54; // x0
  const MethodInfo *v55; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v57; // x8
  _BOOL4 v58; // w20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v60; // x2
  UpHateData_o *upHateData; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D341D1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattleServantParamComponent___c__setTargetMark_b__159_0__);
    sub_1C93AD4(&BattleServantParamComponent___c_TypeInfo);
    byte_4D341D1 = 1;
  }
  upHateData = 0;
  if ( !this->fields.data )
    return;
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetMark, 0, 0) )
    return;
  lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(lockTargetMark, 0, 0) )
    return;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_113;
  v11 = *(_DWORD *)(data + 24);
  if ( isTargetLock && BattleServantData__isUpHate((BattleServantData_o *)data, 0, &upHateData, 0) )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_113;
    if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) )
    {
      isGuts = 1;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_113;
      isGuts = BattleServantData__isGuts((BattleServantData_o *)data, 0);
    }
  }
  else
  {
    isGuts = 0;
  }
  if ( (((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *))this->klass->vtable._8_IsRaidStatusUi.methodPtr)(
          this,
          this->klass->vtable._8_IsRaidStatusUi.method)
      & 1) != 0 )
    v13 = 1;
  else
    v13 = ((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *))this->klass->vtable._9_IsSuperBossStatusUi.methodPtr)(
            this,
            this->klass->vtable._9_IsSuperBossStatusUi.method)
        & 1;
  data = (__int64)this->fields.targetMark;
  if ( !data )
    goto LABEL_113;
  data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)data,
                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark
    || (v14 = (UnityEngine_Component_o *)data,
        data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          this->fields.lockTargetMark,
                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !this->fields.targetMark)
    || (v15 = (UnityEngine_Component_o *)data,
        (data = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.targetMark, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v11 == uniqueId, 0),
        (data = (__int64)this->fields.lockTargetMark) == 0)
    || (data = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0)) == 0 )
  {
LABEL_113:
    sub_1C93D2C(data, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, isGuts, 0);
  v16 = BattleServantParamComponent___c_TypeInfo;
  if ( !BattleServantParamComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent___c_TypeInfo);
    v16 = BattleServantParamComponent___c_TypeInfo;
  }
  _9__159_0 = (__int64)v16->static_fields->__9__159_0;
  if ( !_9__159_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleServantParamComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__159_0 = sub_1C93D20(System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    System_Action_object__object____ctor(
      (System_Action_object__object__o *)_9__159_0,
      v18,
      Method_BattleServantParamComponent___c__setTargetMark_b__159_0__,
      0);
    static_fields = BattleServantParamComponent___c_TypeInfo->static_fields;
    static_fields->__9__159_0 = (struct System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__o *)_9__159_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__159_0, _9__159_0, v20, v21, v22, v23, v24, v25);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( (data & 1) == 0 )
    goto LABEL_53;
  v27 = this->fields.battleServantParamSetting;
  if ( !v27 )
    goto LABEL_113;
  if ( !v27->fields.IsOverwriteTargetSetting )
  {
LABEL_53:
    v36 = this->fields.data;
    if ( !v36 )
      goto LABEL_113;
    if ( !v36->fields._IsGrand_k__BackingField )
    {
      if ( v13 )
      {
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
        FIX_TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
        v42 = BattleServantParamComponent_TypeInfo;
      }
      else
      {
        v42 = BattleServantParamComponent_TypeInfo;
        if ( BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        {
          v45 = BattleServantParamComponent_TypeInfo->static_fields;
          LocalPositionX = v45->TARGET_ICON_SPRITE_POSX;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
          v42 = BattleServantParamComponent_TypeInfo;
          v45 = BattleServantParamComponent_TypeInfo->static_fields;
          LocalPositionX = v45->TARGET_ICON_SPRITE_POSX;
          if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
            v42 = BattleServantParamComponent_TypeInfo;
            v45 = BattleServantParamComponent_TypeInfo->static_fields;
          }
        }
        FIX_TARGET_ICON_SPRITE_POSX = v45->FIX_TARGET_ICON_SPRITE_POSX;
      }
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = BattleServantParamComponent_TypeInfo;
      }
      v64.fields.z = 0.0;
      v64.fields.y = v42->static_fields->TARGET_ICON_SPRITE_POSY;
      v64.fields.x = LocalPositionX;
      ComponentHelper__SetLocalPosition(v14, v64, 0);
      v65.fields.z = 0.0;
      v65.fields.x = FIX_TARGET_ICON_SPRITE_POSX;
      v65.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
      ComponentHelper__SetLocalPosition(v15, v65, 0);
      v52 = BattleServantParamComponent_TypeInfo;
      v53 = (unsigned __int8)isGuts & (v11 == uniqueId);
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      if ( v53 )
      {
        data = (__int64)BattleServantParamComponent__TargetIconWhenFixViewInfo((const MethodInfo *)v52);
        if ( !_9__159_0 )
          goto LABEL_113;
        v54 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
                                    *(_QWORD *)(_9__159_0 + 64),
                                    v14,
                                    data,
                                    *(_QWORD *)(_9__159_0 + 40));
        fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(v54);
      }
      else
      {
        data = (__int64)BattleServantParamComponent__NormalTargetIconViewInfo((const MethodInfo *)v52);
        if ( !_9__159_0 )
          goto LABEL_113;
        v55 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
                                    *(_QWORD *)(_9__159_0 + 64),
                                    v14,
                                    data,
                                    *(_QWORD *)(_9__159_0 + 40));
        fixed = BattleServantParamComponent__FixTargetIconViewInfo(v55);
      }
      goto LABEL_105;
    }
    if ( v13 )
    {
      TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
      v38 = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
      v39 = BattleServantParamComponent_TypeInfo;
      goto LABEL_80;
    }
    v39 = BattleServantParamComponent_TypeInfo;
    if ( BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    {
      TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      v39 = BattleServantParamComponent_TypeInfo;
      TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        v39 = BattleServantParamComponent_TypeInfo;
        v38 = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
LABEL_80:
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = BattleServantParamComponent_TypeInfo;
        }
        v62.fields.z = 0.0;
        v62.fields.y = v39->static_fields->TARGET_ICON_SPRITE_POSY;
        v62.fields.x = TARGET_ICON_SPRITE_POSX;
        ComponentHelper__SetLocalPosition(v14, v62, 0);
        v63.fields.z = 0.0;
        v63.fields.x = v38;
        v63.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
        ComponentHelper__SetLocalPosition(v15, v63, 0);
        v47 = BattleServantParamComponent_TypeInfo;
        v48 = (unsigned __int8)isGuts & (v11 == uniqueId);
        if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        if ( v48 )
        {
          data = (__int64)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo((const MethodInfo *)v47);
          if ( !_9__159_0 )
            goto LABEL_113;
          data = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
                   *(_QWORD *)(_9__159_0 + 64),
                   v14,
                   data,
                   *(_QWORD *)(_9__159_0 + 40));
          if ( !v15 )
            goto LABEL_113;
          UISprite__set_spriteName(
            (UISprite_o *)v15,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(v49);
        }
        else
        {
          data = (__int64)BattleServantParamComponent__GrandTargetIconViewInfo((const MethodInfo *)v47);
          if ( !_9__159_0 )
            goto LABEL_113;
          data = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
                   *(_QWORD *)(_9__159_0 + 64),
                   v14,
                   data,
                   *(_QWORD *)(_9__159_0 + 40));
          if ( !v15 )
            goto LABEL_113;
          UISprite__set_spriteName(
            (UISprite_o *)v15,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo(v50);
        }
        goto LABEL_105;
      }
    }
    v38 = TARGET_ICON_SPRITE_POSX;
    goto LABEL_80;
  }
  ComponentHelper__SetLocalPosition(v14, v27->fields.TargetIconPosition, 0);
  v28 = this->fields.battleServantParamSetting;
  if ( !v28 )
    goto LABEL_113;
  ComponentHelper__SetLocalPosition(v15, v28->fields.FixTargetIconPosition, 0);
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_113;
  IsGrand_k__BackingField = v29->fields._IsGrand_k__BackingField;
  v31 = this->fields.battleServantParamSetting;
  v32 = (unsigned __int8)isGuts & (v11 == uniqueId);
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  if ( v32 )
  {
    if ( IsGrand_k__BackingField )
    {
      data = (__int64)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_48338636(v31, v9);
      if ( !_9__159_0 )
        goto LABEL_113;
      data = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
               *(_QWORD *)(_9__159_0 + 64),
               v14,
               data,
               *(_QWORD *)(_9__159_0 + 40));
      v33 = this->fields.battleServantParamSetting;
      if ( !v33 )
        goto LABEL_113;
      if ( System_String__IsNullOrEmpty(v33->fields.FixTargetIconSpriteName, 0) )
      {
        data = (__int64)BattleServantParamComponent_TypeInfo;
        if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        if ( !v15 )
          goto LABEL_113;
        UISprite__set_spriteName(
          (UISprite_o *)v15,
          BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
          0);
      }
      v34 = this->fields.battleServantParamSetting;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_48338764(v34, v9);
    }
    else
    {
      data = (__int64)BattleServantParamComponent__TargetIconWhenFixViewInfo_48338088(v31, v9);
      if ( !_9__159_0 )
        goto LABEL_113;
      (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
        *(_QWORD *)(_9__159_0 + 64),
        v14,
        data,
        *(_QWORD *)(_9__159_0 + 40));
      fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_48338216(
                this->fields.battleServantParamSetting,
                v46);
    }
  }
  else if ( IsGrand_k__BackingField )
  {
    data = (__int64)BattleServantParamComponent__GrandNormalTargetIconViewInfo(v31, v9);
    if ( !_9__159_0 )
      goto LABEL_113;
    data = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
             *(_QWORD *)(_9__159_0 + 64),
             v14,
             data,
             *(_QWORD *)(_9__159_0 + 40));
    v43 = this->fields.battleServantParamSetting;
    if ( !v43 )
      goto LABEL_113;
    if ( System_String__IsNullOrEmpty(v43->fields.FixTargetIconSpriteName, 0) )
    {
      data = (__int64)BattleServantParamComponent_TypeInfo;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      if ( !v15 )
        goto LABEL_113;
      UISprite__set_spriteName(
        (UISprite_o *)v15,
        BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
        0);
    }
    v44 = this->fields.battleServantParamSetting;
    if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo_48338492(v44, v9);
  }
  else
  {
    data = (__int64)BattleServantParamComponent__NormalTargetIconViewInfo_48337816(v31, v9);
    if ( !_9__159_0 )
      goto LABEL_113;
    (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__159_0 + 24))(
      *(_QWORD *)(_9__159_0 + 64),
      v14,
      data,
      *(_QWORD *)(_9__159_0 + 40));
    fixed = BattleServantParamComponent__FixTargetIconViewInfo_48337944(this->fields.battleServantParamSetting, v51);
  }
LABEL_105:
  data = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantParamComponent_TargetIconViewInfo_o *, _QWORD))(_9__159_0 + 24))(
           *(_QWORD *)(_9__159_0 + 64),
           v15,
           fixed,
           *(_QWORD *)(_9__159_0 + 40));
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_113;
  v57 = perf->fields.data;
  if ( !v57 )
    goto LABEL_113;
  if ( v57->fields.isMultiTargetBattle )
  {
    v58 = uniqueId == -1 || v11 == uniqueId;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    CommonFunction__SetColorAllChild(transform, v58, this->fields.GRAY, 0);
    this->fields.isActiveHpBar = v58;
    if ( v58 )
    {
      data = (__int64)this->fields.showBuffComponent;
      if ( data )
      {
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)data, 0, v60);
        return;
      }
      goto LABEL_113;
    }
  }
}


void BattleServantParamComponent__setTouch(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D341BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341BE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0 && BattleServantData__isAlive(data, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v7 )
    {
      if ( !Component_object )
        sub_1C93D2C(v7, v8);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__setVisible(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4D341BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341BD = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(root, flg);
  }
}


void BattleServantParamComponent__shiftUpdateStatus(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v4; // x8
  struct BattleActionData_o *nowAction; // x9
  int v6; // w19
  struct BattleActionData_o *v7; // x9
  _BOOL4 isSkillShift; // w10
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  struct BattleServantData_o *data; // x8
  struct BattlePerformance_o *v13; // x8
  struct BattleActionData_o *v14; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v18; // x4
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  BattleServantParamComponent_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct UnityEngine_GameObject_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct UISprite_o *v79; // x21
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x1
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  struct BattleServantChangeBarComponent_o *v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x1
  System_Collections_Hashtable_o *v108; // x0
  __int64 v109; // x0
  char v110[4]; // [xsp+0h] [xbp-40h] BYREF
  int v111; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v113; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4D341DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleServantParamComponent_shiftUpdateStatus__);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&StringLiteral_19902/*"from"*/);
    sub_1C93AD4(&StringLiteral_20509/*"ignoretimescale"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_24755/*"updateShiftHplabel"*/);
    sub_1C93AD4(&StringLiteral_22710/*"onupdate"*/);
    sub_1C93AD4(&StringLiteral_24415/*"to"*/);
    sub_1C93AD4(&StringLiteral_4644/*"ComplateUpdateShiftHplabel"*/);
    sub_1C93AD4(&StringLiteral_22702/*"oncomplete"*/);
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&iTween_TypeInfo);
    byte_4D341DD = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_88;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_88;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0);
  v4 = v2->fields.perf;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_88;
    nowAction = v4->fields.nowAction;
    if ( !nowAction )
      goto LABEL_88;
    v6 = !nowAction->fields.isShiftPhaseMotion;
  }
  else
  {
    if ( !v4 )
      goto LABEL_88;
    v6 = 0;
  }
  if ( (v7 = v4->fields.nowAction) == 0
    || (isSkillShift = v7->fields.isSkillShift, v7->fields.isShiftPhaseMotion = 0, isSkillShift)
    && ((this = (BattleServantParamComponent_o *)v2->fields.data) == 0
     || (BattleServantData__updateHp((BattleServantData_o *)this, 0, 0), (v4 = v2->fields.perf) == 0))
    || (this = (BattleServantParamComponent_o *)v4->fields.nowAction) == 0 )
  {
LABEL_88:
    sub_1C93D2C(this, method);
  }
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag((BattleActionData_o *)this, 0);
  BattleServantParamComponent__initUpdateView(v2, NotShiftUpdateFlag, v10);
  data = v2->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(v2, data->fields.buffData, v11);
  if ( v6 )
  {
    v13 = v2->fields.perf;
    if ( v13 )
    {
      v14 = v13->fields.nowAction;
      if ( v14 )
      {
        if ( v14->fields.isSkillShift )
        {
          v15 = Method_BattleServantParamComponent_shiftUpdateStatus__;
          if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
            v15 = (_QWORD *)sub_1C93AEC(Method_BattleServantParamComponent_shiftUpdateStatus__);
          v16 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v15, v15[4]);
          OverwriteAssetSoundName__PlayCommonSe(v16, 24, 0, 0);
          return;
        }
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v18);
          this = (BattleServantParamComponent_o *)v2->fields.data;
          if ( this )
          {
            if ( !BattleServantData__getNowHp((BattleServantData_o *)this, 0) )
              return;
            v19 = Method_BattleServantParamComponent_shiftUpdateStatus__;
            if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
              v19 = (_QWORD *)sub_1C93AEC(Method_BattleServantParamComponent_shiftUpdateStatus__);
            v20 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v19, v19[4]);
            OverwriteAssetSoundName__PlayCommonSe(v20, 16, 0, 0);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
            this = (BattleServantParamComponent_o *)sub_1C93B7C(object___TypeInfo, 12);
            if ( this )
            {
              v28 = this;
              v29 = StringLiteral_19902/*"from"*/;
              if ( StringLiteral_19902/*"from"*/ )
              {
                v29 = sub_1C93C10(StringLiteral_19902/*"from"*/, v28->klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_90;
                v30 = StringLiteral_19902/*"from"*/;
              }
              else
              {
                v30 = 0;
              }
              if ( !LODWORD(v28->fields.m_CancellationTokenSource) )
                goto LABEL_89;
              v28->fields.root = (struct UnityEngine_GameObject_o *)v30;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.root, v30, v22, v23, v24, v25, v26, v27);
              v113 = 0;
              v29 = j_il2cpp_value_box_0(int_TypeInfo, &v113);
              v37 = (struct UnityEngine_GameObject_o *)v29;
              if ( v29 )
              {
                v29 = sub_1C93C10(v29, v28->klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_90;
              }
              if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_89;
              v28->fields.target = v37;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v28->fields.target,
                (int32_t)v37,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
              v29 = StringLiteral_24415/*"to"*/;
              if ( StringLiteral_24415/*"to"*/ )
              {
                v29 = sub_1C93C10(StringLiteral_24415/*"to"*/, v28->klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_90;
                v44 = StringLiteral_24415/*"to"*/;
              }
              else
              {
                v44 = 0;
              }
              if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 2 )
                goto LABEL_89;
              *(_QWORD *)&v28->fields.index = v44;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.index, v44, v38, v39, v40, v41, v42, v43);
              this = (BattleServantParamComponent_o *)v2->fields.data;
              if ( this )
              {
                NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0);
                v29 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp);
                v51 = v29;
                if ( !v29 || (v29 = sub_1C93C10(v29, v28->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 3 )
                    goto LABEL_89;
                  *(_QWORD *)&v28->fields.hpformatflg = v51;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v28->fields.hpformatflg,
                    v51,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50);
                  v29 = StringLiteral_22710/*"onupdate"*/;
                  if ( StringLiteral_22710/*"onupdate"*/ )
                  {
                    v29 = sub_1C93C10(StringLiteral_22710/*"onupdate"*/, v28->klass->_1.element_class);
                    if ( !v29 )
                      goto LABEL_90;
                    v58 = StringLiteral_22710/*"onupdate"*/;
                  }
                  else
                  {
                    v58 = 0;
                  }
                  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 4 )
                    goto LABEL_89;
                  v28->fields.hplabel = (struct UILabel_o *)v58;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.hplabel, v58, v52, v53, v54, v55, v56, v57);
                  v29 = StringLiteral_24755/*"updateShiftHplabel"*/;
                  if ( StringLiteral_24755/*"updateShiftHplabel"*/ )
                  {
                    v29 = sub_1C93C10(StringLiteral_24755/*"updateShiftHplabel"*/, v28->klass->_1.element_class);
                    if ( !v29 )
                      goto LABEL_90;
                    v65 = StringLiteral_24755/*"updateShiftHplabel"*/;
                  }
                  else
                  {
                    v65 = 0;
                  }
                  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 5 )
                    goto LABEL_89;
                  v28->fields.maxhplabel = (struct UILabel_o *)v65;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.maxhplabel, v65, v59, v60, v61, v62, v63, v64);
                  v29 = StringLiteral_24376/*"time"*/;
                  if ( StringLiteral_24376/*"time"*/ )
                  {
                    v29 = sub_1C93C10(StringLiteral_24376/*"time"*/, v28->klass->_1.element_class);
                    if ( !v29 )
                      goto LABEL_90;
                    v72 = StringLiteral_24376/*"time"*/;
                  }
                  else
                  {
                    v72 = 0;
                  }
                  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 6 )
                    goto LABEL_89;
                  v28->fields.totalhplabel = (struct UILabel_o *)v72;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v28->fields.totalhplabel,
                    v72,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70,
                    v71);
                  v111 = 1069547520;
                  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v111);
                  v79 = (struct UISprite_o *)v29;
                  if ( !v29 || (v29 = sub_1C93C10(v29, v28->klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 7 )
                      goto LABEL_89;
                    v28->fields.breakSprite = v79;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v28->fields.breakSprite,
                      (int32_t)v79,
                      v73,
                      v74,
                      v75,
                      v76,
                      v77,
                      v78);
                    v29 = StringLiteral_20509/*"ignoretimescale"*/;
                    if ( StringLiteral_20509/*"ignoretimescale"*/ )
                    {
                      v29 = sub_1C93C10(StringLiteral_20509/*"ignoretimescale"*/, v28->klass->_1.element_class);
                      if ( !v29 )
                        goto LABEL_90;
                      v86 = StringLiteral_20509/*"ignoretimescale"*/;
                    }
                    else
                    {
                      v86 = 0;
                    }
                    if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 8 )
                      goto LABEL_89;
                    v28->fields.hpGauge = (struct BattleHpGaugeBarComponent_o *)v86;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v28->fields.hpGauge, v86, v80, v81, v82, v83, v84, v85);
                    v110[0] = 1;
                    v29 = j_il2cpp_value_box_0(bool_TypeInfo, v110);
                    v93 = (struct BattleServantChangeBarComponent_o *)v29;
                    if ( !v29 || (v29 = sub_1C93C10(v29, v28->klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 9 )
                        goto LABEL_89;
                      v28->fields.hpChange = v93;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&v28->fields.hpChange,
                        (int32_t)v93,
                        v87,
                        v88,
                        v89,
                        v90,
                        v91,
                        v92);
                      v29 = StringLiteral_22702/*"oncomplete"*/;
                      if ( StringLiteral_22702/*"oncomplete"*/ )
                      {
                        v29 = sub_1C93C10(StringLiteral_22702/*"oncomplete"*/, v28->klass->_1.element_class);
                        if ( !v29 )
                          goto LABEL_90;
                        v100 = StringLiteral_22702/*"oncomplete"*/;
                      }
                      else
                      {
                        v100 = 0;
                      }
                      if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 0xA )
                        goto LABEL_89;
                      v28->fields.hpShift = (struct BattleServantHpShiftComponent_o *)v100;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&v28->fields.hpShift,
                        v100,
                        v94,
                        v95,
                        v96,
                        v97,
                        v98,
                        v99);
                      v29 = StringLiteral_4644/*"ComplateUpdateShiftHplabel"*/;
                      if ( !StringLiteral_4644/*"ComplateUpdateShiftHplabel"*/ )
                      {
                        v107 = 0;
LABEL_83:
                        if ( LODWORD(v28->fields.m_CancellationTokenSource) > 0xB )
                        {
                          v28->fields.clsIconComponent = (struct ServantClassIconComponent_o *)v107;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)&v28->fields.clsIconComponent,
                            v107,
                            v101,
                            v102,
                            v103,
                            v104,
                            v105,
                            v106);
                          if ( !iTween_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                          v108 = iTween__Hash((System_Object_array *)v28, 0);
                          iTween__ValueTo(gameObject, v108, 0);
                          return;
                        }
LABEL_89:
                        sub_1C93D34(v29);
                      }
                      v29 = sub_1C93C10(StringLiteral_4644/*"ComplateUpdateShiftHplabel"*/, v28->klass->_1.element_class);
                      if ( v29 )
                      {
                        v107 = StringLiteral_4644/*"ComplateUpdateShiftHplabel"*/;
                        goto LABEL_83;
                      }
                    }
                  }
                }
LABEL_90:
                v109 = sub_1C93D50(v29);
                sub_1C93BFC(v109, 0);
              }
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
}


void BattleServantParamComponent__showSideEffect(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *sideEffectShowQueue; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4D341DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
    byte_4D341DF = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1C93D2C(0, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_3A21D8C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D341E0 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent__showSideEffectList_d__178_TypeInfo);
    byte_4D341E0 = 1;
  }
  v3 = sub_1C93D20(BattleServantParamComponent__showSideEffectList_d__178_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  void *ShowServantParam; // x0
  __int64 v7; // x1
  BattleServantShowBuffComponent_o *v8; // x21
  const MethodInfo *v9; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v12; // x8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x2
  struct BattleServantData_o *v15; // x8
  UnityEngine_Object_o *ServantActor; // x21
  _BOOL4 IsMatchCurrentCommonAnimName; // w23
  int v18; // w8
  struct BattleServantData_o *v19; // x8
  int v20; // w8
  void *v21; // x21
  int v22; // w24
  char v23; // w23
  __int64 v24; // x27
  int v25; // w27
  struct BattleServantData_o *v26; // x8
  UnityEngine_Object_o *v27; // x20
  System_Enum_o v28; // [xsp+8h] [xbp-68h] BYREF
  int v29; // [xsp+18h] [xbp-58h]

  if ( (byte_4D341D0 & 1) == 0 )
  {
    sub_1C93AD4(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_13449/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1C93AD4(&StringLiteral_25040/*"wait"*/);
    byte_4D341D0 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (void *)UnityEngine_Object__op_Equality(showBuffComponent, 0, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_59;
  v8 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0);
  if ( !v8 )
    goto LABEL_59;
  BattleServantShowBuffComponent__setBuffList(v8, (BattleBuffData_ShowBuffData_array *)ShowServantParam, v9);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_59;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_59;
  if ( data->fields.isMultiTargetBattle )
  {
    v12 = this->fields.data;
    if ( !v12 )
      goto LABEL_59;
    if ( v12->fields.isEnemy )
    {
      ShowServantParam = this->fields.showBuffComponent;
      if ( !ShowServantParam )
        goto LABEL_59;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShowServantParam, 0);
      CommonFunction__SetColorAllChild(transform, this->fields.isActiveHpBar, this->fields.GRAY, 0);
      if ( this->fields.isActiveHpBar )
      {
        ShowServantParam = this->fields.showBuffComponent;
        if ( !ShowServantParam )
          goto LABEL_59;
        BattleServantShowBuffComponent__UpdateActiveBuffList(
          (BattleServantShowBuffComponent_o *)ShowServantParam,
          0,
          v14);
      }
    }
  }
  v15 = this->fields.data;
  if ( !v15 )
    goto LABEL_59;
  ShowServantParam = this->fields.perf;
  if ( !ShowServantParam )
    goto LABEL_59;
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v15->fields.uniqueId,
                                           0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (void *)UnityEngine_Object__op_Inequality(ServantActor, 0, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
    goto LABEL_36;
  ShowServantParam = this->fields.data;
  if ( !ShowServantParam )
    goto LABEL_59;
  if ( !BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0) )
    goto LABEL_27;
  v29 = 49;
  v28.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v28.monitor = (void *)-1LL;
  ShowServantParam = System_Enum__ToString(&v28, 0);
  if ( !ServantActor )
    goto LABEL_59;
  if ( BattleActorControl__checkAnimation((BattleActorControl_o *)ServantActor, (System_String_o *)ShowServantParam, 0) )
    IsMatchCurrentCommonAnimName = BattleActorControl__IsMatchCurrentCommonAnimName(
                                     (BattleActorControl_o *)ServantActor,
                                     9,
                                     1,
                                     0);
  else
LABEL_27:
    IsMatchCurrentCommonAnimName = 0;
  ShowServantParam = this->fields.data;
  if ( !ShowServantParam )
LABEL_59:
    sub_1C93D2C(ShowServantParam, v7);
  ShowServantParam = (void *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    v18 = 0;
  }
  else
  {
    if ( !ServantActor )
      goto LABEL_59;
    ShowServantParam = (void *)BattleActorControl__IsMatchCurrentCommonAnimName(
                                 (BattleActorControl_o *)ServantActor,
                                 49,
                                 1,
                                 0);
    v18 = (unsigned __int8)ShowServantParam & 1;
  }
  if ( v18 | IsMatchCurrentCommonAnimName )
  {
    v29 = 9;
    v28.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v28.monitor = (void *)-1LL;
    ShowServantParam = System_Enum__ToString(&v28, 0);
    if ( !ServantActor )
      goto LABEL_59;
    BattleActorControl__playAnimation_47947364(
      (BattleActorControl_o *)ServantActor,
      (System_String_o *)ShowServantParam,
      0,
      0);
  }
LABEL_36:
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_59;
  if ( !v19->fields.isSleepWaitMode )
    return;
  ShowServantParam = BattleBuffData__getActiveList(buffData, 1, 0);
  if ( !ShowServantParam )
    goto LABEL_59;
  v20 = *((_DWORD *)ShowServantParam + 6);
  v21 = ShowServantParam;
  if ( v20 < 1 )
    goto LABEL_63;
  v22 = 0;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)v20 )
      sub_1C93D34(ShowServantParam);
    v24 = *((_QWORD *)v21 + v22 + 4);
    if ( !v24 )
      goto LABEL_59;
    if ( !*(_BYTE *)(v24 + 552) )
    {
      ShowServantParam = BattleBuffData__get_buffMst(buffData, 0);
      if ( !ShowServantParam )
        goto LABEL_59;
      ShowServantParam = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                           *(_DWORD *)(v24 + 16),
                           (const MethodInfo_3463274 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_59;
      v25 = *((_DWORD *)ShowServantParam + 4);
      ShowServantParam = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_13449/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0);
      v23 |= v25 == (_DWORD)ShowServantParam;
    }
    v20 = *((_DWORD *)v21 + 6);
    ++v22;
  }
  while ( v22 < v20 );
  if ( (v23 & 1) == 0 )
  {
LABEL_63:
    ShowServantParam = this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_59;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0);
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_59;
    ShowServantParam = this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_59;
    v27 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v26->fields.uniqueId,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (void *)UnityEngine_Object__op_Inequality(v27, 0, 0);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v27 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v27, this->fields.uniqueID, 0) )
          BattleActorControl__playAnimation_47947364(
            (BattleActorControl_o *)v27,
            (System_String_o *)StringLiteral_25040/*"wait"*/,
            0,
            0);
        return;
      }
      goto LABEL_59;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__updateBuffIconList(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        bool doAuraUpdate,
        bool doClassIconAuraUpdate,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_4D341CF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341CF = 1;
  }
  if ( svtData )
  {
    data = this->fields.data;
    if ( data )
    {
      if ( svtData->fields.uniqueId == data->fields.uniqueId )
      {
        BattleServantParamComponent__updateBuffIcon(this, svtData->fields.buffData, (const MethodInfo *)doAuraUpdate);
        if ( doClassIconAuraUpdate )
          BattleServantParamComponent__UpdateClassIconEffect(this, svtData, v11);
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_17;
        ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(ServantActor, 0, 0);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_17;
          BattleActorControl__updateBuffLoopEffect((BattleActorControl_o *)ServantActor, 0);
          BattleActorControl__UpdateActorVisibilityByBuff((BattleActorControl_o *)ServantActor, 0, 0);
          if ( doAuraUpdate )
          {
            perf = (BattlePerformance_o *)ServantActor[22].monitor;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0);
              return;
            }
LABEL_17:
            sub_1C93D2C(perf, v10);
          }
        }
      }
    }
  }
}


void BattleServantParamComponent__updateBuffIconSelf(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleServantData_o *data; // x8

  data = this->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v2);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__updateHpbar(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isUpdateDamageBarImmediately,
        const MethodInfo *method)
{
  BattleHpGaugeBarComponent_o *data; // x0
  int v10; // w0
  UnityEngine_Object_o *hpGauge; // x24
  int v12; // w23
  bool v13; // w0

  if ( (byte_4D341C4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341C4 = 1;
  }
  data = (BattleHpGaugeBarComponent_o *)this->fields.data;
  if ( !data )
    goto LABEL_14;
  v10 = ((__int64 (__fastcall *)(BattleHpGaugeBarComponent_o *, Il2CppClass *, _QWORD, bool, const MethodInfo *))data->klass[1]._1.declaringType)(
          data,
          data->klass[1]._1.parent,
          *(_QWORD *)&max,
          isUpdateDamageBarImmediately,
          method);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  v12 = v10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality(hpGauge, 0, 0);
  if ( v12 < 0 )
  {
    if ( v13 )
    {
      data = this->fields.hpGauge;
      if ( !data )
        goto LABEL_14;
      BattleHpGaugeBarComponent__setZero(data, 0);
    }
  }
  else if ( v13 )
  {
    data = this->fields.hpGauge;
    if ( data )
    {
      BattleHpGaugeBarComponent__setValue(data, now, max, isUpdateDamageBarImmediately, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(data, *(_QWORD *)&now);
  }
}


void BattleServantParamComponent__updateHplabel(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isDispBreak,
        const MethodInfo *method)
{
  __int64 *v9; // x9
  System_String_o *v10; // x23
  UnityEngine_Object_o *hplabel; // x24
  UILabel_o *v12; // x24
  Il2CppObject *v13; // x0
  System_String_o *data; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  UILabel_o *v18; // x24
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  UILabel_o *v21; // x23
  Il2CppObject *v22; // x24
  Il2CppObject *v23; // x0
  __int64 *v24; // x8
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v27; // x2
  int32_t v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D341C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_25481/*"{0}/{1}"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C93AD4(&StringLiteral_25380/*"{0:#,0}/{1:#,0}"*/);
    byte_4D341C5 = 1;
  }
  if ( this->fields.hpformatflg )
    v9 = &StringLiteral_25376/*"{0:#,0}"*/;
  else
    v9 = &StringLiteral_25426/*"{0}"*/;
  v10 = (System_String_o *)*v9;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
  {
    v12 = this->fields.hplabel;
    v29 = now;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    data = System_String__Format(v10, v13, 0);
    if ( !v12 )
      goto LABEL_36;
    UILabel__set_text(v12, data, 0);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_36;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
    }
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0, 0) )
  {
    v18 = this->fields.maxhplabel;
    v29 = max;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    data = System_String__Format(v10, v19, 0);
    if ( !v18 )
      goto LABEL_36;
    UILabel__set_text(v18, data, 0);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
  {
    v21 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v29 = now;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v28 = max;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v24 = &StringLiteral_25380/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v29 = now;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v28 = max;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v24 = &StringLiteral_25481/*"{0}/{1}"*/;
    }
    data = System_String__Format_64467032((System_String_o *)*v24, v22, v23, 0);
    if ( !v21 )
      goto LABEL_36;
    UILabel__set_text(v21, data, 0);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) && isDispBreak )
  {
    data = (System_String_o *)this->fields.data;
    if ( data )
    {
      isShiftableServant = BattleServantData__isShiftableServant((BattleServantData_o *)data, 0);
      BattleServantParamComponent__SetBreakSpriteDisplay(this, now == 0 && isShiftableServant, v27);
      return;
    }
LABEL_36:
    sub_1C93D2C(data, v15);
  }
}


void BattleServantParamComponent__updateNp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x20
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x21

  v4 = this;
  if ( (byte_4D341C0 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341C0 = 1;
  }
  if ( !svtdata )
    goto LABEL_12;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_12;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v4->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
    {
      this = (BattleServantParamComponent_o *)v4->fields.npcomp;
      if ( this )
      {
        BattleNpGaugeSystemComponent__changeParam((BattleNpGaugeSystemComponent_o *)this, svtdata->fields.np, 0);
        return;
      }
LABEL_12:
      sub_1C93D2C(this, svtdata);
    }
  }
}


void BattleServantParamComponent__updateNp_48354052(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        System_Int32_array *npArray,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v8; // x21
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x22
  _BOOL8 v11; // x0
  int32_t max_length; // w8

  v8 = this;
  if ( (byte_4D341C1 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341C1 = 1;
  }
  if ( !svtdata )
    goto LABEL_16;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v8->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality(npcomp, 0, 0);
    if ( npArray )
    {
      if ( v11 )
      {
        max_length = npArray->max_length;
        if ( max_length > index )
        {
          if ( max_length <= (unsigned int)index )
            sub_1C93D34(v11);
          this = (BattleServantParamComponent_o *)v8->fields.npcomp;
          if ( this )
          {
            BattleNpGaugeSystemComponent__changeParam(
              (BattleNpGaugeSystemComponent_o *)this,
              npArray->m_Items[index],
              0);
            return;
          }
LABEL_16:
          sub_1C93D2C(this, svtdata);
        }
      }
    }
  }
}


void BattleServantParamComponent__updateShiftHplabel(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  int32_t MaxHp; // w2
  const MethodInfo *v7; // x4

  data = this->fields.data;
  if ( !data )
    sub_1C93D2C(0, nowHp);
  MaxHp = BattleServantData__getMaxHp(data, 0);
  BattleServantParamComponent__updateHplabel(this, nowHp, MaxHp, 1, v7);
}


void BattleServantParamComponent__updateSkillIcon(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  BattleBuffData_o *v7; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleBuffData_o *v9; // x21
  unsigned __int64 v10; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_passiveList; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 resumptionHpFromLossMaxHp; // x10
  BattleSkillInfoData_o *v14; // x23
  struct BattleServantSkillIConComponent_array *v15; // x8
  int32_t v16; // w24
  BattleServantSkillIConComponent_o *v17; // x25
  char v18; // w26
  const MethodInfo *v19; // x6
  BattleServantSkillIConComponent_o *v20; // x8

  data = this->fields.data;
  if ( data )
  {
    BuffData = BattleServantData__get_BuffData(data, 0);
    if ( !BuffData
      || (BattleBuffData__UpdateSkillRelationBuff(BuffData, 0), (BuffData = (BattleBuffData_o *)this->fields.data) == 0)
      || (BuffData = (BattleBuffData_o *)BattleServantData__getActiveSkillInfos((BattleServantData_o *)BuffData, 0),
          !this->fields.data)
      || (v7 = BuffData,
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelect(this->fields.data, 0),
          (skillIcon = this->fields.skillIcon) == 0) )
    {
LABEL_29:
      sub_1C93D2C(BuffData, v6);
    }
    v9 = BuffData;
    v10 = 0;
    p_passiveList = &BuffData->fields.passiveList;
    while ( 1 )
    {
      max_length_low = LODWORD(skillIcon->max_length);
      if ( (__int64)v10 >= (int)max_length_low )
        break;
      if ( !v7 )
        goto LABEL_29;
      resumptionHpFromLossMaxHp = (unsigned int)v7->fields.resumptionHpFromLossMaxHp;
      if ( (__int64)v10 >= (int)resumptionHpFromLossMaxHp )
      {
        if ( v10 >= max_length_low )
LABEL_31:
          sub_1C93D34(BuffData);
        v20 = skillIcon->m_Items[v10];
        if ( !v20 )
          goto LABEL_29;
        BuffData = (BattleBuffData_o *)v20->fields.root;
        if ( !BuffData )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BuffData, 0, 0);
      }
      else
      {
        if ( v10 >= resumptionHpFromLossMaxHp )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v14 = (BattleSkillInfoData_o *)*((_QWORD *)&v7->fields.passiveList + v10);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0);
        if ( !v9 )
          goto LABEL_29;
        if ( v10 >= (unsigned int)v9->fields.resumptionHpFromLossMaxHp )
          goto LABEL_31;
        if ( *((_BYTE *)p_passiveList + v10) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_29;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v10,
                                           0);
        }
        v15 = this->fields.skillIcon;
        v16 = (int)BuffData;
        if ( !v15 )
          goto LABEL_29;
        if ( v10 >= LODWORD(v15->max_length) )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v17 = v15->m_Items[v10];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v10, 0);
        if ( !this->fields.data )
          goto LABEL_29;
        v18 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0);
        if ( v10 >= (unsigned int)v9->fields.resumptionHpFromLossMaxHp )
          goto LABEL_31;
        if ( !v17 )
          goto LABEL_29;
        BattleServantSkillIConComponent__SetSkillInfo(
          v17,
          v14,
          v18 & 1,
          v16,
          (int32_t)BuffData,
          *((_BYTE *)p_passiveList + v10),
          v19);
      }
      skillIcon = this->fields.skillIcon;
      ++v10;
      if ( !skillIcon )
        goto LABEL_29;
    }
  }
}


void BattleServantParamComponent__updateTDGauge(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v7; // x8

  if ( (byte_4D341C3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341C3 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextTdGauge, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_15;
    if ( !BattleServantData__hasTreasureDvc(data, 0) )
      goto LABEL_10;
    data = this->fields.data;
    if ( !data )
      goto LABEL_15;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_10:
      data = (BattleServantData_o *)this->fields.nextTdGauge;
      if ( data )
      {
        BattleNextTDgaugeComponent__setHide((BattleNextTDgaugeComponent_o *)data, 0);
        return;
      }
LABEL_15:
      sub_1C93D2C(data, v5);
    }
    v7 = this->fields.data;
    if ( !v7 )
      goto LABEL_15;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_15;
    BattleNextTDgaugeComponent__setValue((BattleNextTDgaugeComponent_o *)data, v7->fields.nexttpturn, 0);
  }
}


void BattleServantParamComponent__updateView(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantParamComponent_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  BattleActorControl_o *PartsActor; // x20
  BattleServantData_o *data; // x0
  int32_t v7; // w20
  int32_t MaxHp; // w0
  const MethodInfo *v9; // x4
  int32_t v10; // w20
  int32_t v11; // w0
  const MethodInfo *v12; // x4
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v14; // x2
  struct BattleServantData_o *v15; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct BattleServantData_o *v18; // x8
  struct BattleServantData_o *v19; // x8

  v3 = this;
  if ( (byte_4D341CA & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341CA = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( *((_BYTE *)this + 746) )
  {
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_36;
      this = (BattleServantParamComponent_o *)PartsActor->fields.battleSvtData;
      if ( !this )
        goto LABEL_36;
      if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0) )
        goto LABEL_34;
    }
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( BattleServantData__isAlive(data, 0, 0) )
    goto LABEL_18;
  this = (BattleServantParamComponent_o *)v3->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( BattleServantData__isGuts((BattleServantData_o *)this, 0) )
    goto LABEL_18;
  this = (BattleServantParamComponent_o *)v3->fields.data;
  if ( !this )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)BattleServantData__isOverKill((BattleServantData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_18:
    this = (BattleServantParamComponent_o *)v3->fields.root;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (BattleServantParamComponent_o *)v3->fields.data;
      if ( this )
      {
        this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0);
        if ( v3->fields.data )
        {
          v7 = (int)this;
          MaxHp = BattleServantData__getMaxHp(v3->fields.data, 0);
          BattleServantParamComponent__updateHplabel(v3, v7, MaxHp, 1, v9);
          this = (BattleServantParamComponent_o *)v3->fields.data;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0);
            if ( v3->fields.data )
            {
              v10 = (int)this;
              v11 = BattleServantData__getMaxHp(v3->fields.data, 0);
              BattleServantParamComponent__updateHpbar(v3, v10, v11, 0, v12);
              npcomp = (UnityEngine_Object_o *)v3->fields.npcomp;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(npcomp, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v15 = v3->fields.data;
                if ( !v15 )
                  goto LABEL_36;
                this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                if ( !this )
                  goto LABEL_36;
                BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)this, v15->fields.np, 0);
              }
              BattleServantParamComponent__updateTDGauge(v3, (BattleServantData_o *)method, v14);
              BattleServantParamComponent__updateSkillIcon(v3, 0, v16);
              v18 = v3->fields.data;
              if ( v18 )
              {
                BattleServantParamComponent__updateBuffIcon(v3, v18->fields.buffData, v17);
                return;
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C93D2C(this, method);
  }
  v19 = v3->fields.data;
  if ( !v19 )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)v19->fields.deckSvt;
  if ( !this )
    goto LABEL_36;
  if ( !BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion((BattleDeckServantData_o *)this, 0) )
  {
LABEL_34:
    BattleServantParamComponent__setTouch(v3, 0, v2);
    this = (BattleServantParamComponent_o *)v3->fields.root;
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
}


void BattleServantParamComponent_BaseClassIconData___ctor(
        BattleServantParamComponent_BaseClassIconData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent_BaseClassIconData__DisplayIconEffect(
        BattleServantParamComponent_BaseClassIconData_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent_BaseClassIconData__InitIcon(
        BattleServantParamComponent_BaseClassIconData_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent_ClassIconData___ctor(
        BattleServantParamComponent_ClassIconData_o *this,
        BattleServantData_o *svtData,
        ServantClassIconComponent_o *classIconComp,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  *(_QWORD *)&this->fields.CurClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.SvtData = svtData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.ClassIconComp = classIconComp;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.ClassIconComp,
    (int32_t)classIconComp,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void BattleServantParamComponent_ClassIconData__ChangeClassIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, method);
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_48377736(this, this->fields.CurClassId, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent_ClassIconData__ChangeClassIcon_48377736(
        BattleServantParamComponent_ClassIconData_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *CurChangeBuff; // x8
  BattleServantParamComponent_ClassIconData_o *v4; // x19
  _BOOL4 IsClassIconChangeSaveGrand; // w20
  struct BattleServantData_o *SvtData; // x8
  struct BattleServantData_o *v7; // x8
  struct ServantClassIconComponent_o *ClassIconComp; // x9
  bool IsNormalClassIcon_k__BackingField; // w9
  struct BattleServantData_o *v10; // x8

  CurChangeBuff = this->fields.CurChangeBuff;
  v4 = this;
  if ( CurChangeBuff )
    IsClassIconChangeSaveGrand = CurChangeBuff->fields.IsClassIconChangeSaveGrand;
  else
    IsClassIconChangeSaveGrand = 1;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_14;
  this = (BattleServantParamComponent_ClassIconData_o *)this->fields.ClassIconComp;
  if ( !this )
    goto LABEL_14;
  ServantClassIconComponent__SetImage(
    (ServantClassIconComponent_o *)this,
    classId,
    SvtData->fields._frameType_k__BackingField,
    0,
    IsClassIconChangeSaveGrand && SvtData->fields._IsGrand_k__BackingField,
    IsClassIconChangeSaveGrand && SvtData->fields._IsShowGrandEffect_k__BackingField,
    0);
  v7 = v4->fields.SvtData;
  if ( IsClassIconChangeSaveGrand )
  {
    ClassIconComp = v4->fields.ClassIconComp;
    if ( !ClassIconComp )
      goto LABEL_14;
    IsNormalClassIcon_k__BackingField = ClassIconComp->fields._IsNormalClassIcon_k__BackingField;
  }
  else
  {
    IsNormalClassIcon_k__BackingField = 1;
  }
  if ( !v7
    || (v7->fields._IsClassIconChangedNormal_k__BackingField = IsNormalClassIcon_k__BackingField,
        (this = (BattleServantParamComponent_ClassIconData_o *)v4->fields.ClassIconComp) == 0)
    || (ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, v7->fields.isEnemy, 0),
        (v10 = v4->fields.SvtData) == 0) )
  {
LABEL_14:
    sub_1C93D2C(this, *(_QWORD *)&classId);
  }
  v4->fields.FrameType = v10->fields._frameType_k__BackingField;
}


UnityEngine_GameObject_o *BattleServantParamComponent_ClassIconData__DisplayEffect(
        BattleServantParamComponent_ClassIconData_o *this,
        BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg,
        System_Action_o *noEffectAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v31; // x22
  UnityEngine_Object_o *v32; // x24
  Il2CppObject *v33; // x23
  System_Action_object__o *v34; // x24
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v41; // x8
  UnityEngine_GameObject_o *v42; // x25
  int32_t EffectId; // w23
  UnityEngine_GameObject_o *ParentObj; // x24
  float DelayTime; // s8
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  System_Action_o *v47; // x24
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D341FD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__);
    sub_1C93AD4(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__);
    sub_1C93AD4(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
    byte_4D341FD = 1;
  }
  component = 0;
  v7 = sub_1C93D20(BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = arg;
  v16 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)arg, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_25;
  v29 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 16LL);
  if ( v29 < 1 )
  {
    EffectObject = 0;
  }
  else
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObject = BattleEffectUtility__getEffectObject(v29, 0, 1, 0);
  }
  *(_QWORD *)(v7 + 32) = EffectObject;
  v31 = (UnityEngine_GameObject_o **)(v7 + 32);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)EffectObject, v23, v24, v25, v26, v27, v28);
  v32 = *(UnityEngine_Object_o **)(v7 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v32, 0, 0) )
  {
    ActionExtensions__Call(noEffectAction, 0);
    return *v31;
  }
  Component_object = *v31;
  if ( !*v31 )
    goto LABEL_25;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v33 = component;
    v34 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v34,
      (Il2CppObject *)v7,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0);
    if ( !v33 )
      goto LABEL_25;
    v33[12].klass = (Il2CppClass *)v34;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v33[12], (int32_t)v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = *v16;
  if ( !*v16 )
    goto LABEL_25;
  v42 = *v31;
  EffectId = v41->fields.EffectId;
  ParentObj = v41->fields.ParentObj;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetEffectParent(v42, EffectId, ParentObj, 0);
  if ( !*v16
    || (DelayTime = (*v16)->fields.DelayTime,
        ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        v47 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v47,
          (Il2CppObject *)v7,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v47, 0, 0),
        !ClassIconComp) )
  {
LABEL_25:
    sub_1C93D2C(Component_object, v9);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0);
  v48 = *v16;
  this->fields.PrevEffectArg = *v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.PrevEffectArg, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  return *v31;
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent_ClassIconData__DisplayIconEffect(
        BattleServantParamComponent_ClassIconData_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  BattleServantData_o *SvtData; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v12; // x21
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *PrevEffectArg; // x8
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3
  struct UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D341F9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__);
    byte_4D341F9 = 1;
  }
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_16;
  if ( BattleServantData__getClassId(SvtData, 1, 0) == this->fields.CurClassId )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v10);
    return;
  }
  SvtData = (BattleServantData_o *)BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
                                     this,
                                     delayTime,
                                     isAddBuff,
                                     v11);
  v12 = (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)SvtData;
  if ( delayTime <= 0.0 )
  {
    PrevEffectArg = this->fields.PrevEffectArg;
    if ( PrevEffectArg )
    {
      if ( !PrevEffectArg->fields.IsChangedIcon )
      {
        if ( !SvtData )
          goto LABEL_16;
        PrevEffectArg->fields.ClassId = SvtData->fields.deckIndex;
        if ( !isSkipEffect )
          goto LABEL_12;
        goto LABEL_10;
      }
    }
  }
  if ( isSkipEffect )
  {
LABEL_10:
    if ( SvtData )
    {
      SvtData->fields.index = -1;
      goto LABEL_12;
    }
LABEL_16:
    sub_1C93D2C(SvtData, isSkipEffect);
  }
LABEL_12:
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, 0);
  v16 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v12, v14, v15);
  this->fields.PlayingEffectObj = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.PlayingEffectObj, (int32_t)v16, v17, v18, v19, v20, v21, v22);
}


void BattleServantParamComponent_ClassIconData__InitIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2

  if ( BattleServantParamComponent_ClassIconData__IsChangeAble(this, method) )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v3);
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_48377736(this, this->fields.CurClassId, v4);
  }
}


bool BattleServantParamComponent_ClassIconData__IsChangeAble(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PlayingEffectObj; // x20
  __int64 v4; // x1
  BattleServantData_o *SvtData; // x0
  bool v6; // w20
  struct BattleServantData_o *v7; // x8

  if ( (byte_4D341FA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D341FA = 1;
  }
  PlayingEffectObj = (UnityEngine_Object_o *)this->fields.PlayingEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(PlayingEffectObj, 0, 0) )
    return 0;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_12;
  v6 = 1;
  SvtData = (BattleServantData_o *)BattleServantData__getClassId(SvtData, 1, 0);
  if ( (_DWORD)SvtData == this->fields.CurClassId )
  {
    v7 = this->fields.SvtData;
    if ( v7 )
      return v7->fields._frameType_k__BackingField != this->fields.FrameType;
LABEL_12:
    sub_1C93D2C(SvtData, v4);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
        BattleServantParamComponent_ClassIconData_o *this,
        float delayTime,
        bool isAddBuff,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *CurChangeBuff; // x0
  int32_t v8; // w21
  BattleBuffData_BuffData_o *v9; // x0
  __int64 v10; // x20
  UnityEngine_Component_o *ClassIconComp; // x0
  __int64 v12; // x1
  int32_t CurClassId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D341FB & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
    byte_4D341FB = 1;
  }
  CurChangeBuff = this->fields.CurChangeBuff;
  if ( CurChangeBuff )
    v8 = BattleBuffData_BuffData__GetActClassIconChangeEffectIdAtBuffRemove(CurChangeBuff, 0);
  else
    v8 = -1;
  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, (const MethodInfo *)isAddBuff);
  if ( isAddBuff )
  {
    v9 = this->fields.CurChangeBuff;
    if ( v9 )
      v8 = BattleBuffData_BuffData__get_ClassIconChangeEffectId(v9, 0);
    else
      v8 = -1;
  }
  v10 = sub_1C93D20(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = v8,
        CurClassId = this->fields.CurClassId,
        *(float *)(v10 + 24) = delayTime,
        *(_DWORD *)(v10 + 20) = CurClassId,
        (ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp) == 0) )
  {
    sub_1C93D2C(ClassIconComp, v12);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0);
  *(_QWORD *)(v10 + 32) = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v10;
}


void BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  BuffAggregationArgs_c *v3; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_4D341FC & 1) == 0 )
  {
    sub_1C93AD4(&BuffAggregationArgs_TypeInfo);
    byte_4D341FC = 1;
  }
  v3 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
  if ( !SvtData )
    sub_1C93D2C(v3, method);
  this->fields.CurClassId = BattleServantData__GetClassId(
                              SvtData,
                              &this->fields.CurChangeBuff,
                              BuffAggregationArgs_TypeInfo->static_fields->DisplaySet,
                              0,
                              0);
}


void BattleServantParamComponent_ClassIconData_DisplayEffectArgument___ctor(
        BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___ctor(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___DisplayEffect_b__0(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  BattleServantParamComponent_ClassIconData_o *_4__this; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg; // x8
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v9; // x8

  if ( (byte_4D341FE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4380/*"ChangeClassIcon"*/);
    byte_4D341FE = 1;
  }
  _4__this = (BattleServantParamComponent_ClassIconData_o *)System_String__op_Equality(
                                                              eventName,
                                                              (System_String_o *)StringLiteral_4380/*"ChangeClassIcon"*/,
                                                              0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    arg = this->fields.arg;
    if ( !arg
      || (_4__this = this->fields.__4__this) == 0
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_48377736(_4__this, arg->fields.ClassId, v7),
          (v9 = this->fields.arg) == 0) )
    {
      sub_1C93D2C(_4__this, v6);
    }
    v9->fields.IsChangedIcon = 1;
  }
}


void BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___DisplayEffect_b__1(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetActiveIfNotNull(this->fields.effectObj, 1, 0);
}


void BattleServantParamComponent_TargetIconViewInfo___ctor(
        BattleServantParamComponent_TargetIconViewInfo_o *this,
        int32_t width,
        int32_t height,
        int32_t depth,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Width_k__BackingField = width;
  this->fields._Height_k__BackingField = height;
  this->fields._Depth_k__BackingField = depth;
  this->fields._Color_k__BackingField.fields.r = r;
  this->fields._Color_k__BackingField.fields.g = g;
  this->fields._Color_k__BackingField.fields.b = b;
  this->fields._Color_k__BackingField.fields.a = a;
}


UnityEngine_Color_o BattleServantParamComponent_TargetIconViewInfo__get_Color(
        BattleServantParamComponent_TargetIconViewInfo_o *this,
        const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields._Color_k__BackingField.fields.r;
  result.fields.g = this->fields._Color_k__BackingField.fields.g;
  result.fields.b = this->fields._Color_k__BackingField.fields.b;
  result.fields.a = this->fields._Color_k__BackingField.fields.a;
  return result;
}


int32_t BattleServantParamComponent_TargetIconViewInfo__get_Depth(
        BattleServantParamComponent_TargetIconViewInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Depth_k__BackingField;
}


int32_t BattleServantParamComponent_TargetIconViewInfo__get_Height(
        BattleServantParamComponent_TargetIconViewInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Height_k__BackingField;
}


int32_t BattleServantParamComponent_TargetIconViewInfo__get_Width(
        BattleServantParamComponent_TargetIconViewInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Width_k__BackingField;
}


void BattleServantParamComponent__CoAddClassIconEffect_d__193___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__193_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__CoAddClassIconEffect_d__193__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__193_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleServantParamComponent__CoAddClassIconEffect_d__193_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v11; // x22
  struct BattleServantParamComponent___c__DisplayClass193_0_o **p__8__1; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x4
  struct ServantClassIconComponent_o *clsIconComponent; // x8
  struct BattleServantData_o *servantData; // x8
  System_Collections_Generic_Dictionary_int__GameObject__o *classIconEffectDict; // x22
  BattleServantParamComponent_o *GrandEffectId; // x0
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x3
  struct BattleServantParamComponent___c__DisplayClass193_0_o *v26; // x23
  int32_t effectId; // w21
  System_Action_o *v28; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass193_0_o *_8__1; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  struct BattleServantData_o *v33; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v35; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__193_o *v37; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__193_o *v38; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__193_o *v39; // x22
  struct BattleServantData_o *v40; // x21
  struct BattlePerformance_o *v41; // x8
  struct BattleData_o *data; // x8
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v49; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4D34201 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&Method_BattleServantParamComponent___c__DisplayClass193_0__CoAddClassIconEffect_b__0__);
    sub_1C93AD4(&BattleServantParamComponent___c__DisplayClass193_0_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)sub_1C93AD4(&StringLiteral_18993/*"ef_commandaura_{0}"*/);
    byte_4D34201 = 1;
  }
  component = 0;
  name = 0;
  path = 0;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (Il2CppObject *)sub_1C93D20(BattleServantParamComponent___c__DisplayClass193_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass193_0_o *)v11;
    p__8__1 = &v8->fields.__8__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
    if ( !_4__this )
      goto LABEL_77;
    clsIconComponent = _4__this->fields.clsIconComponent;
    if ( !clsIconComponent )
      goto LABEL_77;
    if ( clsIconComponent->fields._IsNormalClassIcon_k__BackingField )
    {
      servantData = v8->fields.servantData;
      if ( !servantData )
        goto LABEL_77;
      if ( servantData->fields._IsClassIconChangedNormal_k__BackingField )
      {
        classIconEffectDict = _4__this->fields.classIconEffectDict;
        GrandEffectId = (BattleServantParamComponent_o *)ConstantMaster__GetGrandEffectId(v8->fields.effectId, 0);
        BattleServantParamComponent__DestroyEffectObject(
          GrandEffectId,
          classIconEffectDict,
          (int32_t)GrandEffectId,
          0,
          v24);
      }
    }
    else
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)this,
        _4__this->fields.classIconEffectDict,
        v8->fields.effectId,
        0,
        v19);
      v8->fields.effectId = ConstantMaster__GetGrandEffectId(v8->fields.effectId, 0);
    }
    method = (const MethodInfo *)(unsigned int)v8->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v8->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, v25);
      _4__this->fields.currentClassIconAuraEffectPriority = v8->fields.priority;
    }
    v26 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_77;
    v26->fields.isLoading = 1;
    effectId = v8->fields.effectId;
    v28 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v26,
      Method_BattleServantParamComponent___c__DisplayClass193_0__CoAddClassIconEffect_b__0__,
      0);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v28, perf, 0);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_77;
  if ( _8__1->fields.isLoading )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_77;
  v33 = v8->fields.servantData;
  if ( !v33 )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_77;
  ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v33->fields.uniqueId, 0);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  v35 = v8->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v35, ServantGameObject, 1, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0,
                                                                         0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_77;
  v37 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0);
  if ( !v37 )
    goto LABEL_77;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v37, (UnityEngine_Transform_o *)this, 0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v38 = this;
  if ( !byte_4D2A13E )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v38 )
    goto LABEL_77;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v38,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v39 = this;
  if ( !byte_4D2A139 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v39 )
    goto LABEL_77;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v39,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)component;
    if ( !component )
      goto LABEL_77;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_77;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v8->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_77:
    sub_1C93D2C(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v8->fields.effectId,
                                                                             (const MethodInfo_3463274 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v40 = this->fields.servantData;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v40, &path, &name, 0);
        v41 = _4__this->fields.perf;
        if ( v41 )
        {
          data = v41->fields.data;
          if ( data )
          {
            v43 = path;
            battleGenderType = data->fields.battleGenderType;
            v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType);
            v45 = System_String__Format((System_String_o *)StringLiteral_18993/*"ef_commandaura_{0}"*/, v44, 0);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v43,
                                                                        v45,
                                                                        0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0, 0) )
              return 0;
            facetex = (UnityEngine_Object_o *)_4__this->fields.facetex;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(facetex, 0, 0) )
              return 0;
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v49 = UnityEngine_Object__Instantiate_object__52629400(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v49, 0);
              if ( v49 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v49,
                  !_4__this->fields.isHideFaceTexture,
                  0);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__193_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v8->fields.effectId,
                    v49,
                    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_77;
  }
  return 0;
}


Il2CppObject *BattleServantParamComponent__CoAddClassIconEffect_d__193__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__193_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__193__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__193_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__193_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleServantParamComponent__CoAddClassIconEffect_d__193__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__193_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__CoAddClassIconEffect_d__193__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__193_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__DelayMethod_d__182___ctor(
        BattleServantParamComponent__DelayMethod_d__182_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__DelayMethod_d__182__MoveNext(
        BattleServantParamComponent__DelayMethod_d__182_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4D34202 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D34202 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1C93D2C(0, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, void *))callBack->klass[1]._1.image)(
      callBack,
      callBack->klass[1]._1.gc_desc);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    this->fields.__1__state = 1;
    return 1;
  }
  return 0;
}


Il2CppObject *BattleServantParamComponent__DelayMethod_d__182__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__DelayMethod_d__182__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__182_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleServantParamComponent__DelayMethod_d__182_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleServantParamComponent__DelayMethod_d__182__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__DelayMethod_d__182__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__182_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D341FF & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantParamComponent___c_TypeInfo);
    byte_4D341FF = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleServantParamComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantParamComponent___c_TypeInfo->static_fields->__9 = (struct BattleServantParamComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleServantParamComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleServantParamComponent___c___ctor(BattleServantParamComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c___setTargetMark_b__159_0(
        BattleServantParamComponent___c_o *this,
        UISprite_o *sprite,
        BattleServantParamComponent_TargetIconViewInfo_o *viewInfo,
        const MethodInfo *method)
{
  if ( !viewInfo || !sprite )
    sub_1C93D2C(this, sprite);
  UIWidget__set_width((UIWidget_o *)sprite, viewInfo->fields._Width_k__BackingField, 0);
  UIWidget__set_height((UIWidget_o *)sprite, viewInfo->fields._Height_k__BackingField, 0);
  UIWidget__set_depth((UIWidget_o *)sprite, viewInfo->fields._Depth_k__BackingField, 0);
  UIWidget__set_color((UIWidget_o *)sprite, viewInfo->fields._Color_k__BackingField, 0);
}


void BattleServantParamComponent___c__DisplayClass191_0___ctor(
        BattleServantParamComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c__DisplayClass191_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_4D34200 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    byte_4D34200 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1C93D2C(0, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void BattleServantParamComponent___c__DisplayClass193_0___ctor(
        BattleServantParamComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c__DisplayClass193_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  struct BattleServantParamComponent_o *_4__this; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v14; // w22
  char v15; // w21

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)BattleServantData__get_BuffData(
                                                                                       (BattleServantData_o *)this,
                                                                                       0);
    if ( !this )
      goto LABEL_19;
    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0);
    skillIcon = _4__this->fields.skillIcon;
    if ( !skillIcon )
      goto LABEL_19;
    max_length = skillIcon->max_length;
    if ( max_length < 1 )
      return 0;
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C93D34(this);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)skillIcon->m_Items[v14];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                         (BattleServantSkillIConComponent_o *)this,
                                                                                         method);
      max_length = skillIcon->max_length;
      ++v14;
      v15 |= (unsigned __int8)this;
    }
    while ( v14 < max_length );
    if ( (v15 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)BattleServantData__get_BuffData(
                                                                                             (BattleServantData_o *)this,
                                                                                             0)) == 0
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *)*((_QWORD *)this + 11)) == 0 )
    {
LABEL_19:
      sub_1C93D2C(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
  }
  return 0;
}


Il2CppObject *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__149_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__showSideEffectList_d__178___ctor(
        BattleServantParamComponent__showSideEffectList_d__178_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__showSideEffectList_d__178__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__178_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__178_o *v2; // x19
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v4; // x21
  BattleServantParamComponent__showSideEffectList_d__178_o *v5; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v10; // x2
  BattleServantParamComponent_c *v11; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v13; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D34203 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&BattleServantParamComponent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__);
    this = (BattleServantParamComponent__showSideEffectList_d__178_o *)sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D34203 = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__178_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    _4__this->fields.isShowingSideEffect = 0;
    return 0;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__178_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_3A21F1C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v4 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__178_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0),
        !v4) )
  {
LABEL_16:
    sub_1C93D2C(this, method);
  }
  v5 = this;
  statusEffectId = v4->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v5, statusEffectId, v22, 0);
  BattleServantParamComponent__popBuffLabel(_4__this, v4, v10);
  v11 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v11 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v11->static_fields->SideEffectShowWaitTime;
  v13 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, SideEffectShowWaitTime, 0);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C93A78(p__2__current, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return 1;
}


Il2CppObject *BattleServantParamComponent__showSideEffectList_d__178__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__178_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__showSideEffectList_d__178__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__178_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleServantParamComponent__showSideEffectList_d__178_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleServantParamComponent__showSideEffectList_d__178__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__178_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__showSideEffectList_d__178__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__178_o *this,
        const MethodInfo *method)
{
  ;
}