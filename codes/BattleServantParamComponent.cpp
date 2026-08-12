void BattleServantParamComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct BattleServantParamComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct BattleServantParamComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct BattleServantParamComponent_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct BattleServantParamComponent_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  struct BattleServantParamComponent_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct BattleServantParamComponent_StaticFields *v41; // x8

  if ( (byte_597424C & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&StringLiteral_18269/*"btn_menu_select_grand"*/);
    sub_2213A60(&StringLiteral_18242/*"btn_cs_select"*/);
    sub_2213A60(&StringLiteral_18268/*"btn_menu_select"*/);
    sub_2213A60(&StringLiteral_18244/*"btn_cs_select_grand_2"*/);
    sub_2213A60(&StringLiteral_18243/*"btn_cs_select_grand"*/);
    byte_597424C = 1;
  }
  v7 = StringLiteral_18268/*"btn_menu_select"*/;
  static_fields = BattleServantParamComponent_TypeInfo->static_fields;
  static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH = 42;
  static_fields->TARGET_SP_NAME = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->TARGET_SP_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_18242/*"btn_cs_select"*/;
  v10 = BattleServantParamComponent_TypeInfo->static_fields;
  v10->FIX_TARGET_SP_NAME = (struct System_String_o *)StringLiteral_18242/*"btn_cs_select"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->FIX_TARGET_SP_NAME, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_18269/*"btn_menu_select_grand"*/;
  v18 = BattleServantParamComponent_TypeInfo->static_fields;
  v18->TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_18269/*"btn_menu_select_grand"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->TARGET_GRAND_SP_NAME, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_18243/*"btn_cs_select_grand"*/;
  v26 = BattleServantParamComponent_TypeInfo->static_fields;
  v26->FIX_TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_18243/*"btn_cs_select_grand"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->FIX_TARGET_GRAND_SP_NAME, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_18244/*"btn_cs_select_grand_2"*/;
  v34 = BattleServantParamComponent_TypeInfo->static_fields;
  v34->FIX_TARGETING_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_18244/*"btn_cs_select_grand_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->FIX_TARGETING_GRAND_SP_NAME, v33, v35, v36, v37, v38, v39, v40);
  v41 = BattleServantParamComponent_TypeInfo->static_fields;
  *(_OWORD *)&v41->TARGET_ICON_SPRITE_WIDTH = xmmword_E9D630;
  *(_OWORD *)&v41->GRAND_TARGET_ICON_SPRITE_HEIGHT = xmmword_E9CD20;
  *(_OWORD *)&v41->FIX_TARGET_ICON_SPRITE_DEPTH = xmmword_E9D400;
  *(_OWORD *)&v41->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX = xmmword_E9D410;
  *(_OWORD *)&v41->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET = xmmword_E9D070;
  *(_OWORD *)&v41->TARGET_ICON_SPRITE_POSX = xmmword_E9C680;
}


void BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Queue_T__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_int__GameObject__c *v17; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v20; // d2
  System_Collections_Generic_Dictionary_int__object__o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_Dictionary_int__object__o *v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_object__o *v35; // x20
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  if ( (byte_597424B & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattlePointGaugeComponent__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
    byte_597424B = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 1);
  this->fields.effectobj = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v10,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sideEffectShowQueue,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  v17 = System_Collections_Generic_Dictionary_int__GameObject__TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  v20 = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_E9D720;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v20;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(v17);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classIconEffectDict,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandSpellEffectDict,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattlePointGaugeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattlePointGaugeComponent___ctor__);
  this->fields.battlePointGaugeComponentList = (struct System_Collections_Generic_List_BattlePointGaugeComponent__o *)v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battlePointGaugeComponentList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (Il2CppObject *)sub_2213CCC(BattleServantParamComponent_BaseClassIconData_TypeInfo);
  System_Object___ctor(v42, 0);
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v42;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classIconData,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__ChangeTargetMarkSprite(
        BattleServantParamComponent_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *targetMark; // x0
  UISprite_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *battleUIAtlas; // x23
  __int64 v11; // x1
  BattleDataDefine_c *v12; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UIAtlas_o *v14; // x21
  __int64 v15; // x1
  BattleServantParamComponent_c *v16; // x0
  BattleServantParamComponent_c *v17; // x0
  __int64 v18; // x1
  BattleServantParamComponent_c *v19; // x0
  System_String_o **p_FIX_TARGET_GRAND_SP_NAME; // x8
  UIAtlas_o *v21; // x22
  __int64 v22; // x1
  BattleServantParamComponent_c *v23; // x0
  UIAtlas_o *v24; // x20
  __int64 v25; // x1
  BattleServantParamComponent_c *v26; // x0

  if ( (byte_597424A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    byte_597424A = 1;
  }
  targetMark = this->fields.targetMark;
  if ( !targetMark )
    goto LABEL_54;
  targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             targetMark,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark )
    goto LABEL_54;
  v6 = (UISprite_o *)targetMark;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.lockTargetMark,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    battleUIAtlas = (UnityEngine_Object_o *)this->fields.battleUIAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Equality(battleUIAtlas, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        if ( isGrand )
        {
          v12 = BattleDataDefine_TypeInfo;
          if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, isGrand);
            v12 = BattleDataDefine_TypeInfo;
          }
          ASSET_BATTLE_COMMON = v12->static_fields->ASSET_BATTLE_COMMON;
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, isGrand);
          targetMark = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
          if ( targetMark )
          {
            targetMark = (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                                       (AssetData_o *)targetMark,
                                                       (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                                       (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
            if ( targetMark )
            {
              targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         targetMark,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
              v14 = (UIAtlas_o *)targetMark;
              if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, isGrand);
              if ( v14 )
              {
                targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                           v14,
                                                           BattleServantParamComponent_TypeInfo->static_fields->TARGET_GRAND_SP_NAME,
                                                           0);
                if ( targetMark )
                {
                  if ( !v6 )
                    goto LABEL_54;
                  UISprite__set_atlas(v6, v14, 0);
                  v16 = BattleServantParamComponent_TypeInfo;
                  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v15);
                    v16 = BattleServantParamComponent_TypeInfo;
                  }
                  UISprite__set_spriteName(v6, v16->static_fields->TARGET_GRAND_SP_NAME, 0);
                }
                v17 = BattleServantParamComponent_TypeInfo;
                if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, isGrand);
                  v17 = BattleServantParamComponent_TypeInfo;
                }
                targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                           v14,
                                                           v17->static_fields->FIX_TARGET_GRAND_SP_NAME,
                                                           0);
                if ( !targetMark )
                  return;
                if ( Component_object )
                {
                  UISprite__set_atlas((UISprite_o *)Component_object, v14, 0);
                  v19 = BattleServantParamComponent_TypeInfo;
                  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v18);
                    v19 = BattleServantParamComponent_TypeInfo;
                  }
                  p_FIX_TARGET_GRAND_SP_NAME = &v19->static_fields->FIX_TARGET_GRAND_SP_NAME;
LABEL_53:
                  UISprite__set_spriteName((UISprite_o *)Component_object, *p_FIX_TARGET_GRAND_SP_NAME, 0);
                  return;
                }
              }
            }
          }
        }
        else
        {
          v21 = this->fields.battleUIAtlas;
          targetMark = (UnityEngine_GameObject_o *)BattleServantParamComponent_TypeInfo;
          if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, isGrand);
          if ( v21 )
          {
            targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                       v21,
                                                       BattleServantParamComponent_TypeInfo->static_fields->TARGET_SP_NAME,
                                                       0);
            if ( targetMark )
            {
              if ( !v6 )
                goto LABEL_54;
              UISprite__set_atlas(v6, this->fields.battleUIAtlas, 0);
              v23 = BattleServantParamComponent_TypeInfo;
              if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v22);
                v23 = BattleServantParamComponent_TypeInfo;
              }
              UISprite__set_spriteName(v6, v23->static_fields->TARGET_SP_NAME, 0);
            }
            targetMark = (UnityEngine_GameObject_o *)BattleServantParamComponent_TypeInfo;
            v24 = this->fields.battleUIAtlas;
            if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, isGrand);
            if ( v24 )
            {
              targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                         v24,
                                                         BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_SP_NAME,
                                                         0);
              if ( !targetMark )
                return;
              if ( Component_object )
              {
                UISprite__set_atlas((UISprite_o *)Component_object, this->fields.battleUIAtlas, 0);
                v26 = BattleServantParamComponent_TypeInfo;
                if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v25);
                  v26 = BattleServantParamComponent_TypeInfo;
                }
                p_FIX_TARGET_GRAND_SP_NAME = &v26->static_fields->FIX_TARGET_SP_NAME;
                goto LABEL_53;
              }
            }
          }
        }
LABEL_54:
        sub_2213CDC(targetMark, isGrand);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_597423D & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent__CoAddClassIconEffect_d__194_TypeInfo);
    byte_597423D = 1;
  }
  v9 = sub_2213CCC(BattleServantParamComponent__CoAddClassIconEffect_d__194_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 48) = effectId;
  *(_DWORD *)(v9 + 52) = priority;
  *(_QWORD *)(v9 + 40) = servantData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)servantData, v16, v17, v18, v19, v20, v21);
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
    sub_2213CDC(0, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_Collections_IEnumerator_o *BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5974236 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent__DelayMethod_d__183_TypeInfo);
    byte_5974236 = 1;
  }
  v6 = sub_2213CCC(BattleServantParamComponent__DelayMethod_d__183_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)callBack, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleServantParamComponent__DeleteSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  __int64 v4; // x20

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_8;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_2213CE4(this);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, method);
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

  if ( (byte_597423B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_597423B = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
    {
      sub_2213CDC(IsNullOrEmpty, v7);
    }
    max_length = IsNullOrEmpty->max_length;
    v11 = IsNullOrEmpty;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_2213CE4(IsNullOrEmpty);
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v11->m_Items[v12],
          forceDestroy,
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
  System_Collections_Generic_List_object__o *battlePointGaugeComponentList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_BattlePointGaugeComponent__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5974242 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974242 = 1;
  }
  battlePointGaugeComponentList = (System_Collections_Generic_List_object__o *)this->fields.battlePointGaugeComponentList;
  memset(&v14, 0, sizeof(v14));
  if ( !battlePointGaugeComponentList )
    goto LABEL_19;
  if ( battlePointGaugeComponentList->fields._size < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    battlePointGaugeComponentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__GetEnumerator__);
  v14 = v13;
  v13.fields._list = 0;
  *(_QWORD *)&v13.fields._index = &v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_2213CDC(v6, v7);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__Dispose__);
  v10 = this->fields.battlePointGaugeComponentList;
  if ( !v10 )
LABEL_19:
    sub_2213CDC(battlePointGaugeComponentList, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject **v17; // x20
  System_Collections_ICollection_o *v18; // x0
  Il2CppObject *v19; // x20
  System_Action_o *v20; // x21
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_597423C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleServantParamComponent___c__DisplayClass192_0__DestroyEffectObject_b__0__);
    sub_2213A60(&BattleServantParamComponent___c__DisplayClass192_0_TypeInfo);
    byte_597423C = 1;
  }
  component = 0;
  v8 = sub_2213CCC(BattleServantParamComponent___c__DisplayClass192_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_19;
  *(_QWORD *)(v8 + 16) = effectDict;
  v17 = (Il2CppObject **)(v8 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)effectDict, v11, v12, v13, v14, v15, v16);
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
           (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v17;
        if ( !*v17 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v8 + 24),
                 (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v19 = component;
          v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v20,
            (Il2CppObject *)v8,
            Method_BattleServantParamComponent___c__DisplayClass192_0__DestroyEffectObject_b__0__,
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
          sub_2213CDC(Item, v10);
        }
      }
      Item = *v17;
      if ( !*v17 )
        goto LABEL_19;
      v22 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v8 + 24),
              (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v22, 0);
      Item = *v17;
      if ( !*v17 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v8 + 24),
        (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


void BattleServantParamComponent__DestroyGrandEffectObject(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectObj; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *grandEffectRoot; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5974249 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974249 = 1;
  }
  grandEffectObj = (UnityEngine_Object_o *)this->fields.grandEffectObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(grandEffectObj, 0, 0) )
  {
    grandEffectRoot = (UnityEngine_Object_o *)this->fields.grandEffectRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(grandEffectRoot, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.grandEffectRoot;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
      {
        sub_2213CDC(gameObject, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v9 = (UnityEngine_Object_o *)this->fields.grandEffectObj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_83459800(v9, 0);
      this->fields.grandEffectObj = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.grandEffectObj, 0, v10, v11, v12, v13, v14, v15);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(0, isSkipEffect);
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
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x3
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_597423E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    this = (BattleServantParamComponent_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_597423E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
    sub_2213CDC(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
           &v10,
           (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    if ( !v6 )
      break;
    BattleServantParamComponent__EffectStartStop_54837772(
      (BattleServantParamComponent_o *)v6,
      (UnityEngine_GameObject_o *)v10.fields._currentValue,
      isStart,
      v7);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v10,
    (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void BattleServantParamComponent__EffectStartStop_54837772(
        BattleServantParamComponent_o *this,
        UnityEngine_GameObject_o *effect,
        bool isStart,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597423F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597423F = 1;
  }
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effect);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !effect )
      goto LABEL_15;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           effect,
           &component,
           (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
    {
      UnityEngine_GameObject__SetActive(effect, 1, 0);
      v6 = component;
      if ( isStart )
      {
        if ( component )
        {
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0);
          return;
        }
LABEL_15:
        sub_2213CDC(v6, v7);
      }
      if ( !component )
        goto LABEL_15;
      component->klass->vtable[9].methodPtr();
    }
    else
    {
      UnityEngine_GameObject__SetActive(effect, isStart, 0);
    }
  }
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741F6 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741F6 = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->FIX_TARGET_ICON_SPRITE_WIDTH;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconViewInfo_54801352(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t FixTargetIconDepth; // w20
  __int64 v4; // d8
  __int64 v5; // x19
  struct UnityEngine_Color_o FixTargetIconColor; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_59741FD & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741FD = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  FixTargetIconDepth = v2->fields.FixTargetIconDepth;
  v4 = *(_QWORD *)&v2->fields.FixTargetIconWidth;
  FixTargetIconColor = v2->fields.FixTargetIconColor;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v4;
  *(_DWORD *)(v5 + 24) = FixTargetIconDepth;
  *(struct UnityEngine_Color_o *)(v5 + 28) = FixTargetIconColor;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741FA & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741FA = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = xmmword_E9DC50;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_54801624(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t FixTargetIconDepthWhenTarget; // w20
  __int64 v4; // d8
  __int64 v5; // x19
  struct UnityEngine_Color_o FixTargetIconColorWhenTarget; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_59741FF & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741FF = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  FixTargetIconDepthWhenTarget = v2->fields.FixTargetIconDepthWhenTarget;
  v4 = *(_QWORD *)&v2->fields.FixTargetIconWidthWhenTarget;
  FixTargetIconColorWhenTarget = v2->fields.FixTargetIconColorWhenTarget;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v4;
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
  if ( (byte_5974206 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_BattleServantParamSetting___);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_2213A60(&StringLiteral_3255/*"BattleServantParamSettingData_{0}"*/);
    byte_5974206 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_20;
  if ( !data->fields.isEnemy )
    return 0;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, stageEntity);
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
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, stageEntity);
          return ServantAssetLoadManager__LoadBattleServantParamSetting(v7, v9, isForceAppearance, 0);
        }
      }
    }
LABEL_20:
    sub_2213CDC(this, stageEntity);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, stageEntity);
  result = (BattleServantParamSetting_o *)AssetManager__getAssetStorageData(EnemyUiAssetStoragePath, 0);
  if ( result )
  {
    v12 = (AssetData_o *)result;
    index = v4->fields.index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &index);
    v14 = System_String__Format((System_String_o *)StringLiteral_3255/*"BattleServantParamSettingData_{0}"*/, v13, 0);
    return (BattleServantParamSetting_o *)AssetData__GetObject_object__58532980(
                                            v12,
                                            v14,
                                            (const MethodInfo_37D2474 *)Method_AssetData_GetObject_BattleServantParamSetting___);
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

  if ( (byte_5974204 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3214/*"Battle/EnemyUI/{0}"*/);
    byte_5974204 = 1;
  }
  if ( !stageEntity )
    return 0;
  EnemyUiId = StageEntity__GetEnemyUiId(stageEntity, 0);
  if ( EnemyUiId < 1 )
    return 0;
  v6 = EnemyUiId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format((System_String_o *)StringLiteral_3214/*"Battle/EnemyUI/{0}"*/, v4, 0);
}


void BattleServantParamComponent__GrandEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop_54837772(this, this->fields.grandEffectObj, isStart, v3);
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741F7 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741F7 = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  GRAND_FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->GRAND_FIX_TARGET_ICON_SPRITE_WIDTH;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo_54801900(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandFixTargetIconDepth; // w20
  __int64 v4; // d8
  __int64 v5; // x19
  struct UnityEngine_Color_o GrandFixTargetIconColor; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_5974201 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_5974201 = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  GrandFixTargetIconDepth = v2->fields.GrandFixTargetIconDepth;
  v4 = *(_QWORD *)&v2->fields.GrandFixTargetIconWidth;
  GrandFixTargetIconColor = v2->fields.GrandFixTargetIconColor;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v4;
  *(_DWORD *)(v5 + 24) = GrandFixTargetIconDepth;
  *(struct UnityEngine_Color_o *)(v5 + 28) = GrandFixTargetIconColor;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741FB & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741FB = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  GRAND_FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->GRAND_FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = xmmword_E9DC50;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_54802172(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandFixTargetIconDepthWhenTarget; // w20
  __int64 v4; // d8
  __int64 v5; // x19
  struct UnityEngine_Color_o GrandFixTargetIconColorWhenTarget; // [xsp+0h] [xbp-30h]

  v2 = setting;
  if ( (byte_5974203 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_5974203 = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  GrandFixTargetIconDepthWhenTarget = v2->fields.GrandFixTargetIconDepthWhenTarget;
  v4 = *(_QWORD *)&v2->fields.GrandFixTargetIconWidthWhenTarget;
  GrandFixTargetIconColorWhenTarget = v2->fields.GrandFixTargetIconColorWhenTarget;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = v4;
  *(_DWORD *)(v5 + 24) = GrandFixTargetIconDepthWhenTarget;
  *(struct UnityEngine_Color_o *)(v5 + 28) = GrandFixTargetIconColorWhenTarget;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandNormalTargetIconViewInfo(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandTargetIconDepth; // w20
  __int64 v4; // d8
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_5974200 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_5974200 = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  GrandTargetIconDepth = v2->fields.GrandTargetIconDepth;
  v4 = *(_QWORD *)&v2->fields.GrandTargetIconWidth;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v4;
  *(_DWORD *)(v5 + 24) = GrandTargetIconDepth;
  *(_OWORD *)(v5 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v5;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741F5 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741F5 = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  GRAND_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->GRAND_TARGET_ICON_SPRITE_WIDTH;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = GRAND_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741F9 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741F9 = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  GRAND_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->GRAND_TARGET_ICON_SPRITE_WIDTH_WHEN_FIX;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = GRAND_TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_54802044(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandTargetIconDepthWhenFix; // w20
  __int64 v4; // d8
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_5974202 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_5974202 = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  GrandTargetIconDepthWhenFix = v2->fields.GrandTargetIconDepthWhenFix;
  v4 = *(_QWORD *)&v2->fields.GrandTargetIconWidthWhenFix;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v4;
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

  if ( (byte_597422C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597422C = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        sub_2213CDC(isTDSeraled, v9);
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

  if ( (byte_5974246 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__207_0__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6134/*"Effect/GrandServant"*/);
    byte_5974246 = 1;
  }
  grandEffectRoot = (UnityEngine_Object_o *)this->fields.grandEffectRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(grandEffectRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.grandEffectRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (perf = this->fields.perf) == 0)
      || (assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField,
          v8 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo),
          AssetLoader_LoadEndDataHandler___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__207_0__,
            0),
          !assetStorageLoadWrapper_k__BackingField) )
    {
      sub_2213CDC(gameObject, v4);
    }
    AssetStorageLoadWrapper__LoadAssetStorage(
      assetStorageLoadWrapper_k__BackingField,
      (System_String_o *)StringLiteral_6134/*"Effect/GrandServant"*/,
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
  return this->fields.data == svtData;
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
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741F4 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741F4 = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  TARGET_ICON_SPRITE_DEPTH = static_fields->TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->TARGET_ICON_SPRITE_WIDTH;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__NormalTargetIconViewInfo_54801224(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t TargetIconDepth; // w20
  __int64 v4; // d8
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_59741FC & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741FC = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  TargetIconDepth = v2->fields.TargetIconDepth;
  v4 = *(_QWORD *)&v2->fields.TargetIconWidth;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v4;
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

  if ( (byte_5974209 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_23539/*"onClickServant"*/);
    byte_5974209 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &uniqueId);
      if ( !v5 )
        sub_2213CDC(v6, v7);
      UnityEngine_GameObject__SendMessage_83438088(v5, (System_String_o *)StringLiteral_23539/*"onClickServant"*/, v6, 0);
    }
  }
}


void BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_2213CDC(this, 0);
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
  __int64 v6; // x1
  UnityEngine_Object_o *hpGauge; // x21
  __int64 v8; // x1
  BattleHpGaugeBarComponent_o *v9; // x0

  if ( (byte_597422F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597422F = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
  {
    v9 = this->fields.hpGauge;
    if ( !v9
      || (BattleHpGaugeBarComponent__updateDamageGauge(v9, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0),
          (v9 = this->fields.hpGauge) == 0) )
    {
      sub_2213CDC(v9, v8);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v9, nowHp, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__PlayDownShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x6
  BattleServantHpShiftComponent_o *v10; // x0
  const MethodInfo *v11; // x4
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597422A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597422A = 1;
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  nextAnimationTime = 0.0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v10 = this->fields.hpShift;
    if ( !v10
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(v10, index, effectData, this, &nextAnimationTime, 0, v9),
          (v10 = this->fields.hpShift) == 0) )
    {
      sub_2213CDC(v10, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v10, index, 1, 1, v11);
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

  if ( (byte_5974228 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974228 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    v13 = this->fields.hpChange;
    if ( !v13 )
      sub_2213CDC(0, v12);
    BattleServantChangeBarComponent__PlayHpBarEffect(v13, effectName, updateHpBarFunc, updateHpLabelFunc, callback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v12; // x6
  float result; // s0
  BattleServantHpShiftComponent_o *v14; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974227 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974227 = 1;
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  nextAnimationTime = 0.0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  v10 = UnityEngine_Object__op_Inequality(hpShift, 0, 0);
  result = 0.0;
  if ( v10 )
  {
    v14 = this->fields.hpShift;
    if ( !v14 )
      sub_2213CDC(0, v11);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(
      v14,
      index,
      effectData,
      this,
      &nextAnimationTime,
      callBack,
      v12);
    return nextAnimationTime;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__PlayUpShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        float delayTime,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  BattleServantHpShiftComponent_o *v12; // x0
  const MethodInfo *v13; // x6
  Il2CppObject *v14; // x21
  System_Action_int__bool__bool__o *v15; // x22
  BattleCallBack_int__bool__bool__o *v16; // x21
  BattleServantParamComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974229 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__bool__bool__TypeInfo);
    sub_2213A60(&Method_BattleCallBack_int__bool__bool___ctor__);
    sub_2213A60(&BattleCallBack_int__bool__bool__TypeInfo);
    sub_2213A60(&Method_BattleServantHpShiftComponent_UpdateIcon__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974229 = 1;
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  nextAnimationTime = 0.0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v12 = this->fields.hpShift;
    if ( !v12
      || (BattleServantHpShiftComponent__UpdateIconActive(v12, index, 1, v11), (v12 = this->fields.hpShift) == 0) )
    {
      sub_2213CDC(v12, v10);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0, v13);
    v14 = (Il2CppObject *)this->fields.hpShift;
    v15 = (System_Action_int__bool__bool__o *)sub_2213CCC(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v15, v14, Method_BattleServantHpShiftComponent_UpdateIcon__, 0);
    v16 = (BattleCallBack_int__bool__bool__o *)sub_2213CCC(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v16,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v15,
      (const MethodInfo_3E6D58C *)Method_BattleCallBack_int__bool__bool___ctor__);
    v19 = BattleServantParamComponent__DelayMethod(v17, delayTime, (BattleCallBackBase_o *)v16, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v19, 0);
  }
}


void BattleServantParamComponent__RemoveEffectClearRankUpBuff(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  __int64 v4; // x20

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_8;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_2213CE4(this);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, method);
  }
}


void BattleServantParamComponent__ResetDefaultBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultServantParam; // x20
  void *Component_object; // x0
  __int64 v5; // x1
  struct BattleServantParamSetting_o *v6; // x8
  struct BattleServantParamSetting_o *v7; // x8
  struct BattleServantParamSetting_o *v8; // x8
  struct BattleServantParamSetting_o *v9; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  struct BattleServantParamSetting_o *v13; // x8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct BattleServantParamSetting_o *v20; // x8
  struct BattleServantParamSetting_o *v21; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974208 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974208 = 1;
  }
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (void *)UnityEngine_Object__op_Equality(defaultServantParam, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v6 = this->fields.defaultServantParam;
    if ( v6 )
    {
      BasicHelper__SetActiveSafely(
        (UnityEngine_Component_o *)this->fields.clsIconComponent,
        v6->fields.IsDispClassIcon,
        0);
      v7 = this->fields.defaultServantParam;
      if ( v7 )
      {
        ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this, v7->fields.UiPosition, 0);
        v8 = this->fields.defaultServantParam;
        if ( v8 )
        {
          ComponentHelper__SetLocalScale((UnityEngine_Component_o *)this, v8->fields.UiScale, 0);
          v9 = this->fields.defaultServantParam;
          if ( v9 )
          {
            BuffIconMax = v9->fields.BuffIconMax;
            if ( (BuffIconMax & 0x80000000) == 0 )
            {
              showBuffComponent = this->fields.showBuffComponent;
              if ( !showBuffComponent )
                goto LABEL_25;
              showBuffComponent->fields.maxCount = BuffIconMax;
            }
            BuffIconMaxLine = v9->fields.BuffIconMaxLine;
            Component_object = this->fields.showBuffComponent;
            if ( (BuffIconMaxLine & 0x80000000) == 0 )
            {
              if ( !Component_object )
                goto LABEL_25;
              *((_DWORD *)Component_object + 11) = BuffIconMaxLine;
            }
            ComponentHelper__SetLocalPosition(
              (UnityEngine_Component_o *)Component_object,
              v9->fields.BuffIconPosition,
              0);
            v13 = this->fields.defaultServantParam;
            if ( v13 )
            {
              GameObjectHelper__SetActiveSafely(this->fields.levelRoot, v13->fields.IsDispLevel, 0);
              Component_object = (void *)UnityEngine_Component__TryGetComponent_object_(
                                           (UnityEngine_Component_o *)this,
                                           &component,
                                           (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
              if ( ((unsigned __int8)Component_object & 1) == 0 )
              {
LABEL_23:
                this->fields.defaultServantParam = 0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.defaultServantParam,
                  0,
                  v14,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19);
                return;
              }
              v20 = this->fields.defaultServantParam;
              if ( v20 )
              {
                Component_object = component;
                if ( component )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)component,
                    v20->fields.BoxColliderPosition,
                    0);
                  v21 = this->fields.defaultServantParam;
                  if ( v21 )
                  {
                    Component_object = component;
                    if ( component )
                    {
                      UnityEngine_BoxCollider__set_size(
                        (UnityEngine_BoxCollider_o *)component,
                        v21->fields.BoxColliderSize,
                        0);
                      goto LABEL_23;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_2213CDC(Component_object, v5);
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

  data = this->fields.data;
  if ( data && !BattleServantData__isDead(data, 0) )
  {
    BattleServantParamComponent__setTouch(this, val, method);
    root = this->fields.root;
    if ( root )
    {
      v8 = val;
      goto LABEL_7;
    }
LABEL_8:
    sub_2213CDC(root, v6);
  }
  BattleServantParamComponent__setTouch(this, 0, method);
  root = this->fields.root;
  if ( !root )
    goto LABEL_8;
  v8 = 0;
LABEL_7:
  UnityEngine_GameObject__SetActive(root, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__SetBattlePointGaugePriority(
        BattleServantParamComponent_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeManager; // x21
  __int64 v6; // x1
  BattlePointGaugeManager_o *v7; // x0

  if ( (byte_5974243 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974243 = 1;
  }
  battlePointGaugeManager = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&battlePointId);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeManager, 0, 0) )
  {
    v7 = this->fields.battlePointGaugeManager;
    if ( !v7 )
      sub_2213CDC(0, v6);
    BattlePointGaugeManager__SetPriorityGauge(v7, battlePointId, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5974245 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974245 = 1;
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, flg, 0);
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0);
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled(v7, !flg, 0);
      return;
    }
LABEL_24:
    sub_2213CDC(v7, v6);
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

  if ( (byte_5974212 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974212 = 1;
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, paramPosData);
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
    sub_2213CDC(showBuffComponent, v7);
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
  unsigned __int64 v7; // x8
  int v8; // w20
  void *grandEffectObj; // x0
  int v10; // w8
  void *v11; // x19
  __int64 v12; // x21
  unsigned __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974247 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_5974247 = 1;
  }
  v3 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, method);
    v3 = BattleServantParamComponent_TypeInfo;
  }
  if ( this->fields.clsIconComponent
    && (PARTY_ORGANIZATION_CLASS_ICON_DEPTH = v3->static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH,
        (Component_object = UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this->fields.clsIconComponent,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___)) != 0)
    && (klass = (int32_t)Component_object[11].klass,
        v13 = 0,
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v13,
          klass,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v13) )
  {
    v7 = HIDWORD(v13);
    v13 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v13,
      PARTY_ORGANIZATION_CLASS_ICON_DEPTH - v7,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    v8 = HIDWORD(v13);
  }
  else
  {
    v8 = 0;
  }
  grandEffectObj = this->fields.grandEffectObj;
  if ( !grandEffectObj )
    goto LABEL_18;
  grandEffectObj = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                     (UnityEngine_GameObject_o *)grandEffectObj,
                     (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !grandEffectObj )
    goto LABEL_18;
  v10 = *((_DWORD *)grandEffectObj + 6);
  v11 = grandEffectObj;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= v10 )
        sub_2213CE4(grandEffectObj);
      grandEffectObj = (void *)*((_QWORD *)v11 + v12 + 4);
      if ( !grandEffectObj )
        break;
      UIWidget__set_depth((UIWidget_o *)grandEffectObj, *((_DWORD *)grandEffectObj + 44) - v8, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_18:
    sub_2213CDC(grandEffectObj, method);
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
  char v9; // w8
  UnityEngine_Object_c *v10; // x0
  UnityEngine_Object_o *levelRoot; // x22
  int v12; // w9
  bool activeSelf; // w0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int v20; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v22; // s1
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o size; // 0:kr40_12.12

  if ( (byte_5974207 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamSetting_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974207 = 1;
  }
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(defaultServantParam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    v5 = sub_2213CCC(BattleServantParamSetting_TypeInfo);
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
          v9 = (char)clsIconComponent;
          v10 = UnityEngine_Object_TypeInfo;
          levelRoot = (UnityEngine_Object_o *)this->fields.levelRoot;
          v12 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
          *(_BYTE *)(v5 + 24) = v9 & 1;
          if ( !v12 )
            j_il2cpp_runtime_class_init_0(v10, v7);
          if ( UnityEngine_Object__op_Inequality(levelRoot, 0, 0) )
          {
            clsIconComponent = (UnityEngine_Component_o *)this->fields.levelRoot;
            if ( !clsIconComponent )
              goto LABEL_27;
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
                    *(UnityEngine_Vector3_o *)(v5 + 72) = UnityEngine_BoxCollider__get_center(
                                                            (UnityEngine_BoxCollider_o *)Component_object,
                                                            0);
                    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
                    x = size.fields.x;
                    y = size.fields.y;
                    z = size.fields.z;
                  }
                  else
                  {
                    if ( !byte_5969AE0 )
                    {
                      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                      byte_5969AE0 = 1;
                    }
                    v20 = (unsigned __int8)byte_5969AE0;
                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                    v22 = static_fields->zeroVector.fields.z;
                    *(_QWORD *)(v5 + 72) = *(_QWORD *)&static_fields->zeroVector.fields.x;
                    *(float *)(v5 + 80) = v22;
                    if ( !v20 )
                    {
                      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                      byte_5969AE0 = 1;
                    }
                    v23 = UnityEngine_Vector3_TypeInfo->static_fields;
                    x = v23->zeroVector.fields.x;
                    y = v23->zeroVector.fields.y;
                    z = v23->zeroVector.fields.z;
                  }
                  *(float *)(v5 + 84) = x;
                  *(float *)(v5 + 88) = y;
                  *(float *)(v5 + 92) = z;
                  this->fields.defaultServantParam = (struct BattleServantParamSetting_o *)v5;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultServantParam,
                    v5,
                    v14,
                    v15,
                    v16,
                    v17,
                    v18,
                    v19);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(clsIconComponent, v7);
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

  if ( (byte_597420D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597420D = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v7 )
      sub_2213CDC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    v9.fields.r = 1.0;
    v9.fields.g = 1.0;
    v9.fields.b = 1.0;
    v9.fields.a = 1.0;
    TweenColor__Begin(gameObject, duration, v9, 0);
  }
}


void BattleServantParamComponent__StartBattlePointGaugeRotation(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeManager; // x20
  __int64 v4; // x1
  BattlePointGaugeManager_o *v5; // x0

  if ( (byte_5974244 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974244 = 1;
  }
  battlePointGaugeManager = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeManager, 0, 0) )
  {
    v5 = this->fields.battlePointGaugeManager;
    if ( !v5 )
      sub_2213CDC(0, v4);
    BattlePointGaugeManager__StartRotation(v5, 1, 0);
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

  if ( (byte_5974248 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974248 = 1;
  }
  grandEffectObj = (UnityEngine_Object_o *)this->fields.grandEffectObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(grandEffectObj, 0, 0) )
  {
    Component_object = this->fields.grandEffectObj;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___)) == 0 )
    {
      sub_2213CDC(Component_object, v6);
    }
    CommonEffectComponent__SyncParticleList((CommonEffectComponent_o *)Component_object, syncTime, 0);
  }
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  BattleServantParamComponent_c *v2; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t TARGET_ICON_SPRITE_DEPTH; // w21
  __int64 v5; // d8
  __int64 v6; // x19

  if ( (byte_59741F8 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741F8 = 1;
  }
  v2 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v1);
    v2 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v2->static_fields;
  TARGET_ICON_SPRITE_DEPTH = static_fields->TARGET_ICON_SPRITE_DEPTH;
  v5 = *(_QWORD *)&static_fields->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX;
  v6 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v6 + 16) = v5;
  *(_DWORD *)(v6 + 24) = TARGET_ICON_SPRITE_DEPTH;
  *(_OWORD *)(v6 + 28) = _Q0;
  return (BattleServantParamComponent_TargetIconViewInfo_o *)v6;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo_54801496(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t TargetIconDepthWhenFix; // w20
  __int64 v4; // d8
  __int64 v5; // x19

  v2 = setting;
  if ( (byte_59741FE & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_2213A60(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_59741FE = 1;
  }
  if ( !v2 )
    sub_2213CDC(setting, method);
  TargetIconDepthWhenFix = v2->fields.TargetIconDepthWhenFix;
  v4 = *(_QWORD *)&v2->fields.TargetIconWidthWhenFix;
  v5 = sub_2213CCC(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)(v5 + 16) = v4;
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
  __int64 v6; // x1
  Il2CppObject *current; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  BattleServantData_o *v10; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *battlePointGaugeManager; // x21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+0h] [xbp-70h] BYREF
  int32_t currentMaxValue[2]; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF
  int32_t battlePointId; // [xsp+3Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5974240 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    this = (BattleServantParamComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974240 = 1;
  }
  battlePointId = 0;
  memset(&v16, 0, sizeof(v16));
  *(_QWORD *)currentMaxValue = 0;
  if ( svtdata )
  {
    data = v4->fields.data;
    if ( !data )
      goto LABEL_26;
    if ( svtdata->fields.uniqueId != data->fields.uniqueId )
      return;
    this = (BattleServantParamComponent_o *)v4->fields.battlePointGaugeComponentList;
    if ( !this )
      goto LABEL_26;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__GetEnumerator__);
      v16 = v14;
      v14.fields._list = 0;
      *(_QWORD *)&v14.fields._index = &v16;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__MoveNext__) )
      {
        current = v16.fields._current;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v8 )
        {
          if ( !current )
            sub_2213CDC(v8, v9);
          v10 = v4->fields.data;
          if ( !v10 )
            sub_2213CDC(0, v9);
          BattlePointData = BattleServantData__GetBattlePointData(v10, (int32_t)current[8].klass, 0);
          if ( BattlePointData )
          {
            BattlePointData__GetCurrentAndMaxValue(BattlePointData, &currentMaxValue[1], currentMaxValue, 0);
            BattlePointGaugeComponent__UpdateBattlePoint_54709960(
              (BattlePointGaugeComponent_o *)current,
              currentMaxValue[1],
              currentMaxValue[0],
              0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__Dispose__);
      battlePointGaugeManager = (UnityEngine_Object_o *)v4->fields.battlePointGaugeManager;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(battlePointGaugeManager, 0, 0)
        && BattleServantData__TryConsumeBattlePointGaugePriority(svtdata, &battlePointId, 0) )
      {
        this = (BattleServantParamComponent_o *)v4->fields.battlePointGaugeManager;
        if ( this )
        {
          BattlePointGaugeManager__PrioritizeShowGaugeEntity((BattlePointGaugeManager_o *)this, battlePointId, 0);
          return;
        }
LABEL_26:
        sub_2213CDC(this, svtdata);
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
  __int64 v6; // x1
  Il2CppObject *current; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  BattleServantData_o *v10; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *battlePointGaugeManager; // x21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+0h] [xbp-70h] BYREF
  int32_t currentMaxValue[2]; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF
  int32_t battlePointId; // [xsp+3Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5974241 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__get_Count__);
    this = (BattleServantParamComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974241 = 1;
  }
  battlePointId = 0;
  memset(&v16, 0, sizeof(v16));
  *(_QWORD *)currentMaxValue = 0;
  if ( svtdata )
  {
    data = v4->fields.data;
    if ( !data )
      goto LABEL_26;
    if ( svtdata->fields.uniqueId != data->fields.uniqueId )
      return;
    this = (BattleServantParamComponent_o *)v4->fields.battlePointGaugeComponentList;
    if ( !this )
      goto LABEL_26;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattlePointGaugeComponent__GetEnumerator__);
      v16 = v14;
      v14.fields._list = 0;
      *(_QWORD *)&v14.fields._index = &v16;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__MoveNext__) )
      {
        current = v16.fields._current;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v8 )
        {
          if ( !current )
            sub_2213CDC(v8, v9);
          v10 = v4->fields.data;
          if ( !v10 )
            sub_2213CDC(0, v9);
          BattlePointData = BattleServantData__GetBattlePointData(v10, (int32_t)current[8].klass, 0);
          if ( BattlePointData )
          {
            BattlePointData__GetCurrentAndMaxValue(BattlePointData, &currentMaxValue[1], currentMaxValue, 0);
            BattlePointGaugeComponent__UpdateBattlePointImmediately_54708680(
              (BattlePointGaugeComponent_o *)current,
              currentMaxValue[1],
              currentMaxValue[0],
              0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattlePointGaugeComponent__Dispose__);
      battlePointGaugeManager = (UnityEngine_Object_o *)v4->fields.battlePointGaugeManager;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(battlePointGaugeManager, 0, 0)
        && BattleServantData__TryConsumeBattlePointGaugePriority(svtdata, &battlePointId, 0) )
      {
        this = (BattleServantParamComponent_o *)v4->fields.battlePointGaugeManager;
        if ( this )
        {
          BattlePointGaugeManager__PrioritizeShowGaugeEntity((BattlePointGaugeManager_o *)this, battlePointId, 0);
          return;
        }
LABEL_26:
        sub_2213CDC(this, svtdata);
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
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  System_Collections_IEnumerator_o *v17; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  struct System_Int32_array *items; // x8
  __int64 monitor_low; // x1
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v27; // w20
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x4
  BattleServantParamComponent_o *v30; // x0
  const MethodInfo *v31; // x4
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_597423A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleServantParamComponent_o *)sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597423A = 1;
  }
  memset(&v35, 0, sizeof(v35));
  entity = 0;
  memset(&v33, 0, sizeof(v33));
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
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v35 = v32;
  v32.fields._list = 0;
  *(_QWORD *)&v32.fields._index = &v35;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v11 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_2213CDC(v11, v12);
    if ( !v10 )
      sub_2213CDC(v11, v12);
    v14 = DataMasterBase_object__object__int___TryGetEntity(
            v10,
            &entity,
            (int32_t)v35.fields._current[21].monitor,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v14 )
    {
      if ( !entity )
        sub_2213CDC(v14, v15);
      v17 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v16);
      started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v4, v17, 0);
      if ( !v8 )
        sub_2213CDC(started, v19);
      v20 = System_Collections_Generic_List_int___Contains(
              v8,
              (int32_t)current[21].monitor,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v20 )
      {
        items = v8->fields._items;
        monitor_low = LODWORD(current[21].monitor);
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_2213CDC(v20, monitor_low);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            monitor_low,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
    &v35,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v8 )
LABEL_38:
    sub_2213CDC(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v8,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32.fields._list = 0;
  *(_QWORD *)&v32.fields._index = &v33;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v33,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_2213CDC(0, v25);
    v27 = v33.fields._current;
    v28 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            v33.fields._current,
            (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v28 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v28,
        v4->fields.classIconEffectDict,
        v27,
        0,
        v29);
      BattleServantParamComponent__DestroyEffectObject(v30, v4->fields.commandSpellEffectDict, v27, 0, v31);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v33,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_2213CDC(this, svtData);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x4

  if ( !svtData )
    sub_2213CDC(this, 0);
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
  BattleServantChangeBarComponent_o *IsShiftablePhaseServant; // x0
  __int64 v5; // x1
  struct BattleServantData_o *v6; // x8
  struct System_Int32_array *shiftDeckList; // x9
  int max_length; // w9
  struct System_Int32_array *v9; // x9
  int32_t v10; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v12; // x4

  data = this->fields.data;
  if ( data )
  {
    IsShiftablePhaseServant = (BattleServantChangeBarComponent_o *)BattleServantData__IsShiftablePhaseServant(data, 0);
    v6 = this->fields.data;
    if ( ((unsigned __int8)IsShiftablePhaseServant & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_14;
      shiftDeckList = v6->fields.shiftDeckList;
      if ( !shiftDeckList )
        goto LABEL_14;
      max_length = LODWORD(shiftDeckList->max_length) - 1;
    }
    else
    {
      if ( !v6 )
        goto LABEL_14;
      v9 = v6->fields.shiftDeckList;
      if ( !v9 )
        goto LABEL_14;
      max_length = v9->max_length;
    }
    IsShiftablePhaseServant = this->fields.hpChange;
    if ( IsShiftablePhaseServant )
    {
      BattleServantChangeBarComponent__setBarType(IsShiftablePhaseServant, 1, max_length - v6->fields.shiftDeckIndex, 0);
      IsShiftablePhaseServant = (BattleServantChangeBarComponent_o *)this->fields.data;
      if ( IsShiftablePhaseServant )
      {
        IsShiftablePhaseServant = (BattleServantChangeBarComponent_o *)BattleServantData__getNowHp(
                                                                         (BattleServantData_o *)IsShiftablePhaseServant,
                                                                         0);
        if ( this->fields.data )
        {
          v10 = (int)IsShiftablePhaseServant;
          MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
          BattleServantParamComponent__updateHpbar(this, v10, MaxHp, 1, v12);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(IsShiftablePhaseServant, v5);
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
      sub_2213CDC(NowHp, v5);
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

  if ( (byte_5974238 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974238 = 1;
  }
  if ( this->fields.data )
  {
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
    {
      data = this->fields.data;
      if ( !data
        || (v6 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0), !v6) )
      {
        sub_2213CDC(data, v4);
      }
      UILabel__set_text(v6, (System_String_o *)data, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__UpdateNpImmediately(
        BattleServantParamComponent_o *this,
        int32_t np,
        const MethodInfo *method)
{
  UnityEngine_Object_o *npcomp; // x21
  __int64 v6; // x1
  BattleNpGaugeSystemComponent_o *v7; // x0

  if ( (byte_5974215 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974215 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&np);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_2213CDC(0, v6);
    BattleNpGaugeSystemComponent__setNowParam(v7, np, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  __int64 v6; // x1
  BattleServantChangeBarComponent_o *v7; // x0

  if ( (byte_597422B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597422B = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_2213CDC(0, v6);
    BattleServantChangeBarComponent__setBarType(v7, 1, curGaugeIndex, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Hashtable_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  char v22[4]; // [xsp+8h] [xbp-78h] BYREF
  float v23; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v24; // [xsp+18h] [xbp-68h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_597422E & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Hashtable_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_21262/*"ignoretimescale"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23566/*"oncompleteparams"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_10382/*"OnUpdateShiftGaugeChangeHp"*/);
    sub_2213A60(&StringLiteral_10283/*"OnCompleteShiftGaugeChangeHp"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597422E = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&fromHp);
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
        v16 = (System_Collections_Hashtable_o *)sub_2213CCC(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_76845452(v16, 0),
        v25 = fromHp,
        v14 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(qword_5984348, &v25),
        !v16) )
  {
LABEL_13:
    sub_2213CDC(v14, v15);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_20622/*"from"*/,
    v14,
    v16->klass->vtable._22_Add.method);
  v24 = toHp;
  v17 = j_il2cpp_value_box_0(qword_5984348, &v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_25406/*"to"*/,
    v17,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_23573/*"onupdate"*/,
    StringLiteral_10382/*"OnUpdateShiftGaugeChangeHp"*/,
    v16->klass->vtable._22_Add.method);
  v23 = time;
  v18 = j_il2cpp_value_box_0(qword_5984378, &v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_25366/*"time"*/,
    v18,
    v16->klass->vtable._22_Add.method);
  v22[0] = 1;
  v19 = j_il2cpp_value_box_0(qword_5984328, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_21262/*"ignoretimescale"*/,
    v19,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_23565/*"oncomplete"*/,
    StringLiteral_10283/*"OnCompleteShiftGaugeChangeHp"*/,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_23566/*"oncompleteparams"*/,
    playShiftGauge,
    v16->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v20);
  iTween__ValueTo(gameObject, v16, 0);
}


void BattleServantParamComponent__UpdateShortNameLabel(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *shortNameLabel; // x20
  __int64 defaultShortNameLabelWidth; // x1
  BattleServantData_o *data; // x0
  __int64 v6; // x1
  int32_t EnemyNameEffect; // w21
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  UnityEngine_Object_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UILabel_o *v26; // x20
  __int64 v27; // x8
  float v28; // s8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974239 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&StringLiteral_17832/*"battle_name"*/);
    byte_5974239 = 1;
  }
  if ( this->fields.data )
  {
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(shortNameLabel, 0, 0) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_44;
      EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0);
      p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
      enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0, 0) )
      {
        v10 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, defaultShortNameLabelWidth);
        UnityEngine_Object__Destroy_83459800(v10, 0);
      }
      if ( EnemyNameEffect )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
        GameObjectExtensions__ResetLocalScale(gameObject, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v12);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(EnemyNameEffect, 0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0);
        v16 = AssetStorage
            ? AssetData__GetObject_object__58532980(
                AssetStorage,
                (System_String_o *)StringLiteral_17832/*"battle_name"*/,
                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
        v19 = UnityEngine_Object__Instantiate_object__59717116(
                v16,
                transform,
                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v19;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.enemyNameEffectPrefab,
          (int32_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      data = this->fields.data;
      if ( data )
      {
        v26 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0);
        if ( v26 )
        {
          UILabel__set_text(v26, (System_String_o *)data, 0);
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
          v27 = *(_QWORD *)&data->fields.equiphp;
          if ( !v27 )
            goto LABEL_44;
          v28 = (float)(data->fields.nexttpturn * *(_DWORD *)(v27 + 16));
          if ( (float)(int)defaultShortNameLabelWidth >= v28 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
              if ( data )
              {
                v29.fields.x = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v28, 0);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
              if ( data )
              {
                v29.fields.x = (float)this->fields.defaultShortNameLabelWidth / v28;
LABEL_43:
                v29.fields.y = 1.0;
                v29.fields.z = 1.0;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)data, v29, 0);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_2213CDC(data, defaultShortNameLabelWidth);
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
      sub_2213CDC(0, v4);
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    {
      updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, v5);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, updated, 0);
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
  __int64 v8; // x1
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v10; // x19

  if ( (byte_597421C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597421C = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      classIconData = this->fields.data;
      if ( classIconData )
      {
        v10 = this->fields.levelLabel;
        classIconData = (BattleServantData_o *)BattleServantData__getLevelLabel(classIconData, 0);
        if ( v10 )
        {
          UILabel__set_text(v10, (System_String_o *)classIconData, 0);
          return;
        }
      }
LABEL_12:
      sub_2213CDC(classIconData, v3);
    }
  }
}


void BattleServantParamComponent__UpdateStatusFace(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x21
  BattleServantData_o *v8; // x8
  int32_t v9; // w20
  __int64 v10; // x1
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5974237 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_5974237 = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (MissionNaviTransitionBoardItem_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
    {
      data = this->fields.data;
      if ( !data
        || (v7 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0),
            (v8 = this->fields.data) == 0) )
      {
        sub_2213CDC(data, v5);
      }
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v10);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v7, v9, DispLimitCount, 0);
      p_facetex->klass = (MissionNaviTransitionBoardItem_c *)Manager__loadStatusFace;
      sub_2213A04(p_facetex, (int32_t)Manager__loadStatusFace, v13, v14, v15, v16, v17, v18);
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
  int32_t v7; // w19
  int32_t v8; // w21
  BattleNextTDgaugeComponent_o *v9; // x20
  _BOOL8 isTDSeraled; // x0
  __int64 v11; // x1

  if ( (byte_597422D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597422D = 1;
  }
  if ( nowAndMaxArray && LODWORD(nowAndMaxArray->max_length) == 2 )
  {
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, nowAndMaxArray);
    if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0) )
    {
      data = this->fields.data;
      if ( data )
      {
        if ( LODWORD(nowAndMaxArray->max_length) < 2 )
          sub_2213CE4(data);
        v8 = nowAndMaxArray->m_Items[0];
        v7 = nowAndMaxArray->m_Items[1];
        v9 = this->fields.nextTdGauge;
        isTDSeraled = BattleServantData__isTDSeraled(data, 0);
        if ( !v9 )
          sub_2213CDC(isTDSeraled, v11);
        BattleNextTDgaugeComponent__setInitGauge(v9, v8, v7, isTDSeraled, 0);
      }
    }
  }
}


void BattleServantParamComponent___InstantiateGrandEffectObject_b__207_0(
        BattleServantParamComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  int32_t frameType_k__BackingField; // w21
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__58532980; // x21
  __int64 v10; // x1
  UnityEngine_Transform_o *grandEffectRoot; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_597424D & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19683/*"ef_classicon_flash_{0}"*/);
    this = (BattleServantParamComponent_o *)sub_2213A60(&StringLiteral_19681/*"ef_classicon_flash"*/);
    byte_597424D = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_14;
  frameType_k__BackingField = data->fields._frameType_k__BackingField;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, assetData);
  AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType_k__BackingField, 1, 0);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &AdjustFrameTypeForClass);
  this = (BattleServantParamComponent_o *)System_String__Format((System_String_o *)StringLiteral_19683/*"ef_classicon_flash_{0}"*/, v7, 0);
  if ( !assetData )
LABEL_14:
    sub_2213CDC(this, assetData);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              (System_String_o *)this,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                assetData,
                                (System_String_o *)StringLiteral_19681/*"ef_classicon_flash"*/,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  grandEffectRoot = v4->fields.grandEffectRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__Instantiate_object__59717116(
          Object_object__58532980,
          grandEffectRoot,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  v4->fields.grandEffectObj = (struct UnityEngine_GameObject_o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.grandEffectObj,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  BattleServantParamComponent__SetGrandEffectDepth(v4, v19);
}


void BattleServantParamComponent__callSkillIcon(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  char v4; // w22
  unsigned int v5; // w21
  unsigned int max_length; // w9
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  v2 = this;
  if ( (byte_597421F & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_2213A60(&Method_BattleServantParamComponent_callSkillIcon__);
    byte_597421F = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_2213CDC(this, method);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
      sub_2213CE4(this);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                method);
      if ( !(v4 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v7 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_2213A78(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
        OverwriteAssetSoundName__PlayCommonSe(v8, 2, 0, 0);
        v4 = 1;
      }
      skillIcon = v2->fields.skillIcon;
      ++v5;
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
    sub_2213CDC(NowHp, v5);
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

  if ( (byte_5974235 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_5974235 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3
    || (showBuffComponent = this->fields.showBuffComponent,
        v4 = System_Collections_Generic_List_object___ToArray(
               v3,
               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_2213CDC(v4, v5);
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

  if ( (byte_5974221 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974221 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0 )
    {
      sub_2213CDC(Component_object, v8);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974220 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_TypeInfo);
    byte_5974220 = 1;
  }
  v3 = sub_2213CCC(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__initUpdateView(
        BattleServantParamComponent_o *this,
        int32_t notUpdateFlag,
        const MethodInfo *method)
{
  char v3; // w20
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v7; // x1
  BattleServantData_o *DispImageSvtId; // x0
  UITexture_o *v9; // x22
  int32_t v10; // w23
  __int64 v11; // x1
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v22; // x21
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  struct BattleServantParamSetting_o *v26; // x8
  struct BattleServantParamSetting_o *v27; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  struct BattleServantParamSetting_o *v31; // x8
  struct BattleServantParamSetting_o *v32; // x8
  struct BattleServantParamSetting_o *v33; // x8
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v35; // x21
  __int64 v36; // x1
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v38; // x21
  int32_t v39; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v41; // x8
  struct System_Int32_array *shiftDeckList; // x9
  int max_length; // w9
  struct System_Int32_array *v44; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v49; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v51; // x4
  __int64 v52; // x1
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v54; // x21
  BattleNpGaugeSystemComponent_o *v55; // x8
  struct BattleServantData_o *v56; // x8
  BattleNpGaugeSystemComponent_o *v57; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v59; // w0
  const MethodInfo *v60; // x2
  BattleNextTDgaugeComponent_o *v61; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  __int64 v64; // x1
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v66; // x8
  UISprite_o *v67; // x20
  UISprite_o *v68; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v71; // x8
  struct BattleServantData_o *v72; // x8
  UnityEngine_Object_o *battlePointRoot; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v75; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v78; // x9
  int *p_offset; // x10
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x20
  int32_t v90; // w21
  UnityEngine_Transform_o *v91; // x22
  __int64 v92; // x1
  UnityEngine_Object_o *Manager__LoadBattlePointGauge; // x21
  _BOOL8 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  System_Collections_Generic_List_object__o *battlePointGaugeComponentList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v109; // x9
  __int64 size; // x10
  Il2CppClass **v111; // x8
  System_Collections_Generic_IEnumerator_T__c *v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  UnityEngine_Object_o *battlePointGaugeManager; // x20
  const MethodInfo *v117; // x2
  __int64 v118; // x1
  UnityEngine_Object_o *v119; // x20
  System_Collections_Generic_IEnumerator_T__o *v120; // [xsp+18h] [xbp-68h]
  Il2CppObject *component; // [xsp+28h] [xbp-58h] BYREF

  v3 = notUpdateFlag;
  if ( (byte_597421B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_2213A60(&FileName_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattlePointGaugeComponent__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_597421B = 1;
  }
  data = this->fields.data;
  component = 0;
  if ( !data )
    return;
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&notUpdateFlag);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    v9 = this->fields.facetex;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(DispImageSvtId, 0);
    if ( !this->fields.data )
      goto LABEL_187;
    v10 = (int)DispImageSvtId;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0);
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v11);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v9, v10, DispLimitCount, 0);
    this->fields.facetex = Manager__loadStatusFace;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.facetex,
      (int32_t)Manager__loadStatusFace,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  DispImageSvtId = (BattleServantData_o *)this->fields.classIconData;
  if ( !DispImageSvtId )
    goto LABEL_187;
  ((void (__fastcall *)(BattleServantData_o *, const MethodInfo *))DispImageSvtId->klass->vtable._4_unknown.methodPtr)(
    DispImageSvtId,
    DispImageSvtId->klass->vtable._4_unknown.method);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
  {
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    v22 = this->fields.levelLabel;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__getLevelLabel(DispImageSvtId, 0);
    if ( !v22 )
      goto LABEL_187;
    UILabel__set_text(v22, (System_String_o *)DispImageSvtId, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  DispImageSvtId = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)DispImageSvtId & 1) != 0 )
  {
    v24 = this->fields.battleServantParamSetting;
    if ( !v24 )
      goto LABEL_187;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.clsIconComponent,
      v24->fields.IsDispClassIcon,
      0);
    v25 = this->fields.battleServantParamSetting;
    if ( !v25 )
      goto LABEL_187;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this, v25->fields.UiPosition, 0);
    v26 = this->fields.battleServantParamSetting;
    if ( !v26 )
      goto LABEL_187;
    ComponentHelper__SetLocalScale((UnityEngine_Component_o *)this, v26->fields.UiScale, 0);
    v27 = this->fields.battleServantParamSetting;
    if ( !v27 )
      goto LABEL_187;
    BuffIconMax = v27->fields.BuffIconMax;
    if ( (BuffIconMax & 0x80000000) == 0 )
    {
      showBuffComponent = this->fields.showBuffComponent;
      if ( !showBuffComponent )
        goto LABEL_187;
      showBuffComponent->fields.maxCount = BuffIconMax;
    }
    BuffIconMaxLine = v27->fields.BuffIconMaxLine;
    DispImageSvtId = (BattleServantData_o *)this->fields.showBuffComponent;
    if ( (BuffIconMaxLine & 0x80000000) == 0 )
    {
      if ( !DispImageSvtId )
        goto LABEL_187;
      HIDWORD(DispImageSvtId->fields.userSvtId.fields.hiddenValue) = BuffIconMaxLine;
    }
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)DispImageSvtId, v27->fields.BuffIconPosition, 0);
    v31 = this->fields.battleServantParamSetting;
    if ( !v31 )
      goto LABEL_187;
    GameObjectHelper__SetActiveSafely(this->fields.levelRoot, v31->fields.IsDispLevel, 0);
    DispImageSvtId = (BattleServantData_o *)UnityEngine_Component__TryGetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              &component,
                                              (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    if ( ((unsigned __int8)DispImageSvtId & 1) != 0 )
    {
      v32 = this->fields.battleServantParamSetting;
      if ( !v32 )
        goto LABEL_187;
      DispImageSvtId = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_187;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)component, v32->fields.BoxColliderPosition, 0);
      v33 = this->fields.battleServantParamSetting;
      if ( !v33 )
        goto LABEL_187;
      DispImageSvtId = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_187;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)component, v33->fields.BoxColliderSize, 0);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    v35 = this->fields.nameLabel;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__getServantName(DispImageSvtId, 0);
    if ( !v35 )
      goto LABEL_187;
    UILabel__set_text(v35, (System_String_o *)DispImageSvtId, 0);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v7);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
  {
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    v38 = this->fields.hpGauge;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__getNowHp(DispImageSvtId, 0);
    if ( !this->fields.data )
      goto LABEL_187;
    v39 = (int)DispImageSvtId;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0);
    if ( !v38 )
      goto LABEL_187;
    BattleHpGaugeBarComponent__setInitValue(v38, v39, (int32_t)DispImageSvtId, 0);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__IsShiftablePhaseServant(DispImageSvtId, 0);
    v41 = this->fields.data;
    if ( ((unsigned __int8)DispImageSvtId & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_187;
      shiftDeckList = v41->fields.shiftDeckList;
      if ( !shiftDeckList )
        goto LABEL_187;
      max_length = LODWORD(shiftDeckList->max_length) - 1;
    }
    else
    {
      if ( !v41 )
        goto LABEL_187;
      v44 = v41->fields.shiftDeckList;
      if ( !v44 )
        goto LABEL_187;
      max_length = v44->max_length;
    }
    DispImageSvtId = (BattleServantData_o *)this->fields.hpChange;
    if ( !DispImageSvtId )
      goto LABEL_187;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)DispImageSvtId,
      1,
      max_length - v41->fields.shiftDeckIndex,
      0);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    DispImageSvtId = (BattleServantData_o *)this->fields.hpShift;
    if ( !DispImageSvtId )
      goto LABEL_187;
    BattleServantHpShiftComponent__setInitValue(
      (BattleServantHpShiftComponent_o *)DispImageSvtId,
      this->fields.data,
      0,
      v46);
  }
  BattleServantParamComponent__setAtlas(this, v7);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    DispImageSvtId = (BattleServantData_o *)this->fields.breakSprite;
    if ( !DispImageSvtId )
      goto LABEL_187;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)DispImageSvtId, 0, 0);
  }
  DispImageSvtId = this->fields.data;
  if ( !DispImageSvtId
    || (DispImageSvtId = (BattleServantData_o *)BattleServantData__getNowHp(DispImageSvtId, 0), !this->fields.data) )
  {
LABEL_187:
    sub_2213CDC(DispImageSvtId, v7);
  }
  v49 = (int)DispImageSvtId;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
  BattleServantParamComponent__updateHplabel(this, v49, MaxHp, 1, v51);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  DispImageSvtId = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0, 0);
  if ( ((unsigned __int8)DispImageSvtId & 1) != 0 )
  {
    v54 = this->fields.npcomp;
    if ( !v54 )
      goto LABEL_187;
    DispImageSvtId = this->fields.data;
    v54->fields.lineCount = 3;
    if ( !DispImageSvtId )
      goto LABEL_187;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__getCountMaxNp(DispImageSvtId, 0);
    v55 = this->fields.npcomp;
    v54->fields.maxparam = (int)DispImageSvtId;
    if ( !v55 )
      goto LABEL_187;
    BattleNpGaugeSystemComponent__InitSliderValue(v55, 0);
    v56 = this->fields.data;
    if ( !v56 )
      goto LABEL_187;
    DispImageSvtId = (BattleServantData_o *)this->fields.npcomp;
    if ( !DispImageSvtId )
      goto LABEL_187;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)DispImageSvtId, v56->fields.np, 0);
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    v57 = this->fields.npcomp;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__isAddNpGauge(DispImageSvtId, 0);
    if ( !v57 )
      goto LABEL_187;
    BattleNpGaugeSystemComponent__setUseNp(v57, (unsigned __int8)DispImageSvtId & 1, 0);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v59 = UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0);
  if ( (v3 & 1) == 0 && v59 )
  {
    DispImageSvtId = this->fields.data;
    if ( !DispImageSvtId )
      goto LABEL_187;
    v61 = this->fields.nextTdGauge;
    nexttpturn = DispImageSvtId->fields.nexttpturn;
    maxtpturn = DispImageSvtId->fields.maxtpturn;
    DispImageSvtId = (BattleServantData_o *)BattleServantData__isTDSeraled(DispImageSvtId, 0);
    if ( !v61 )
      goto LABEL_187;
    BattleNextTDgaugeComponent__setInitGauge(v61, nexttpturn, maxtpturn, (unsigned __int8)DispImageSvtId & 1, 0);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v60);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0, 0) )
  {
    DispImageSvtId = (BattleServantData_o *)this->fields.friendIcon;
    if ( !DispImageSvtId )
      goto LABEL_187;
    DispImageSvtId = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)DispImageSvtId,
                                              0);
    if ( !DispImageSvtId )
      goto LABEL_187;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DispImageSvtId, 0, 0);
    v66 = this->fields.data;
    if ( !v66 )
      goto LABEL_187;
    if ( v66->fields.followerType )
    {
      v67 = this->fields.friendIcon;
      DispImageSvtId = (BattleServantData_o *)FileName_TypeInfo;
      if ( !*(&FileName_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v7);
      if ( !v67 )
        goto LABEL_187;
      UISprite__set_spriteName(v67, FileName_TypeInfo->static_fields->friendIconName, 0);
      DispImageSvtId = (BattleServantData_o *)this->fields.friendIcon;
      if ( !DispImageSvtId )
        goto LABEL_187;
      DispImageSvtId = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)DispImageSvtId,
                                                0);
      if ( !DispImageSvtId )
        goto LABEL_187;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DispImageSvtId, 1, 0);
      v66 = this->fields.data;
      if ( !v66 )
        goto LABEL_187;
    }
    if ( v66->fields.flgEventJoin )
    {
      v68 = this->fields.friendIcon;
      DispImageSvtId = (BattleServantData_o *)FileName_TypeInfo;
      if ( !*(&FileName_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v7);
      if ( !v68 )
        goto LABEL_187;
      UISprite__set_spriteName(v68, FileName_TypeInfo->static_fields->eventJoinIconName, 0);
      DispImageSvtId = (BattleServantData_o *)this->fields.friendIcon;
      if ( !DispImageSvtId )
        goto LABEL_187;
      DispImageSvtId = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)DispImageSvtId,
                                                0);
      if ( !DispImageSvtId )
        goto LABEL_187;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DispImageSvtId, 1, 0);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v7);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_187;
  DispImageSvtId = (BattleServantData_o *)perf->fields.data;
  if ( !DispImageSvtId )
    goto LABEL_187;
  if ( BattleData__IsWarBoard((BattleData_o *)DispImageSvtId, 0) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    DispImageSvtId = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0, 0);
    if ( ((unsigned __int8)DispImageSvtId & 1) != 0 )
    {
      v71 = this->fields.data;
      if ( !v71 )
        goto LABEL_187;
      DispImageSvtId = (BattleServantData_o *)this->fields.breakPoint;
      if ( !DispImageSvtId )
        goto LABEL_187;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)DispImageSvtId,
        v71->fields.defeatPoint,
        v71->fields.maxDefeatPoint,
        v71->fields.isEnemy,
        0);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v7);
  v72 = this->fields.data;
  if ( !v72 )
    goto LABEL_187;
  if ( !v72->fields.isEnemy )
  {
    battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(battlePointRoot, 0, 0) )
    {
      DispImageSvtId = this->fields.data;
      if ( !DispImageSvtId )
        goto LABEL_187;
      DispImageSvtId = (BattleServantData_o *)BattleServantData__get_BattlePointList(DispImageSvtId, 0);
      if ( !DispImageSvtId )
        goto LABEL_187;
      Enumerator = System_Collections_ObjectModel_ReadOnlyCollection_object___GetEnumerator(
                     (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)DispImageSvtId,
                     (const MethodInfo_472CF68 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
      v120 = Enumerator;
      if ( !Enumerator )
        sub_2213CDC(Enumerator, v75);
      for ( i = Enumerator; ; i = v120 )
      {
        klass = i->klass;
        v78 = *(unsigned __int16 *)&i->klass->_2.rank;
        if ( *(_WORD *)&i->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v78;
            p_offset += 4;
            if ( !v78 )
              goto LABEL_137;
          }
          v80 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_137:
          v80 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v81 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(
                i,
                *(_QWORD *)(v80 + 8));
        if ( (v81 & 1) == 0 )
          break;
        if ( !v120 )
          sub_2213CDC(v81, v82);
        v83 = v120->klass;
        v84 = *(unsigned __int16 *)&v120->klass->_2.rank;
        if ( *(_WORD *)&v120->klass->_2.rank )
        {
          v85 = &v83->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_BattlePointData__c **)v85 - 1) != System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo )
          {
            --v84;
            v85 += 4;
            if ( !v84 )
              goto LABEL_145;
          }
          v86 = (__int64)&v83->vtable[*v85];
        }
        else
        {
LABEL_145:
          v86 = sub_224BC3C(v120, System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo, 0);
        }
        v87 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(
                v120,
                *(_QWORD *)(v86 + 8));
        v89 = v87;
        if ( v87 && !*(_BYTE *)(v87 + 30) )
        {
          v90 = *(_DWORD *)(v87 + 16);
          v91 = this->fields.battlePointRoot;
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v88);
          Manager__LoadBattlePointGauge = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadBattlePointGauge(
                                                                    v90,
                                                                    v91,
                                                                    0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92);
          v94 = UnityEngine_Object__op_Equality(Manager__LoadBattlePointGauge, 0, 0);
          if ( !v94 )
          {
            if ( !Manager__LoadBattlePointGauge )
              sub_2213CDC(v94, v95);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Manager__LoadBattlePointGauge,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
            v98 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
            if ( !v98 )
            {
              if ( !Component_object )
                sub_2213CDC(v98, v99);
              BattlePointGaugeComponent__Init((BattlePointGaugeComponent_o *)Component_object, *(_DWORD *)(v89 + 16), 0);
              battlePointGaugeComponentList = (System_Collections_Generic_List_object__o *)this->fields.battlePointGaugeComponentList;
              if ( !battlePointGaugeComponentList
                || (items = battlePointGaugeComponentList->fields._items,
                    v109 = Method_System_Collections_Generic_List_BattlePointGaugeComponent__Add__,
                    ++battlePointGaugeComponentList->fields._version,
                    !items) )
              {
                sub_2213CDC(battlePointGaugeComponentList, v100);
              }
              size = battlePointGaugeComponentList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  battlePointGaugeComponentList,
                  Component_object,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
              }
              else
              {
                v111 = &items->obj.klass + size;
                battlePointGaugeComponentList->fields._size = size + 1;
                v111[4] = (Il2CppClass *)Component_object;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v111 + 4),
                  (int32_t)Component_object,
                  v101,
                  v102,
                  v103,
                  v104,
                  v105,
                  v106);
              }
            }
          }
        }
      }
      if ( v120 )
      {
        v112 = v120->klass;
        v113 = *(unsigned __int16 *)&v120->klass->_2.rank;
        if ( *(_WORD *)&v120->klass->_2.rank )
        {
          v114 = &v112->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
          {
            --v113;
            v114 += 4;
            if ( !v113 )
              goto LABEL_171;
          }
          v115 = (__int64)&v112->vtable[*v114];
        }
        else
        {
LABEL_171:
          v115 = sub_224BC3C(v120, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v115)(
          v120,
          *(_QWORD *)(v115 + 8));
      }
      battlePointGaugeManager = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v82);
      if ( UnityEngine_Object__op_Inequality(battlePointGaugeManager, 0, 0) )
      {
        DispImageSvtId = (BattleServantData_o *)this->fields.battlePointGaugeManager;
        if ( !DispImageSvtId )
          goto LABEL_187;
        BattlePointGaugeManager__Initialize(
          (BattlePointGaugeManager_o *)DispImageSvtId,
          this->fields.battlePointGaugeComponentList,
          0);
      }
      BattleServantParamComponent__UpdateBattlePointImmediately(this, this->fields.data, v117);
      if ( this->fields.modeWindow == 2 )
      {
        v119 = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v118);
        if ( UnityEngine_Object__op_Inequality(v119, 0, 0) )
        {
          DispImageSvtId = (BattleServantData_o *)this->fields.battlePointGaugeManager;
          if ( DispImageSvtId )
          {
            BattlePointGaugeManager__StartOpen((BattlePointGaugeManager_o *)DispImageSvtId, 0, 0);
            DispImageSvtId = (BattleServantData_o *)this->fields.battlePointGaugeManager;
            if ( DispImageSvtId )
            {
              BattlePointGaugeManager__StartRotation((BattlePointGaugeManager_o *)DispImageSvtId, 1, 0);
              return;
            }
          }
          goto LABEL_187;
        }
      }
    }
  }
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
  int32_t index; // w1

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
          index = v3->fields.index;
          *((_BYTE *)this + 692) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, index, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0);
}


void BattleServantParamComponent__playAddition(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_5974231 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3220/*"Battle/Prefab/ef_add_enemy"*/);
    byte_5974231 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_48153028(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3220/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0,
                                                          0),
          (v6 = this->fields.data) == 0) )
    {
      sub_2213CDC(clsIconComponent, method);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v2 = this;
  if ( (byte_597421A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_2213A60(&StringLiteral_19771/*"effect/ef_cwflash01"*/);
    byte_597421A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_22;
  if ( !LODWORD(effectobj->max_length) )
    goto LABEL_23;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_22;
    if ( !LODWORD(v5->max_length) )
      goto LABEL_23;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_83459800(v6, 0);
  }
  facetex = (UnityEngine_Object_o *)v2->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_48153028(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_19771/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0,
                                                  0);
        if ( v8 )
        {
          if ( LODWORD(v8->max_length) )
          {
            v8->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v8->m_Items, (int32_t)this, v10, v11, v12, v13, v14, v15);
            return;
          }
LABEL_23:
          sub_2213CE4(this);
        }
      }
    }
LABEL_22:
    sub_2213CDC(this, method);
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

  if ( (byte_597420B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597420B = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_2213CDC(0, v4);
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

  if ( (byte_597420C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597420C = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_2213CDC(0, v4);
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

  if ( (byte_597420A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597420A = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_2213CDC(0, v4);
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
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_5974226 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974226 = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
    {
      v6 = this->fields.hpShift;
      if ( !v6 )
        sub_2213CDC(0, v4);
      BattleServantHpShiftComponent__playShiftEffect(v6, this->fields.data, v5);
    }
  }
}


float BattleServantParamComponent__playShiftEffectBefore(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_5974225 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974225 = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
    return 0.0;
  v6 = this->fields.hpShift;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return BattleServantHpShiftComponent__PlayShiftEffectBefore(v6, this, v5);
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
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19
  __int64 v8; // x1
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v11; // s9
  float v12; // s8
  __int64 v13; // x1
  UnityEngine_Object_o *ComponentInChildren_object__59470360; // x23
  _DWORD *monitor; // x8
  unsigned int v16; // w22
  int *v17; // x8
  float sideEffectLabelWidth; // s0
  float v19; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v21; // x20
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974234 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974234 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_38;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0);
  if ( !buffData || !perf )
    goto LABEL_38;
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.fields)(
                                 perf,
                                 (unsigned int)buffData->fields.popColor,
                                 perf->klass[1]._1.events);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v7 )
      goto LABEL_38;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v7,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_38;
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
      goto LABEL_38;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth((BattleUIRangeLabel_o *)Component_object, 0);
    v11 = 0.0;
    if ( (float)(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8)) <= 1.0 )
      v12 = this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8);
    else
      v12 = 1.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_object__59470360 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__59470360(
                                                                       (UnityEngine_GameObject_o *)v7,
                                                                       1,
                                                                       (const MethodInfo_38B7218 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__59470360, 0, 0);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__59470360 )
          goto LABEL_38;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__59470360,
          buffData->fields.popIcon,
          0);
        monitor = ComponentInChildren_object__59470360[1].monitor;
        if ( !monitor )
          goto LABEL_38;
        v16 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__59470360,
                                        0);
        if ( !perf )
          goto LABEL_38;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0);
        if ( !perf )
          goto LABEL_38;
        v22.fields.z = 0.0;
        v22.fields.y = 0.0;
        v22.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + vcvts_n_f32_s32(v16, 1u)) + 5.0);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v22, 0);
        v17 = (int *)ComponentInChildren_object__59470360[1].monitor;
        if ( v12 >= 1.0 )
        {
          if ( !v17 )
            goto LABEL_38;
          v11 = 0.0;
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v19 = (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5)
              + (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v17[42] * 0.8)) + 5.0);
          if ( v19 > sideEffectLabelWidth )
            v11 = v19 - sideEffectLabelWidth;
        }
        else
        {
          if ( !v17 )
            goto LABEL_38;
          v11 = (float)(v12 * (float)((float)v17[42] * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 0, 0);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v21 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0);
      if ( v21 )
      {
        UnityEngine_Transform__SetParent(v21, (UnityEngine_Transform_o *)perf, 0);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
        if ( perf )
        {
          v23.fields.x = v12;
          v23.fields.y = 1.0;
          v23.fields.z = 1.0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v23, 0);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
          if ( perf )
          {
            v24.fields.y = 0.0;
            v24.fields.z = 0.0;
            v24.fields.x = v11;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v24, 0);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 1, 0);
            return;
          }
        }
      }
    }
LABEL_38:
    sub_2213CDC(perf, buffData);
  }
}


void BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  int v3; // w8
  AssetData_o *AssetStorage; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v9; // x20
  UISprite_o *v10; // x21
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v13; // x8
  struct BattleServantParamSetting_o *v14; // x8
  struct BattleServantParamSetting_o *v15; // x8
  struct BattleServantParamSetting_o *v16; // x8
  int v17; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v18; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_597421E & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_20981/*"hp_break_"*/);
    byte_597421E = 1;
  }
  v3 = *(&AssetManager_TypeInfo->_2.cctor_finished + 1);
  component = 0;
  v18 = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3208/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_33;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__58532980(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !AssetStorage )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v9 = (UIAtlas_o *)Component_object;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( !AssetStorage )
      goto LABEL_33;
    UISprite__set_atlas((UISprite_o *)AssetStorage, v9, 0);
    v10 = this->fields.breakSprite;
    v17 = 1;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_20981/*"hp_break_"*/, v11, 0);
    if ( !v10 )
      goto LABEL_33;
    UISprite__set_spriteName(v10, (System_String_o *)AssetStorage, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Equality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)AssetStorage & 1) == 0 )
  {
    v13 = this->fields.battleServantParamSetting;
    if ( !v13 )
      goto LABEL_33;
    AssetStorage = (AssetData_o *)System_String__IsNullOrEmpty(v13->fields.TargetIconSpriteName, 0);
    if ( ((unsigned __int8)AssetStorage & 1) == 0 )
    {
      AssetStorage = (AssetData_o *)this->fields.targetMark;
      if ( !AssetStorage )
        goto LABEL_33;
      AssetStorage = (AssetData_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                      (UnityEngine_GameObject_o *)AssetStorage,
                                      &component,
                                      (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_atlas((UISprite_o *)component, v9, 0);
        v14 = this->fields.battleServantParamSetting;
        if ( !v14 )
          goto LABEL_33;
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_spriteName((UISprite_o *)component, v14->fields.TargetIconSpriteName, 0);
      }
    }
    v15 = this->fields.battleServantParamSetting;
    if ( v15 )
    {
      if ( System_String__IsNullOrEmpty(v15->fields.FixTargetIconSpriteName, 0) )
        return;
      AssetStorage = (AssetData_o *)this->fields.lockTargetMark;
      if ( AssetStorage )
      {
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)AssetStorage,
                &v18,
                (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
          return;
        AssetStorage = (AssetData_o *)v18;
        if ( v18 )
        {
          UISprite__set_atlas((UISprite_o *)v18, v9, 0);
          v16 = this->fields.battleServantParamSetting;
          if ( v16 )
          {
            AssetStorage = (AssetData_o *)v18;
            if ( v18 )
            {
              UISprite__set_spriteName((UISprite_o *)v18, v16->fields.FixTargetIconSpriteName, 0);
              return;
            }
          }
        }
      }
    }
LABEL_33:
    sub_2213CDC(AssetStorage, v5);
  }
}


void BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        bool isInstantlyClear,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *battlePointGaugeManager; // x21
  __int64 v7; // x1
  BattlePointGaugeManager_o *Item; // x0
  UnityEngine_Object_o *facetex; // x21
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  BattlePointGaugeManager_c *klass; // x8
  BattlePointGaugeManager_o *v17; // x21
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  BattlePointGaugeManager_c *v22; // x8
  BattlePointGaugeManager_o *v23; // x21
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  BattlePointGaugeManager_c *v27; // x8
  SimpleAnimation_State_c *v28; // x1
  BattlePointGaugeManager_o *v29; // x21
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x9
  __int64 v33; // x0
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x2
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_597420E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_13751/*"SvtW_StartClose"*/);
    byte_597420E = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, method);
  battlePointGaugeManager = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(battlePointGaugeManager, 0, 0) )
  {
    Item = this->fields.battlePointGaugeManager;
    if ( !Item )
      goto LABEL_68;
    BattlePointGaugeManager__StopRotation(Item, 0);
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    Item = (BattlePointGaugeManager_o *)this->fields.facetex;
    if ( isInstantlyClear )
    {
      if ( !Item )
        goto LABEL_68;
      v36.fields.r = 0.0;
      v36.fields.g = 0.0;
      v36.fields.b = 0.0;
      v36.fields.a = 0.0;
      UIWidget__set_color((UIWidget_o *)Item, v36, 0);
    }
    else
    {
      if ( !Item )
        goto LABEL_68;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      v37.fields.r = 0.0;
      v37.fields.g = 0.0;
      v37.fields.b = 0.0;
      v37.fields.a = 0.0;
      TweenColor__Begin(gameObject, 0.4, v37, 0);
    }
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_67;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    Item = (BattlePointGaugeManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_68;
      Item = (BattlePointGaugeManager_o *)SimpleAnimation__get_Item(
                                            (SimpleAnimation_o *)Component_object,
                                            (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                                            0);
      if ( !Item )
        goto LABEL_68;
      klass = Item->klass;
      v17 = Item;
      v18 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v18;
          p_offset += 2;
          if ( !v18 )
            goto LABEL_28;
        }
        v20 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
      }
      else
      {
LABEL_28:
        v20 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(BattlePointGaugeManager_o *, _QWORD, double))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
      Item = (BattlePointGaugeManager_o *)SimpleAnimation__get_Item(
                                            (SimpleAnimation_o *)Component_object,
                                            (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                                            0);
      if ( !Item )
        goto LABEL_68;
      v27 = Item->klass;
      v28 = SimpleAnimation_State_TypeInfo;
      v29 = Item;
      v30 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v31 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
        while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v30;
          v31 += 2;
          if ( !v30 )
            goto LABEL_59;
        }
LABEL_60:
        v33 = (__int64)(&v27[1]._1.element_class + 2 * *(_DWORD *)v31);
        goto LABEL_61;
      }
      goto LABEL_59;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    Item = (BattlePointGaugeManager_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_68;
      Item = (BattlePointGaugeManager_o *)SimpleAnimation__get_Item(
                                            (SimpleAnimation_o *)Component_object,
                                            (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                                            0);
      if ( !Item )
        goto LABEL_68;
      v22 = Item->klass;
      v23 = Item;
      v24 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v25 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_38;
        }
        v26 = (__int64)&v22[1] + 16 * *(_DWORD *)v25;
      }
      else
      {
LABEL_38:
        v26 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(BattlePointGaugeManager_o *, _QWORD, double))v26)(v23, *(_QWORD *)(v26 + 8), 0.0);
      Item = (BattlePointGaugeManager_o *)SimpleAnimation__get_Item(
                                            (SimpleAnimation_o *)Component_object,
                                            (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                                            0);
      if ( !Item )
        goto LABEL_68;
      v27 = Item->klass;
      v28 = SimpleAnimation_State_TypeInfo;
      v29 = Item;
      v32 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v31 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
        while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v32;
          v31 += 2;
          if ( !v32 )
            goto LABEL_59;
        }
        goto LABEL_60;
      }
LABEL_59:
      v33 = sub_224BC3C(v29, v28, 8);
LABEL_61:
      (*(void (__fastcall **)(BattlePointGaugeManager_o *, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
      SimpleAnimation__Play_78552168((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
      goto LABEL_62;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  Item = (BattlePointGaugeManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_68;
    Item = (BattlePointGaugeManager_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                                          0);
    if ( !Item )
      goto LABEL_68;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0);
    Item = (BattlePointGaugeManager_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                                          0);
    if ( !Item )
      goto LABEL_68;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0);
    UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v15, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
  }
LABEL_62:
  v34 = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
  {
    Item = this->fields.battlePointGaugeManager;
    if ( Item )
    {
      BattlePointGaugeManager__StartClose(Item, 0);
      goto LABEL_67;
    }
LABEL_68:
    sub_2213CDC(Item, v7);
  }
LABEL_67:
  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 0, v10);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v35);
}


void BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *battleServantData,
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *clsIconComponent; // x22
  ServantClassIconComponent_o *v13; // x23
  BattleServantParamComponent_ClassIconData_o *v14; // x22
  const MethodInfo *v15; // x3
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct BattleServantData_o *data; // x8
  struct BattleServantParamSetting_o *BattleServantParamSetting; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x20
  const MethodInfo *v34; // x1
  BattleNpGaugeSystemComponent_o *v35; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v39; // x2
  struct BattleServantData_o *v40; // x8
  struct BattleServantData_o *v41; // x8
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x3

  if ( (byte_5974205 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_ClassIconData_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974205 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = battleServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)battleServantData,
    (System_String_o *)stageEntity,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !battleServantData )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0, 0) )
  {
    v13 = this->fields.clsIconComponent;
    v14 = (BattleServantParamComponent_ClassIconData_o *)sub_2213CCC(BattleServantParamComponent_ClassIconData_TypeInfo);
    BattleServantParamComponent_ClassIconData___ctor(v14, battleServantData, v13, v15);
  }
  else
  {
LABEL_8:
    v14 = (BattleServantParamComponent_ClassIconData_o *)sub_2213CCC(BattleServantParamComponent_BaseClassIconData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classIconData,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  data = this->fields.data;
  if ( !data )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
    {
      v35 = this->fields.npcomp;
      if ( !v35 )
        goto LABEL_28;
      BattleNpGaugeSystemComponent__resetSlider(v35, 0);
    }
    this->fields.uniqueID = -1;
    goto LABEL_27;
  }
  this->fields.uniqueID = data->fields.uniqueId;
  BattleServantParamSetting = BattleServantParamComponent__GetBattleServantParamSetting(this, stageEntity, v23);
  this->fields.battleServantParamSetting = BattleServantParamSetting;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleServantParamSetting,
    (int32_t)BattleServantParamSetting,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Equality(v33, 0, 0) )
    BattleServantParamComponent__ResetDefaultBattleServantParamSetting(this, v34);
  else
    BattleServantParamComponent__SetupDefaultBattleServantParamSetting(this, v34);
  v40 = this->fields.data;
  if ( !v40 )
    goto LABEL_28;
  if ( v40->fields.isEnemy )
    BattleServantParamComponent__ChangeTargetMarkSprite(this, v40->fields._IsGrand_k__BackingField, v37);
  BattleServantParamComponent__DestroyGrandEffectObject(this, v36);
  v41 = this->fields.data;
  if ( !v41 )
LABEL_28:
    sub_2213CDC(v35, v36);
  if ( v41->fields._IsShowGrandEffect_k__BackingField )
    BattleServantParamComponent__InstantiateGrandEffectObject(this, v36);
LABEL_27:
  BattleServantParamComponent__initUpdateView(this, 0, v39);
  BattleServantParamComponent__updateView(this, v42);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v43);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v44);
}


void BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *facetex; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v11; // x21
  float v12; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v18; // x8
  __int64 v19; // x23
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  SimpleAnimation_State_o *v24; // x22
  __int64 v25; // x8
  __int64 v26; // x23
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  UnityEngine_AnimationState_o *v30; // x21
  float length; // s0
  float v32; // s0
  float v33; // s8
  SimpleAnimation_State_c *klass; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  float v38; // s0
  float v39; // s8
  SimpleAnimation_State_c *v40; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  SimpleAnimation_State_c *v45; // x1
  __int64 v46; // x22
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x9
  __int64 v50; // x0
  UnityEngine_Object_o *battlePointGaugeManager; // x21
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x2
  UnityEngine_Color_o v55; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_597420F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_13751/*"SvtW_StartClose"*/);
    byte_597420F = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_79;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !this->fields.perf )
      goto LABEL_79;
    v11 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0);
    if ( !gameObject )
      goto LABEL_79;
    v12 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v55.fields.r = 1.0;
    v55.fields.g = 1.0;
    v55.fields.b = 1.0;
    v55.fields.a = 1.0;
    TweenColor__Begin(v11, v12, v55, 0);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_76;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_79;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_79;
      v18 = *(_QWORD *)gameObject;
      v19 = gameObject;
      v20 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v21 = (SimpleAnimation_State_c **)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_21;
        }
        v22 = v18 + 16LL * (*(_DWORD *)v21 + 13) + 312;
      }
      else
      {
LABEL_21:
        v22 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 13);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
      if ( !Item )
        goto LABEL_79;
      v33 = v32;
      klass = Item->klass;
      v35 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v35;
          p_offset += 2;
          if ( !v35 )
            goto LABEL_46;
        }
        v37 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
      }
      else
      {
LABEL_46:
        v37 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v37)(Item, *(_QWORD *)(v37 + 8), v33);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_79;
      v44 = *(_QWORD *)gameObject;
      v45 = SimpleAnimation_State_TypeInfo;
      v46 = gameObject;
      v47 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v47;
          v48 += 2;
          if ( !v47 )
            goto LABEL_67;
        }
LABEL_68:
        v50 = v44 + 16LL * (*(_DWORD *)v48 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_79;
      v24 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_79;
      v25 = *(_QWORD *)gameObject;
      v26 = gameObject;
      v27 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v28 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v27;
          v28 += 2;
          if ( !v27 )
            goto LABEL_31;
        }
        v29 = v25 + 16LL * (*(_DWORD *)v28 + 13) + 312;
      }
      else
      {
LABEL_31:
        v29 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 13);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      if ( !v24 )
        goto LABEL_79;
      v39 = v38;
      v40 = v24->klass;
      v41 = *(unsigned __int16 *)&v24->klass->_2.rank;
      if ( *(_WORD *)&v24->klass->_2.rank )
      {
        v42 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
        while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v41;
          v42 += 2;
          if ( !v41 )
            goto LABEL_53;
        }
        v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 4];
      }
      else
      {
LABEL_53:
        v43 = sub_224BC3C(v24, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v43)(v24, *(_QWORD *)(v43 + 8), v39);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_79;
      v44 = *(_QWORD *)gameObject;
      v45 = SimpleAnimation_State_TypeInfo;
      v46 = gameObject;
      v49 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v49;
          v48 += 2;
          if ( !v49 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v50 = sub_224BC3C(v46, v45, 8);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v50)(v46, *(_QWORD *)(v50 + 8), -1.0);
      SimpleAnimation__Play_78552168((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
      goto LABEL_70;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_79;
    v30 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v16, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v16,
                            (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_79;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0);
    if ( !v30 )
      goto LABEL_79;
    UnityEngine_AnimationState__set_time(v30, length, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v16,
                            (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_79;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0);
    UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v16, (System_String_o *)StringLiteral_13751/*"SvtW_StartClose"*/, 0);
  }
LABEL_70:
  battlePointGaugeManager = (UnityEngine_Object_o *)this->fields.battlePointGaugeManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(battlePointGaugeManager, 0, 0) )
  {
    gameObject = (__int64)this->fields.battlePointGaugeManager;
    if ( gameObject )
    {
      BattlePointGaugeManager__StartOpen((BattlePointGaugeManager_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.battlePointGaugeManager;
      if ( gameObject )
      {
        BattlePointGaugeManager__StartRotation((BattlePointGaugeManager_o *)gameObject, 1, 0);
        goto LABEL_76;
      }
    }
LABEL_79:
    sub_2213CDC(gameObject, v7);
  }
LABEL_76:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 1, v9);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v8);
  BattleServantParamComponent__updateSkillIcon(this, 0, v52);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v53);
  BattleServantParamComponent__UpdateBattlePointImmediately(this, this->fields.data, v54);
}


void BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.perf = inperf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5974219 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19930/*"enemy_icon_leader"*/);
    sub_2213A60(&StringLiteral_24528/*"servant_icon"*/);
    byte_5974219 = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = UnityEngine_Object__op_Inequality(roleTypeSprite, 0, 0);
  if ( (transform & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_28;
    if ( data->fields.isEnemy )
    {
      roleType = data->fields.roleType;
      transform = (__int64)this->fields.roleTypeSprite;
      if ( roleType == 3 )
      {
        if ( !transform )
          goto LABEL_28;
        v8 = &StringLiteral_24528/*"servant_icon"*/;
        goto LABEL_17;
      }
      if ( roleType == 2 )
      {
        if ( !transform )
          goto LABEL_28;
        v8 = &StringLiteral_19930/*"enemy_icon_leader"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v8, 0);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          v9 = (UnityEngine_Transform_o *)transform;
          if ( !byte_5969AE0 )
          {
            transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
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
LABEL_27:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v10, 0);
                return;
              }
            }
          }
        }
        goto LABEL_28;
      }
      if ( !transform )
        goto LABEL_28;
    }
    else
    {
      transform = (__int64)this->fields.roleTypeSprite;
      if ( !transform )
        goto LABEL_28;
    }
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( transform )
    {
      v10 = 0;
      goto LABEL_27;
    }
LABEL_28:
    sub_2213CDC(transform, v5);
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
    sub_2213CDC(this, flg);
  v4 = this;
  v5 = 0;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(this);
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


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__setTargetMark(
        BattleServantParamComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *targetMark; // x22
  __int64 v9; // x1
  UnityEngine_Object_o *lockTargetMark; // x22
  const MethodInfo *v11; // x1
  __int64 Component_object; // x0
  int v13; // w26
  bool IsApplicableUpHate; // w24
  int v15; // w28
  UnityEngine_Component_o *v16; // x23
  UnityEngine_Component_o *v17; // x21
  __int64 v18; // x1
  BattleServantParamComponent___c_c *v19; // x0
  struct BattleServantParamComponent___c_StaticFields *static_fields; // x8
  __int64 _9__160_0; // x22
  Il2CppObject *v22; // x25
  struct BattleServantParamComponent___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Object_o *battleServantParamSetting; // x25
  struct BattleServantParamSetting_o *v31; // x8
  struct BattleServantParamSetting_o *v32; // x8
  struct BattleServantData_o *v33; // x8
  _BOOL4 v34; // w9
  BattleServantParamSetting_o *v35; // x24
  int v36; // w8
  struct BattleServantParamSetting_o *v37; // x8
  BattleServantParamSetting_o *v38; // x23
  BattleServantParamComponent_TargetIconViewInfo_o *fixed; // x0
  struct BattleServantData_o *v40; // x8
  float LocalPositionX; // s8
  float TARGET_ICON_SPRITE_POSX; // s9
  BattleServantParamComponent_c *v43; // x0
  float v44; // s8
  float FIX_TARGET_ICON_SPRITE_POSX; // s9
  BattleServantParamComponent_c *v46; // x0
  _BOOL4 IsGrand_k__BackingField; // w9
  BattleServantParamSetting_o *v48; // x24
  int v49; // w8
  struct BattleServantParamSetting_o *v50; // x8
  BattleServantParamSetting_o *v51; // x23
  struct BattleServantParamComponent_StaticFields *v52; // x8
  __int64 v53; // x1
  BattleServantParamComponent_c *v54; // x0
  int v55; // w8
  const MethodInfo *v56; // x0
  const MethodInfo *v57; // x0
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  __int64 v60; // x1
  BattleServantParamComponent_c *v61; // x0
  int v62; // w8
  const MethodInfo *v63; // x0
  const MethodInfo *v64; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v66; // x8
  bool v67; // zf
  _BOOL4 v68; // w20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v70; // x2
  UpHateData_o *upHateData; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974224 & 1) == 0 )
  {
    sub_2213A60(&System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleServantParamComponent___c__setTargetMark_b__160_0__);
    sub_2213A60(&BattleServantParamComponent___c_TypeInfo);
    byte_5974224 = 1;
  }
  data = this->fields.data;
  upHateData = 0;
  if ( !data )
    return;
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
  if ( UnityEngine_Object__op_Equality(targetMark, 0, 0) )
    return;
  lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(lockTargetMark, 0, 0) )
    return;
  Component_object = (__int64)this->fields.data;
  if ( !Component_object )
    goto LABEL_127;
  v13 = *(_DWORD *)(Component_object + 24);
  if ( isTargetLock )
  {
    IsApplicableUpHate = 0;
    if ( BattleServantData__isUpHate((BattleServantData_o *)Component_object, 0, &upHateData, 0, 0) )
    {
      Component_object = (__int64)this->fields.data;
      if ( !Component_object )
        goto LABEL_127;
      IsApplicableUpHate = BattleServantData__IsApplicableUpHate((BattleServantData_o *)Component_object, 0);
    }
  }
  else
  {
    IsApplicableUpHate = 0;
  }
  if ( (((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *))this->klass->vtable._8_IsRaidStatusUi.methodPtr)(
          this,
          this->klass->vtable._8_IsRaidStatusUi.method)
      & 1) != 0 )
    v15 = 1;
  else
    v15 = ((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *))this->klass->vtable._9_IsSuperBossStatusUi.methodPtr)(
            this,
            this->klass->vtable._9_IsSuperBossStatusUi.method)
        & 1;
  Component_object = (__int64)this->fields.targetMark;
  if ( !Component_object )
    goto LABEL_127;
  Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)Component_object,
                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark
    || (v16 = (UnityEngine_Component_o *)Component_object,
        Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                      this->fields.lockTargetMark,
                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !this->fields.targetMark)
    || (v17 = (UnityEngine_Component_o *)Component_object,
        (Component_object = (__int64)UnityEngine_GameObject__get_gameObject(this->fields.targetMark, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v13 == uniqueId, 0),
        (Component_object = (__int64)this->fields.lockTargetMark) == 0)
    || (Component_object = (__int64)UnityEngine_GameObject__get_gameObject(
                                      (UnityEngine_GameObject_o *)Component_object,
                                      0)) == 0 )
  {
LABEL_127:
    sub_2213CDC(Component_object, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, IsApplicableUpHate, 0);
  v19 = BattleServantParamComponent___c_TypeInfo;
  if ( !*(&BattleServantParamComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent___c_TypeInfo, v18);
    v19 = BattleServantParamComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__160_0 = (__int64)static_fields->__9__160_0;
  if ( !_9__160_0 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v18);
      static_fields = BattleServantParamComponent___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__160_0 = sub_2213CCC(System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    System_Action_object__object____ctor(
      (System_Action_object__object__o *)_9__160_0,
      v22,
      Method_BattleServantParamComponent___c__setTargetMark_b__160_0__,
      0);
    v23 = BattleServantParamComponent___c_TypeInfo->static_fields;
    v23->__9__160_0 = (struct System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__o *)_9__160_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__160_0, _9__160_0, v24, v25, v26, v27, v28, v29);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Component_object = UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( (Component_object & 1) != 0 )
  {
    v31 = this->fields.battleServantParamSetting;
    if ( !v31 )
      goto LABEL_127;
    if ( v31->fields.IsOverwriteTargetSetting )
    {
      ComponentHelper__SetLocalPosition(v16, v31->fields.TargetIconPosition, 0);
      v32 = this->fields.battleServantParamSetting;
      if ( !v32 )
        goto LABEL_127;
      ComponentHelper__SetLocalPosition(v17, v32->fields.FixTargetIconPosition, 0);
      v33 = this->fields.data;
      if ( v13 != uniqueId || !IsApplicableUpHate )
      {
        if ( !v33 )
          goto LABEL_127;
        IsGrand_k__BackingField = v33->fields._IsGrand_k__BackingField;
        v48 = this->fields.battleServantParamSetting;
        v49 = *(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1);
        if ( IsGrand_k__BackingField )
        {
          if ( !v49 )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
          Component_object = (__int64)BattleServantParamComponent__GrandNormalTargetIconViewInfo(v48, v11);
          if ( !_9__160_0 )
            goto LABEL_127;
          Component_object = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
                               *(_QWORD *)(_9__160_0 + 64),
                               v16,
                               Component_object,
                               *(_QWORD *)(_9__160_0 + 40));
          v50 = this->fields.battleServantParamSetting;
          if ( !v50 )
            goto LABEL_127;
          if ( System_String__IsNullOrEmpty(v50->fields.FixTargetIconSpriteName, 0) )
          {
            Component_object = (__int64)BattleServantParamComponent_TypeInfo;
            if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
            if ( !v17 )
              goto LABEL_127;
            UISprite__set_spriteName(
              (UISprite_o *)v17,
              BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
              0);
          }
          v51 = this->fields.battleServantParamSetting;
          if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
          fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo_54801900(v51, v11);
        }
        else
        {
          if ( !v49 )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
          Component_object = (__int64)BattleServantParamComponent__NormalTargetIconViewInfo_54801224(v48, v11);
          if ( !_9__160_0 )
            goto LABEL_127;
          (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
            *(_QWORD *)(_9__160_0 + 64),
            v16,
            Component_object,
            *(_QWORD *)(_9__160_0 + 40));
          fixed = BattleServantParamComponent__FixTargetIconViewInfo_54801352(
                    this->fields.battleServantParamSetting,
                    v59);
        }
      }
      else
      {
        if ( !v33 )
          goto LABEL_127;
        v34 = v33->fields._IsGrand_k__BackingField;
        v35 = this->fields.battleServantParamSetting;
        v36 = *(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1);
        if ( v34 )
        {
          if ( !v36 )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
          Component_object = (__int64)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_54802044(v35, v11);
          if ( !_9__160_0 )
            goto LABEL_127;
          Component_object = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
                               *(_QWORD *)(_9__160_0 + 64),
                               v16,
                               Component_object,
                               *(_QWORD *)(_9__160_0 + 40));
          v37 = this->fields.battleServantParamSetting;
          if ( !v37 )
            goto LABEL_127;
          if ( System_String__IsNullOrEmpty(v37->fields.FixTargetIconSpriteName, 0) )
          {
            Component_object = (__int64)BattleServantParamComponent_TypeInfo;
            if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
            if ( !v17 )
              goto LABEL_127;
            UISprite__set_spriteName(
              (UISprite_o *)v17,
              BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
              0);
          }
          v38 = this->fields.battleServantParamSetting;
          if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
          fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_54802172(v38, v11);
        }
        else
        {
          if ( !v36 )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
          Component_object = (__int64)BattleServantParamComponent__TargetIconWhenFixViewInfo_54801496(v35, v11);
          if ( !_9__160_0 )
            goto LABEL_127;
          (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
            *(_QWORD *)(_9__160_0 + 64),
            v16,
            Component_object,
            *(_QWORD *)(_9__160_0 + 40));
          fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_54801624(
                    this->fields.battleServantParamSetting,
                    v58);
        }
      }
      goto LABEL_113;
    }
  }
  v40 = this->fields.data;
  if ( !v40 )
    goto LABEL_127;
  if ( v40->fields._IsGrand_k__BackingField )
  {
    if ( v15 )
    {
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
      TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
      v43 = BattleServantParamComponent_TypeInfo;
      goto LABEL_78;
    }
    v43 = BattleServantParamComponent_TypeInfo;
    if ( *(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      LocalPositionX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
      v43 = BattleServantParamComponent_TypeInfo;
      LocalPositionX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
      if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
        v43 = BattleServantParamComponent_TypeInfo;
        TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
LABEL_78:
        if ( !*(&v43->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v43, v11);
          v43 = BattleServantParamComponent_TypeInfo;
        }
        v72.fields.z = 0.0;
        v72.fields.x = LocalPositionX;
        v72.fields.y = v43->static_fields->TARGET_ICON_SPRITE_POSY;
        ComponentHelper__SetLocalPosition(v16, v72, 0);
        v73.fields.z = 0.0;
        v73.fields.x = TARGET_ICON_SPRITE_POSX;
        v73.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
        ComponentHelper__SetLocalPosition(v17, v73, 0);
        v54 = BattleServantParamComponent_TypeInfo;
        v55 = *(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1);
        if ( v13 != uniqueId || !IsApplicableUpHate )
        {
          if ( !v55 )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v53);
          Component_object = (__int64)BattleServantParamComponent__GrandTargetIconViewInfo((const MethodInfo *)v54);
          if ( !_9__160_0 )
            goto LABEL_127;
          Component_object = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
                               *(_QWORD *)(_9__160_0 + 64),
                               v16,
                               Component_object,
                               *(_QWORD *)(_9__160_0 + 40));
          if ( !v17 )
            goto LABEL_127;
          UISprite__set_spriteName(
            (UISprite_o *)v17,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo(v57);
        }
        else
        {
          if ( !v55 )
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v53);
          Component_object = (__int64)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo((const MethodInfo *)v54);
          if ( !_9__160_0 )
            goto LABEL_127;
          Component_object = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
                               *(_QWORD *)(_9__160_0 + 64),
                               v16,
                               Component_object,
                               *(_QWORD *)(_9__160_0 + 40));
          if ( !v17 )
            goto LABEL_127;
          UISprite__set_spriteName(
            (UISprite_o *)v17,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(v56);
        }
        goto LABEL_113;
      }
    }
    TARGET_ICON_SPRITE_POSX = LocalPositionX;
    goto LABEL_78;
  }
  if ( v15 )
  {
    v44 = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
    FIX_TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
    v46 = BattleServantParamComponent_TypeInfo;
  }
  else
  {
    v46 = BattleServantParamComponent_TypeInfo;
    if ( *(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      v52 = BattleServantParamComponent_TypeInfo->static_fields;
      v44 = v52->TARGET_ICON_SPRITE_POSX;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
      v46 = BattleServantParamComponent_TypeInfo;
      v52 = BattleServantParamComponent_TypeInfo->static_fields;
      v44 = v52->TARGET_ICON_SPRITE_POSX;
      if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
        v46 = BattleServantParamComponent_TypeInfo;
        v52 = BattleServantParamComponent_TypeInfo->static_fields;
      }
    }
    FIX_TARGET_ICON_SPRITE_POSX = v52->FIX_TARGET_ICON_SPRITE_POSX;
  }
  if ( !*(&v46->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v46, v11);
    v46 = BattleServantParamComponent_TypeInfo;
  }
  v74.fields.z = 0.0;
  v74.fields.x = v44;
  v74.fields.y = v46->static_fields->TARGET_ICON_SPRITE_POSY;
  ComponentHelper__SetLocalPosition(v16, v74, 0);
  v75.fields.z = 0.0;
  v75.fields.x = FIX_TARGET_ICON_SPRITE_POSX;
  v75.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
  ComponentHelper__SetLocalPosition(v17, v75, 0);
  v61 = BattleServantParamComponent_TypeInfo;
  v62 = *(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1);
  if ( v13 != uniqueId || !IsApplicableUpHate )
  {
    if ( !v62 )
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v60);
    Component_object = (__int64)BattleServantParamComponent__NormalTargetIconViewInfo((const MethodInfo *)v61);
    if ( !_9__160_0 )
      goto LABEL_127;
    v64 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
                                *(_QWORD *)(_9__160_0 + 64),
                                v16,
                                Component_object,
                                *(_QWORD *)(_9__160_0 + 40));
    fixed = BattleServantParamComponent__FixTargetIconViewInfo(v64);
  }
  else
  {
    if ( !v62 )
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v60);
    Component_object = (__int64)BattleServantParamComponent__TargetIconWhenFixViewInfo((const MethodInfo *)v61);
    if ( !_9__160_0 )
      goto LABEL_127;
    v63 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, __int64, _QWORD))(_9__160_0 + 24))(
                                *(_QWORD *)(_9__160_0 + 64),
                                v16,
                                Component_object,
                                *(_QWORD *)(_9__160_0 + 40));
    fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(v63);
  }
LABEL_113:
  Component_object = (*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantParamComponent_TargetIconViewInfo_o *, _QWORD))(_9__160_0 + 24))(
                       *(_QWORD *)(_9__160_0 + 64),
                       v17,
                       fixed,
                       *(_QWORD *)(_9__160_0 + 40));
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_127;
  v66 = perf->fields.data;
  if ( !v66 )
    goto LABEL_127;
  if ( v66->fields.isMultiTargetBattle )
  {
    v67 = uniqueId == -1 || v13 == uniqueId;
    v68 = v67;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    CommonFunction__SetColorAllChild(transform, v68, this->fields.GRAY, 0);
    this->fields.isActiveHpBar = v68;
    if ( v68 )
    {
      Component_object = (__int64)this->fields.showBuffComponent;
      if ( Component_object )
      {
        BattleServantShowBuffComponent__UpdateActiveBuffList(
          (BattleServantShowBuffComponent_o *)Component_object,
          0,
          v70);
        return;
      }
      goto LABEL_127;
    }
  }
}


void BattleServantParamComponent__setTouch(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_5974211 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974211 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0 && BattleServantData__isAlive(data, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v8 )
    {
      if ( !Component_object )
        sub_2213CDC(v8, v9);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__setVisible(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5974210 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974210 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(root, flg);
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
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  BattleServantParamComponent_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct UnityEngine_GameObject_o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct UISprite_o *v80; // x21
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  int32_t v87; // w1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct BattleServantChangeBarComponent_o *v94; // x21
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  int32_t v101; // w1
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  int32_t v108; // w1
  __int64 v109; // x1
  System_Collections_Hashtable_o *v110; // x0
  __int64 v111; // x0
  char v112[4]; // [xsp+0h] [xbp-40h] BYREF
  int v113; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v115; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_5974230 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleServantParamComponent_shiftUpdateStatus__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_21262/*"ignoretimescale"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_25788/*"updateShiftHplabel"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_4802/*"ComplateUpdateShiftHplabel"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    this = (BattleServantParamComponent_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5974230 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_72;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_72;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0);
  v4 = v2->fields.perf;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_72;
    nowAction = v4->fields.nowAction;
    if ( !nowAction )
      goto LABEL_72;
    v6 = !nowAction->fields.isShiftPhaseMotion;
  }
  else
  {
    if ( !v4 )
      goto LABEL_72;
    v6 = 0;
  }
  if ( (v7 = v4->fields.nowAction) == 0
    || (isSkillShift = v7->fields.isSkillShift, v7->fields.isShiftPhaseMotion = 0, isSkillShift)
    && ((this = (BattleServantParamComponent_o *)v2->fields.data) == 0
     || (BattleServantData__updateHp((BattleServantData_o *)this, 0, 0), (v4 = v2->fields.perf) == 0))
    || (this = (BattleServantParamComponent_o *)v4->fields.nowAction) == 0 )
  {
LABEL_72:
    sub_2213CDC(this, method);
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
            v15 = (_QWORD *)sub_2213A78(Method_BattleServantParamComponent_shiftUpdateStatus__);
          v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
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
              v19 = (_QWORD *)sub_2213A78(Method_BattleServantParamComponent_shiftUpdateStatus__);
            v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
            OverwriteAssetSoundName__PlayCommonSe(v20, 16, 0, 0);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
            this = (BattleServantParamComponent_o *)sub_2213B20(object___TypeInfo, 12);
            if ( this )
            {
              v28 = this;
              v29 = StringLiteral_20622/*"from"*/;
              if ( StringLiteral_20622/*"from"*/ )
              {
                v29 = sub_2213BB4(StringLiteral_20622/*"from"*/, v28->klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_74;
              }
              if ( !LODWORD(v28->fields.m_CancellationTokenSource) )
                goto LABEL_73;
              v31 = StringLiteral_20622/*"from"*/;
              v28->fields.root = (struct UnityEngine_GameObject_o *)StringLiteral_20622/*"from"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->fields.root, v31, v22, v23, v24, v25, v26, v27);
              v115 = 0;
              v29 = j_il2cpp_value_box_0(qword_5984348, &v115);
              v38 = (struct UnityEngine_GameObject_o *)v29;
              if ( v29 )
              {
                v29 = sub_2213BB4(v29, v28->klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_74;
              }
              if ( ((__int64)v28->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
                goto LABEL_73;
              v28->fields.target = v38;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v28->fields.target,
                (int32_t)v38,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              v29 = StringLiteral_25406/*"to"*/;
              if ( StringLiteral_25406/*"to"*/ )
              {
                v29 = sub_2213BB4(StringLiteral_25406/*"to"*/, v28->klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_74;
              }
              if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 2 )
                goto LABEL_73;
              v45 = StringLiteral_25406/*"to"*/;
              *(_QWORD *)&v28->fields.index = StringLiteral_25406/*"to"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->fields.index, v45, v39, v40, v41, v42, v43, v44);
              this = (BattleServantParamComponent_o *)v2->fields.data;
              if ( this )
              {
                NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0);
                v29 = j_il2cpp_value_box_0(qword_5984348, &NowHp);
                v52 = v29;
                if ( !v29 || (v29 = sub_2213BB4(v29, v28->klass->_1.element_class)) != 0 )
                {
                  if ( ((__int64)v28->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
                    goto LABEL_73;
                  *(_QWORD *)&v28->fields.hpformatflg = v52;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v28->fields.hpformatflg,
                    v52,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51);
                  v29 = StringLiteral_23573/*"onupdate"*/;
                  if ( !StringLiteral_23573/*"onupdate"*/
                    || (v29 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, v28->klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 4 )
                      goto LABEL_73;
                    v59 = StringLiteral_23573/*"onupdate"*/;
                    v28->fields.hplabel = (struct UILabel_o *)StringLiteral_23573/*"onupdate"*/;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v28->fields.hplabel,
                      v59,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58);
                    v29 = StringLiteral_25788/*"updateShiftHplabel"*/;
                    if ( !StringLiteral_25788/*"updateShiftHplabel"*/
                      || (v29 = sub_2213BB4(StringLiteral_25788/*"updateShiftHplabel"*/, v28->klass->_1.element_class)) != 0 )
                    {
                      if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 5 )
                        goto LABEL_73;
                      v66 = StringLiteral_25788/*"updateShiftHplabel"*/;
                      v28->fields.maxhplabel = (struct UILabel_o *)StringLiteral_25788/*"updateShiftHplabel"*/;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&v28->fields.maxhplabel,
                        v66,
                        v60,
                        v61,
                        v62,
                        v63,
                        v64,
                        v65);
                      v29 = StringLiteral_25366/*"time"*/;
                      if ( !StringLiteral_25366/*"time"*/
                        || (v29 = sub_2213BB4(StringLiteral_25366/*"time"*/, v28->klass->_1.element_class)) != 0 )
                      {
                        if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 6 )
                          goto LABEL_73;
                        v73 = StringLiteral_25366/*"time"*/;
                        v28->fields.totalhplabel = (struct UILabel_o *)StringLiteral_25366/*"time"*/;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)&v28->fields.totalhplabel,
                          v73,
                          v67,
                          v68,
                          v69,
                          v70,
                          v71,
                          v72);
                        v113 = 1069547520;
                        v29 = j_il2cpp_value_box_0(qword_5984378, &v113);
                        v80 = (struct UISprite_o *)v29;
                        if ( !v29 || (v29 = sub_2213BB4(v29, v28->klass->_1.element_class)) != 0 )
                        {
                          if ( ((__int64)v28->fields.m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
                            goto LABEL_73;
                          v28->fields.breakSprite = v80;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v28->fields.breakSprite,
                            (int32_t)v80,
                            v74,
                            v75,
                            v76,
                            v77,
                            v78,
                            v79);
                          v29 = StringLiteral_21262/*"ignoretimescale"*/;
                          if ( !StringLiteral_21262/*"ignoretimescale"*/
                            || (v29 = sub_2213BB4(StringLiteral_21262/*"ignoretimescale"*/, v28->klass->_1.element_class)) != 0 )
                          {
                            if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 8 )
                              goto LABEL_73;
                            v87 = StringLiteral_21262/*"ignoretimescale"*/;
                            v28->fields.hpGauge = (struct BattleHpGaugeBarComponent_o *)StringLiteral_21262/*"ignoretimescale"*/;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)&v28->fields.hpGauge,
                              v87,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86);
                            v112[0] = 1;
                            v29 = j_il2cpp_value_box_0(qword_5984328, v112);
                            v94 = (struct BattleServantChangeBarComponent_o *)v29;
                            if ( !v29 || (v29 = sub_2213BB4(v29, v28->klass->_1.element_class)) != 0 )
                            {
                              if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 9 )
                                goto LABEL_73;
                              v28->fields.hpChange = v94;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->fields.hpChange,
                                (int32_t)v94,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                v93);
                              v29 = StringLiteral_23565/*"oncomplete"*/;
                              if ( !StringLiteral_23565/*"oncomplete"*/
                                || (v29 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v28->klass->_1.element_class)) != 0 )
                              {
                                if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 0xA )
                                  goto LABEL_73;
                                v101 = StringLiteral_23565/*"oncomplete"*/;
                                v28->fields.hpShift = (struct BattleServantHpShiftComponent_o *)StringLiteral_23565/*"oncomplete"*/;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)&v28->fields.hpShift,
                                  v101,
                                  v95,
                                  v96,
                                  v97,
                                  v98,
                                  v99,
                                  v100);
                                v29 = StringLiteral_4802/*"ComplateUpdateShiftHplabel"*/;
                                if ( !StringLiteral_4802/*"ComplateUpdateShiftHplabel"*/
                                  || (v29 = sub_2213BB4(StringLiteral_4802/*"ComplateUpdateShiftHplabel"*/, v28->klass->_1.element_class)) != 0 )
                                {
                                  if ( LODWORD(v28->fields.m_CancellationTokenSource) > 0xB )
                                  {
                                    v108 = StringLiteral_4802/*"ComplateUpdateShiftHplabel"*/;
                                    v28->fields.clsIconComponent = (struct ServantClassIconComponent_o *)StringLiteral_4802/*"ComplateUpdateShiftHplabel"*/;
                                    sub_2213A04(
                                      (MissionNaviTransitionBoardItem_o *)&v28->fields.clsIconComponent,
                                      v108,
                                      v102,
                                      v103,
                                      v104,
                                      v105,
                                      v106,
                                      v107);
                                    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v109);
                                    v110 = iTween__Hash((System_Object_array *)v28, 0);
                                    iTween__ValueTo(gameObject, v110, 0);
                                    return;
                                  }
LABEL_73:
                                  sub_2213CE4(v29);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_74:
                v111 = sub_2213D00(v29, v30);
                sub_2213BA0(v111, 0);
              }
            }
          }
        }
      }
    }
    goto LABEL_72;
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

  if ( (byte_5974232 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
    byte_5974232 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_2213CDC(0, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974233 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent__showSideEffectList_d__179_TypeInfo);
    byte_5974233 = 1;
  }
  v3 = sub_2213CCC(BattleServantParamComponent__showSideEffectList_d__179_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v16; // x1
  UnityEngine_Object_o *ServantActor; // x21
  _BOOL4 IsMatchCurrentCommonAnimName; // w23
  int v19; // w8
  struct BattleServantData_o *v20; // x8
  int v21; // w8
  void *v22; // x21
  int v23; // w23
  char v24; // w26
  __int64 v25; // x27
  int v26; // w27
  struct BattleServantData_o *v27; // x8
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x20
  System_Enum_o v30; // [xsp+8h] [xbp-68h] BYREF
  int v31; // [xsp+18h] [xbp-58h]

  if ( (byte_5974223 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13907/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_2213A60(&StringLiteral_26090/*"wait"*/);
    byte_5974223 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffData);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  ShowServantParam = (void *)UnityEngine_Object__op_Inequality(ServantActor, 0, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
    goto LABEL_36;
  ShowServantParam = this->fields.data;
  if ( !ShowServantParam )
    goto LABEL_59;
  if ( !BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0) )
    goto LABEL_27;
  v30.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v30.monitor = (void *)-1LL;
  v31 = 49;
  ShowServantParam = System_Enum__ToString(&v30, 0);
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
    sub_2213CDC(ShowServantParam, v7);
  ShowServantParam = (void *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    v19 = 0;
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
    v19 = (unsigned __int8)ShowServantParam & 1;
  }
  if ( IsMatchCurrentCommonAnimName | v19 )
  {
    v30.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v30.monitor = (void *)-1LL;
    v31 = 9;
    ShowServantParam = System_Enum__ToString(&v30, 0);
    if ( !ServantActor )
      goto LABEL_59;
    BattleActorControl__playAnimation_54351892(
      (BattleActorControl_o *)ServantActor,
      (System_String_o *)ShowServantParam,
      0,
      0);
  }
LABEL_36:
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_59;
  if ( !v20->fields.isSleepWaitMode )
    return;
  ShowServantParam = BattleBuffData__getActiveList(buffData, 1, 0);
  if ( !ShowServantParam )
    goto LABEL_59;
  v21 = *((_DWORD *)ShowServantParam + 6);
  v22 = ShowServantParam;
  if ( v21 < 1 )
    goto LABEL_63;
  v23 = 0;
  v24 = 0;
  do
  {
    if ( v23 >= (unsigned int)v21 )
      sub_2213CE4(ShowServantParam);
    v25 = *((_QWORD *)v22 + v23 + 4);
    if ( !v25 )
      goto LABEL_59;
    if ( !*(_BYTE *)(v25 + 576) )
    {
      ShowServantParam = BattleBuffData__get_buffMst(buffData, 0);
      if ( !ShowServantParam )
        goto LABEL_59;
      ShowServantParam = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                           *(_DWORD *)(v25 + 16),
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_59;
      v26 = *((_DWORD *)ShowServantParam + 4);
      ShowServantParam = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_13907/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0);
      v24 |= v26 == (_DWORD)ShowServantParam;
    }
    v21 = *((_DWORD *)v22 + 6);
    ++v23;
  }
  while ( v23 < v21 );
  if ( (v24 & 1) == 0 )
  {
LABEL_63:
    ShowServantParam = this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_59;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0);
    v27 = this->fields.data;
    if ( !v27 )
      goto LABEL_59;
    ShowServantParam = this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_59;
    v29 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v27->fields.uniqueId,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    ShowServantParam = (void *)UnityEngine_Object__op_Inequality(v29, 0, 0);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v29 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v29, this->fields.uniqueID, 0) )
          BattleActorControl__playAnimation_54351892(
            (BattleActorControl_o *)v29,
            (System_String_o *)StringLiteral_26090/*"wait"*/,
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
  __int64 v13; // x1
  UnityEngine_Object_o *ServantActor; // x21
  System_Int32_array *AuraIdList; // x1

  if ( (byte_5974222 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974222 = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(ServantActor, 0, 0);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_17;
          BattleActorControl__Stun2AnimationSwitch(
            (BattleActorControl_o *)ServantActor,
            svtData->fields.IsStun2WaitMode,
            0,
            0);
          BattleActorControl__updateBuffLoopEffect((BattleActorControl_o *)ServantActor, 0);
          BattleActorControl__UpdateActorVisibilityByBuff((BattleActorControl_o *)ServantActor, 0, 0);
          if ( doAuraUpdate )
          {
            perf = (BattlePerformance_o *)ServantActor[23].klass;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0);
              return;
            }
LABEL_17:
            sub_2213CDC(perf, v10);
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
  BattleServantParamComponent_o *v8; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleActionData_o *nowAction; // x8
  __int64 v11; // x1
  int v12; // w8
  UnityEngine_Object_o *hpGauge; // x23
  int v14; // w9

  v8 = this;
  if ( (byte_5974217 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974217 = 1;
  }
  perf = v8->fields.perf;
  if ( !perf )
    goto LABEL_19;
  nowAction = perf->fields.nowAction;
  if ( !nowAction || !nowAction->fields._IsSkipUpdateHp_k__BackingField )
  {
    this = (BattleServantParamComponent_o *)v8->fields.data;
    if ( !this )
      goto LABEL_19;
    v12 = ((__int64 (__fastcall *)(BattleServantParamComponent_o *, const MethodInfo *, _QWORD, bool, const MethodInfo *))this->klass->vtable._9_IsSuperBossStatusUi.methodPtr)(
            this,
            this->klass->vtable._9_IsSuperBossStatusUi.method,
            *(_QWORD *)&max,
            isUpdateDamageBarImmediately,
            method);
    hpGauge = (UnityEngine_Object_o *)v8->fields.hpGauge;
    v14 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( v12 < 0 )
    {
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
      {
        this = (BattleServantParamComponent_o *)v8->fields.hpGauge;
        if ( !this )
          goto LABEL_19;
        BattleHpGaugeBarComponent__setZero((BattleHpGaugeBarComponent_o *)this, 0);
      }
    }
    else
    {
      if ( !v14 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
      {
        this = (BattleServantParamComponent_o *)v8->fields.hpGauge;
        if ( this )
        {
          BattleHpGaugeBarComponent__setValue(
            (BattleHpGaugeBarComponent_o *)this,
            now,
            max,
            isUpdateDamageBarImmediately,
            0);
          return;
        }
LABEL_19:
        sub_2213CDC(this, *(_QWORD *)&now);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__updateHplabel(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isDispBreak,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v8; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleActionData_o *nowAction; // x8
  __int64 *v11; // x8
  UnityEngine_Object_o *hplabel; // x24
  System_String_o *v13; // x23
  UILabel_o *v14; // x24
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v19; // x1
  UILabel_o *v20; // x24
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v23; // x1
  UILabel_o *v24; // x23
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x0
  __int64 *v27; // x8
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v30; // x2
  int32_t v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_5974218 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_26548/*"{0}/{1}"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    this = (BattleServantParamComponent_o *)sub_2213A60(&StringLiteral_26436/*"{0:#,0}/{1:#,0}"*/);
    byte_5974218 = 1;
  }
  perf = v8->fields.perf;
  if ( !perf )
    goto LABEL_38;
  nowAction = perf->fields.nowAction;
  if ( !nowAction || !nowAction->fields._IsSkipUpdateHp_k__BackingField )
  {
    v11 = &StringLiteral_26484/*"{0}"*/;
    hplabel = (UnityEngine_Object_o *)v8->fields.hplabel;
    if ( v8->fields.hpformatflg )
      v11 = &StringLiteral_26432/*"{0:#,0}"*/;
    v13 = (System_String_o *)*v11;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
    {
      v14 = v8->fields.hplabel;
      v32 = now;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v32);
      this = (BattleServantParamComponent_o *)System_String__Format(v13, v15, 0);
      if ( !v14 )
        goto LABEL_38;
      UILabel__set_text(v14, (System_String_o *)this, 0);
      this = (BattleServantParamComponent_o *)v8->fields.hplabel;
      if ( !this )
        goto LABEL_38;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_38;
        CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
      }
    }
    maxhplabel = (UnityEngine_Object_o *)v8->fields.maxhplabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    if ( UnityEngine_Object__op_Inequality(maxhplabel, 0, 0) )
    {
      v20 = v8->fields.maxhplabel;
      v32 = max;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v32);
      this = (BattleServantParamComponent_o *)System_String__Format(v13, v21, 0);
      if ( !v20 )
        goto LABEL_38;
      UILabel__set_text(v20, (System_String_o *)this, 0);
    }
    totalhplabel = (UnityEngine_Object_o *)v8->fields.totalhplabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
    {
      v24 = v8->fields.totalhplabel;
      if ( v8->fields.hpformatflg )
      {
        v32 = now;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v32);
        v31 = max;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
        v27 = &StringLiteral_26436/*"{0:#,0}/{1:#,0}"*/;
      }
      else
      {
        v32 = now;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v32);
        v31 = max;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
        v27 = &StringLiteral_26548/*"{0}/{1}"*/;
      }
      this = (BattleServantParamComponent_o *)System_String__Format_75697880((System_String_o *)*v27, v25, v26, 0);
      if ( !v24 )
        goto LABEL_38;
      UILabel__set_text(v24, (System_String_o *)this, 0);
    }
    breakSprite = (UnityEngine_Object_o *)v8->fields.breakSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) && isDispBreak )
    {
      this = (BattleServantParamComponent_o *)v8->fields.data;
      if ( this )
      {
        isShiftableServant = BattleServantData__isShiftableServant((BattleServantData_o *)this, 0);
        BattleServantParamComponent__SetBreakSpriteDisplay(v8, now == 0 && isShiftableServant, v30);
        return;
      }
LABEL_38:
      sub_2213CDC(this, *(_QWORD *)&now);
    }
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
  if ( (byte_5974213 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974213 = 1;
  }
  if ( !svtdata )
    goto LABEL_12;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_12;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v4->fields.npcomp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtdata);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
    {
      this = (BattleServantParamComponent_o *)v4->fields.npcomp;
      if ( this )
      {
        BattleNpGaugeSystemComponent__changeParam((BattleNpGaugeSystemComponent_o *)this, svtdata->fields.np, 0);
        return;
      }
LABEL_12:
      sub_2213CDC(this, svtdata);
    }
  }
}


void BattleServantParamComponent__updateNp_54818120(
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
  if ( (byte_5974214 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974214 = 1;
  }
  if ( !svtdata )
    goto LABEL_16;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v8->fields.npcomp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtdata);
    v11 = UnityEngine_Object__op_Inequality(npcomp, 0, 0);
    if ( npArray )
    {
      if ( v11 )
      {
        max_length = npArray->max_length;
        if ( max_length > index )
        {
          if ( max_length <= (unsigned int)index )
            sub_2213CE4(v11);
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
          sub_2213CDC(this, svtdata);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(0, *(_QWORD *)&nowHp);
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
      sub_2213CDC(BuffData, v6);
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
          sub_2213CE4(BuffData);
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

  if ( (byte_5974216 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974216 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtData);
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
      sub_2213CDC(data, v5);
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
  __int64 v5; // x1
  BattleActorControl_o *PartsActor; // x20
  BattleServantData_o *data; // x0
  int32_t v8; // w20
  int32_t MaxHp; // w0
  const MethodInfo *v10; // x4
  int32_t v11; // w20
  int32_t v12; // w0
  const MethodInfo *v13; // x4
  __int64 v14; // x1
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v16; // x2
  struct BattleServantData_o *v17; // x8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  struct BattleServantData_o *v20; // x8
  struct BattleServantData_o *v21; // x8

  v3 = this;
  if ( (byte_597421D & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597421D = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( *((_BYTE *)this + 762) )
  {
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
          v8 = (int)this;
          MaxHp = BattleServantData__getMaxHp(v3->fields.data, 0);
          BattleServantParamComponent__updateHplabel(v3, v8, MaxHp, 1, v10);
          this = (BattleServantParamComponent_o *)v3->fields.data;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0);
            if ( v3->fields.data )
            {
              v11 = (int)this;
              v12 = BattleServantData__getMaxHp(v3->fields.data, 0);
              BattleServantParamComponent__updateHpbar(v3, v11, v12, 0, v13);
              npcomp = (UnityEngine_Object_o *)v3->fields.npcomp;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
              this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(npcomp, 0, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v17 = v3->fields.data;
                if ( !v17 )
                  goto LABEL_36;
                this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                if ( !this )
                  goto LABEL_36;
                BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)this, v17->fields.np, 0);
              }
              BattleServantParamComponent__updateTDGauge(v3, (BattleServantData_o *)method, v16);
              BattleServantParamComponent__updateSkillIcon(v3, 0, v18);
              v20 = v3->fields.data;
              if ( v20 )
              {
                BattleServantParamComponent__updateBuffIcon(v3, v20->fields.buffData, v19);
                return;
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(this, method);
  }
  v21 = v3->fields.data;
  if ( !v21 )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)v21->fields.deckSvt;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  *(_QWORD *)&this->fields.CurClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.SvtData = svtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.ClassIconComp = classIconComp;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ClassIconComp,
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
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_54842512(this, this->fields.CurClassId, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent_ClassIconData__ChangeClassIcon_54842512(
        BattleServantParamComponent_ClassIconData_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_o *CurChangeBuff; // x8
  BattleServantParamComponent_ClassIconData_o *v4; // x19
  _BOOL4 IsClassIconChangeSaveGrand; // w20
  struct BattleServantData_o *SvtData; // x8
  bool v7; // w5
  bool v8; // w4
  struct BattleServantData_o *v9; // x8
  struct ServantClassIconComponent_o *ClassIconComp; // x9
  bool IsNormalClassIcon_k__BackingField; // w9
  struct BattleServantData_o *v12; // x8

  CurChangeBuff = this->fields.CurChangeBuff;
  v4 = this;
  if ( CurChangeBuff )
    IsClassIconChangeSaveGrand = CurChangeBuff->fields.IsClassIconChangeSaveGrand;
  else
    IsClassIconChangeSaveGrand = 1;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_20;
  this = (BattleServantParamComponent_ClassIconData_o *)this->fields.ClassIconComp;
  if ( !this )
    goto LABEL_20;
  v7 = SvtData->fields._IsShowGrandEffect_k__BackingField && IsClassIconChangeSaveGrand;
  v8 = SvtData->fields._IsGrand_k__BackingField && IsClassIconChangeSaveGrand;
  ServantClassIconComponent__SetImage(
    (ServantClassIconComponent_o *)this,
    classId,
    SvtData->fields._frameType_k__BackingField,
    0,
    v8,
    v7,
    0);
  v9 = v4->fields.SvtData;
  if ( IsClassIconChangeSaveGrand )
  {
    ClassIconComp = v4->fields.ClassIconComp;
    if ( !ClassIconComp )
      goto LABEL_20;
    IsNormalClassIcon_k__BackingField = ClassIconComp->fields._IsNormalClassIcon_k__BackingField;
  }
  else
  {
    IsNormalClassIcon_k__BackingField = 1;
  }
  if ( !v9
    || (this = (BattleServantParamComponent_ClassIconData_o *)v4->fields.ClassIconComp,
        v9->fields._IsClassIconChangedNormal_k__BackingField = IsNormalClassIcon_k__BackingField,
        !this)
    || (ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, v9->fields.isEnemy, 0),
        (v12 = v4->fields.SvtData) == 0) )
  {
LABEL_20:
    sub_2213CDC(this, *(_QWORD *)&classId);
  }
  v4->fields.FrameType = v12->fields._frameType_k__BackingField;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v31; // x22
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x24
  Il2CppObject *v34; // x23
  System_Action_object__o *v35; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x23
  int32_t EffectId; // w24
  UnityEngine_GameObject_o *ParentObj; // x25
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  float DelayTime; // s8
  System_Action_o *v48; // x24
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5974252 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__);
    sub_2213A60(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__);
    sub_2213A60(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
    byte_5974252 = 1;
  }
  component = 0;
  v7 = sub_2213CCC(BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = arg;
  v16 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)arg, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_25;
  v29 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 16LL);
  if ( v29 < 1 )
  {
    EffectObject = 0;
  }
  else
  {
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v9);
    EffectObject = BattleEffectUtility__getEffectObject(v29, 0, 1, 0);
  }
  *(_QWORD *)(v7 + 32) = EffectObject;
  v31 = (UnityEngine_GameObject_o **)(v7 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)EffectObject, v23, v24, v25, v26, v27, v28);
  v33 = *(UnityEngine_Object_o **)(v7 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( !UnityEngine_Object__op_Inequality(v33, 0, 0) )
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
                                                   (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v34 = component;
    v35 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v35,
      (Il2CppObject *)v7,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0);
    if ( !v34 )
      goto LABEL_25;
    v34[12].klass = (Il2CppClass *)v35;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34[12], (int32_t)v35, v36, v37, v38, v39, v40, v41);
  }
  v42 = *v16;
  if ( !*v16 )
    goto LABEL_25;
  v43 = *v31;
  EffectId = v42->fields.EffectId;
  ParentObj = v42->fields.ParentObj;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v9);
  BattleEffectUtility__SetEffectParent(v43, EffectId, ParentObj, 0);
  if ( !*v16
    || (ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        DelayTime = (*v16)->fields.DelayTime,
        v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v48,
          (Il2CppObject *)v7,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v48, 0, 0),
        !ClassIconComp) )
  {
LABEL_25:
    sub_2213CDC(Component_object, v9);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0);
  v49 = *v16;
  this->fields.PrevEffectArg = *v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.PrevEffectArg,
    (int32_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_597424E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__);
    byte_597424E = 1;
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
    sub_2213CDC(SvtData, isSkipEffect);
  }
LABEL_12:
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, 0);
  v16 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v12, v14, v15);
  this->fields.PlayingEffectObj = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.PlayingEffectObj,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_54842512(this, this->fields.CurClassId, v4);
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

  if ( (byte_597424F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597424F = 1;
  }
  PlayingEffectObj = (UnityEngine_Object_o *)this->fields.PlayingEffectObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(SvtData, v4);
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
  int32_t v8; // w20
  BattleBuffData_BuffData_o *v9; // x0
  __int64 v10; // x21
  UnityEngine_Component_o *ClassIconComp; // x0
  __int64 v12; // x1
  int32_t CurClassId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5974250 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
    byte_5974250 = 1;
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
  v10 = sub_2213CCC(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10
    || (CurClassId = this->fields.CurClassId,
        ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp,
        *(float *)(v10 + 24) = delayTime,
        *(_DWORD *)(v10 + 16) = v8,
        *(_DWORD *)(v10 + 20) = CurClassId,
        !ClassIconComp) )
  {
    sub_2213CDC(ClassIconComp, v12);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0);
  *(_QWORD *)(v10 + 32) = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v10;
}


void BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  BuffAggregationArgs_c *v3; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_5974251 & 1) == 0 )
  {
    sub_2213A60(&BuffAggregationArgs_TypeInfo);
    byte_5974251 = 1;
  }
  v3 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !*(&BuffAggregationArgs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo, method);
  if ( !SvtData )
    sub_2213CDC(v3, method);
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

  if ( (byte_5974253 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4526/*"ChangeClassIcon"*/);
    byte_5974253 = 1;
  }
  _4__this = (BattleServantParamComponent_ClassIconData_o *)System_String__op_Equality(
                                                              eventName,
                                                              (System_String_o *)StringLiteral_4526/*"ChangeClassIcon"*/,
                                                              0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    arg = this->fields.arg;
    if ( !arg
      || (_4__this = this->fields.__4__this) == 0
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_54842512(_4__this, arg->fields.ClassId, v7),
          (v9 = this->fields.arg) == 0) )
    {
      sub_2213CDC(_4__this, v6);
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


void BattleServantParamComponent__CoAddClassIconEffect_d__194___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__194_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__CoAddClassIconEffect_d__194__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__194_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleServantParamComponent__CoAddClassIconEffect_d__194_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v11; // x22
  struct BattleServantParamComponent___c__DisplayClass194_0_o **p__8__1; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x4
  struct ServantClassIconComponent_o *clsIconComponent; // x8
  struct BattleServantData_o *servantData; // x8
  System_Collections_Generic_Dictionary_int__GameObject__o *classIconEffectDict; // x22
  BattleServantParamComponent_o *GrandEffectId; // x0
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x3
  struct BattleServantParamComponent___c__DisplayClass194_0_o *v26; // x23
  int32_t effectId; // w21
  System_Action_o *v28; // x22
  __int64 v29; // x1
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass194_0_o *_8__1; // x8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  struct BattleServantData_o *v34; // x8
  __int64 v35; // x1
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v37; // w22
  __int64 v38; // x1
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__194_o *v40; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__194_o *v41; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__194_o *v42; // x22
  __int64 v43; // x1
  struct BattleServantData_o *v44; // x21
  struct BattlePerformance_o *v45; // x8
  struct BattleData_o *data; // x8
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x22
  __int64 v51; // x1
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  __int64 v53; // x1
  UnityEngine_Object_o *facetex; // x22
  __int64 v55; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v57; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_5974256 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EffectMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_BattleServantParamComponent___c__DisplayClass194_0__CoAddClassIconEffect_b__0__);
    sub_2213A60(&BattleServantParamComponent___c__DisplayClass194_0_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)sub_2213A60(&StringLiteral_19685/*"ef_commandaura_{0}"*/);
    byte_5974256 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  component = 0;
  name = 0;
  path = 0;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (Il2CppObject *)sub_2213CCC(BattleServantParamComponent___c__DisplayClass194_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass194_0_o *)v11;
    p__8__1 = &v8->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
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
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
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
    effectId = v8->fields.effectId;
    v26->fields.isLoading = 1;
    v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v26,
      Method_BattleServantParamComponent___c__DisplayClass194_0__CoAddClassIconEffect_b__0__,
      0);
    perf = _4__this->fields.perf;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v29);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v28, perf, 0);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_77;
  if ( _8__1->fields.isLoading )
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_77;
  v34 = v8->fields.servantData;
  if ( !v34 )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_77;
  ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v34->fields.uniqueId, 0);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  v37 = v8->fields.effectId;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v35);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v37, ServantGameObject, 1, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0,
                                                                         0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_77;
  v40 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0);
  if ( !v40 )
    goto LABEL_77;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v40, (UnityEngine_Transform_o *)this, 0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v41 = this;
  if ( !byte_5969AE5 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v41 )
    goto LABEL_77;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v41,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v42 = this;
  if ( !byte_5969AE0 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v42 )
    goto LABEL_77;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v42,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)component;
    if ( !component )
      goto LABEL_77;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_77;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v8->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_77:
    sub_2213CDC(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v8->fields.effectId,
                                                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v44 = this->fields.servantData;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v44, &path, &name, 0);
        v45 = _4__this->fields.perf;
        if ( v45 )
        {
          data = v45->fields.data;
          if ( data )
          {
            v47 = path;
            battleGenderType = data->fields.battleGenderType;
            v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &battleGenderType);
            v50 = System_String__Format((System_String_o *)StringLiteral_19685/*"ef_commandaura_{0}"*/, v48, 0);
            if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v49);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v47,
                                                                        v50,
                                                                        0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
            if ( UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0, 0) )
              return 0;
            facetex = (UnityEngine_Object_o *)_4__this->fields.facetex;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
            if ( UnityEngine_Object__op_Equality(facetex, 0, 0) )
              return 0;
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
              v57 = UnityEngine_Object__Instantiate_object__59717116(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v57, 0);
              if ( v57 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v57,
                  !_4__this->fields.isHideFaceTexture,
                  0);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__194_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v8->fields.effectId,
                    v57,
                    (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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


Il2CppObject *BattleServantParamComponent__CoAddClassIconEffect_d__194__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__194__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__194_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__194_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleServantParamComponent__CoAddClassIconEffect_d__194__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__CoAddClassIconEffect_d__194__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__194_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__DelayMethod_d__183___ctor(
        BattleServantParamComponent__DelayMethod_d__183_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__DelayMethod_d__183__MoveNext(
        BattleServantParamComponent__DelayMethod_d__183_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w21
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5974257 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974257 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callBack = this->fields.callBack;
      this->fields.__1__state = -1;
      if ( !callBack )
        sub_2213CDC(0, method);
      ((void (__fastcall *)(struct BattleCallBackBase_o *, void *))callBack->klass[1]._1.image)(
        callBack,
        callBack->klass[1]._1.gc_desc);
    }
  }
  else
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BattleServantParamComponent__DelayMethod_d__183__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__183_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__DelayMethod_d__183__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__183_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleServantParamComponent__DelayMethod_d__183_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleServantParamComponent__DelayMethod_d__183__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__183_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__DelayMethod_d__183__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__183_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974254 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent___c_TypeInfo);
    byte_5974254 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleServantParamComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantParamComponent___c_TypeInfo->static_fields->__9 = (struct BattleServantParamComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleServantParamComponent___c_TypeInfo->static_fields,
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


void BattleServantParamComponent___c___setTargetMark_b__160_0(
        BattleServantParamComponent___c_o *this,
        UISprite_o *sprite,
        BattleServantParamComponent_TargetIconViewInfo_o *viewInfo,
        const MethodInfo *method)
{
  if ( !viewInfo || !sprite )
    sub_2213CDC(this, sprite);
  UIWidget__set_width((UIWidget_o *)sprite, viewInfo->fields._Width_k__BackingField, 0);
  UIWidget__set_height((UIWidget_o *)sprite, viewInfo->fields._Height_k__BackingField, 0);
  UIWidget__set_depth((UIWidget_o *)sprite, viewInfo->fields._Depth_k__BackingField, 0);
  UIWidget__set_color((UIWidget_o *)sprite, viewInfo->fields._Color_k__BackingField, 0);
}


void BattleServantParamComponent___c__DisplayClass192_0___ctor(
        BattleServantParamComponent___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c__DisplayClass192_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_5974255 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    byte_5974255 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void BattleServantParamComponent___c__DisplayClass194_0___ctor(
        BattleServantParamComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c__DisplayClass194_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w20
  struct BattleServantParamComponent_o *_4__this; // x21
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  __int64 v12; // x23
  char v13; // w22
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)BattleServantData__get_BuffData(
                                                                                       (BattleServantData_o *)this,
                                                                                       0);
    if ( !this )
      goto LABEL_19;
    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0);
    skillIcon = _4__this->fields.skillIcon;
    if ( !skillIcon )
      goto LABEL_19;
    max_length = skillIcon->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        if ( (unsigned int)v12 >= max_length )
          sub_2213CE4(this);
        this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)skillIcon->m_Items[v12];
        if ( !this )
          goto LABEL_19;
        this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                           (BattleServantSkillIConComponent_o *)this,
                                                                                           method);
        max_length = skillIcon->max_length;
        ++v12;
        v13 |= (unsigned __int8)this;
      }
      while ( (int)v12 < max_length );
      if ( (v13 & 1) != 0 )
      {
        this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)_4__this->fields.data;
        if ( this )
        {
          this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)BattleServantData__get_BuffData(
                                                                                             (BattleServantData_o *)this,
                                                                                             0);
          if ( this )
          {
            this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *)*((_QWORD *)this + 11);
            if ( this )
            {
              BattleBuffData_SkillRankChangeData__UpdateAddRightAfter(
                (BattleBuffData_SkillRankChangeData_o *)this,
                0,
                0);
              return _1__state == 0;
            }
          }
        }
LABEL_19:
        sub_2213CDC(this, method);
      }
    }
  }
  return _1__state == 0;
}


Il2CppObject *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__150_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__showSideEffectList_d__179___ctor(
        BattleServantParamComponent__showSideEffectList_d__179_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__showSideEffectList_d__179__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__179_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__179_o *v2; // x19
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v4; // x21
  BattleServantParamComponent__showSideEffectList_d__179_o *v5; // x22
  int32_t statusEffectId; // w23
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BattleServantParamComponent_c *v12; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5974258 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__);
    this = (BattleServantParamComponent__showSideEffectList_d__179_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5974258 = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__179_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    _4__this->fields.isShowingSideEffect = 0;
    return 0;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__179_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v4 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__179_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0),
        !v4) )
  {
LABEL_16:
    sub_2213CDC(this, method);
  }
  v5 = this;
  statusEffectId = v4->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v5, statusEffectId, v23, 0);
  BattleServantParamComponent__popBuffLabel(_4__this, v4, v10);
  v12 = BattleServantParamComponent_TypeInfo;
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v11);
    v12 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v12->static_fields->SideEffectShowWaitTime;
  v14 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v14, SideEffectShowWaitTime, 0);
  v2->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
}


Il2CppObject *BattleServantParamComponent__showSideEffectList_d__179__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__179_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__showSideEffectList_d__179__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__179_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleServantParamComponent__showSideEffectList_d__179_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleServantParamComponent__showSideEffectList_d__179__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__179_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__showSideEffectList_d__179__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__179_o *this,
        const MethodInfo *method)
{
  ;
}