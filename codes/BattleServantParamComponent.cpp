void BattleServantParamComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleServantParamComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleServantParamComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct BattleServantParamComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct BattleServantParamComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct BattleServantParamComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BattleServantParamComponent_StaticFields *v21; // x8

  if ( (byte_4C3B090 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_17498/*"btn_menu_select_grand"*/);
    sub_1C32C20(&StringLiteral_17476/*"btn_cs_select"*/);
    sub_1C32C20(&StringLiteral_17497/*"btn_menu_select"*/);
    sub_1C32C20(&StringLiteral_17478/*"btn_cs_select_grand_2"*/);
    sub_1C32C20(&StringLiteral_17477/*"btn_cs_select_grand"*/);
    byte_4C3B090 = 1;
  }
  static_fields = BattleServantParamComponent_TypeInfo->static_fields;
  static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH = 42;
  v4 = StringLiteral_17497/*"btn_menu_select"*/;
  static_fields->TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17497/*"btn_menu_select"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->TARGET_SP_NAME, v4, v1, v2);
  v5 = StringLiteral_17476/*"btn_cs_select"*/;
  v6 = BattleServantParamComponent_TypeInfo->static_fields;
  v6->FIX_TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17476/*"btn_cs_select"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->FIX_TARGET_SP_NAME, v5, v7, v8);
  v9 = StringLiteral_17498/*"btn_menu_select_grand"*/;
  v10 = BattleServantParamComponent_TypeInfo->static_fields;
  v10->TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17498/*"btn_menu_select_grand"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->TARGET_GRAND_SP_NAME, v9, v11, v12);
  v13 = StringLiteral_17477/*"btn_cs_select_grand"*/;
  v14 = BattleServantParamComponent_TypeInfo->static_fields;
  v14->FIX_TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17477/*"btn_cs_select_grand"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->FIX_TARGET_GRAND_SP_NAME, v13, v15, v16);
  v17 = StringLiteral_17478/*"btn_cs_select_grand_2"*/;
  v18 = BattleServantParamComponent_TypeInfo->static_fields;
  v18->FIX_TARGETING_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17478/*"btn_cs_select_grand_2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v18->FIX_TARGETING_GRAND_SP_NAME, v17, v19, v20);
  v21 = BattleServantParamComponent_TypeInfo->static_fields;
  *(_OWORD *)&v21->TARGET_ICON_SPRITE_WIDTH = xmmword_C0C3F0;
  *(_OWORD *)&v21->GRAND_TARGET_ICON_SPRITE_HEIGHT = xmmword_C0DA30;
  *(_OWORD *)&v21->FIX_TARGET_ICON_SPRITE_DEPTH = xmmword_C0C5A0;
  *(_OWORD *)&v21->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX = xmmword_C0CFA0;
  *(_OWORD *)&v21->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET = xmmword_C0CC80;
  *(_OWORD *)&v21->TARGET_ICON_SPRITE_POSX = xmmword_C0C170;
}


void BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Queue_T__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v10; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleServantParamComponent_BaseClassIconData_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C3B08F & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
    sub_1C32C20(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
    byte_4C3B08F = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(UnityEngine_GameObject___TypeInfo, 1);
  this->fields.effectobj = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Queue_T__o *)sub_1C32E6C(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v6,
    (const MethodInfo_393F3D8 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sideEffectShowQueue, (int32_t)v6, v7, v8);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_C0C280;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v10;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.classIconEffectDict, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandSpellEffectDict, (int32_t)v15, v16, v17);
  v18 = (BattleServantParamComponent_BaseClassIconData_o *)sub_1C32E6C(BattleServantParamComponent_BaseClassIconData_TypeInfo);
  BattleServantParamComponent_BaseClassIconData___ctor(v18, 0);
  this->fields.classIconData = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.classIconData, (int32_t)v18, v19, v20);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


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

  if ( (byte_4C3B08E & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C3B08E = 1;
  }
  targetMark = this->fields.targetMark;
  if ( !targetMark )
    goto LABEL_54;
  targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             targetMark,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark )
    goto LABEL_54;
  v6 = (UISprite_o *)targetMark;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.lockTargetMark,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
            targetMark = (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                                       (AssetData_o *)targetMark,
                                                       (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                                       (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
            if ( targetMark )
            {
              targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         targetMark,
                                                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        sub_1C32E7C(targetMark);
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
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3B083 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent__CoAddClassIconEffect_d__187_TypeInfo);
    byte_4C3B083 = 1;
  }
  v9 = sub_1C32E6C(BattleServantParamComponent__CoAddClassIconEffect_d__187_TypeInfo);
  BattleServantParamComponent__CoAddClassIconEffect_d__187___ctor(
    (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C32E7C(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_DWORD *)(v9 + 48) = effectId;
  *(_DWORD *)(v9 + 52) = priority;
  *(_QWORD *)(v9 + 40) = servantData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), (int32_t)servantData, v13, v14);
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
    sub_1C32E7C(0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_Collections_IEnumerator_o *BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B07C & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent__DelayMethod_d__176_TypeInfo);
    byte_4C3B07C = 1;
  }
  v6 = sub_1C32E6C(BattleServantParamComponent__DelayMethod_d__176_TypeInfo);
  BattleServantParamComponent__DelayMethod_d__176___ctor((BattleServantParamComponent__DelayMethod_d__176_o *)v6, 0, 0);
  if ( !v6 )
    sub_1C32E7C(v7);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)callBack, v8, v9);
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
        sub_1C32E84(this);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, 0);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C32E7C(this);
  }
}


void BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  System_Int32_array *IsNullOrEmpty; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v8; // x4
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x22
  bool v12; // w20

  if ( (byte_4C3B081 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C3B081 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_33EF9DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
    {
      sub_1C32E7C(IsNullOrEmpty);
    }
    max_length = IsNullOrEmpty->max_length;
    v10 = IsNullOrEmpty;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      v12 = forceDestroy;
      do
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1C32E84(IsNullOrEmpty);
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v10->m_Items[v11],
          v12,
          v8);
        LODWORD(max_length) = v10->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)max_length );
    }
  }
}


void BattleServantParamComponent__DestroyBattlePointGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3B088 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B088 = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0, 0) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_battlePointGaugeComponent = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)p_battlePointGaugeComponent, 0, v6, v7);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject **v12; // x20
  System_Collections_ICollection_o *v13; // x0
  Il2CppObject *v14; // x20
  System_Action_o *v15; // x21
  Il2CppObject *v16; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B082 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C32C20(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BattleServantParamComponent___c__DisplayClass185_0__DestroyEffectObject_b__0__);
    sub_1C32C20(&BattleServantParamComponent___c__DisplayClass185_0_TypeInfo);
    byte_4C3B082 = 1;
  }
  component = 0;
  v8 = sub_1C32E6C(BattleServantParamComponent___c__DisplayClass185_0_TypeInfo);
  BattleServantParamComponent___c__DisplayClass185_0___ctor(
    (BattleServantParamComponent___c__DisplayClass185_0_o *)v8,
    0);
  if ( !v8 )
    goto LABEL_19;
  *(_QWORD *)(v8 + 16) = effectDict;
  v12 = (Il2CppObject **)(v8 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), (int32_t)effectDict, v10, v11);
  v13 = *(System_Collections_ICollection_o **)(v8 + 16);
  *(_DWORD *)(v8 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v13, 0) )
  {
    Item = *v12;
    if ( !*v12 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v8 + 24),
           (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v12;
        if ( !*v12 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v8 + 24),
                 (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v14 = component;
          v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)v8,
            Method_BattleServantParamComponent___c__DisplayClass185_0__DestroyEffectObject_b__0__,
            0);
          if ( v14 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))v14->klass->vtable[8].methodPtr)(
              v14,
              1,
              v15,
              v14->klass->vtable[8].method);
            return;
          }
LABEL_19:
          sub_1C32E7C(Item);
        }
      }
      Item = *v12;
      if ( !*v12 )
        goto LABEL_19;
      v16 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v8 + 24),
              (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)v16, 0);
      Item = *v12;
      if ( !*v12 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v8 + 24),
        (const MethodInfo_33F11A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


void BattleServantParamComponent__DestroyGrandEffectObject(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectObj; // x20
  UnityEngine_Object_o *grandEffectRoot; // x20
  UnityEngine_Component_o *gameObject; // x0
  CGThumbnailListItem_o *p_grandEffectObj; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3B08D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B08D = 1;
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
        sub_1C32E7C(gameObject);
      }
      p_grandEffectObj = (CGThumbnailListItem_o *)&this->fields.grandEffectObj;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      klass = (UnityEngine_Object_o *)p_grandEffectObj->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(klass, 0);
      p_grandEffectObj->klass = 0;
      sub_1C32BC4(p_grandEffectObj, 0, v8, v9);
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
    sub_1C32E7C(0);
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

  if ( (byte_4C3B084 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    this = (BattleServantParamComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4C3B084 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_33EFB2C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
    sub_1C32E7C(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3ACF124 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  for ( i = isStart;
        ;
        BattleServantParamComponent__EffectStartStop_47421556(
          (BattleServantParamComponent_o *)v7,
          (UnityEngine_GameObject_o *)v9.fields._currentValue,
          i,
          v8) )
  {
    v7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
           &v9,
           (const MethodInfo_3547804 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    if ( !v7 )
      break;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v9,
    (const MethodInfo_3547800 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void BattleServantParamComponent__EffectStartStop_47421556(
        BattleServantParamComponent_o *this,
        UnityEngine_GameObject_o *effect,
        bool isStart,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3B085 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B085 = 1;
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
            (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
    {
      UnityEngine_GameObject__SetActive(effect, isStart, 0);
      return;
    }
    UnityEngine_GameObject__SetActive(effect, 1, 0);
    v6 = component;
    if ( !component )
LABEL_14:
      sub_1C32E7C(v6);
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
  int32_t FIX_TARGET_ICON_SPRITE_WIDTH; // w19
  int32_t FIX_TARGET_ICON_SPRITE_HEIGHT; // w20
  int32_t FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B03D & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B03D = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  FIX_TARGET_ICON_SPRITE_WIDTH = static_fields->FIX_TARGET_ICON_SPRITE_WIDTH;
  FIX_TARGET_ICON_SPRITE_HEIGHT = static_fields->FIX_TARGET_ICON_SPRITE_HEIGHT;
  FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->FIX_TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    FIX_TARGET_ICON_SPRITE_WIDTH,
    FIX_TARGET_ICON_SPRITE_HEIGHT,
    FIX_TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconViewInfo_47389720(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t FixTargetIconWidth; // w20
  int32_t FixTargetIconHeight; // w21
  int32_t FixTargetIconDepth; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleServantParamComponent_TargetIconViewInfo_o *v10; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v11; // x19
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B044 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B044 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  FixTargetIconWidth = v2->fields.FixTargetIconWidth;
  FixTargetIconHeight = v2->fields.FixTargetIconHeight;
  FixTargetIconDepth = v2->fields.FixTargetIconDepth;
  r = v2->fields.FixTargetIconColor.fields.r;
  g = v2->fields.FixTargetIconColor.fields.g;
  b = v2->fields.FixTargetIconColor.fields.b;
  a = v2->fields.FixTargetIconColor.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  v11 = v10;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v10,
    FixTargetIconWidth,
    FixTargetIconHeight,
    FixTargetIconDepth,
    v13,
    0);
  return v11;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET; // w19
  int32_t FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET; // w20
  int32_t FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B041 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B041 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET = static_fields->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET;
  FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET = static_fields->FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET;
  FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->FIX_TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET,
    FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET,
    FIX_TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_47390024(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t FixTargetIconWidthWhenTarget; // w20
  int32_t FixTargetIconHeightWhenTarget; // w21
  int32_t FixTargetIconDepthWhenTarget; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleServantParamComponent_TargetIconViewInfo_o *v10; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v11; // x19
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B046 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B046 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  FixTargetIconWidthWhenTarget = v2->fields.FixTargetIconWidthWhenTarget;
  FixTargetIconHeightWhenTarget = v2->fields.FixTargetIconHeightWhenTarget;
  FixTargetIconDepthWhenTarget = v2->fields.FixTargetIconDepthWhenTarget;
  r = v2->fields.FixTargetIconColorWhenTarget.fields.r;
  g = v2->fields.FixTargetIconColorWhenTarget.fields.g;
  b = v2->fields.FixTargetIconColorWhenTarget.fields.b;
  a = v2->fields.FixTargetIconColorWhenTarget.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  v11 = v10;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v10,
    FixTargetIconWidthWhenTarget,
    FixTargetIconHeightWhenTarget,
    FixTargetIconDepthWhenTarget,
    v13,
    0);
  return v11;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  AssetData_o *v18; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int32_t index; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C3B04D & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_BattleServantParamSetting___);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1C32C20(&StringLiteral_3130/*"BattleServantParamSettingData_{0}"*/);
    byte_4C3B04D = 1;
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
    sub_1C32E7C(this);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (BattleServantParamSetting_o *)AssetManager__getAssetStorageData(EnemyUiAssetStoragePath, 0);
  if ( result )
  {
    v18 = (AssetData_o *)result;
    index = v4->fields.index;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &index, v12, v13, v14, v15, v16, v17);
    v20 = System_String__Format((System_String_o *)StringLiteral_3130/*"BattleServantParamSettingData_{0}"*/, v19, 0);
    return (BattleServantParamSetting_o *)AssetData__GetObject_object__51111776(
                                            v18,
                                            v20,
                                            (const MethodInfo_30BE760 *)Method_AssetData_GetObject_BattleServantParamSetting___);
  }
  return result;
}


System_String_o *BattleServantParamComponent__GetEnemyUiAssetStoragePath(
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  int32_t EnemyUiId; // w0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C3B04B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_3093/*"Battle/EnemyUI/{0}"*/);
    byte_4C3B04B = 1;
  }
  if ( !stageEntity )
    return 0;
  EnemyUiId = StageEntity__GetEnemyUiId(stageEntity, 0);
  if ( EnemyUiId < 1 )
    return 0;
  v12 = EnemyUiId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v4, v5, v6, v7, v8, v9);
  return System_String__Format((System_String_o *)StringLiteral_3093/*"Battle/EnemyUI/{0}"*/, v10, 0);
}


void BattleServantParamComponent__GrandEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop_47421556(this, this->fields.grandEffectObj, isStart, v3);
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_WIDTH; // w19
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT; // w20
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B03E & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B03E = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  GRAND_FIX_TARGET_ICON_SPRITE_WIDTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_WIDTH;
  GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT;
  GRAND_FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    GRAND_FIX_TARGET_ICON_SPRITE_WIDTH,
    GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT,
    GRAND_FIX_TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo_47390336(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandFixTargetIconWidth; // w20
  int32_t GrandFixTargetIconHeight; // w21
  int32_t GrandFixTargetIconDepth; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleServantParamComponent_TargetIconViewInfo_o *v10; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v11; // x19
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B048 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B048 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  GrandFixTargetIconWidth = v2->fields.GrandFixTargetIconWidth;
  GrandFixTargetIconHeight = v2->fields.GrandFixTargetIconHeight;
  GrandFixTargetIconDepth = v2->fields.GrandFixTargetIconDepth;
  r = v2->fields.GrandFixTargetIconColor.fields.r;
  g = v2->fields.GrandFixTargetIconColor.fields.g;
  b = v2->fields.GrandFixTargetIconColor.fields.b;
  a = v2->fields.GrandFixTargetIconColor.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  v11 = v10;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v10,
    GrandFixTargetIconWidth,
    GrandFixTargetIconHeight,
    GrandFixTargetIconDepth,
    v13,
    0);
  return v11;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET; // w19
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET; // w20
  int32_t GRAND_FIX_TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B042 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B042 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  GRAND_FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET;
  GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET;
  GRAND_FIX_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_FIX_TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    GRAND_FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET,
    GRAND_FIX_TARGET_ICON_SPRITE_HEIGHT_WHEN_TARGET,
    GRAND_FIX_TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_47390640(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandFixTargetIconWidthWhenTarget; // w20
  int32_t GrandFixTargetIconHeightWhenTarget; // w21
  int32_t GrandFixTargetIconDepthWhenTarget; // w22
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleServantParamComponent_TargetIconViewInfo_o *v10; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v11; // x19
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B04A & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B04A = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  GrandFixTargetIconWidthWhenTarget = v2->fields.GrandFixTargetIconWidthWhenTarget;
  GrandFixTargetIconHeightWhenTarget = v2->fields.GrandFixTargetIconHeightWhenTarget;
  GrandFixTargetIconDepthWhenTarget = v2->fields.GrandFixTargetIconDepthWhenTarget;
  r = v2->fields.GrandFixTargetIconColorWhenTarget.fields.r;
  g = v2->fields.GrandFixTargetIconColorWhenTarget.fields.g;
  b = v2->fields.GrandFixTargetIconColorWhenTarget.fields.b;
  a = v2->fields.GrandFixTargetIconColorWhenTarget.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v13.fields.r = r;
  v13.fields.g = g;
  v13.fields.b = b;
  v13.fields.a = a;
  v11 = v10;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v10,
    GrandFixTargetIconWidthWhenTarget,
    GrandFixTargetIconHeightWhenTarget,
    GrandFixTargetIconDepthWhenTarget,
    v13,
    0);
  return v11;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandNormalTargetIconViewInfo(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandTargetIconWidth; // w20
  int32_t GrandTargetIconHeight; // w21
  int32_t GrandTargetIconDepth; // w19
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B047 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B047 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  GrandTargetIconWidth = v2->fields.GrandTargetIconWidth;
  GrandTargetIconHeight = v2->fields.GrandTargetIconHeight;
  GrandTargetIconDepth = v2->fields.GrandTargetIconDepth;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    GrandTargetIconWidth,
    GrandTargetIconHeight,
    GrandTargetIconDepth,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_TARGET_ICON_SPRITE_WIDTH; // w19
  int32_t GRAND_TARGET_ICON_SPRITE_HEIGHT; // w20
  int32_t GRAND_TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B03C & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B03C = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  GRAND_TARGET_ICON_SPRITE_WIDTH = static_fields->GRAND_TARGET_ICON_SPRITE_WIDTH;
  GRAND_TARGET_ICON_SPRITE_HEIGHT = static_fields->GRAND_TARGET_ICON_SPRITE_HEIGHT;
  GRAND_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    GRAND_TARGET_ICON_SPRITE_WIDTH,
    GRAND_TARGET_ICON_SPRITE_HEIGHT,
    GRAND_TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t GRAND_TARGET_ICON_SPRITE_WIDTH_WHEN_FIX; // w19
  int32_t GRAND_TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX; // w20
  int32_t GRAND_TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B040 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B040 = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  GRAND_TARGET_ICON_SPRITE_WIDTH_WHEN_FIX = static_fields->GRAND_TARGET_ICON_SPRITE_WIDTH_WHEN_FIX;
  GRAND_TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX = static_fields->GRAND_TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX;
  GRAND_TARGET_ICON_SPRITE_DEPTH = static_fields->GRAND_TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    GRAND_TARGET_ICON_SPRITE_WIDTH_WHEN_FIX,
    GRAND_TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX,
    GRAND_TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_47390500(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t GrandTargetIconWidthWhenFix; // w20
  int32_t GrandTargetIconHeightWhenFix; // w21
  int32_t GrandTargetIconDepthWhenFix; // w19
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B049 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B049 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  GrandTargetIconWidthWhenFix = v2->fields.GrandTargetIconWidthWhenFix;
  GrandTargetIconHeightWhenFix = v2->fields.GrandTargetIconHeightWhenFix;
  GrandTargetIconDepthWhenFix = v2->fields.GrandTargetIconDepthWhenFix;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    GrandTargetIconWidthWhenFix,
    GrandTargetIconHeightWhenFix,
    GrandTargetIconDepthWhenFix,
    v9,
    0);
  return v7;
}


void BattleServantParamComponent__InitNextTdGauge(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  struct BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v5; // x19
  int32_t nexttpturn; // w20
  int32_t maxtpturn; // w21
  _BOOL8 isTDSeraled; // x0

  if ( (byte_4C3B072 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B072 = 1;
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
        sub_1C32E7C(isTDSeraled);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0);
    }
  }
}


void BattleServantParamComponent__InstantiateGrandEffectObject(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectRoot; // x20
  UnityEngine_Component_o *gameObject; // x0
  struct BattlePerformance_o *perf; // x8
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21

  if ( (byte_4C3B08A & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__198_0__);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_5883/*"Effect/GrandServant"*/);
    byte_4C3B08A = 1;
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
          v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo),
          AssetLoader_LoadEndDataHandler___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__198_0__,
            0),
          !assetStorageLoadWrapper_k__BackingField) )
    {
      sub_1C32E7C(gameObject);
    }
    AssetStorageLoadWrapper__LoadAssetStorage(
      assetStorageLoadWrapper_k__BackingField,
      (System_String_o *)StringLiteral_5883/*"Effect/GrandServant"*/,
      v7,
      1,
      0);
  }
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__NormalTargetIconViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t TARGET_ICON_SPRITE_WIDTH; // w19
  int32_t TARGET_ICON_SPRITE_HEIGHT; // w20
  int32_t TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B03B & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B03B = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  TARGET_ICON_SPRITE_WIDTH = static_fields->TARGET_ICON_SPRITE_WIDTH;
  TARGET_ICON_SPRITE_HEIGHT = static_fields->TARGET_ICON_SPRITE_HEIGHT;
  TARGET_ICON_SPRITE_DEPTH = static_fields->TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    TARGET_ICON_SPRITE_WIDTH,
    TARGET_ICON_SPRITE_HEIGHT,
    TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__NormalTargetIconViewInfo_47389580(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t TargetIconWidth; // w20
  int32_t TargetIconHeight; // w21
  int32_t TargetIconDepth; // w19
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B043 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B043 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  TargetIconWidth = v2->fields.TargetIconWidth;
  TargetIconHeight = v2->fields.TargetIconHeight;
  TargetIconDepth = v2->fields.TargetIconDepth;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(v6, TargetIconWidth, TargetIconHeight, TargetIconDepth, v9, 0);
  return v7;
}


void BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3B050 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_22402/*"onClickServant"*/);
    byte_4C3B050 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v11 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId, v4, v5, v6, v7, v8, v9);
      if ( !v11 )
        sub_1C32E7C(v12);
      UnityEngine_GameObject__SendMessage_71205428(v11, (System_String_o *)StringLiteral_22402/*"onClickServant"*/, v12, 0);
    }
  }
}


void BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1C32E7C(this);
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
  BattleHpGaugeBarComponent_o *v7; // x0

  if ( (byte_4C3B075 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B075 = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
  {
    v7 = this->fields.hpGauge;
    if ( !v7
      || (BattleHpGaugeBarComponent__updateDamageGauge(v7, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0),
          (v7 = this->fields.hpGauge) == 0) )
    {
      sub_1C32E7C(v7);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v7, nowHp, 0);
  }
}


void BattleServantParamComponent__PlayDownShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  const MethodInfo *v8; // x6
  BattleServantHpShiftComponent_o *v9; // x0
  const MethodInfo *v10; // x4
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3B070 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B070 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v9 = this->fields.hpShift;
    if ( !v9
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(v9, index, effectData, this, &nextAnimationTime, 0, v8),
          (v9 = this->fields.hpShift) == 0) )
    {
      sub_1C32E7C(v9);
    }
    BattleServantHpShiftComponent__UpdateIcon(v9, index, 1, 1, v10);
  }
}


float BattleServantParamComponent__PlayShiftEffectGeneral(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  bool v8; // w0
  const MethodInfo *v9; // x6
  float result; // s0
  BattleServantHpShiftComponent_o *v11; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3B06E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B06E = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0, 0);
  result = 0.0;
  if ( v8 )
  {
    v11 = this->fields.hpShift;
    if ( !v11 )
      sub_1C32E7C(0);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v11, index, effectData, this, &nextAnimationTime, 0, v9);
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
  const MethodInfo *v10; // x3
  BattleServantHpShiftComponent_o *v11; // x0
  const MethodInfo *v12; // x6
  Il2CppObject *v13; // x21
  System_Action_int__bool__bool__o *v14; // x22
  BattleCallBack_int__bool__bool__o *v15; // x21
  BattleServantParamComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3B06F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__bool__bool__TypeInfo);
    sub_1C32C20(&Method_BattleCallBack_int__bool__bool___ctor__);
    sub_1C32C20(&BattleCallBack_int__bool__bool__TypeInfo);
    sub_1C32C20(&Method_BattleServantHpShiftComponent_UpdateIcon__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B06F = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v11 = this->fields.hpShift;
    if ( !v11
      || (BattleServantHpShiftComponent__UpdateIconActive(v11, index, 1, v10), (v11 = this->fields.hpShift) == 0) )
    {
      sub_1C32E7C(v11);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v11, index, effectData, this, &nextAnimationTime, 0, v12);
    v13 = (Il2CppObject *)this->fields.hpShift;
    v14 = (System_Action_int__bool__bool__o *)sub_1C32E6C(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v14, v13, Method_BattleServantHpShiftComponent_UpdateIcon__, 0);
    v15 = (BattleCallBack_int__bool__bool__o *)sub_1C32E6C(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v15,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v14,
      (const MethodInfo_330D2F4 *)Method_BattleCallBack_int__bool__bool___ctor__);
    v18 = BattleServantParamComponent__DelayMethod(v16, delayTime, (BattleCallBackBase_o *)v15, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v18, 0);
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
        sub_1C32E84(this);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, 0);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C32E7C(this);
  }
}


void BattleServantParamComponent__ResetDefaultBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultServantParam; // x19
  void *Component_object; // x0
  UnityEngine_Vector3_o **p_defaultServantParam; // x19
  struct BattleServantParamSetting_o *v6; // x8
  struct BattleServantParamSetting_o *v7; // x8
  struct BattleServantParamSetting_o *v8; // x8
  struct BattleServantParamSetting_o *v9; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3B04F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B04F = 1;
  }
  component = 0;
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(defaultServantParam, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    p_defaultServantParam = (UnityEngine_Vector3_o **)&this->fields.defaultServantParam;
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
                goto LABEL_26;
              showBuffComponent->fields.maxCount = BuffIconMax;
            }
            BuffIconMaxLine = v9->fields.BuffIconMaxLine;
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
              v9->fields.BuffIconPosition,
              0);
            if ( *p_defaultServantParam )
            {
              GameObjectHelper__SetActiveSafely(this->fields.levelRoot, BYTE1((*p_defaultServantParam)[2].fields.x), 0);
              Component_object = (void *)UnityEngine_Component__TryGetComponent_object_(
                                           (UnityEngine_Component_o *)this,
                                           &component,
                                           (const MethodInfo_30D4CBC *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
              if ( ((unsigned __int8)Component_object & 1) == 0 )
              {
LABEL_24:
                *p_defaultServantParam = 0;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultServantParam, 0, v13, v14);
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
    sub_1C32E7C(Component_object);
  }
}


void BattleServantParamComponent__SetActiveParameterView(
        BattleServantParamComponent_o *this,
        bool val,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  UnityEngine_GameObject_o *root; // x0
  bool v7; // w1
  bool v8; // w20

  data = this->fields.data;
  if ( data && !BattleServantData__isDead(data, 0) )
  {
    v8 = val;
    BattleServantParamComponent__setTouch(this, v8, method);
    root = this->fields.root;
    if ( root )
    {
      v7 = v8;
      goto LABEL_7;
    }
LABEL_8:
    sub_1C32E7C(root);
  }
  BattleServantParamComponent__setTouch(this, 0, method);
  root = this->fields.root;
  if ( !root )
    goto LABEL_8;
  v7 = 0;
LABEL_7:
  UnityEngine_GameObject__SetActive(root, v7, 0);
}


void BattleServantParamComponent__SetBreakSpriteDisplay(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *breakSprite; // x21
  UnityEngine_Behaviour_o *v6; // x0
  UnityEngine_Object_o *hplabel; // x21
  UnityEngine_Object_o *maxhplabel; // x21
  UnityEngine_Object_o *totalhplabel; // x21

  if ( (byte_4C3B089 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B089 = 1;
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v6, flg, 0);
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v6, !flg, 0);
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v6, !flg, 0);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
    if ( v6 )
    {
      UnityEngine_Behaviour__set_enabled(v6, !flg, 0);
      return;
    }
LABEL_24:
    sub_1C32E7C(v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__SetEnemyParamPosition(
        BattleServantParamComponent_o *this,
        BaseEnemyParamPosData_o *paramPosData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleServantParamSetting; // x21
  __int64 showBuffComponent; // x0
  UnityEngine_Transform_o *v7; // x21
  int v8; // s0 OVERLAPPED
  struct BattleServantShowBuffComponent_o *v11; // x19
  struct BattleServantParamSetting_o *v12; // x8
  struct BattleServantParamSetting_o *v13; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *v15; // x10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C3B059 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B059 = 1;
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
    v7 = (UnityEngine_Transform_o *)showBuffComponent;
    showBuffComponent = (__int64)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.showBuffComponent,
                                   0);
    if ( !showBuffComponent )
      goto LABEL_22;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)showBuffComponent, 0);
    if ( !paramPosData )
      goto LABEL_22;
    showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *, long double, long double, long double))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.methodPtr)(
                          paramPosData,
                          paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method,
                          *(long double *)&localPosition.fields.x,
                          *(long double *)&localPosition.fields.y,
                          *(long double *)&localPosition.fields.z);
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v7, *(UnityEngine_Vector3_o *)&v8, 0);
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
    sub_1C32E7C(showBuffComponent);
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
  System_Nullable_int__o v7; // x0
  int32_t v8; // w1
  System_Nullable_int__o v9; // x0
  int v10; // w20
  void *grandEffectObj; // x0
  int v12; // w8
  void *v13; // x19
  unsigned int v14; // w21
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3B08B & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    byte_4C3B08B = 1;
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
                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___)) != 0)
    && (klass = (int32_t)Component_object[11].klass,
        v7 = (System_Nullable_int__o)&v15,
        v15 = 0,
        System_Nullable_int____ctor(v7, klass, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__),
        (_BYTE)v15) )
  {
    v8 = PARTY_ORGANIZATION_CLASS_ICON_DEPTH - HIDWORD(v15);
    v9 = (System_Nullable_int__o)&v15;
    v15 = 0;
    System_Nullable_int____ctor(v9, v8, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
    v10 = HIDWORD(v15);
  }
  else
  {
    v10 = 0;
  }
  grandEffectObj = this->fields.grandEffectObj;
  if ( !grandEffectObj )
    goto LABEL_19;
  grandEffectObj = UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                     (UnityEngine_GameObject_o *)grandEffectObj,
                     (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !grandEffectObj )
    goto LABEL_19;
  v12 = *((_DWORD *)grandEffectObj + 6);
  v13 = grandEffectObj;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1C32E84(grandEffectObj);
      grandEffectObj = (void *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !grandEffectObj )
        break;
      UIWidget__set_depth((UIWidget_o *)grandEffectObj, *((_DWORD *)grandEffectObj + 44) - v10, 0);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_19:
    sub_1C32E7C(grandEffectObj);
  }
}


void BattleServantParamComponent__SetupDefaultBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultServantParam; // x20
  Il2CppObject *Component_object; // x21
  __int64 v5; // x20
  UnityEngine_Component_o *clsIconComponent; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p_defaultServantParam; // x19
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B04E & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamSetting_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B04E = 1;
  }
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(defaultServantParam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    v5 = sub_1C32E6C(BattleServantParamSetting_TypeInfo);
    BattleServantParamSetting___ctor((BattleServantParamSetting_o *)v5, 0);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent )
      goto LABEL_25;
    clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(clsIconComponent, 0);
    if ( !clsIconComponent )
      goto LABEL_25;
    clsIconComponent = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                    (UnityEngine_GameObject_o *)clsIconComponent,
                                                    0);
    if ( !v5 )
      goto LABEL_25;
    *(_BYTE *)(v5 + 24) = (unsigned __int8)clsIconComponent & 1;
    clsIconComponent = (UnityEngine_Component_o *)this->fields.levelRoot;
    if ( !clsIconComponent )
      goto LABEL_25;
    *(_BYTE *)(v5 + 25) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)clsIconComponent, 0);
    clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
    if ( !clsIconComponent
      || (*(UnityEngine_Vector3_o *)(v5 + 28) = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)clsIconComponent,
                                                  0),
          (clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0)
      || (*(UnityEngine_Vector3_o *)(v5 + 40) = UnityEngine_Transform__get_localScale(
                                                  (UnityEngine_Transform_o *)clsIconComponent,
                                                  0),
          (clsIconComponent = (UnityEngine_Component_o *)this->fields.showBuffComponent) == 0)
      || (*(_QWORD *)(v5 + 64) = clsIconComponent[1].fields.m_CachedPtr,
          (clsIconComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(clsIconComponent, 0)) == 0) )
    {
LABEL_25:
      sub_1C32E7C(clsIconComponent);
    }
    *(UnityEngine_Vector3_o *)(v5 + 52) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)clsIconComponent,
                                            0);
    if ( Component_object )
    {
      center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
    }
    else
    {
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      center = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    p_defaultServantParam = (CGThumbnailListItem_o *)&this->fields.defaultServantParam;
    *(UnityEngine_Vector3_o *)(v5 + 72) = center;
    if ( Component_object )
    {
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
    }
    else
    {
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      size = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    *(UnityEngine_Vector3_o *)(v5 + 84) = size;
    p_defaultServantParam->klass = (CGThumbnailListItem_c *)v5;
    sub_1C32BC4(p_defaultServantParam, v5, v7, v8);
  }
}


void BattleServantParamComponent__ShowFaceIcon(
        BattleServantParamComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3B054 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B054 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, duration, v8, 0);
  }
}


void BattleServantParamComponent__SyncGrandEffectParticle(
        BattleServantParamComponent_o *this,
        float syncTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandEffectObj; // x20
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4C3B08C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B08C = 1;
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
                                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    CommonEffectComponent__SyncParticleList((CommonEffectComponent_o *)Component_object, syncTime, 0);
  }
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo(
        const MethodInfo *method)
{
  BattleServantParamComponent_c *v1; // x0
  struct BattleServantParamComponent_StaticFields *static_fields; // x8
  int32_t TARGET_ICON_SPRITE_WIDTH_WHEN_FIX; // w19
  int32_t TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX; // w20
  int32_t TARGET_ICON_SPRITE_DEPTH; // w21
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B03F & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B03F = 1;
  }
  v1 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v1 = BattleServantParamComponent_TypeInfo;
  }
  static_fields = v1->static_fields;
  TARGET_ICON_SPRITE_WIDTH_WHEN_FIX = static_fields->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX;
  TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX = static_fields->TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX;
  TARGET_ICON_SPRITE_DEPTH = static_fields->TARGET_ICON_SPRITE_DEPTH;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    TARGET_ICON_SPRITE_WIDTH_WHEN_FIX,
    TARGET_ICON_SPRITE_HEIGHT_WHEN_FIX,
    TARGET_ICON_SPRITE_DEPTH,
    v9,
    0);
  return v7;
}


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo_47389884(
        BattleServantParamSetting_o *setting,
        const MethodInfo *method)
{
  BattleServantParamSetting_o *v2; // x19
  int32_t TargetIconWidthWhenFix; // w20
  int32_t TargetIconHeightWhenFix; // w21
  int32_t TargetIconDepthWhenFix; // w19
  BattleServantParamComponent_TargetIconViewInfo_o *v6; // x0
  BattleServantParamComponent_TargetIconViewInfo_o *v7; // x22
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = setting;
  if ( (byte_4C3B045 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C32C20(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C3B045 = 1;
  }
  if ( !v2 )
    sub_1C32E7C(setting);
  TargetIconWidthWhenFix = v2->fields.TargetIconWidthWhenFix;
  TargetIconHeightWhenFix = v2->fields.TargetIconHeightWhenFix;
  TargetIconDepthWhenFix = v2->fields.TargetIconDepthWhenFix;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C32E6C(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  v7 = v6;
  BattleServantParamComponent_TargetIconViewInfo___ctor(
    v6,
    TargetIconWidthWhenFix,
    TargetIconHeightWhenFix,
    TargetIconDepthWhenFix,
    v9,
    0);
  return v7;
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
  if ( (byte_4C3B086 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B086 = 1;
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
        sub_1C32E7C(this);
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
  if ( (byte_4C3B087 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B087 = 1;
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
        sub_1C32E7C(this);
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
  Il2CppObject *current; // x23
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x4
  System_Collections_IEnumerator_o *v14; // x0
  UnityEngine_Coroutine_o *started; // x0
  _BOOL8 v16; // x0
  int32_t monitor; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v22; // w20
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x4
  BattleServantParamComponent_o *v25; // x0
  const MethodInfo *v26; // x4
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C3B080 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleServantParamComponent_o *)sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3B080 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  entity = 0;
  memset(&v28, 0, sizeof(v28));
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
  v8 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_33EF9CC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v30 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C32E7C(v10);
    if ( !v9 )
      sub_1C32E7C(v10);
    v12 = DataMasterBase_object__object__int___TryGetEntity(
            v9,
            &entity,
            (int32_t)v30.fields._current[21].monitor,
            (const MethodInfo_3396884 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v12 )
    {
      if ( !entity )
        sub_1C32E7C(v12);
      v14 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v13);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v4, v14, 0);
      if ( !v8 )
        sub_1C32E7C(started);
      v16 = System_Collections_Generic_List_int___Contains(
              v8,
              (int32_t)current[21].monitor,
              (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v16 )
      {
        monitor = (int32_t)current[21].monitor;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C32E7C(v16);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            monitor,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = monitor;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v8 )
LABEL_38:
    sub_1C32E7C(this);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v8,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v28,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1C32E7C(0);
    v22 = (int32_t)v28.fields._current;
    v23 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v28.fields._current,
            (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v23 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v23,
        v4->fields.classIconEffectDict,
        v22,
        0,
        v24);
      BattleServantParamComponent__DestroyEffectObject(v25, v4->fields.commandSpellEffectDict, v22, 0, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v28,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void BattleServantParamComponent__UpdateConditionBuffIcon(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        bool isPlayFlashEffect,
        bool isUpdateShowBuffDataReady,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v5; // x20
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
      0);
  }
  this = (BattleServantParamComponent_o *)v5->fields.showBuffComponent;
  if ( !this )
LABEL_8:
    sub_1C32E7C(this);
  BattleServantShowBuffComponent__UpdateConditionBuffList(
    (BattleServantShowBuffComponent_o *)this,
    ShowConditionBuff,
    isPlayFlashEffect,
    0);
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
    sub_1C32E7C(this);
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


void BattleServantParamComponent__UpdateNameLabel(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  BattleServantData_o *data; // x0
  UILabel_o *v5; // x19

  if ( (byte_4C3B07E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B07E = 1;
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
        || (v5 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0), !v5) )
      {
        sub_1C32E7C(data);
      }
      UILabel__set_text(v5, (System_String_o *)data, 0);
    }
  }
}


void BattleServantParamComponent__UpdateNpImmediately(
        BattleServantParamComponent_o *this,
        int32_t np,
        const MethodInfo *method)
{
  UnityEngine_Object_o *npcomp; // x21
  BattleNpGaugeSystemComponent_o *v6; // x0

  if ( (byte_4C3B05C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B05C = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
  {
    v6 = this->fields.npcomp;
    if ( !v6 )
      sub_1C32E7C(0);
    BattleNpGaugeSystemComponent__setNowParam(v6, np, 0);
  }
}


void BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  const MethodInfo *v6; // x3
  BattleServantChangeBarComponent_o *v7; // x0

  if ( (byte_4C3B071 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B071 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_1C32E7C(0);
    BattleServantChangeBarComponent__setBarType(v7, 1, curGaugeIndex, v6);
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
  __int64 v14; // x0
  System_Collections_Hashtable_o *v15; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  __int64 v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  __int64 v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  __int64 v42; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v44[4]; // [xsp+8h] [xbp-78h] BYREF
  float v45; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v46; // [xsp+18h] [xbp-68h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C3B074 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&System_Collections_Hashtable_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_20278/*"ignoretimescale"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22428/*"oncompleteparams"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_9978/*"OnUpdateShiftGaugeChangeHp"*/);
    sub_1C32C20(&StringLiteral_9881/*"OnCompleteShiftGaugeChangeHp"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B074 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality(hpGauge, 0, 0);
  if ( (v14 & 1) != 0 )
  {
    v14 = (__int64)this->fields.hpGauge;
    if ( !v14 )
      goto LABEL_13;
    BattleHpGaugeBarComponent__setInitValue((BattleHpGaugeBarComponent_o *)v14, fromHp, maxHp, 0);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v15 = (System_Collections_Hashtable_o *)sub_1C32E6C(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_64882772(v15, 0),
        v47 = fromHp,
        v14 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v16, v17, v18, v19, v20, v21),
        !v15) )
  {
LABEL_13:
    sub_1C32E7C(v14);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_19689/*"from"*/,
    v14,
    v15->klass->vtable._22_Add.method);
  v46 = toHp;
  v28 = j_il2cpp_value_box_0(int_TypeInfo, &v46, v22, v23, v24, v25, v26, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_24106/*"to"*/,
    v28,
    v15->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_22435/*"onupdate"*/,
    StringLiteral_9978/*"OnUpdateShiftGaugeChangeHp"*/,
    v15->klass->vtable._22_Add.method);
  v45 = time;
  v35 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v29, v30, v31, v32, v33, v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_24067/*"time"*/,
    v35,
    v15->klass->vtable._22_Add.method);
  v44[0] = 1;
  v42 = j_il2cpp_value_box_0(bool_TypeInfo, v44, v36, v37, v38, v39, v40, v41);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_20278/*"ignoretimescale"*/,
    v42,
    v15->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_22427/*"oncomplete"*/,
    StringLiteral_9881/*"OnCompleteShiftGaugeChangeHp"*/,
    v15->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
    v15,
    StringLiteral_22428/*"oncompleteparams"*/,
    playShiftGauge,
    v15->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v15, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__UpdateShortNameLabel(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *shortNameLabel; // x20
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v8; // w21
  UnityEngine_Object_o *v9; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v13; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *v18; // x20
  int defaultShortNameLabelWidth; // w1
  __int64 v20; // x8
  float v21; // s8
  float v22; // s1
  float v23; // s0 OVERLAPPED
  float v24; // s2

  if ( (byte_4C3B07F & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17096/*"battle_name"*/);
    byte_4C3B07F = 1;
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
      v8 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0, 0) )
      {
        v9 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71223640(v9, 0);
      }
      if ( v8 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
        GameObjectExtensions__ResetLocalScale(gameObject, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0);
        v13 = AssetStorage
            ? AssetData__GetObject_object__51111776(
                AssetStorage,
                (System_String_o *)StringLiteral_17096/*"battle_name"*/,
                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v15 = UnityEngine_Object__Instantiate_object__51812484(
                v13,
                transform,
                (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v15;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v15, v16, v17);
      }
      data = this->fields.data;
      if ( data )
      {
        v18 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0);
        if ( v18 )
        {
          UILabel__set_text(v18, (System_String_o *)data, 0);
          defaultShortNameLabelWidth = this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_44;
            defaultShortNameLabelWidth = data->fields._iconLimitCount_k__BackingField.fields.fakeValue;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_44;
          }
          v20 = *(_QWORD *)&data->fields.nexttpturn;
          if ( !v20 )
            goto LABEL_44;
          v21 = (float)(data->fields.downtdrate * *(_DWORD *)(v20 + 16));
          if ( (float)defaultShortNameLabelWidth >= v21 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
              if ( data )
              {
                v23 = 1.0;
                v22 = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v21, 0);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
              if ( data )
              {
                v22 = 1.0;
                v23 = (float)this->fields.defaultShortNameLabelWidth / v21;
LABEL_43:
                v24 = 1.0;
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v23,
                  0);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_1C32E7C(data);
    }
  }
}


void BattleServantParamComponent__UpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *updated; // x1

  if ( this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    {
      updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, v4);
      UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, updated, 0);
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
  BattleServantData_o *classIconData; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v8; // x19

  if ( (byte_4C3B063 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B063 = 1;
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
    BattleServantParamComponent__UpdateNameLabel(this, v4);
    BattleServantParamComponent__UpdateShortNameLabel(this, v5);
    BattleServantParamComponent__updateSkillIcon(this, 0, v6);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      classIconData = this->fields.data;
      if ( classIconData )
      {
        v8 = this->fields.levelLabel;
        classIconData = (BattleServantData_o *)BattleServantData__getLevelLabel(classIconData, 0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)classIconData, 0);
          return;
        }
      }
LABEL_12:
      sub_1C32E7C(classIconData);
    }
  }
}


void BattleServantParamComponent__UpdateStatusFace(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  BattleServantData_o *data; // x0
  UITexture_o *v6; // x21
  BattleServantData_o *v7; // x8
  int32_t v8; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3B07D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C3B07D = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (CGThumbnailListItem_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
    {
      data = this->fields.data;
      if ( !data
        || (v6 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0),
            (v7 = this->fields.data) == 0) )
      {
        sub_1C32E7C(data);
      }
      v8 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v7, 1, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v6, v8, DispLimitCount, 0);
      p_facetex->klass = (CGThumbnailListItem_c *)Manager__loadStatusFace;
      sub_1C32BC4(p_facetex, (int32_t)Manager__loadStatusFace, v11, v12);
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

  if ( (byte_4C3B073 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B073 = 1;
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
          sub_1C32E84(data);
        v7 = this->fields.nextTdGauge;
        v9 = nowAndMaxArray->m_Items[0];
        v8 = nowAndMaxArray->m_Items[1];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0);
        if ( !v7 )
          sub_1C32E7C(isTDSeraled);
        BattleNextTDgaugeComponent__setInitGauge(v7, v9, v8, isTDSeraled, 0);
      }
    }
  }
}


void BattleServantParamComponent___InstantiateGrandEffectObject_b__198_0(
        BattleServantParamComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  int32_t frameType_k__BackingField; // w21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  Il2CppObject *Object_object__51111776; // x21
  UnityEngine_Transform_o *grandEffectRoot; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C3B091 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_18816/*"ef_classicon_flash_{0}"*/);
    this = (BattleServantParamComponent_o *)sub_1C32C20(&StringLiteral_18814/*"ef_classicon_flash"*/);
    byte_4C3B091 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_14;
  frameType_k__BackingField = data->fields._frameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType_k__BackingField, 1, 0);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &AdjustFrameTypeForClass, v7, v8, v9, v10, v11, v12);
  this = (BattleServantParamComponent_o *)System_String__Format((System_String_o *)StringLiteral_18816/*"ef_classicon_flash_{0}"*/, v13, 0);
  if ( !assetData )
LABEL_14:
    sub_1C32E7C(this);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              assetData,
                              (System_String_o *)this,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                assetData,
                                (System_String_o *)StringLiteral_18814/*"ef_classicon_flash"*/,
                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  grandEffectRoot = v4->fields.grandEffectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object__51812484(
          Object_object__51111776,
          grandEffectRoot,
          (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  v4->fields.grandEffectObj = (struct UnityEngine_GameObject_o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.grandEffectObj, (int32_t)v16, v17, v18);
  BattleServantParamComponent__SetGrandEffectDepth(v4, v19);
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
  if ( (byte_4C3B066 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C32C20(&Method_BattleServantParamComponent_callSkillIcon__);
    byte_4C3B066 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1C32E7C(this);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C32E84(this);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                0);
      if ( !(v5 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v7 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C32C38(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
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
  const MethodInfo *v5; // x2
  struct BattleServantData_o *data; // x8
  int32_t v7; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v9; // x4

  BattleServantParamComponent__initUpdateView(this, 0, v2);
  data = this->fields.data;
  if ( !data
    || (BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v5), (NowHp = this->fields.data) == 0)
    || (NowHp = (BattleServantData_o *)BattleServantData__getNowHp(NowHp, 0), !this->fields.data) )
  {
    sub_1C32E7C(NowHp);
  }
  v7 = (int)NowHp;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
  BattleServantParamComponent__updateHplabel(this, v7, MaxHp, 1, v9);
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
  BattleServantShowBuffComponent_o *showBuffComponent; // x19

  if ( (byte_4C3B07B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_4C3B07B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3
    || (showBuffComponent = this->fields.showBuffComponent,
        v4 = System_Collections_Generic_List_object___ToArray(
               v3,
               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1C32E7C(v4);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v4, 0);
}


void BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x22
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4C3B068 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B068 = 1;
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
                                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0 )
    {
      sub_1C32E7C(Component_object);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3B067 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_TypeInfo);
    byte_4C3B067 = 1;
  }
  v3 = sub_1C32E6C(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_TypeInfo);
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145___ctor(
    (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
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
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x22
  int32_t v8; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v14; // x21
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v16; // x8
  struct BattleServantParamSetting_o *v17; // x8
  struct BattleServantParamSetting_o *v18; // x8
  struct BattleServantParamSetting_o *v19; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  UnityEngine_Object_o *nameLabel; // x21
  const MethodInfo *v27; // x1
  UILabel_o *v28; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v30; // x21
  int32_t v31; // w22
  UnityEngine_Object_o *hpChange; // x21
  const MethodInfo *v33; // x3
  struct BattleServantData_o *v34; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v40; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v42; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v44; // x21
  struct BattleServantData_o *v45; // x8
  BattleNpGaugeSystemComponent_o *v46; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v48; // w0
  const MethodInfo *v49; // x2
  BattleNextTDgaugeComponent_o *v50; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  const MethodInfo *v54; // x1
  struct BattleServantData_o *v55; // x8
  UISprite_o *v56; // x20
  UISprite_o *v57; // x20
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v59; // x1
  UnityEngine_Object_o *breakPoint; // x20
  const MethodInfo *v61; // x4
  struct BattleServantData_o *v62; // x8
  struct BattleServantData_o *v63; // x8
  ServantBattlePointMaster_o *v64; // x20
  __int64 v65; // x21
  __int64 v66; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v68; // x20
  __int64 v69; // x9
  int *p_offset; // x10
  __int64 v71; // x0
  __int64 v72; // x20
  BattlePointData_o *v73; // x23
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x21
  BattleServantData_o *v83; // x0
  BattlePointData_o *BattlePointData; // x0
  BattlePointData_o *v85; // x28
  struct BattleServantData_o *v86; // x8
  UnityEngine_Object_o *battlePointRoot; // x22
  int32_t v88; // w22
  UnityEngine_Transform_o *v89; // x23
  UnityEngine_Object_o *Manager__LoadBattlePointGauge; // x22
  _BOOL8 v91; // x0
  Il2CppObject *Component_object; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  BattlePointGaugeComponent_o *battlePointGaugeComponent; // x0
  const MethodInfo *v96; // x2
  __int64 v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4C3B062 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantBattlePointMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&FileName_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C3B062 = 1;
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
      goto LABEL_178;
    v7 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0);
    if ( !this->fields.data )
      goto LABEL_178;
    v8 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v7, v8, DispLimitCount, 0);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.facetex, (int32_t)Manager__loadStatusFace, v11, v12);
  }
  data = (BattleServantData_o *)this->fields.classIconData;
  if ( !data )
    goto LABEL_178;
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
      goto LABEL_178;
    v14 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0);
    if ( !v14 )
      goto LABEL_178;
    UILabel__set_text(v14, (System_String_o *)data, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v16 = this->fields.battleServantParamSetting;
    if ( !v16 )
      goto LABEL_178;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.clsIconComponent,
      v16->fields.IsDispClassIcon,
      0);
    v17 = this->fields.battleServantParamSetting;
    if ( !v17 )
      goto LABEL_178;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this, v17->fields.UiPosition, 0);
    v18 = this->fields.battleServantParamSetting;
    if ( !v18 )
      goto LABEL_178;
    ComponentHelper__SetLocalScale((UnityEngine_Component_o *)this, v18->fields.UiScale, 0);
    v19 = this->fields.battleServantParamSetting;
    if ( !v19 )
      goto LABEL_178;
    BuffIconMax = v19->fields.BuffIconMax;
    if ( (BuffIconMax & 0x80000000) == 0 )
    {
      showBuffComponent = this->fields.showBuffComponent;
      if ( !showBuffComponent )
        goto LABEL_178;
      showBuffComponent->fields.maxCount = BuffIconMax;
    }
    BuffIconMaxLine = v19->fields.BuffIconMaxLine;
    if ( BuffIconMaxLine < 0 )
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
    }
    else
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
      if ( !data )
        goto LABEL_178;
      HIDWORD(data->fields.userSvtId.fields.hiddenValue) = BuffIconMaxLine;
    }
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)data, v19->fields.BuffIconPosition, 0);
    v23 = this->fields.battleServantParamSetting;
    if ( !v23 )
      goto LABEL_178;
    GameObjectHelper__SetActiveSafely(this->fields.levelRoot, v23->fields.IsDispLevel, 0);
    data = (BattleServantData_o *)UnityEngine_Component__TryGetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    &component,
                                    (const MethodInfo_30D4CBC *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v24 = this->fields.battleServantParamSetting;
      if ( !v24 )
        goto LABEL_178;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_178;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)component, v24->fields.BoxColliderPosition, 0);
      v25 = this->fields.battleServantParamSetting;
      if ( !v25 )
        goto LABEL_178;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_178;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)component, v25->fields.BoxColliderSize, 0);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v28 = this->fields.nameLabel;
    data = (BattleServantData_o *)BattleServantData__getServantName(data, 0);
    if ( !v28 )
      goto LABEL_178;
    UILabel__set_text(v28, (System_String_o *)data, 0);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v27);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v30 = this->fields.hpGauge;
    data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0);
    if ( !this->fields.data )
      goto LABEL_178;
    v31 = (int)data;
    data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0);
    if ( !v30 )
      goto LABEL_178;
    BattleHpGaugeBarComponent__setInitValue(v30, v31, (int32_t)data, 0);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v34 = this->fields.data;
    if ( !v34 )
      goto LABEL_178;
    shiftDeckList = v34->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_178;
    data = (BattleServantData_o *)this->fields.hpChange;
    if ( !data )
      goto LABEL_178;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)data,
      1,
      LODWORD(shiftDeckList->max_length) - v34->fields.shiftDeckIndex,
      v33);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    data = (BattleServantData_o *)this->fields.hpShift;
    if ( !data )
      goto LABEL_178;
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v38);
  }
  BattleServantParamComponent__setAtlas(this, v37);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    data = (BattleServantData_o *)this->fields.breakSprite;
    if ( !data )
      goto LABEL_178;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_178;
  data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0);
  if ( !this->fields.data )
    goto LABEL_178;
  v40 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
  BattleServantParamComponent__updateHplabel(this, v40, MaxHp, 1, v42);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v44 = this->fields.npcomp;
    if ( !v44 )
      goto LABEL_178;
    v44->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v44->fields.maxparam = BattleServantData__getCountMaxNp(data, 0);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_178;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0);
    v45 = this->fields.data;
    if ( !v45 )
      goto LABEL_178;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_178;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v45->fields.np, 0);
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v46 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0);
    if ( !v46 )
      goto LABEL_178;
    BattleNpGaugeSystemComponent__setUseNp(v46, (unsigned __int8)data & 1, 0);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v48 = UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0);
  if ( (v3 & 1) == 0 && v48 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v50 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0);
    if ( !v50 )
      goto LABEL_178;
    BattleNextTDgaugeComponent__setInitGauge(v50, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v49);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0, 0) )
  {
    data = (BattleServantData_o *)this->fields.friendIcon;
    if ( !data )
      goto LABEL_178;
    data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
    if ( !data )
      goto LABEL_178;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0);
    v55 = this->fields.data;
    if ( !v55 )
      goto LABEL_178;
    if ( v55->fields.followerType )
    {
      v56 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v56 )
        goto LABEL_178;
      UISprite__set_spriteName(v56, FileName_TypeInfo->static_fields->friendIconName, 0);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_178;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
      if ( !data )
        goto LABEL_178;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
      v55 = this->fields.data;
      if ( !v55 )
        goto LABEL_178;
    }
    if ( v55->fields.flgEventJoin )
    {
      v57 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v57 )
        goto LABEL_178;
      UISprite__set_spriteName(v57, FileName_TypeInfo->static_fields->eventJoinIconName, 0);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_178;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
      if ( !data )
        goto LABEL_178;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v54);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_178;
  data = (BattleServantData_o *)perf->fields.data;
  if ( !data )
    goto LABEL_178;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v62 = this->fields.data;
      if ( !v62 )
        goto LABEL_178;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_178;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v62->fields.defeatPoint,
        v62->fields.maxDefeatPoint,
        v62->fields.isEnemy,
        v61);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v59);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v63 = this->fields.data;
  if ( !v63 )
    goto LABEL_178;
  v64 = (ServantBattlePointMaster_o *)data;
  v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v66;
  *(_QWORD *)&v102.fields.fakeValue = v65;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v102, 0);
  if ( !v64
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v64, (int32_t)data, 0)) == 0 )
  {
LABEL_178:
    sub_1C32E7C(data);
  }
  klass = data->klass;
  v68 = data;
  v69 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v69;
      p_offset += 4;
      if ( !v69 )
        goto LABEL_130;
    }
    v71 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_130:
    v71 = sub_1C83438(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0);
  }
  v72 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v71)(v68, *(_QWORD *)(v71 + 8));
  if ( !v72 )
    sub_1C32E7C(0);
  v73 = 0;
  while ( 1 )
  {
    v74 = *(_QWORD *)v72;
    v75 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v76 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v75;
        v76 += 4;
        if ( !v75 )
          goto LABEL_138;
      }
      v77 = v74 + 16LL * *v76 + 312;
    }
    else
    {
LABEL_138:
      v77 = sub_1C83438(v72, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v72, *(_QWORD *)(v77 + 8)) & 1) == 0 )
      break;
    v78 = *(_QWORD *)v72;
    v79 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v80 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v79;
        v80 += 4;
        if ( !v79 )
          goto LABEL_145;
      }
      v81 = v78 + 16LL * *v80 + 312;
    }
    else
    {
LABEL_145:
      v81 = sub_1C83438(v72, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0);
    }
    v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v72, *(_QWORD *)(v81 + 8));
    if ( !v82 )
      sub_1C32E7C(0);
    v83 = this->fields.data;
    if ( !v83 )
      sub_1C32E7C(0);
    BattlePointData = BattleServantData__GetBattlePointData(v83, *(_DWORD *)(v82 + 20), 0);
    if ( BattlePointData )
      v85 = BattlePointData;
    else
      v85 = v73;
    if ( !BattlePointData )
      goto LABEL_186;
    if ( !v85 )
      sub_1C32E7C(BattlePointData);
    v73 = BattlePointData;
    if ( !v85->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_186:
      v86 = this->fields.data;
      if ( !v86 )
        sub_1C32E7C(BattlePointData);
      v73 = v85;
      if ( !v86->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v73 = v85;
        if ( UnityEngine_Object__op_Inequality(battlePointRoot, 0, 0) )
        {
          v88 = *(_DWORD *)(v82 + 20);
          v89 = this->fields.battlePointRoot;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__LoadBattlePointGauge = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadBattlePointGauge(
                                                                    v88,
                                                                    v89,
                                                                    0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v91 = UnityEngine_Object__op_Equality(Manager__LoadBattlePointGauge, 0, 0);
          v73 = v85;
          if ( !v91 )
          {
            if ( !Manager__LoadBattlePointGauge )
              sub_1C32E7C(v91);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Manager__LoadBattlePointGauge,
                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
            this->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)Component_object;
            sub_1C32BC4(
              (CGThumbnailListItem_o *)&this->fields.battlePointGaugeComponent,
              (int32_t)Component_object,
              v93,
              v94);
            battlePointGaugeComponent = this->fields.battlePointGaugeComponent;
            if ( !battlePointGaugeComponent )
              sub_1C32E7C(0);
            BattlePointGaugeComponent__Init(battlePointGaugeComponent, *(_DWORD *)(v82 + 20), 0);
            BattleServantParamComponent__UpdateBattlePointImmediately(this, this->fields.data, v96);
            break;
          }
        }
      }
    }
  }
  v97 = *(_QWORD *)v72;
  v98 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
  {
    v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v99 - 1) != System_IDisposable_TypeInfo )
    {
      --v98;
      v99 += 4;
      if ( !v98 )
        goto LABEL_172;
    }
    v100 = v97 + 16LL * *v99 + 312;
  }
  else
  {
LABEL_172:
    v100 = sub_1C83438(v72, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v100)(v72, *(_QWORD *)(v100 + 8));
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
          BYTE4(this[1].fields.roleTypeSprite) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0);
}


void BattleServantParamComponent__playAddition(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4C3B077 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3098/*"Battle/Prefab/ef_add_enemy"*/);
    byte_4C3B077 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_41085732(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3098/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0,
                                                          0),
          (v6 = this->fields.data) == 0) )
    {
      sub_1C32E7C(clsIconComponent);
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
  const MethodInfo *v11; // x3

  v2 = this;
  if ( (byte_4C3B061 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1C32C20(&StringLiteral_18899/*"effect/ef_cwflash01"*/);
    byte_4C3B061 = 1;
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
    UnityEngine_Object__Destroy_71223640(v6, 0);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_41085732(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18899/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0,
                                                  0);
        if ( v8 )
        {
          if ( LODWORD(v8->max_length) )
          {
            v8->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1C32BC4((CGThumbnailListItem_o *)v8->m_Items, (int32_t)this, v10, v11);
            return;
          }
LABEL_23:
          sub_1C32E84(this);
        }
      }
    }
LABEL_22:
    sub_1C32E7C(this);
  }
}


void BattleServantParamComponent__playCloseSelectServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3B052 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B052 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0);
    v7.fields.r = 0.5;
    v7.fields.g = 0.5;
    v7.fields.b = 0.5;
    v7.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v7, 0);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


void BattleServantParamComponent__playEndShowServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3B053 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B053 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0);
    v7.fields.r = 1.0;
    v7.fields.g = 1.0;
    v7.fields.b = 1.0;
    v7.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v7, 0);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


void BattleServantParamComponent__playSelectServant(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3B051 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B051 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_1C32E7C(0);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0);
    v7.fields.r = 1.0;
    v7.fields.g = 1.0;
    v7.fields.b = 1.0;
    v7.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v7, 0);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


void BattleServantParamComponent__playShiftEffect(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  const MethodInfo *v4; // x2
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_4C3B06D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B06D = 1;
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
        sub_1C32E7C(0);
      BattleServantHpShiftComponent__playShiftEffect(v5, this->fields.data, v4);
    }
  }
}


float BattleServantParamComponent__playShiftEffectBefore(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  const MethodInfo *v4; // x2
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_4C3B06C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B06C = 1;
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
    sub_1C32E7C(0);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v5, this->fields.data, v4);
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
  UnityEngine_Object_o *ComponentInChildren_object__51596568; // x23
  const MethodInfo *v12; // x2
  _DWORD *monitor; // x8
  int v14; // w22
  _DWORD *v15; // x8
  int v16; // w8
  float sideEffectLabelWidth; // s0
  float v18; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B07A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B07A = 1;
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
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
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
      ComponentInChildren_object__51596568 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__51596568(
                                                                       (UnityEngine_GameObject_o *)v6,
                                                                       1,
                                                                       (const MethodInfo_3134D18 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__51596568, 0, 0);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__51596568 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__51596568,
          buffData->fields.popIcon,
          v12);
        monitor = ComponentInChildren_object__51596568[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v14 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__51596568,
                                        0);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0);
        if ( !perf )
          goto LABEL_34;
        v21.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v14 * 0.5)) + 5.0);
        v21.fields.y = 0.0;
        v21.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v21, 0);
        v15 = ComponentInChildren_object__51596568[1].monitor;
        if ( !v15 )
          goto LABEL_34;
        v16 = v15[42];
        if ( v9 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v18 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v16 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v10 = 0.0;
          if ( v18 > sideEffectLabelWidth )
            v10 = v18 - sideEffectLabelWidth;
        }
        else
        {
          v10 = (float)(v9 * (float)((float)v16 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v20 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0);
      if ( v20 )
      {
        UnityEngine_Transform__SetParent(v20, (UnityEngine_Transform_o *)perf, 0);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
        if ( perf )
        {
          v22.fields.y = 1.0;
          v22.fields.z = 1.0;
          v22.fields.x = v9;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v22, 0);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
          if ( perf )
          {
            v23.fields.y = 0.0;
            v23.fields.z = 0.0;
            v23.fields.x = v10;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v23, 0);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1C32E7C(perf);
  }
}


void BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v6; // x20
  UISprite_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v16; // x8
  struct BattleServantParamSetting_o *v17; // x8
  struct BattleServantParamSetting_o *v18; // x8
  struct BattleServantParamSetting_o *v19; // x8
  int v20; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v21; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3B065 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C32C20(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    sub_1C32C20(&StringLiteral_20018/*"hp_break_"*/);
    byte_4C3B065 = 1;
  }
  component = 0;
  v21 = 0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_33;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__51111776(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !AssetStorage )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v6 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0, 0) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( !AssetStorage )
      goto LABEL_33;
    UISprite__set_atlas((UISprite_o *)AssetStorage, v6, 0);
    v7 = this->fields.breakSprite;
    v20 = 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v8, v9, v10, v11, v12, v13);
    AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_20018/*"hp_break_"*/, v14, 0);
    if ( !v7 )
      goto LABEL_33;
    UISprite__set_spriteName(v7, (System_String_o *)AssetStorage, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Equality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)AssetStorage & 1) == 0 )
  {
    v16 = this->fields.battleServantParamSetting;
    if ( !v16 )
      goto LABEL_33;
    AssetStorage = (AssetData_o *)System_String__IsNullOrEmpty(v16->fields.TargetIconSpriteName, 0);
    if ( ((unsigned __int8)AssetStorage & 1) == 0 )
    {
      AssetStorage = (AssetData_o *)this->fields.targetMark;
      if ( !AssetStorage )
        goto LABEL_33;
      AssetStorage = (AssetData_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                      (UnityEngine_GameObject_o *)AssetStorage,
                                      &component,
                                      (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_atlas((UISprite_o *)component, v6, 0);
        v17 = this->fields.battleServantParamSetting;
        if ( !v17 )
          goto LABEL_33;
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_spriteName((UISprite_o *)component, v17->fields.TargetIconSpriteName, 0);
      }
    }
    v18 = this->fields.battleServantParamSetting;
    if ( v18 )
    {
      if ( System_String__IsNullOrEmpty(v18->fields.FixTargetIconSpriteName, 0) )
        return;
      AssetStorage = (AssetData_o *)this->fields.lockTargetMark;
      if ( AssetStorage )
      {
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)AssetStorage,
                &v21,
                (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
          return;
        AssetStorage = (AssetData_o *)v21;
        if ( v21 )
        {
          UISprite__set_atlas((UISprite_o *)v21, v6, 0);
          v19 = this->fields.battleServantParamSetting;
          if ( v19 )
          {
            AssetStorage = (AssetData_o *)v21;
            if ( v21 )
            {
              UISprite__set_spriteName((UISprite_o *)v21, v19->fields.FixTargetIconSpriteName, 0);
              return;
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C32E7C(AssetStorage);
  }
}


void BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        bool isInstantlyClear,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  const MethodInfo *v6; // x3
  UIWidget_o *Item; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v11; // x21
  UIWidget_c *klass; // x8
  UIWidget_o *v13; // x21
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UIWidget_c *v17; // x8
  UIWidget_o *v18; // x21
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  UIWidget_c *v22; // x8
  SimpleAnimation_State_c *v23; // x1
  UIWidget_o *v24; // x21
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x9
  __int64 v28; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v30; // x2
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3B055 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_13196/*"SvtW_StartClose"*/);
    byte_4C3B055 = 1;
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
      v31.fields.r = 0.0;
      v31.fields.g = 0.0;
      v31.fields.b = 0.0;
      v31.fields.a = 0.0;
      UIWidget__set_color(Item, v31, 0);
    }
    else
    {
      if ( !Item )
        goto LABEL_63;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      v32.fields.r = 0.0;
      v32.fields.g = 0.0;
      v32.fields.b = 0.0;
      v32.fields.a = 0.0;
      TweenColor__Begin(gameObject, 0.4, v32, 0);
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
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v11 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_63;
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      klass = Item->klass;
      v13 = Item;
      v14 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v14;
          p_offset += 2;
          if ( !v14 )
            goto LABEL_23;
        }
        v16 = (__int64)(&klass->vtable._4_get_isAnchoredHorizontally + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_23:
        v16 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), 0.0);
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      v22 = Item->klass;
      v23 = SimpleAnimation_State_TypeInfo;
      v24 = Item;
      v25 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v26 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v25;
          v26 += 2;
          if ( !v25 )
            goto LABEL_54;
        }
LABEL_55:
        v28 = (__int64)(&v22->vtable._8_set_alpha + *(_DWORD *)v26);
        goto LABEL_56;
      }
      goto LABEL_54;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v11 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_63;
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      v17 = Item->klass;
      v18 = Item;
      v19 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v20 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_33;
        }
        v21 = (__int64)(&v17->vtable._4_get_isAnchoredHorizontally + *(_DWORD *)v20);
      }
      else
      {
LABEL_33:
        v21 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                             0);
      if ( !Item )
        goto LABEL_63;
      v22 = Item->klass;
      v23 = SimpleAnimation_State_TypeInfo;
      v24 = Item;
      v27 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        v26 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v27;
          v26 += 2;
          if ( !v27 )
            goto LABEL_54;
        }
        goto LABEL_55;
      }
LABEL_54:
      v28 = sub_1C83438(v24, v23, 8);
LABEL_56:
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
      SimpleAnimation__Play_66464300((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
      goto LABEL_57;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_63;
    Item = (UIWidget_o *)UnityEngine_Animation__get_Item(
                           (UnityEngine_Animation_o *)v11,
                           (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                           0);
    if ( !Item )
      goto LABEL_63;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0);
    Item = (UIWidget_o *)UnityEngine_Animation__get_Item(
                           (UnityEngine_Animation_o *)v11,
                           (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                           0);
    if ( !Item )
      goto LABEL_63;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0);
    UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v11, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
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
    sub_1C32E7C(Item);
  }
LABEL_62:
  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 0, v6);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v30);
}


void BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *battleServantData,
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  struct BattleServantData_o **p_data; // x20
  UnityEngine_Object_o *clsIconComponent; // x23
  ServantClassIconComponent_o *v9; // x24
  BattleServantParamComponent_ClassIconData_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct BattleServantData_o *data; // x8
  struct BattleServantParamSetting_o *BattleServantParamSetting; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x21
  const MethodInfo *v19; // x1
  BattleNpGaugeSystemComponent_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v24; // x2
  struct BattleServantData_o *v25; // x8
  const MethodInfo *v26; // x1
  struct BattleServantData_o *v27; // x8
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3

  if ( (byte_4C3B04C & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_ClassIconData_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B04C = 1;
  }
  p_data = &this->fields.data;
  this->fields.modeWindow = 1;
  this->fields.data = battleServantData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.data, (int32_t)battleServantData, (int32_t)stageEntity, method);
  if ( !battleServantData )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0, 0) )
  {
    v9 = this->fields.clsIconComponent;
    v10 = (BattleServantParamComponent_ClassIconData_o *)sub_1C32E6C(BattleServantParamComponent_ClassIconData_TypeInfo);
    BattleServantParamComponent_ClassIconData___ctor(v10, battleServantData, v9, 0);
  }
  else
  {
LABEL_8:
    v10 = (BattleServantParamComponent_ClassIconData_o *)sub_1C32E6C(BattleServantParamComponent_BaseClassIconData_TypeInfo);
    BattleServantParamComponent_BaseClassIconData___ctor((BattleServantParamComponent_BaseClassIconData_o *)v10, 0);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.classIconData, (int32_t)v10, v11, v12);
  data = this->fields.data;
  if ( !data )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
    {
      v20 = this->fields.npcomp;
      if ( !v20 )
        goto LABEL_28;
      BattleNpGaugeSystemComponent__resetSlider(v20, 0);
    }
    this->fields.uniqueID = -1;
    goto LABEL_27;
  }
  this->fields.uniqueID = data->fields.uniqueId;
  BattleServantParamSetting = BattleServantParamComponent__GetBattleServantParamSetting(this, stageEntity, v13);
  this->fields.battleServantParamSetting = BattleServantParamSetting;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.battleServantParamSetting,
    (int32_t)BattleServantParamSetting,
    v16,
    v17);
  v18 = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v18, 0, 0) )
    BattleServantParamComponent__ResetDefaultBattleServantParamSetting(this, v19);
  else
    BattleServantParamComponent__SetupDefaultBattleServantParamSetting(this, v19);
  v25 = *p_data;
  if ( !*p_data )
    goto LABEL_28;
  if ( v25->fields.isEnemy )
    BattleServantParamComponent__ChangeTargetMarkSprite(this, v25->fields._IsGrand_k__BackingField, v22);
  BattleServantParamComponent__DestroyGrandEffectObject(this, v21);
  v27 = this->fields.data;
  if ( !v27 )
LABEL_28:
    sub_1C32E7C(v20);
  if ( v27->fields._IsShowGrandEffect_k__BackingField )
    BattleServantParamComponent__InstantiateGrandEffectObject(this, v26);
LABEL_27:
  BattleServantParamComponent__initUpdateView(this, 0, v24);
  BattleServantParamComponent__updateView(this, v28);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v29);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v30);
}


void BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v9; // x21
  float v10; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v13; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v15; // x8
  __int64 v16; // x23
  __int64 v17; // x9
  SimpleAnimation_State_c **v18; // x10
  __int64 v19; // x0
  SimpleAnimation_State_o *v20; // x22
  __int64 v21; // x8
  __int64 v22; // x23
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  UnityEngine_AnimationState_o *v26; // x21
  float length; // s0
  long double v28; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v30; // q8
  __int64 v31; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v33; // x0
  long double v34; // q0
  SimpleAnimation_State_c *v35; // x8
  long double v36; // q8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  SimpleAnimation_State_c *v41; // x1
  __int64 v42; // x22
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x9
  __int64 v46; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  UnityEngine_Color_o v50; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C3B056 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_13196/*"SvtW_StartClose"*/);
    byte_4C3B056 = 1;
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
    v9 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0);
    if ( !gameObject )
      goto LABEL_78;
    v10 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v50.fields.r = 1.0;
    v50.fields.g = 1.0;
    v50.fields.b = 1.0;
    v50.fields.a = 1.0;
    TweenColor__Begin(v9, v10, v50, 0);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v15 = *(_QWORD *)gameObject;
      v16 = gameObject;
      v17 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v18 = (SimpleAnimation_State_c **)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v17;
          v18 += 2;
          if ( !v17 )
            goto LABEL_21;
        }
        v19 = v15 + 16LL * (*(_DWORD *)v18 + 13) + 312;
      }
      else
      {
LABEL_21:
        v19 = sub_1C83438(gameObject, SimpleAnimation_State_TypeInfo, 13);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
      if ( !Item )
        goto LABEL_78;
      klass = Item->klass;
      v30 = v28;
      v31 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v31;
          p_offset += 2;
          if ( !v31 )
            goto LABEL_46;
        }
        v33 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
      }
      else
      {
LABEL_46:
        v33 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v33)(Item, *(_QWORD *)(v33 + 8), v30);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v40 = *(_QWORD *)gameObject;
      v41 = SimpleAnimation_State_TypeInfo;
      v42 = gameObject;
      v43 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v43;
          v44 += 2;
          if ( !v43 )
            goto LABEL_67;
        }
LABEL_68:
        v46 = v40 + 16LL * (*(_DWORD *)v44 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v13 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v20 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v21 = *(_QWORD *)gameObject;
      v22 = gameObject;
      v23 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v24 = (SimpleAnimation_State_c **)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          v24 += 2;
          if ( !v23 )
            goto LABEL_31;
        }
        v25 = v21 + 16LL * (*(_DWORD *)v24 + 13) + 312;
      }
      else
      {
LABEL_31:
        v25 = sub_1C83438(gameObject, SimpleAnimation_State_TypeInfo, 13);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !v20 )
        goto LABEL_78;
      v35 = v20->klass;
      v36 = v34;
      v37 = *(unsigned __int16 *)&v20->klass->_2.rank;
      if ( *(_WORD *)&v20->klass->_2.rank )
      {
        v38 = (SimpleAnimation_State_c **)&v35->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_53;
        }
        v39 = (__int64)&v35->vtable[*(_DWORD *)v38 + 4];
      }
      else
      {
LABEL_53:
        v39 = sub_1C83438(v20, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v39)(v20, *(_QWORD *)(v39 + 8), v36);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                              0);
      if ( !gameObject )
        goto LABEL_78;
      v40 = *(_QWORD *)gameObject;
      v41 = SimpleAnimation_State_TypeInfo;
      v42 = gameObject;
      v45 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v45;
          v44 += 2;
          if ( !v45 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v46 = sub_1C83438(v42, v41, 8);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v46)(v42, *(_QWORD *)(v46 + 8), -1.0);
      SimpleAnimation__Play_66464300((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_78;
    v26 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v13, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v13,
                            (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0);
    if ( !v26 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v26, length, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v13,
                            (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0);
    UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v13, (System_String_o *)StringLiteral_13196/*"SvtW_StartClose"*/, 0);
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
    sub_1C32E7C(gameObject);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 1, v7);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v6);
  BattleServantParamComponent__updateSkillIcon(this, 0, v48);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v49);
}


void BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.perf = inperf;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3);
}


void BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *roleTypeSprite; // x20
  __int64 transform; // x0
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v7; // x8
  UnityEngine_Transform_o *v8; // x20
  bool v9; // w1

  if ( (byte_4C3B060 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_19039/*"enemy_icon_leader"*/);
    sub_1C32C20(&StringLiteral_23286/*"servant_icon"*/);
    byte_4C3B060 = 1;
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
        v7 = &StringLiteral_19039/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v7 = &StringLiteral_23286/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v7, 0);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          v8 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4C313D1 )
          {
            transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
            byte_4C313D1 = 1;
          }
          if ( v8 )
          {
            UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            transform = (__int64)this->fields.roleTypeSprite;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              if ( transform )
              {
                v9 = 1;
LABEL_26:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v9, 0);
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
      v9 = 0;
      goto LABEL_26;
    }
LABEL_27:
    sub_1C32E7C(transform);
  }
}


void BattleServantParamComponent__setSkillFlash(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleServantParamComponent_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_1C32E7C(this);
  v4 = this;
  v5 = 0;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, v6, 0);
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
  BattleServantData_o *data; // x0
  int32_t v10; // w26
  char isGuts; // w24
  _BOOL4 v12; // w28
  UnityEngine_Component_o *v13; // x23
  UnityEngine_Component_o *v14; // x21
  BattleServantParamComponent___c_c *v15; // x0
  __int64 _9__154_0; // x22
  Il2CppObject *v17; // x25
  struct BattleServantParamComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *battleServantParamSetting; // x25
  struct BattleServantParamSetting_o *v22; // x8
  struct BattleServantParamSetting_o *v23; // x8
  const MethodInfo *v24; // x1
  struct BattleServantData_o *v25; // x8
  _BOOL4 IsGrand_k__BackingField; // w29
  BattleServantParamSetting_o *v27; // x25
  int v28; // w24
  struct BattleServantParamSetting_o *v29; // x8
  const MethodInfo *v30; // x1
  BattleServantParamSetting_o *v31; // x23
  BattleServantParamComponent_TargetIconViewInfo_o *fixed; // x0
  struct BattleServantData_o *v33; // x8
  float TARGET_ICON_SPRITE_POSX; // s8
  float v35; // s9
  BattleServantParamComponent_c *v36; // x0
  float LocalPositionX; // s8
  float FIX_TARGET_ICON_SPRITE_POSX; // s9
  BattleServantParamComponent_c *v39; // x0
  struct BattleServantParamSetting_o *v40; // x8
  const MethodInfo *v41; // x1
  BattleServantParamSetting_o *v42; // x23
  struct BattleServantParamComponent_StaticFields *v43; // x8
  const MethodInfo *v44; // x1
  BattleServantParamComponent_c *v45; // x0
  int v46; // w24
  const MethodInfo *v47; // x0
  const MethodInfo *v48; // x0
  const MethodInfo *v49; // x1
  BattleServantParamComponent_c *v50; // x0
  int v51; // w24
  const MethodInfo *v52; // x0
  const MethodInfo *v53; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v55; // x8
  _BOOL4 v56; // w20
  UnityEngine_Transform_o *transform; // x0
  UpHateData_o *upHateData; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B06B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BattleServantParamComponent___c__setTargetMark_b__154_0__);
    sub_1C32C20(&BattleServantParamComponent___c_TypeInfo);
    byte_4C3B06B = 1;
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
  data = this->fields.data;
  if ( !data )
    goto LABEL_114;
  v10 = data->fields.uniqueId;
  if ( isTargetLock && BattleServantData__isUpHate(data, 0, &upHateData, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_114;
    if ( BattleServantData__isAlive(data, 0, 0) )
    {
      isGuts = 1;
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_114;
      isGuts = BattleServantData__isGuts(data, 0);
    }
  }
  else
  {
    isGuts = 0;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_114;
  v12 = data->fields.isRaid || BattleServantData__get_IsSuperBossUi(data, 0);
  data = (BattleServantData_o *)this->fields.targetMark;
  if ( !data )
    goto LABEL_114;
  data = (BattleServantData_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)data,
                                  (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark
    || (v13 = (UnityEngine_Component_o *)data,
        data = (BattleServantData_o *)UnityEngine_GameObject__GetComponent_object_(
                                        this->fields.lockTargetMark,
                                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !this->fields.targetMark)
    || (v14 = (UnityEngine_Component_o *)data,
        (data = (BattleServantData_o *)UnityEngine_GameObject__get_gameObject(this->fields.targetMark, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v10 == uniqueId, 0),
        (data = (BattleServantData_o *)this->fields.lockTargetMark) == 0)
    || (data = (BattleServantData_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0)) == 0 )
  {
LABEL_114:
    sub_1C32E7C(data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, isGuts, 0);
  v15 = BattleServantParamComponent___c_TypeInfo;
  if ( !BattleServantParamComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent___c_TypeInfo);
    v15 = BattleServantParamComponent___c_TypeInfo;
  }
  _9__154_0 = (__int64)v15->static_fields->__9__154_0;
  if ( !_9__154_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleServantParamComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__154_0 = sub_1C32E6C(System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    System_Action_object__object____ctor(
      (System_Action_object__object__o *)_9__154_0,
      v17,
      Method_BattleServantParamComponent___c__setTargetMark_b__154_0__,
      0);
    static_fields = BattleServantParamComponent___c_TypeInfo->static_fields;
    static_fields->__9__154_0 = (struct System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__o *)_9__154_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__154_0, _9__154_0, v19, v20);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_54;
  v22 = this->fields.battleServantParamSetting;
  if ( !v22 )
    goto LABEL_114;
  if ( !v22->fields.IsOverwriteTargetSetting )
  {
LABEL_54:
    v33 = this->fields.data;
    if ( !v33 )
      goto LABEL_114;
    if ( !v33->fields._IsGrand_k__BackingField )
    {
      if ( v12 )
      {
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
        FIX_TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
        v39 = BattleServantParamComponent_TypeInfo;
      }
      else
      {
        v39 = BattleServantParamComponent_TypeInfo;
        if ( BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        {
          v43 = BattleServantParamComponent_TypeInfo->static_fields;
          LocalPositionX = v43->TARGET_ICON_SPRITE_POSX;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
          v39 = BattleServantParamComponent_TypeInfo;
          v43 = BattleServantParamComponent_TypeInfo->static_fields;
          LocalPositionX = v43->TARGET_ICON_SPRITE_POSX;
          if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
            v39 = BattleServantParamComponent_TypeInfo;
            v43 = BattleServantParamComponent_TypeInfo->static_fields;
          }
        }
        FIX_TARGET_ICON_SPRITE_POSX = v43->FIX_TARGET_ICON_SPRITE_POSX;
      }
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = BattleServantParamComponent_TypeInfo;
      }
      v61.fields.z = 0.0;
      v61.fields.y = v39->static_fields->TARGET_ICON_SPRITE_POSY;
      v61.fields.x = LocalPositionX;
      ComponentHelper__SetLocalPosition(v13, v61, 0);
      v62.fields.z = 0.0;
      v62.fields.x = FIX_TARGET_ICON_SPRITE_POSX;
      v62.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
      ComponentHelper__SetLocalPosition(v14, v62, 0);
      v50 = BattleServantParamComponent_TypeInfo;
      v51 = (unsigned __int8)isGuts & (v10 == uniqueId);
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      if ( v51 )
      {
        data = (BattleServantData_o *)BattleServantParamComponent__TargetIconWhenFixViewInfo((const MethodInfo *)v50);
        if ( !_9__154_0 )
          goto LABEL_114;
        v52 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                    *(_QWORD *)(_9__154_0 + 64),
                                    v13,
                                    data,
                                    *(_QWORD *)(_9__154_0 + 40));
        fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(v52);
      }
      else
      {
        data = (BattleServantData_o *)BattleServantParamComponent__NormalTargetIconViewInfo((const MethodInfo *)v50);
        if ( !_9__154_0 )
          goto LABEL_114;
        v53 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                    *(_QWORD *)(_9__154_0 + 64),
                                    v13,
                                    data,
                                    *(_QWORD *)(_9__154_0 + 40));
        fixed = BattleServantParamComponent__FixTargetIconViewInfo(v53);
      }
      goto LABEL_106;
    }
    if ( v12 )
    {
      TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
      v35 = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
      v36 = BattleServantParamComponent_TypeInfo;
      goto LABEL_81;
    }
    v36 = BattleServantParamComponent_TypeInfo;
    if ( BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    {
      TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      v36 = BattleServantParamComponent_TypeInfo;
      TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        v36 = BattleServantParamComponent_TypeInfo;
        v35 = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
LABEL_81:
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = BattleServantParamComponent_TypeInfo;
        }
        v59.fields.z = 0.0;
        v59.fields.y = v36->static_fields->TARGET_ICON_SPRITE_POSY;
        v59.fields.x = TARGET_ICON_SPRITE_POSX;
        ComponentHelper__SetLocalPosition(v13, v59, 0);
        v60.fields.z = 0.0;
        v60.fields.x = v35;
        v60.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
        ComponentHelper__SetLocalPosition(v14, v60, 0);
        v45 = BattleServantParamComponent_TypeInfo;
        v46 = (unsigned __int8)isGuts & (v10 == uniqueId);
        if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        if ( v46 )
        {
          data = (BattleServantData_o *)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo((const MethodInfo *)v45);
          if ( !_9__154_0 )
            goto LABEL_114;
          data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                          *(_QWORD *)(_9__154_0 + 64),
                                          v13,
                                          data,
                                          *(_QWORD *)(_9__154_0 + 40));
          if ( !v14 )
            goto LABEL_114;
          UISprite__set_spriteName(
            (UISprite_o *)v14,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(v47);
        }
        else
        {
          data = (BattleServantData_o *)BattleServantParamComponent__GrandTargetIconViewInfo((const MethodInfo *)v45);
          if ( !_9__154_0 )
            goto LABEL_114;
          data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                          *(_QWORD *)(_9__154_0 + 64),
                                          v13,
                                          data,
                                          *(_QWORD *)(_9__154_0 + 40));
          if ( !v14 )
            goto LABEL_114;
          UISprite__set_spriteName(
            (UISprite_o *)v14,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo(v48);
        }
        goto LABEL_106;
      }
    }
    v35 = TARGET_ICON_SPRITE_POSX;
    goto LABEL_81;
  }
  ComponentHelper__SetLocalPosition(v13, v22->fields.TargetIconPosition, 0);
  v23 = this->fields.battleServantParamSetting;
  if ( !v23 )
    goto LABEL_114;
  ComponentHelper__SetLocalPosition(v14, v23->fields.FixTargetIconPosition, 0);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_114;
  IsGrand_k__BackingField = v25->fields._IsGrand_k__BackingField;
  v27 = this->fields.battleServantParamSetting;
  v28 = (unsigned __int8)isGuts & (v10 == uniqueId);
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  if ( v28 )
  {
    if ( IsGrand_k__BackingField )
    {
      data = (BattleServantData_o *)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_47390500(v27, v24);
      if ( !_9__154_0 )
        goto LABEL_114;
      data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                      *(_QWORD *)(_9__154_0 + 64),
                                      v13,
                                      data,
                                      *(_QWORD *)(_9__154_0 + 40));
      v29 = this->fields.battleServantParamSetting;
      if ( !v29 )
        goto LABEL_114;
      if ( System_String__IsNullOrEmpty(v29->fields.FixTargetIconSpriteName, 0) )
      {
        data = (BattleServantData_o *)BattleServantParamComponent_TypeInfo;
        if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        if ( !v14 )
          goto LABEL_114;
        UISprite__set_spriteName(
          (UISprite_o *)v14,
          BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
          0);
      }
      v31 = this->fields.battleServantParamSetting;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_47390640(v31, v30);
    }
    else
    {
      data = (BattleServantData_o *)BattleServantParamComponent__TargetIconWhenFixViewInfo_47389884(v27, v24);
      if ( !_9__154_0 )
        goto LABEL_114;
      (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
        *(_QWORD *)(_9__154_0 + 64),
        v13,
        data,
        *(_QWORD *)(_9__154_0 + 40));
      fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_47390024(
                this->fields.battleServantParamSetting,
                v44);
    }
  }
  else if ( IsGrand_k__BackingField )
  {
    data = (BattleServantData_o *)BattleServantParamComponent__GrandNormalTargetIconViewInfo(v27, v24);
    if ( !_9__154_0 )
      goto LABEL_114;
    data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                    *(_QWORD *)(_9__154_0 + 64),
                                    v13,
                                    data,
                                    *(_QWORD *)(_9__154_0 + 40));
    v40 = this->fields.battleServantParamSetting;
    if ( !v40 )
      goto LABEL_114;
    if ( System_String__IsNullOrEmpty(v40->fields.FixTargetIconSpriteName, 0) )
    {
      data = (BattleServantData_o *)BattleServantParamComponent_TypeInfo;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      if ( !v14 )
        goto LABEL_114;
      UISprite__set_spriteName(
        (UISprite_o *)v14,
        BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
        0);
    }
    v42 = this->fields.battleServantParamSetting;
    if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo_47390336(v42, v41);
  }
  else
  {
    data = (BattleServantData_o *)BattleServantParamComponent__NormalTargetIconViewInfo_47389580(v27, v24);
    if ( !_9__154_0 )
      goto LABEL_114;
    (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
      *(_QWORD *)(_9__154_0 + 64),
      v13,
      data,
      *(_QWORD *)(_9__154_0 + 40));
    fixed = BattleServantParamComponent__FixTargetIconViewInfo_47389720(this->fields.battleServantParamSetting, v49);
  }
LABEL_106:
  data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantParamComponent_TargetIconViewInfo_o *, _QWORD))(_9__154_0 + 24))(
                                  *(_QWORD *)(_9__154_0 + 64),
                                  v14,
                                  fixed,
                                  *(_QWORD *)(_9__154_0 + 40));
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_114;
  v55 = perf->fields.data;
  if ( !v55 )
    goto LABEL_114;
  if ( v55->fields.isMultiTargetBattle )
  {
    v56 = uniqueId == -1 || v10 == uniqueId;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    CommonFunction__SetColorAllChild(transform, v56, this->fields.GRAY, 0);
    this->fields.isActiveHpBar = v56;
    if ( v56 )
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
      if ( data )
      {
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)data, 0, 0);
        return;
      }
      goto LABEL_114;
    }
  }
}


void BattleServantParamComponent__setTouch(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v7; // x0

  if ( (byte_4C3B058 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B058 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0 && BattleServantData__isAlive(data, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v7 )
    {
      if ( !Component_object )
        sub_1C32E7C(v7);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
    }
  }
}


void BattleServantParamComponent__setVisible(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C3B057 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B057 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1C32E7C(root);
  }
}


void BattleServantParamComponent__shiftUpdateStatus(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v4; // x8
  struct BattleActionData_o *nowAction; // x9
  char v6; // w19
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct BattleServantData_o *data; // x8
  struct BattlePerformance_o *v11; // x8
  struct BattleActionData_o *v12; // x8
  _BOOL4 isSkillShift; // w19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v17; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BattleServantParamComponent_o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct UnityEngine_GameObject_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct UISprite_o *v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct BattleServantChangeBarComponent_o *v74; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  System_Collections_Hashtable_o *v81; // x0
  __int64 v82; // x0
  char v83[4]; // [xsp+0h] [xbp-40h] BYREF
  int v84; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v86; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C3B076 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleServantParamComponent_shiftUpdateStatus__);
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_20278/*"ignoretimescale"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_24438/*"updateShiftHplabel"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    this = (BattleServantParamComponent_o *)sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B076 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0);
  v4 = v2->fields.perf;
  if ( !v4 )
    goto LABEL_79;
  nowAction = v4->fields.nowAction;
  if ( !nowAction )
    goto LABEL_79;
  v6 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v2->fields.data;
    if ( !this )
      goto LABEL_79;
    BattleServantData__updateHp((BattleServantData_o *)this, 0, 0);
    v4 = v2->fields.perf;
    if ( !v4 )
      goto LABEL_79;
  }
  this = (BattleServantParamComponent_o *)v4->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag((BattleActionData_o *)this, 0);
  BattleServantParamComponent__initUpdateView(v2, NotShiftUpdateFlag, v8);
  data = v2->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(v2, data->fields.buffData, v9);
  if ( (v6 & 1) != 0 )
  {
    v11 = v2->fields.perf;
    if ( v11 )
    {
      v12 = v11->fields.nowAction;
      if ( v12 )
      {
        isSkillShift = v12->fields.isSkillShift;
        v14 = Method_BattleServantParamComponent_shiftUpdateStatus__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C32C38(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
        if ( isSkillShift )
        {
          OverwriteAssetSoundName__PlayCommonSe(v15, 24, 0, 0);
          return;
        }
        OverwriteAssetSoundName__PlayCommonSe(v15, 16, 0, 0);
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v17);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
          this = (BattleServantParamComponent_o *)sub_1C32CC8(object___TypeInfo, 12);
          if ( this )
          {
            v21 = this;
            v22 = StringLiteral_19689/*"from"*/;
            if ( StringLiteral_19689/*"from"*/ )
            {
              v22 = sub_1C32D5C(StringLiteral_19689/*"from"*/, v21->klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
              v23 = StringLiteral_19689/*"from"*/;
            }
            else
            {
              v23 = 0;
            }
            if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
              goto LABEL_80;
            v21->fields.root = (struct UnityEngine_GameObject_o *)v23;
            sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.root, v23, v19, v20);
            v86 = 0;
            v22 = j_il2cpp_value_box_0(int_TypeInfo, &v86, v24, v25, v26, v27, v28, v29);
            v32 = (struct UnityEngine_GameObject_o *)v22;
            if ( v22 )
            {
              v22 = sub_1C32D5C(v22, v21->klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
            }
            if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_80;
            v21->fields.target = v32;
            sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.target, (int32_t)v32, v30, v31);
            v22 = StringLiteral_24106/*"to"*/;
            if ( StringLiteral_24106/*"to"*/ )
            {
              v22 = sub_1C32D5C(StringLiteral_24106/*"to"*/, v21->klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
              v35 = StringLiteral_24106/*"to"*/;
            }
            else
            {
              v35 = 0;
            }
            if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_80;
            *(_QWORD *)&v21->fields.index = v35;
            sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.index, v35, v33, v34);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0);
              v22 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v36, v37, v38, v39, v40, v41);
              v44 = v22;
              if ( !v22 || (v22 = sub_1C32D5C(v22, v21->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 3 )
                  goto LABEL_80;
                *(_QWORD *)&v21->fields.hpformatflg = v44;
                sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.hpformatflg, v44, v42, v43);
                v22 = StringLiteral_22435/*"onupdate"*/;
                if ( StringLiteral_22435/*"onupdate"*/ )
                {
                  v22 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v21->klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v47 = StringLiteral_22435/*"onupdate"*/;
                }
                else
                {
                  v47 = 0;
                }
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 4 )
                  goto LABEL_80;
                v21->fields.hplabel = (struct UILabel_o *)v47;
                sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.hplabel, v47, v45, v46);
                v22 = StringLiteral_24438/*"updateShiftHplabel"*/;
                if ( StringLiteral_24438/*"updateShiftHplabel"*/ )
                {
                  v22 = sub_1C32D5C(StringLiteral_24438/*"updateShiftHplabel"*/, v21->klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v50 = StringLiteral_24438/*"updateShiftHplabel"*/;
                }
                else
                {
                  v50 = 0;
                }
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 5 )
                  goto LABEL_80;
                v21->fields.maxhplabel = (struct UILabel_o *)v50;
                sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.maxhplabel, v50, v48, v49);
                v22 = StringLiteral_24067/*"time"*/;
                if ( StringLiteral_24067/*"time"*/ )
                {
                  v22 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v21->klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v53 = StringLiteral_24067/*"time"*/;
                }
                else
                {
                  v53 = 0;
                }
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 6 )
                  goto LABEL_80;
                v21->fields.totalhplabel = (struct UILabel_o *)v53;
                sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.totalhplabel, v53, v51, v52);
                v84 = 1069547520;
                v22 = j_il2cpp_value_box_0(float_TypeInfo, &v84, v54, v55, v56, v57, v58, v59);
                v62 = (struct UISprite_o *)v22;
                if ( !v22 || (v22 = sub_1C32D5C(v22, v21->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 7 )
                    goto LABEL_80;
                  v21->fields.breakSprite = v62;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.breakSprite, (int32_t)v62, v60, v61);
                  v22 = StringLiteral_20278/*"ignoretimescale"*/;
                  if ( StringLiteral_20278/*"ignoretimescale"*/ )
                  {
                    v22 = sub_1C32D5C(StringLiteral_20278/*"ignoretimescale"*/, v21->klass->_1.element_class);
                    if ( !v22 )
                      goto LABEL_81;
                    v65 = StringLiteral_20278/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v65 = 0;
                  }
                  if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 8 )
                    goto LABEL_80;
                  v21->fields.hpGauge = (struct BattleHpGaugeBarComponent_o *)v65;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.hpGauge, v65, v63, v64);
                  v83[0] = 1;
                  v22 = j_il2cpp_value_box_0(bool_TypeInfo, v83, v66, v67, v68, v69, v70, v71);
                  v74 = (struct BattleServantChangeBarComponent_o *)v22;
                  if ( !v22 || (v22 = sub_1C32D5C(v22, v21->klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 9 )
                      goto LABEL_80;
                    v21->fields.hpChange = v74;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.hpChange, (int32_t)v74, v72, v73);
                    v22 = StringLiteral_22427/*"oncomplete"*/;
                    if ( StringLiteral_22427/*"oncomplete"*/ )
                    {
                      v22 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v21->klass->_1.element_class);
                      if ( !v22 )
                        goto LABEL_81;
                      v77 = StringLiteral_22427/*"oncomplete"*/;
                    }
                    else
                    {
                      v77 = 0;
                    }
                    if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 0xA )
                      goto LABEL_80;
                    v21->fields.hpShift = (struct BattleServantHpShiftComponent_o *)v77;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.hpShift, v77, v75, v76);
                    v22 = StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v80 = 0;
LABEL_74:
                      if ( LODWORD(v21->fields.m_CancellationTokenSource) > 0xB )
                      {
                        v21->fields.clsIconComponent = (struct ServantClassIconComponent_o *)v80;
                        sub_1C32BC4((CGThumbnailListItem_o *)&v21->fields.clsIconComponent, v80, v78, v79);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v81 = iTween__Hash((System_Object_array *)v21, 0);
                        iTween__ValueTo(gameObject, v81, 0);
                        return;
                      }
LABEL_80:
                      sub_1C32E84(v22);
                    }
                    v22 = sub_1C32D5C(StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/, v21->klass->_1.element_class);
                    if ( v22 )
                    {
                      v80 = StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v82 = sub_1C32EA0(v22);
              sub_1C32D48(v82, 0);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1C32E7C(this);
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

  if ( (byte_4C3B078 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
    byte_4C3B078 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1C32E7C(0);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_393F9A0 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3B079 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent__showSideEffectList_d__172_TypeInfo);
    byte_4C3B079 = 1;
  }
  v3 = sub_1C32E6C(BattleServantParamComponent__showSideEffectList_d__172_TypeInfo);
  BattleServantParamComponent__showSideEffectList_d__172___ctor(
    (BattleServantParamComponent__showSideEffectList_d__172_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  void *ShowServantParam; // x0
  BattleServantShowBuffComponent_o *v7; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v10; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v12; // x8
  UnityEngine_Object_o *ServantActor; // x21
  _BOOL4 IsMatchCurrentCommonAnimName; // w23
  int v15; // w8
  struct BattleServantData_o *v16; // x8
  int v17; // w8
  void *v18; // x21
  int v19; // w24
  char v20; // w23
  __int64 v21; // x27
  int v22; // w27
  struct BattleServantData_o *v23; // x8
  UnityEngine_Object_o *v24; // x20
  System_Enum_o v25; // [xsp+8h] [xbp-68h] BYREF
  int v26; // [xsp+18h] [xbp-58h]

  if ( (byte_4C3B06A & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_13353/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1C32C20(&StringLiteral_24713/*"wait"*/);
    byte_4C3B06A = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (void *)UnityEngine_Object__op_Equality(showBuffComponent, 0, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_59;
  v7 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0);
  if ( !v7 )
    goto LABEL_59;
  BattleServantShowBuffComponent__setBuffList(v7, (BattleBuffData_ShowBuffData_array *)ShowServantParam, 0);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_59;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_59;
  if ( data->fields.isMultiTargetBattle )
  {
    v10 = this->fields.data;
    if ( !v10 )
      goto LABEL_59;
    if ( v10->fields.isEnemy )
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
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, 0, 0);
      }
    }
  }
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_59;
  ShowServantParam = this->fields.perf;
  if ( !ShowServantParam )
    goto LABEL_59;
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v12->fields.uniqueId,
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
  v26 = 49;
  v25.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v25.monitor = (void *)-1LL;
  ShowServantParam = System_Enum__ToString(&v25, 0);
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
    sub_1C32E7C(ShowServantParam);
  ShowServantParam = (void *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    v15 = 0;
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
    v15 = (unsigned __int8)ShowServantParam & 1;
  }
  if ( v15 | IsMatchCurrentCommonAnimName )
  {
    v26 = 9;
    v25.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v25.monitor = (void *)-1LL;
    ShowServantParam = System_Enum__ToString(&v25, 0);
    if ( !ServantActor )
      goto LABEL_59;
    BattleActorControl__playAnimation_47034604(
      (BattleActorControl_o *)ServantActor,
      (System_String_o *)ShowServantParam,
      0,
      0);
  }
LABEL_36:
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_59;
  if ( !v16->fields.isSleepWaitMode )
    return;
  ShowServantParam = BattleBuffData__getActiveList(buffData, 1, 0);
  if ( !ShowServantParam )
    goto LABEL_59;
  v17 = *((_DWORD *)ShowServantParam + 6);
  v18 = ShowServantParam;
  if ( v17 < 1 )
    goto LABEL_63;
  v19 = 0;
  v20 = 0;
  do
  {
    if ( v19 >= (unsigned int)v17 )
      sub_1C32E84(ShowServantParam);
    v21 = *((_QWORD *)v18 + v19 + 4);
    if ( !v21 )
      goto LABEL_59;
    if ( !*(_BYTE *)(v21 + 512) )
    {
      ShowServantParam = BattleBuffData__get_buffMst(buffData, 0);
      if ( !ShowServantParam )
        goto LABEL_59;
      ShowServantParam = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                           *(_DWORD *)(v21 + 16),
                           (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_59;
      v22 = *((_DWORD *)ShowServantParam + 4);
      ShowServantParam = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_13353/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0);
      v20 |= v22 == (_DWORD)ShowServantParam;
    }
    v17 = *((_DWORD *)v18 + 6);
    ++v19;
  }
  while ( v19 < v17 );
  if ( (v20 & 1) == 0 )
  {
LABEL_63:
    ShowServantParam = this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_59;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0);
    v23 = this->fields.data;
    if ( !v23 )
      goto LABEL_59;
    ShowServantParam = this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_59;
    v24 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v23->fields.uniqueId,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (void *)UnityEngine_Object__op_Inequality(v24, 0, 0);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v24 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v24, this->fields.uniqueID, 0) )
          BattleActorControl__playAnimation_47034604(
            (BattleActorControl_o *)v24,
            (System_String_o *)StringLiteral_24713/*"wait"*/,
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
  const MethodInfo *v10; // x2
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_4C3B069 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B069 = 1;
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
          BattleServantParamComponent__UpdateClassIconEffect(this, svtData, v10);
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
            perf = (BattlePerformance_o *)ServantActor[22].klass;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0);
              return;
            }
LABEL_17:
            sub_1C32E7C(perf);
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

  if ( (byte_4C3B05E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B05E = 1;
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
    sub_1C32E7C(data);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  UILabel_o *v18; // x24
  Il2CppObject *v19; // x0
  System_String_o *data; // x0
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  UILabel_o *v29; // x24
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  UILabel_o *v38; // x23
  Il2CppObject *v39; // x24
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x0
  __int64 *v47; // x8
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v56; // x2
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3B05F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    sub_1C32C20(&StringLiteral_25151/*"{0}/{1}"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    sub_1C32C20(&StringLiteral_25051/*"{0:#,0}/{1:#,0}"*/);
    byte_4C3B05F = 1;
  }
  if ( this->fields.hpformatflg )
    v9 = &StringLiteral_25047/*"{0:#,0}"*/;
  else
    v9 = &StringLiteral_25096/*"{0}"*/;
  v10 = (System_String_o *)*v9;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
  {
    v18 = this->fields.hplabel;
    v58 = now;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v12, v13, v14, v15, v16, v17);
    data = System_String__Format(v10, v19, 0);
    if ( !v18 )
      goto LABEL_36;
    UILabel__set_text(v18, data, 0);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    v29 = this->fields.maxhplabel;
    v58 = max;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v23, v24, v25, v26, v27, v28);
    data = System_String__Format(v10, v30, 0);
    if ( !v29 )
      goto LABEL_36;
    UILabel__set_text(v29, data, 0);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
  {
    v38 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v58 = now;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v32, v33, v34, v35, v36, v37);
      v57 = max;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v40, v41, v42, v43, v44, v45);
      v47 = &StringLiteral_25051/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v58 = now;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v32, v33, v34, v35, v36, v37);
      v57 = max;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v48, v49, v50, v51, v52, v53);
      v47 = &StringLiteral_25151/*"{0}/{1}"*/;
    }
    data = System_String__Format_63559836((System_String_o *)*v47, v39, v46, 0);
    if ( !v38 )
      goto LABEL_36;
    UILabel__set_text(v38, data, 0);
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
      BattleServantParamComponent__SetBreakSpriteDisplay(this, now == 0 && isShiftableServant, v56);
      return;
    }
LABEL_36:
    sub_1C32E7C(data);
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
  if ( (byte_4C3B05A & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B05A = 1;
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
      sub_1C32E7C(this);
    }
  }
}


void BattleServantParamComponent__updateNp_47405360(
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
  if ( (byte_4C3B05B & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B05B = 1;
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
            sub_1C32E84(v11);
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
          sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
  BattleBuffData_o *v6; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleBuffData_o *v8; // x21
  unsigned __int64 v9; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_passiveList; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 resumptionHpFromLossMaxHp; // x10
  BattleSkillInfoData_o *v13; // x23
  struct BattleServantSkillIConComponent_array *v14; // x8
  int32_t v15; // w24
  BattleServantSkillIConComponent_o *v16; // x25
  char v17; // w26

  data = this->fields.data;
  if ( data )
  {
    BuffData = BattleServantData__get_BuffData(data, 0);
    if ( !BuffData
      || (BattleBuffData__UpdateSkillRelationBuff(BuffData, 0), (BuffData = (BattleBuffData_o *)this->fields.data) == 0)
      || (BuffData = (BattleBuffData_o *)BattleServantData__getActiveSkillInfos((BattleServantData_o *)BuffData, 0),
          !this->fields.data)
      || (v6 = BuffData,
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelect(this->fields.data, 0),
          (skillIcon = this->fields.skillIcon) == 0) )
    {
LABEL_28:
      sub_1C32E7C(BuffData);
    }
    v8 = BuffData;
    v9 = 0;
    p_passiveList = &BuffData->fields.passiveList;
    while ( 1 )
    {
      max_length_low = LODWORD(skillIcon->max_length);
      if ( (__int64)v9 >= (int)max_length_low )
        break;
      if ( !v6 )
        goto LABEL_28;
      resumptionHpFromLossMaxHp = (unsigned int)v6->fields.resumptionHpFromLossMaxHp;
      if ( (__int64)v9 >= (int)resumptionHpFromLossMaxHp )
      {
        if ( v9 >= max_length_low )
LABEL_30:
          sub_1C32E84(BuffData);
        BuffData = (BattleBuffData_o *)skillIcon->m_Items[v9];
        if ( !BuffData )
          goto LABEL_28;
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)BuffData, 0, 0);
      }
      else
      {
        if ( v9 >= resumptionHpFromLossMaxHp )
          goto LABEL_30;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_28;
        v13 = (BattleSkillInfoData_o *)*((_QWORD *)&v6->fields.passiveList + v9);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0);
        if ( !v8 )
          goto LABEL_28;
        if ( v9 >= (unsigned int)v8->fields.resumptionHpFromLossMaxHp )
          goto LABEL_30;
        if ( *((_BYTE *)p_passiveList + v9) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_28;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v9,
                                           0);
        }
        v14 = this->fields.skillIcon;
        v15 = (int)BuffData;
        if ( !v14 )
          goto LABEL_28;
        if ( v9 >= LODWORD(v14->max_length) )
          goto LABEL_30;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_28;
        v16 = v14->m_Items[v9];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v9, 0);
        if ( !this->fields.data )
          goto LABEL_28;
        v17 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0);
        if ( v9 >= (unsigned int)v8->fields.resumptionHpFromLossMaxHp )
          goto LABEL_30;
        if ( !v16 )
          goto LABEL_28;
        BattleServantSkillIConComponent__SetSkillInfo(
          v16,
          v13,
          v17 & 1,
          v15,
          (int32_t)BuffData,
          *((_BYTE *)p_passiveList + v9),
          0);
      }
      skillIcon = this->fields.skillIcon;
      ++v9;
      if ( !skillIcon )
        goto LABEL_28;
    }
  }
}


void BattleServantParamComponent__updateTDGauge(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4C3B05D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B05D = 1;
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
      sub_1C32E7C(data);
    }
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_15;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_15;
    BattleNextTDgaugeComponent__setValue((BattleNextTDgaugeComponent_o *)data, v6->fields.nexttpturn, 0);
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
  BattleServantData_o *v14; // x1
  const MethodInfo *v15; // x2
  struct BattleServantData_o *v16; // x8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct BattleServantData_o *v19; // x8
  struct BattleServantData_o *v20; // x8

  v3 = this;
  if ( (byte_4C3B064 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B064 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( BYTE2(this[1].fields.breakPoint) )
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
                v16 = v3->fields.data;
                if ( !v16 )
                  goto LABEL_36;
                this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                if ( !this )
                  goto LABEL_36;
                BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)this, v16->fields.np, 0);
              }
              BattleServantParamComponent__updateTDGauge(v3, v14, v15);
              BattleServantParamComponent__updateSkillIcon(v3, 0, v17);
              v19 = v3->fields.data;
              if ( v19 )
              {
                BattleServantParamComponent__updateBuffIcon(v3, v19->fields.buffData, v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C32E7C(this);
  }
  v20 = v3->fields.data;
  if ( !v20 )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)v20->fields.deckSvt;
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  *(_QWORD *)&this->fields.CurClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.SvtData = svtData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)svtData, v7, v8);
  this->fields.ClassIconComp = classIconComp;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ClassIconComp, (int32_t)classIconComp, v9, v10);
}


void BattleServantParamComponent_ClassIconData__ChangeClassIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, method);
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_47425620(this, this->fields.CurClassId, v3);
}


void BattleServantParamComponent_ClassIconData__ChangeClassIcon_47425620(
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
    sub_1C32E7C(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v18; // x22
  UnityEngine_Object_o *v19; // x24
  Il2CppObject *v20; // x23
  System_Action_object__o *v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x25
  int32_t EffectId; // w23
  UnityEngine_GameObject_o *ParentObj; // x24
  float DelayTime; // s8
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  System_Action_o *v30; // x24
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3B096 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BattleEffectUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__);
    sub_1C32C20(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__);
    sub_1C32C20(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
    byte_4C3B096 = 1;
  }
  component = 0;
  v7 = sub_1C32E6C(BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = arg;
  v11 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v7 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)arg, v12, v13);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_25;
  v16 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 16LL);
  if ( v16 < 1 )
  {
    EffectObject = 0;
  }
  else
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObject = BattleEffectUtility__getEffectObject(v16, 0, 1, 0);
  }
  *(_QWORD *)(v7 + 32) = EffectObject;
  v18 = (UnityEngine_GameObject_o **)(v7 + 32);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)EffectObject, v14, v15);
  v19 = *(UnityEngine_Object_o **)(v7 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    ActionExtensions__Call(noEffectAction, 0);
    return *v18;
  }
  Component_object = *v18;
  if ( !*v18 )
    goto LABEL_25;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v20 = component;
    v21 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v21,
      (Il2CppObject *)v7,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0);
    if ( !v20 )
      goto LABEL_25;
    v20[12].klass = (Il2CppClass *)v21;
    sub_1C32BC4((CGThumbnailListItem_o *)&v20[12], (int32_t)v21, v22, v23);
  }
  v24 = *v11;
  if ( !*v11 )
    goto LABEL_25;
  v25 = *v18;
  EffectId = v24->fields.EffectId;
  ParentObj = v24->fields.ParentObj;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetEffectParent(v25, EffectId, ParentObj, 0);
  if ( !*v11
    || (DelayTime = (*v11)->fields.DelayTime,
        ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        v30 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)v7,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v30, 0, 0),
        !ClassIconComp) )
  {
LABEL_25:
    sub_1C32E7C(Component_object);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_71209212(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0);
  v31 = *v11;
  this->fields.PrevEffectArg = *v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.PrevEffectArg, (int32_t)v31, v32, v33);
  return *v18;
}


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
  const MethodInfo *v18; // x3

  if ( (byte_4C3B092 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__);
    byte_4C3B092 = 1;
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
    sub_1C32E7C(SvtData);
  }
LABEL_12:
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, 0);
  v16 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v12, v14, v15);
  this->fields.PlayingEffectObj = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.PlayingEffectObj, (int32_t)v16, v17, v18);
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
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_47425620(this, this->fields.CurClassId, v4);
  }
}


bool BattleServantParamComponent_ClassIconData__IsChangeAble(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PlayingEffectObj; // x20
  BattleServantData_o *SvtData; // x0
  bool v5; // w20
  struct BattleServantData_o *v6; // x8

  if ( (byte_4C3B093 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B093 = 1;
  }
  PlayingEffectObj = (UnityEngine_Object_o *)this->fields.PlayingEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(PlayingEffectObj, 0, 0) )
    return 0;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_12;
  v5 = 1;
  SvtData = (BattleServantData_o *)BattleServantData__getClassId(SvtData, 1, 0);
  if ( (_DWORD)SvtData == this->fields.CurClassId )
  {
    v6 = this->fields.SvtData;
    if ( v6 )
      return v6->fields._frameType_k__BackingField != this->fields.FrameType;
LABEL_12:
    sub_1C32E7C(SvtData);
  }
  return v5;
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
  int32_t CurClassId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3B094 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
    byte_4C3B094 = 1;
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
  v10 = sub_1C32E6C(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = v8,
        CurClassId = this->fields.CurClassId,
        *(float *)(v10 + 24) = delayTime,
        *(_DWORD *)(v10 + 20) = CurClassId,
        (ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp) == 0) )
  {
    sub_1C32E7C(ClassIconComp);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0);
  *(_QWORD *)(v10 + 32) = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)gameObject, v14, v15);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v10;
}


void BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  BuffAggregationArgs_c *v3; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_4C3B095 & 1) == 0 )
  {
    sub_1C32C20(&BuffAggregationArgs_TypeInfo);
    byte_4C3B095 = 1;
  }
  v3 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
  if ( !SvtData )
    sub_1C32E7C(v3);
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
  const MethodInfo *v6; // x2
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg; // x8
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v8; // x8

  if ( (byte_4C3B097 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4360/*"ChangeClassIcon"*/);
    byte_4C3B097 = 1;
  }
  _4__this = (BattleServantParamComponent_ClassIconData_o *)System_String__op_Equality(
                                                              eventName,
                                                              (System_String_o *)StringLiteral_4360/*"ChangeClassIcon"*/,
                                                              0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    arg = this->fields.arg;
    if ( !arg
      || (_4__this = this->fields.__4__this) == 0
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_47425620(_4__this, arg->fields.ClassId, v6),
          (v8 = this->fields.arg) == 0) )
    {
      sub_1C32E7C(_4__this);
    }
    v8->fields.IsChangedIcon = 1;
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._Color_k__BackingField.fields.r;
  g = this->fields._Color_k__BackingField.fields.g;
  b = this->fields._Color_k__BackingField.fields.b;
  a = this->fields._Color_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
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


void BattleServantParamComponent__CoAddClassIconEffect_d__187___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__187_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__CoAddClassIconEffect_d__187__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__187_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v7; // x22
  struct BattleServantParamComponent___c__DisplayClass187_0_o **p__8__1; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ServantClassIconComponent_o *clsIconComponent; // x8
  struct BattleServantData_o *servantData; // x8
  System_Collections_Generic_Dictionary_int__GameObject__o *classIconEffectDict; // x22
  int32_t GrandEffectId; // w0
  int32_t effectId; // w1
  struct BattleServantParamComponent___c__DisplayClass187_0_o *v16; // x23
  int32_t v17; // w21
  System_Action_o *v18; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass187_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *v23; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v25; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v27; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v28; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v29; // x22
  struct BattleServantData_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  struct BattlePerformance_o *v37; // x8
  struct BattleData_o *data; // x8
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  System_String_o *v41; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v45; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C3B09A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BattleEffectUtility_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C32C20(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&Method_BattleServantParamComponent___c__DisplayClass187_0__CoAddClassIconEffect_b__0__);
    sub_1C32C20(&BattleServantParamComponent___c__DisplayClass187_0_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)sub_1C32C20(&StringLiteral_18818/*"ef_commandaura_{0}"*/);
    byte_4C3B09A = 1;
  }
  component = 0;
  name = 0;
  path = 0;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v7 = (Il2CppObject *)sub_1C32E6C(BattleServantParamComponent___c__DisplayClass187_0_TypeInfo);
    System_Object___ctor(v7, 0);
    v4->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass187_0_o *)v7;
    p__8__1 = &v4->fields.__8__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v9, v10);
    if ( !_4__this )
      goto LABEL_77;
    clsIconComponent = _4__this->fields.clsIconComponent;
    if ( !clsIconComponent )
      goto LABEL_77;
    if ( clsIconComponent->fields._IsNormalClassIcon_k__BackingField )
    {
      servantData = v4->fields.servantData;
      if ( !servantData )
        goto LABEL_77;
      if ( servantData->fields._IsClassIconChangedNormal_k__BackingField )
      {
        classIconEffectDict = _4__this->fields.classIconEffectDict;
        GrandEffectId = ConstantMaster__GetGrandEffectId(v4->fields.effectId, 0);
        BattleServantParamComponent__DestroyEffectObject(_4__this, classIconEffectDict, GrandEffectId, 0, 0);
      }
    }
    else
    {
      BattleServantParamComponent__DestroyEffectObject(
        _4__this,
        _4__this->fields.classIconEffectDict,
        v4->fields.effectId,
        0,
        0);
      v4->fields.effectId = ConstantMaster__GetGrandEffectId(v4->fields.effectId, 0);
    }
    effectId = v4->fields.effectId;
    if ( effectId < 1 )
      return 0;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           effectId,
                                                                           (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v4->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, 0);
      _4__this->fields.currentClassIconAuraEffectPriority = v4->fields.priority;
    }
    v16 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_77;
    v16->fields.isLoading = 1;
    v17 = v4->fields.effectId;
    v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v16,
      Method_BattleServantParamComponent___c__DisplayClass187_0__CoAddClassIconEffect_b__0__,
      0);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(v17, v18, perf, 0);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_77;
  if ( _8__1->fields.isLoading )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C32BC4(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_77;
  v23 = v4->fields.servantData;
  if ( !v23 )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_77;
  ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v23->fields.uniqueId, 0);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  v25 = v4->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v25, ServantGameObject, 1, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0,
                                                                         0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_77;
  v27 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0);
  if ( !v27 )
    goto LABEL_77;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v27, (UnityEngine_Transform_o *)this, 0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v28 = this;
  if ( !byte_4C313D6 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v28 )
    goto LABEL_77;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v28,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v29 = this;
  if ( !byte_4C313D1 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v29 )
    goto LABEL_77;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v29,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)component;
    if ( !component )
      goto LABEL_77;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_77;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v4->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_77:
    sub_1C32E7C(this);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v4->fields.effectId,
                                                                             (const MethodInfo_3396838 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v30 = this->fields.servantData;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v30, &path, &name, 0);
        v37 = _4__this->fields.perf;
        if ( v37 )
        {
          data = v37->fields.data;
          if ( data )
          {
            v39 = path;
            battleGenderType = data->fields.battleGenderType;
            v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v31, v32, v33, v34, v35, v36);
            v41 = System_String__Format((System_String_o *)StringLiteral_18818/*"ef_commandaura_{0}"*/, v40, 0);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v39,
                                                                        v41,
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
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v45 = UnityEngine_Object__Instantiate_object__51812484(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v45, 0);
              if ( v45 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v45,
                  !_4__this->fields.isHideFaceTexture,
                  0);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v4->fields.effectId,
                    v45,
                    (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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


Il2CppObject *BattleServantParamComponent__CoAddClassIconEffect_d__187__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__187__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__187_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__187_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BattleServantParamComponent__CoAddClassIconEffect_d__187__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__CoAddClassIconEffect_d__187__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__187_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__DelayMethod_d__176___ctor(
        BattleServantParamComponent__DelayMethod_d__176_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__DelayMethod_d__176__MoveNext(
        BattleServantParamComponent__DelayMethod_d__176_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4C3B09B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3B09B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1C32E7C(0);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, void *))callBack->klass[1]._1.image)(
      callBack,
      callBack->klass[1]._1.gc_desc);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleServantParamComponent__DelayMethod_d__176__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__DelayMethod_d__176__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__176_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleServantParamComponent__DelayMethod_d__176_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BattleServantParamComponent__DelayMethod_d__176__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__DelayMethod_d__176__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__176_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B098 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantParamComponent___c_TypeInfo);
    byte_4C3B098 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleServantParamComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantParamComponent___c_TypeInfo->static_fields->__9 = (struct BattleServantParamComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleServantParamComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleServantParamComponent___c___ctor(BattleServantParamComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c___setTargetMark_b__154_0(
        BattleServantParamComponent___c_o *this,
        UISprite_o *sprite,
        BattleServantParamComponent_TargetIconViewInfo_o *viewInfo,
        const MethodInfo *method)
{
  if ( !viewInfo || !sprite )
    sub_1C32E7C(this);
  UIWidget__set_width((UIWidget_o *)sprite, viewInfo->fields._Width_k__BackingField, 0);
  UIWidget__set_height((UIWidget_o *)sprite, viewInfo->fields._Height_k__BackingField, 0);
  UIWidget__set_depth((UIWidget_o *)sprite, viewInfo->fields._Depth_k__BackingField, 0);
  UIWidget__set_color((UIWidget_o *)sprite, viewInfo->fields._Color_k__BackingField, 0);
}


void BattleServantParamComponent___c__DisplayClass185_0___ctor(
        BattleServantParamComponent___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c__DisplayClass185_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_4C3B099 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    byte_4C3B099 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_33F11A4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void BattleServantParamComponent___c__DisplayClass187_0___ctor(
        BattleServantParamComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantParamComponent___c__DisplayClass187_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  const MethodInfo *v8; // x1
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v11; // w22
  char v12; // w21

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)BattleServantData__get_BuffData(
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
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C32E84(this);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)skillIcon->m_Items[v11];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                         (BattleServantSkillIConComponent_o *)this,
                                                                                         v8);
      max_length = skillIcon->max_length;
      ++v11;
      v12 |= (unsigned __int8)this;
    }
    while ( v11 < max_length );
    if ( (v12 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)BattleServantData__get_BuffData(
                                                                                             (BattleServantData_o *)this,
                                                                                             0)) == 0
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)this[2].monitor) == 0 )
    {
LABEL_19:
      sub_1C32E7C(this);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantParamComponent__showSideEffectList_d__172___ctor(
        BattleServantParamComponent__showSideEffectList_d__172_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantParamComponent__showSideEffectList_d__172__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__172_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__172_o *v2; // x19
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v4; // x21
  BattleServantParamComponent__showSideEffectList_d__172_o *v5; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  BattleServantParamComponent_c *v10; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3B09C & 1) == 0 )
  {
    sub_1C32C20(&BattleEffectUtility_TypeInfo);
    sub_1C32C20(&BattleServantParamComponent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__);
    this = (BattleServantParamComponent__showSideEffectList_d__172_o *)sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3B09C = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__172_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__172_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_393FB30 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v4 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__172_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0),
        !v4) )
  {
LABEL_16:
    sub_1C32E7C(this);
  }
  v5 = this;
  statusEffectId = v4->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v5, statusEffectId, v17, 0);
  BattleServantParamComponent__popBuffLabel(_4__this, v4, 0);
  v10 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v10 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v10->static_fields->SideEffectShowWaitTime;
  v12 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v12, SideEffectShowWaitTime, 0);
  v2->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C32BC4(p__2__current, (int32_t)v12, v14, v15);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattleServantParamComponent__showSideEffectList_d__172__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__172_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantParamComponent__showSideEffectList_d__172__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__172_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleServantParamComponent__showSideEffectList_d__172_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *BattleServantParamComponent__showSideEffectList_d__172__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__172_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantParamComponent__showSideEffectList_d__172__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__172_o *this,
        const MethodInfo *method)
{
  ;
}