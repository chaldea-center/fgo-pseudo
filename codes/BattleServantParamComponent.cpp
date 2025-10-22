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

  if ( (byte_4C5A49A & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_17517/*"btn_menu_select_grand"*/);
    sub_1C3E564(&StringLiteral_17495/*"btn_cs_select"*/);
    sub_1C3E564(&StringLiteral_17516/*"btn_menu_select"*/);
    sub_1C3E564(&StringLiteral_17497/*"btn_cs_select_grand_2"*/);
    sub_1C3E564(&StringLiteral_17496/*"btn_cs_select_grand"*/);
    byte_4C5A49A = 1;
  }
  static_fields = BattleServantParamComponent_TypeInfo->static_fields;
  static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH = 42;
  v4 = StringLiteral_17516/*"btn_menu_select"*/;
  static_fields->TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17516/*"btn_menu_select"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->TARGET_SP_NAME, v4, v1, v2);
  v5 = StringLiteral_17495/*"btn_cs_select"*/;
  v6 = BattleServantParamComponent_TypeInfo->static_fields;
  v6->FIX_TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17495/*"btn_cs_select"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->FIX_TARGET_SP_NAME, v5, v7, v8);
  v9 = StringLiteral_17517/*"btn_menu_select_grand"*/;
  v10 = BattleServantParamComponent_TypeInfo->static_fields;
  v10->TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17517/*"btn_menu_select_grand"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->TARGET_GRAND_SP_NAME, v9, v11, v12);
  v13 = StringLiteral_17496/*"btn_cs_select_grand"*/;
  v14 = BattleServantParamComponent_TypeInfo->static_fields;
  v14->FIX_TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17496/*"btn_cs_select_grand"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->FIX_TARGET_GRAND_SP_NAME, v13, v15, v16);
  v17 = StringLiteral_17497/*"btn_cs_select_grand_2"*/;
  v18 = BattleServantParamComponent_TypeInfo->static_fields;
  v18->FIX_TARGETING_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17497/*"btn_cs_select_grand_2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->FIX_TARGETING_GRAND_SP_NAME, v17, v19, v20);
  v21 = BattleServantParamComponent_TypeInfo->static_fields;
  *(_OWORD *)&v21->TARGET_ICON_SPRITE_WIDTH = xmmword_C119E0;
  *(_OWORD *)&v21->GRAND_TARGET_ICON_SPRITE_HEIGHT = xmmword_C13020;
  *(_OWORD *)&v21->FIX_TARGET_ICON_SPRITE_DEPTH = xmmword_C11B90;
  *(_OWORD *)&v21->TARGET_ICON_SPRITE_WIDTH_WHEN_FIX = xmmword_C12590;
  *(_OWORD *)&v21->FIX_TARGET_ICON_SPRITE_WIDTH_WHEN_TARGET = xmmword_C12270;
  *(_OWORD *)&v21->TARGET_ICON_SPRITE_POSX = xmmword_C11760;
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

  if ( (byte_4C5A499 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_GameObject___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
    sub_1C3E564(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
    byte_4C5A499 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C3E60C(UnityEngine_GameObject___TypeInfo, 1);
  this->fields.effectobj = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Queue_T__o *)sub_1C3E7B0(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v6,
    (const MethodInfo_395C07C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sideEffectShowQueue, (int32_t)v6, v7, v8);
  if ( !byte_4C506A6 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_C11870;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v10;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.classIconEffectDict, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.commandSpellEffectDict, (int32_t)v15, v16, v17);
  v18 = (BattleServantParamComponent_BaseClassIconData_o *)sub_1C3E7B0(BattleServantParamComponent_BaseClassIconData_TypeInfo);
  BattleServantParamComponent_BaseClassIconData___ctor(v18, 0);
  this->fields.classIconData = v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.classIconData, (int32_t)v18, v19, v20);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v6, 0);
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

  if ( (byte_4C5A498 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&BattleDataDefine_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C5A498 = 1;
  }
  targetMark = this->fields.targetMark;
  if ( !targetMark )
    goto LABEL_54;
  targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             targetMark,
                                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark )
    goto LABEL_54;
  v6 = (UISprite_o *)targetMark;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.lockTargetMark,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
            targetMark = (UnityEngine_GameObject_o *)AssetData__GetObject_object__51228128(
                                                       (AssetData_o *)targetMark,
                                                       (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                                       (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
            if ( targetMark )
            {
              targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         targetMark,
                                                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        sub_1C3E7C0(targetMark, isGrand);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C5A48D & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent__CoAddClassIconEffect_d__187_TypeInfo);
    byte_4C5A48D = 1;
  }
  v9 = sub_1C3E7B0(BattleServantParamComponent__CoAddClassIconEffect_d__187_TypeInfo);
  BattleServantParamComponent__CoAddClassIconEffect_d__187___ctor(
    (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 48) = effectId;
  *(_DWORD *)(v9 + 52) = priority;
  *(_QWORD *)(v9 + 40) = servantData;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)servantData, v14, v15);
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
    sub_1C3E7C0(0, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_Collections_IEnumerator_o *BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5A486 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent__DelayMethod_d__176_TypeInfo);
    byte_4C5A486 = 1;
  }
  v6 = sub_1C3E7B0(BattleServantParamComponent__DelayMethod_d__176_TypeInfo);
  BattleServantParamComponent__DelayMethod_d__176___ctor((BattleServantParamComponent__DelayMethod_d__176_o *)v6, 0, 0);
  if ( !v6 )
    sub_1C3E7C0(v7, v8);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), (int32_t)callBack, v9, v10);
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
        sub_1C3E7C8(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, 0);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5A48B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C5A48B = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_340C0FC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
    {
      sub_1C3E7C0(IsNullOrEmpty, v7);
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
          sub_1C3E7C8(IsNullOrEmpty, v7);
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
  const MethodInfo *v8; // x3

  if ( (byte_4C5A492 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A492 = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0, 0) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1C3E7C0(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
    *p_battlePointGaugeComponent = 0;
    sub_1C3E508((CGThumbnailListItem_o *)p_battlePointGaugeComponent, 0, v7, v8);
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
  const MethodInfo *v12; // x3
  Il2CppObject **v13; // x20
  System_Collections_ICollection_o *v14; // x0
  Il2CppObject *v15; // x20
  System_Action_o *v16; // x21
  Il2CppObject *v17; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5A48C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_BattleServantParamComponent___c__DisplayClass185_0__DestroyEffectObject_b__0__);
    sub_1C3E564(&BattleServantParamComponent___c__DisplayClass185_0_TypeInfo);
    byte_4C5A48C = 1;
  }
  component = 0;
  v8 = sub_1C3E7B0(BattleServantParamComponent___c__DisplayClass185_0_TypeInfo);
  BattleServantParamComponent___c__DisplayClass185_0___ctor(
    (BattleServantParamComponent___c__DisplayClass185_0_o *)v8,
    0);
  if ( !v8 )
    goto LABEL_19;
  *(_QWORD *)(v8 + 16) = effectDict;
  v13 = (Il2CppObject **)(v8 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 16), (int32_t)effectDict, v11, v12);
  v14 = *(System_Collections_ICollection_o **)(v8 + 16);
  *(_DWORD *)(v8 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v14, 0) )
  {
    Item = *v13;
    if ( !*v13 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v8 + 24),
           (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v13;
        if ( !*v13 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v8 + 24),
                 (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v15 = component;
          v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)v8,
            Method_BattleServantParamComponent___c__DisplayClass185_0__DestroyEffectObject_b__0__,
            0);
          if ( v15 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))v15->klass->vtable[8].methodPtr)(
              v15,
              1,
              v16,
              v15->klass->vtable[8].method);
            return;
          }
LABEL_19:
          sub_1C3E7C0(Item, v10);
        }
      }
      Item = *v13;
      if ( !*v13 )
        goto LABEL_19;
      v17 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v8 + 24),
              (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)v17, 0);
      Item = *v13;
      if ( !*v13 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v8 + 24),
        (const MethodInfo_340D8C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  CGThumbnailListItem_o *p_grandEffectObj; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5A497 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A497 = 1;
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
        sub_1C3E7C0(gameObject, v5);
      }
      p_grandEffectObj = (CGThumbnailListItem_o *)&this->fields.grandEffectObj;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      klass = (UnityEngine_Object_o *)p_grandEffectObj->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(klass, 0);
      p_grandEffectObj->klass = 0;
      sub_1C3E508(p_grandEffectObj, 0, v9, v10);
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
    sub_1C3E7C0(0, isSkipEffect);
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

  if ( (byte_4C5A48E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    this = (BattleServantParamComponent_o *)sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4C5A48E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_340C24C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
    sub_1C3E7C0(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3AEBDC8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  for ( i = isStart;
        ;
        BattleServantParamComponent__EffectStartStop_47615704(
          (BattleServantParamComponent_o *)v7,
          (UnityEngine_GameObject_o *)v9.fields._currentValue,
          i,
          v8) )
  {
    v7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
           &v9,
           (const MethodInfo_35644A8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    if ( !v7 )
      break;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v9,
    (const MethodInfo_35644A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void BattleServantParamComponent__EffectStartStop_47615704(
        BattleServantParamComponent_o *this,
        UnityEngine_GameObject_o *effect,
        bool isStart,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A48F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A48F = 1;
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
            (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
    {
      UnityEngine_GameObject__SetActive(effect, isStart, 0);
      return;
    }
    UnityEngine_GameObject__SetActive(effect, 1, 0);
    v6 = component;
    if ( !component )
LABEL_14:
      sub_1C3E7C0(v6, v7);
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

  if ( (byte_4C5A447 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A447 = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconViewInfo_47583868(
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
  if ( (byte_4C5A44E & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A44E = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  FixTargetIconWidth = v2->fields.FixTargetIconWidth;
  FixTargetIconHeight = v2->fields.FixTargetIconHeight;
  FixTargetIconDepth = v2->fields.FixTargetIconDepth;
  r = v2->fields.FixTargetIconColor.fields.r;
  g = v2->fields.FixTargetIconColor.fields.g;
  b = v2->fields.FixTargetIconColor.fields.b;
  a = v2->fields.FixTargetIconColor.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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

  if ( (byte_4C5A44B & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A44B = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_47584172(
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
  if ( (byte_4C5A450 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A450 = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  FixTargetIconWidthWhenTarget = v2->fields.FixTargetIconWidthWhenTarget;
  FixTargetIconHeightWhenTarget = v2->fields.FixTargetIconHeightWhenTarget;
  FixTargetIconDepthWhenTarget = v2->fields.FixTargetIconDepthWhenTarget;
  r = v2->fields.FixTargetIconColorWhenTarget.fields.r;
  g = v2->fields.FixTargetIconColorWhenTarget.fields.g;
  b = v2->fields.FixTargetIconColorWhenTarget.fields.b;
  a = v2->fields.FixTargetIconColorWhenTarget.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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
  if ( (byte_4C5A457 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_BattleServantParamSetting___);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1C3E564(&StringLiteral_3130/*"BattleServantParamSettingData_{0}"*/);
    byte_4C5A457 = 1;
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
    sub_1C3E7C0(this, stageEntity);
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
    return (BattleServantParamSetting_o *)AssetData__GetObject_object__51228128(
                                            v18,
                                            v20,
                                            (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_BattleServantParamSetting___);
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

  if ( (byte_4C5A455 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_3093/*"Battle/EnemyUI/{0}"*/);
    byte_4C5A455 = 1;
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

  BattleServantParamComponent__EffectStartStop_47615704(this, this->fields.grandEffectObj, isStart, v3);
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

  if ( (byte_4C5A448 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A448 = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconViewInfo_47584484(
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
  if ( (byte_4C5A452 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A452 = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  GrandFixTargetIconWidth = v2->fields.GrandFixTargetIconWidth;
  GrandFixTargetIconHeight = v2->fields.GrandFixTargetIconHeight;
  GrandFixTargetIconDepth = v2->fields.GrandFixTargetIconDepth;
  r = v2->fields.GrandFixTargetIconColor.fields.r;
  g = v2->fields.GrandFixTargetIconColor.fields.g;
  b = v2->fields.GrandFixTargetIconColor.fields.b;
  a = v2->fields.GrandFixTargetIconColor.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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

  if ( (byte_4C5A44C & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A44C = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_47584788(
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
  if ( (byte_4C5A454 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A454 = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  GrandFixTargetIconWidthWhenTarget = v2->fields.GrandFixTargetIconWidthWhenTarget;
  GrandFixTargetIconHeightWhenTarget = v2->fields.GrandFixTargetIconHeightWhenTarget;
  GrandFixTargetIconDepthWhenTarget = v2->fields.GrandFixTargetIconDepthWhenTarget;
  r = v2->fields.GrandFixTargetIconColorWhenTarget.fields.r;
  g = v2->fields.GrandFixTargetIconColorWhenTarget.fields.g;
  b = v2->fields.GrandFixTargetIconColorWhenTarget.fields.b;
  a = v2->fields.GrandFixTargetIconColorWhenTarget.fields.a;
  v10 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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
  if ( (byte_4C5A451 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A451 = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  GrandTargetIconWidth = v2->fields.GrandTargetIconWidth;
  GrandTargetIconHeight = v2->fields.GrandTargetIconHeight;
  GrandTargetIconDepth = v2->fields.GrandTargetIconDepth;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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

  if ( (byte_4C5A446 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A446 = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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

  if ( (byte_4C5A44A & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A44A = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_47584648(
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
  if ( (byte_4C5A453 & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A453 = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  GrandTargetIconWidthWhenFix = v2->fields.GrandTargetIconWidthWhenFix;
  GrandTargetIconHeightWhenFix = v2->fields.GrandTargetIconHeightWhenFix;
  GrandTargetIconDepthWhenFix = v2->fields.GrandTargetIconDepthWhenFix;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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
  __int64 v9; // x1

  if ( (byte_4C5A47C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A47C = 1;
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
        sub_1C3E7C0(isTDSeraled, v9);
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

  if ( (byte_4C5A494 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__198_0__);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_5884/*"Effect/GrandServant"*/);
    byte_4C5A494 = 1;
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
          v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo),
          AssetLoader_LoadEndDataHandler___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__198_0__,
            0),
          !assetStorageLoadWrapper_k__BackingField) )
    {
      sub_1C3E7C0(gameObject, v4);
    }
    AssetStorageLoadWrapper__LoadAssetStorage(
      assetStorageLoadWrapper_k__BackingField,
      (System_String_o *)StringLiteral_5884/*"Effect/GrandServant"*/,
      v8,
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

  if ( (byte_4C5A445 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A445 = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__NormalTargetIconViewInfo_47583728(
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
  if ( (byte_4C5A44D & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A44D = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  TargetIconWidth = v2->fields.TargetIconWidth;
  TargetIconHeight = v2->fields.TargetIconHeight;
  TargetIconDepth = v2->fields.TargetIconDepth;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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
  __int64 v13; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5A45A & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_22423/*"onClickServant"*/);
    byte_4C5A45A = 1;
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
        sub_1C3E7C0(v12, v13);
      UnityEngine_GameObject__SendMessage_71323352(v11, (System_String_o *)StringLiteral_22423/*"onClickServant"*/, v12, 0);
    }
  }
}


void BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C5A47F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A47F = 1;
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
      sub_1C3E7C0(v8, v7);
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
  const MethodInfo *v9; // x6
  BattleServantHpShiftComponent_o *v10; // x0
  const MethodInfo *v11; // x4
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A47A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A47A = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v10 = this->fields.hpShift;
    if ( !v10
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(v10, index, effectData, this, &nextAnimationTime, 0, v9),
          (v10 = this->fields.hpShift) == 0) )
    {
      sub_1C3E7C0(v10, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v10, index, 1, 1, v11);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x6
  float result; // s0
  BattleServantHpShiftComponent_o *v12; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A478 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A478 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0, 0);
  result = 0.0;
  if ( v8 )
  {
    v12 = this->fields.hpShift;
    if ( !v12 )
      sub_1C3E7C0(0, v9);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0, v10);
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

  if ( (byte_4C5A479 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__bool__bool__TypeInfo);
    sub_1C3E564(&Method_BattleCallBack_int__bool__bool___ctor__);
    sub_1C3E564(&BattleCallBack_int__bool__bool__TypeInfo);
    sub_1C3E564(&Method_BattleServantHpShiftComponent_UpdateIcon__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A479 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
  {
    v12 = this->fields.hpShift;
    if ( !v12
      || (BattleServantHpShiftComponent__UpdateIconActive(v12, index, 1, v11), (v12 = this->fields.hpShift) == 0) )
    {
      sub_1C3E7C0(v12, v10);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0, v13);
    v14 = (Il2CppObject *)this->fields.hpShift;
    v15 = (System_Action_int__bool__bool__o *)sub_1C3E7B0(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v15, v14, Method_BattleServantHpShiftComponent_UpdateIcon__, 0);
    v16 = (BattleCallBack_int__bool__bool__o *)sub_1C3E7B0(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v16,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v15,
      (const MethodInfo_3329A14 *)Method_BattleCallBack_int__bool__bool___ctor__);
    v19 = BattleServantParamComponent__DelayMethod(v17, delayTime, (BattleCallBackBase_o *)v16, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v19, 0);
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
        sub_1C3E7C8(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, 0);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C3E7C0(this, method);
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
  const MethodInfo *v15; // x3
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A459 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A459 = 1;
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
                                           (const MethodInfo_30F133C *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
              if ( ((unsigned __int8)Component_object & 1) == 0 )
              {
LABEL_24:
                *p_defaultServantParam = 0;
                sub_1C3E508((CGThumbnailListItem_o *)&this->fields.defaultServantParam, 0, v14, v15);
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
    sub_1C3E7C0(Component_object, v5);
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
    sub_1C3E7C0(root, v6);
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

  if ( (byte_4C5A493 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A493 = 1;
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
    sub_1C3E7C0(v7, v6);
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
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  int v9; // s0 OVERLAPPED
  struct BattleServantShowBuffComponent_o *v12; // x19
  struct BattleServantParamSetting_o *v13; // x8
  struct BattleServantParamSetting_o *v14; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *v16; // x10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C5A463 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A463 = 1;
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
    showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *, long double, long double, long double))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.methodPtr)(
                          paramPosData,
                          paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method,
                          *(long double *)&localPosition.fields.x,
                          *(long double *)&localPosition.fields.y,
                          *(long double *)&localPosition.fields.z);
    if ( !v8 )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v9, 0);
    v12 = this->fields.showBuffComponent;
    showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, const MethodInfo *))paramPosData->klass->vtable._7_get_BuffIconMaxLine.methodPtr)(
                          paramPosData,
                          paramPosData->klass->vtable._7_get_BuffIconMaxLine.method);
    if ( !v12 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v13 = this->fields.battleServantParamSetting;
  if ( !v13
    || (ComponentHelper__SetLocalPosition(
          (UnityEngine_Component_o *)this->fields.showBuffComponent,
          v13->fields.BuffIconPosition,
          0),
        (v14 = this->fields.battleServantParamSetting) == 0) )
  {
LABEL_22:
    sub_1C3E7C0(showBuffComponent, v7);
  }
  BuffIconMax = v14->fields.BuffIconMax;
  if ( (BuffIconMax & 0x80000000) == 0 )
  {
    v16 = this->fields.showBuffComponent;
    if ( !v16 )
      goto LABEL_22;
    v16->fields.maxCount = BuffIconMax;
  }
  showBuffComponent = (unsigned int)v14->fields.BuffIconMaxLine;
  if ( (showBuffComponent & 0x80000000) == 0 )
  {
    v12 = this->fields.showBuffComponent;
    if ( !v12 )
      goto LABEL_22;
LABEL_20:
    v12->fields.maxLine = showBuffComponent;
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

  if ( (byte_4C5A495 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&Method_System_Nullable_int__get_HasValue__);
    byte_4C5A495 = 1;
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
                              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UISprite___)) != 0)
    && (klass = (int32_t)Component_object[11].klass,
        v7 = (System_Nullable_int__o)&v15,
        v15 = 0,
        System_Nullable_int____ctor(v7, klass, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v15) )
  {
    v8 = PARTY_ORGANIZATION_CLASS_ICON_DEPTH - HIDWORD(v15);
    v9 = (System_Nullable_int__o)&v15;
    v15 = 0;
    System_Nullable_int____ctor(v9, v8, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
    v10 = HIDWORD(v15);
  }
  else
  {
    v10 = 0;
  }
  grandEffectObj = this->fields.grandEffectObj;
  if ( !grandEffectObj )
    goto LABEL_19;
  grandEffectObj = UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                     (UnityEngine_GameObject_o *)grandEffectObj,
                     (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1C3E7C8(grandEffectObj, method);
      grandEffectObj = (void *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !grandEffectObj )
        break;
      UIWidget__set_depth((UIWidget_o *)grandEffectObj, *((_DWORD *)grandEffectObj + 44) - v10, 0);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        return;
    }
LABEL_19:
    sub_1C3E7C0(grandEffectObj, method);
  }
}


void BattleServantParamComponent__SetupDefaultBattleServantParamSetting(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultServantParam; // x20
  Il2CppObject *Component_object; // x21
  __int64 v5; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *clsIconComponent; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_defaultServantParam; // x19
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5A458 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamSetting_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A458 = 1;
  }
  defaultServantParam = (UnityEngine_Object_o *)this->fields.defaultServantParam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(defaultServantParam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    v5 = sub_1C3E7B0(BattleServantParamSetting_TypeInfo);
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
      sub_1C3E7C0(clsIconComponent, v6);
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
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
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
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      size = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    *(UnityEngine_Vector3_o *)(v5 + 84) = size;
    p_defaultServantParam->klass = (CGThumbnailListItem_c *)v5;
    sub_1C3E508(p_defaultServantParam, v5, v8, v9);
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

  if ( (byte_4C5A45E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A45E = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
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

  if ( (byte_4C5A496 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A496 = 1;
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
                                                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___)) == 0 )
    {
      sub_1C3E7C0(Component_object, v6);
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

  if ( (byte_4C5A449 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A449 = 1;
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
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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


BattleServantParamComponent_TargetIconViewInfo_o *BattleServantParamComponent__TargetIconWhenFixViewInfo_47584032(
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
  if ( (byte_4C5A44F & 1) == 0 )
  {
    setting = (BattleServantParamSetting_o *)sub_1C3E564(&BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
    byte_4C5A44F = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(setting, method);
  TargetIconWidthWhenFix = v2->fields.TargetIconWidthWhenFix;
  TargetIconHeightWhenFix = v2->fields.TargetIconHeightWhenFix;
  TargetIconDepthWhenFix = v2->fields.TargetIconDepthWhenFix;
  v6 = (BattleServantParamComponent_TargetIconViewInfo_o *)sub_1C3E7B0(BattleServantParamComponent_TargetIconViewInfo_TypeInfo);
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
  if ( (byte_4C5A490 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A490 = 1;
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
        sub_1C3E7C0(this, svtdata);
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
  if ( (byte_4C5A491 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A491 = 1;
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
        sub_1C3E7C0(this, svtdata);
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
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C5A48A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleServantParamComponent_o *)sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C5A48A = 1;
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
  v8 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_340C0EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v34 = v31;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C3E7C0(v10, v11);
    if ( !v9 )
      sub_1C3E7C0(v10, v11);
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v9,
            &entity,
            (int32_t)v34.fields._current[21].monitor,
            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C3E7C0(v13, v14);
      v16 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v15);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)v4, v16, 0);
      if ( !v8 )
        sub_1C3E7C0(started, v18);
      v19 = System_Collections_Generic_List_int___Contains(
              v8,
              (int32_t)current[21].monitor,
              (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v19 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C3E7C0(v19, monitor_low);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            monitor_low,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v8 )
LABEL_38:
    sub_1C3E7C0(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v8,
    (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v32,
            (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1C3E7C0(0, v24);
    v26 = (int32_t)v32.fields._current;
    v27 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v32.fields._current,
            (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
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
    (System_Collections_Generic_List_Enumerator_int__o *)&v32,
    (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1C3E7C0(this, svtData);
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
    sub_1C3E7C0(this, 0);
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
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_4C5A488 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A488 = 1;
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
        sub_1C3E7C0(data, v4);
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

  if ( (byte_4C5A466 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A466 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0, 0) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
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
  const MethodInfo *v7; // x3
  BattleServantChangeBarComponent_o *v8; // x0

  if ( (byte_4C5A47B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A47B = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0, 0) )
  {
    v8 = this->fields.hpChange;
    if ( !v8 )
      sub_1C3E7C0(0, v6);
    BattleServantChangeBarComponent__setBarType(v8, 1, curGaugeIndex, v7);
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
  __int64 v15; // x1
  System_Collections_Hashtable_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  __int64 v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  __int64 v43; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v45[4]; // [xsp+8h] [xbp-78h] BYREF
  float v46; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v47; // [xsp+18h] [xbp-68h] BYREF
  int32_t v48; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C5A47E & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&System_Collections_Hashtable_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_20299/*"ignoretimescale"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22449/*"oncompleteparams"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_9979/*"OnUpdateShiftGaugeChangeHp"*/);
    sub_1C3E564(&StringLiteral_9882/*"OnCompleteShiftGaugeChangeHp"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A47E = 1;
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
        v16 = (System_Collections_Hashtable_o *)sub_1C3E7B0(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_65000696(v16, 0),
        v48 = fromHp,
        v14 = j_il2cpp_value_box_0(int_TypeInfo, &v48, v17, v18, v19, v20, v21, v22),
        !v16) )
  {
LABEL_13:
    sub_1C3E7C0(v14, v15);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_19710/*"from"*/,
    v14,
    v16->klass->vtable._22_Add.method);
  v47 = toHp;
  v29 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v23, v24, v25, v26, v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_24130/*"to"*/,
    v29,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_22456/*"onupdate"*/,
    StringLiteral_9979/*"OnUpdateShiftGaugeChangeHp"*/,
    v16->klass->vtable._22_Add.method);
  v46 = time;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, &v46, v30, v31, v32, v33, v34, v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_24091/*"time"*/,
    v36,
    v16->klass->vtable._22_Add.method);
  v45[0] = 1;
  v43 = j_il2cpp_value_box_0(bool_TypeInfo, v45, v37, v38, v39, v40, v41, v42);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_20299/*"ignoretimescale"*/,
    v43,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_22448/*"oncomplete"*/,
    StringLiteral_9882/*"OnCompleteShiftGaugeChangeHp"*/,
    v16->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_22449/*"oncompleteparams"*/,
    playShiftGauge,
    v16->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v18; // x3
  UILabel_o *v19; // x20
  __int64 v20; // x8
  float v21; // s8
  float v22; // s1
  float v23; // s0 OVERLAPPED
  float v24; // s2

  if ( (byte_4C5A489 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&StringLiteral_17114/*"battle_name"*/);
    byte_4C5A489 = 1;
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
        UnityEngine_Object__Destroy_71341564(v10, 0);
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
            ? AssetData__GetObject_object__51228128(
                AssetStorage,
                (System_String_o *)StringLiteral_17114/*"battle_name"*/,
                (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v16 = UnityEngine_Object__Instantiate_object__51929056(
                v14,
                transform,
                (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v16;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v16, v17, v18);
      }
      data = this->fields.data;
      if ( data )
      {
        v19 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0);
        if ( v19 )
        {
          UILabel__set_text(v19, (System_String_o *)data, 0);
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
          v20 = *(_QWORD *)&data->fields.nexttpturn;
          if ( !v20 )
            goto LABEL_44;
          v21 = (float)(data->fields.downtdrate * *(_DWORD *)(v20 + 16));
          if ( (float)(int)defaultShortNameLabelWidth >= v21 )
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
      sub_1C3E7C0(data, defaultShortNameLabelWidth);
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
      sub_1C3E7C0(0, v4);
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0) )
    {
      updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, v5);
      UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, updated, 0);
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

  if ( (byte_4C5A46D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A46D = 1;
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
      sub_1C3E7C0(classIconData, v3);
    }
  }
}


void BattleServantParamComponent__UpdateStatusFace(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x21
  BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C5A487 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    byte_4C5A487 = 1;
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
        || (v7 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0),
            (v8 = this->fields.data) == 0) )
      {
        sub_1C3E7C0(data, v5);
      }
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v7, v9, DispLimitCount, 0);
      p_facetex->klass = (CGThumbnailListItem_c *)Manager__loadStatusFace;
      sub_1C3E508(p_facetex, (int32_t)Manager__loadStatusFace, v12, v13);
    }
  }
}


void BattleServantParamComponent__UpdateTdGauge(
        BattleServantParamComponent_o *this,
        System_Int32_array *nowAndMaxArray,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x21
  __int64 v6; // x1
  BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v8; // x20
  int32_t v9; // w19
  int32_t v10; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v12; // x1

  if ( (byte_4C5A47D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A47D = 1;
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
          sub_1C3E7C8(data, v6);
        v8 = this->fields.nextTdGauge;
        v10 = nowAndMaxArray->m_Items[0];
        v9 = nowAndMaxArray->m_Items[1];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0);
        if ( !v8 )
          sub_1C3E7C0(isTDSeraled, v12);
        BattleNextTDgaugeComponent__setInitGauge(v8, v10, v9, isTDSeraled, 0);
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
  Il2CppObject *Object_object__51228128; // x21
  UnityEngine_Transform_o *grandEffectRoot; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C5A49B & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_18837/*"ef_classicon_flash_{0}"*/);
    this = (BattleServantParamComponent_o *)sub_1C3E564(&StringLiteral_18835/*"ef_classicon_flash"*/);
    byte_4C5A49B = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_14;
  frameType_k__BackingField = data->fields._frameType_k__BackingField;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType_k__BackingField, 1, 0);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &AdjustFrameTypeForClass, v7, v8, v9, v10, v11, v12);
  this = (BattleServantParamComponent_o *)System_String__Format((System_String_o *)StringLiteral_18837/*"ef_classicon_flash_{0}"*/, v13, 0);
  if ( !assetData )
LABEL_14:
    sub_1C3E7C0(this, assetData);
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              assetData,
                              (System_String_o *)this,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51228128, 0, 0) )
    Object_object__51228128 = AssetData__GetObject_object__51228128(
                                assetData,
                                (System_String_o *)StringLiteral_18835/*"ef_classicon_flash"*/,
                                (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  grandEffectRoot = v4->fields.grandEffectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object__51929056(
          Object_object__51228128,
          grandEffectRoot,
          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  v4->fields.grandEffectObj = (struct UnityEngine_GameObject_o *)v16;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.grandEffectObj, (int32_t)v16, v17, v18);
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
  if ( (byte_4C5A470 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3E564(&Method_BattleServantParamComponent_callSkillIcon__);
    byte_4C5A470 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1C3E7C0(this, method);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C3E7C8(this, method);
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
          v7 = (_QWORD *)sub_1C3E57C(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
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
    sub_1C3E7C0(NowHp, v5);
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

  if ( (byte_4C5A485 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_4C5A485 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3
    || (showBuffComponent = this->fields.showBuffComponent,
        v4 = System_Collections_Generic_List_object___ToArray(
               v3,
               (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1C3E7C0(v4, v5);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4C5A472 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A472 = 1;
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
                                                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0 )
    {
      sub_1C3E7C0(Component_object, v8);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5A471 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_TypeInfo);
    byte_4C5A471 = 1;
  }
  v3 = sub_1C3E7B0(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_TypeInfo);
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145___ctor(
    (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v15; // x21
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v17; // x8
  struct BattleServantParamSetting_o *v18; // x8
  struct BattleServantParamSetting_o *v19; // x8
  struct BattleServantParamSetting_o *v20; // x8
  int32_t BuffIconMax; // w9
  struct BattleServantShowBuffComponent_o *showBuffComponent; // x10
  int32_t BuffIconMaxLine; // w9
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  struct BattleServantParamSetting_o *v26; // x8
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v28; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v30; // x21
  int32_t v31; // w22
  UnityEngine_Object_o *hpChange; // x21
  const MethodInfo *v33; // x3
  struct BattleServantData_o *v34; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v39; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v41; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v43; // x21
  struct BattleServantData_o *v44; // x8
  BattleNpGaugeSystemComponent_o *v45; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v47; // w0
  const MethodInfo *v48; // x2
  BattleNextTDgaugeComponent_o *v49; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v53; // x8
  UISprite_o *v54; // x20
  UISprite_o *v55; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  const MethodInfo *v58; // x4
  struct BattleServantData_o *v59; // x8
  struct BattleServantData_o *v60; // x8
  ServantBattlePointMaster_o *v61; // x20
  __int64 v62; // x21
  __int64 v63; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v65; // x20
  __int64 v66; // x9
  int *p_offset; // x10
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x20
  BattlePointData_o *v71; // x23
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x21
  BattleServantData_o *v82; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v84; // x1
  BattlePointData_o *v85; // x28
  struct BattleServantData_o *v86; // x8
  UnityEngine_Object_o *battlePointRoot; // x22
  int32_t v88; // w22
  UnityEngine_Transform_o *v89; // x23
  UnityEngine_Object_o *Manager__LoadBattlePointGauge; // x22
  _BOOL8 v91; // x0
  __int64 v92; // x1
  Il2CppObject *Component_object; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  __int64 v96; // x1
  BattlePointGaugeComponent_o *battlePointGaugeComponent; // x0
  const MethodInfo *v98; // x2
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4C5A46C & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantBattlePointMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&FileName_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    byte_4C5A46C = 1;
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
    v8 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0);
    if ( !this->fields.data )
      goto LABEL_178;
    v9 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v9, DispLimitCount, 0);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.facetex, (int32_t)Manager__loadStatusFace, v12, v13);
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
    v15 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0);
    if ( !v15 )
      goto LABEL_178;
    UILabel__set_text(v15, (System_String_o *)data, 0);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v17 = this->fields.battleServantParamSetting;
    if ( !v17 )
      goto LABEL_178;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.clsIconComponent,
      v17->fields.IsDispClassIcon,
      0);
    v18 = this->fields.battleServantParamSetting;
    if ( !v18 )
      goto LABEL_178;
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this, v18->fields.UiPosition, 0);
    v19 = this->fields.battleServantParamSetting;
    if ( !v19 )
      goto LABEL_178;
    ComponentHelper__SetLocalScale((UnityEngine_Component_o *)this, v19->fields.UiScale, 0);
    v20 = this->fields.battleServantParamSetting;
    if ( !v20 )
      goto LABEL_178;
    BuffIconMax = v20->fields.BuffIconMax;
    if ( (BuffIconMax & 0x80000000) == 0 )
    {
      showBuffComponent = this->fields.showBuffComponent;
      if ( !showBuffComponent )
        goto LABEL_178;
      showBuffComponent->fields.maxCount = BuffIconMax;
    }
    BuffIconMaxLine = v20->fields.BuffIconMaxLine;
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
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)data, v20->fields.BuffIconPosition, 0);
    v24 = this->fields.battleServantParamSetting;
    if ( !v24 )
      goto LABEL_178;
    GameObjectHelper__SetActiveSafely(this->fields.levelRoot, v24->fields.IsDispLevel, 0);
    data = (BattleServantData_o *)UnityEngine_Component__TryGetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    &component,
                                    (const MethodInfo_30F133C *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v25 = this->fields.battleServantParamSetting;
      if ( !v25 )
        goto LABEL_178;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_178;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)component, v25->fields.BoxColliderPosition, 0);
      v26 = this->fields.battleServantParamSetting;
      if ( !v26 )
        goto LABEL_178;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_178;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)component, v26->fields.BoxColliderSize, 0);
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
  BattleServantParamComponent__UpdateShortNameLabel(this, v6);
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
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v37);
  }
  BattleServantParamComponent__setAtlas(this, v6);
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
  v39 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0);
  BattleServantParamComponent__updateHplabel(this, v39, MaxHp, 1, v41);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v43 = this->fields.npcomp;
    if ( !v43 )
      goto LABEL_178;
    v43->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v43->fields.maxparam = BattleServantData__getCountMaxNp(data, 0);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_178;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0);
    v44 = this->fields.data;
    if ( !v44 )
      goto LABEL_178;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_178;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v44->fields.np, 0);
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v45 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0);
    if ( !v45 )
      goto LABEL_178;
    BattleNpGaugeSystemComponent__setUseNp(v45, (unsigned __int8)data & 1, 0);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v47 = UnityEngine_Object__op_Inequality(nextTdGauge, 0, 0);
  if ( (v3 & 1) == 0 && v47 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_178;
    v49 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0);
    if ( !v49 )
      goto LABEL_178;
    BattleNextTDgaugeComponent__setInitGauge(v49, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v48);
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
    v53 = this->fields.data;
    if ( !v53 )
      goto LABEL_178;
    if ( v53->fields.followerType )
    {
      v54 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v54 )
        goto LABEL_178;
      UISprite__set_spriteName(v54, FileName_TypeInfo->static_fields->friendIconName, 0);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_178;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
      if ( !data )
        goto LABEL_178;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
      v53 = this->fields.data;
      if ( !v53 )
        goto LABEL_178;
    }
    if ( v53->fields.flgEventJoin )
    {
      v55 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v55 )
        goto LABEL_178;
      UISprite__set_spriteName(v55, FileName_TypeInfo->static_fields->eventJoinIconName, 0);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_178;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0);
      if ( !data )
        goto LABEL_178;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v6);
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
      v59 = this->fields.data;
      if ( !v59 )
        goto LABEL_178;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_178;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v59->fields.defeatPoint,
        v59->fields.maxDefeatPoint,
        v59->fields.isEnemy,
        v58);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_178;
  v61 = (ServantBattlePointMaster_o *)data;
  v63 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
  v62 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v63;
  *(_QWORD *)&v104.fields.fakeValue = v62;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v104, 0);
  if ( !v61
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v61, (int32_t)data, 0)) == 0 )
  {
LABEL_178:
    sub_1C3E7C0(data, v6);
  }
  klass = data->klass;
  v65 = data;
  v66 = *(unsigned __int16 *)&data->klass->_2.rank;
  if ( *(_WORD *)&data->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v66;
      p_offset += 4;
      if ( !v66 )
        goto LABEL_130;
    }
    v68 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_130:
    v68 = sub_1C8ED7C(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0);
  }
  v70 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
  if ( !v70 )
    sub_1C3E7C0(0, v69);
  v71 = 0;
  while ( 1 )
  {
    v72 = *(_QWORD *)v70;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_138;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_138:
      v75 = sub_1C8ED7C(v70, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v70, *(_QWORD *)(v75 + 8)) & 1) == 0 )
      break;
    v76 = *(_QWORD *)v70;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v78 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_145;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_145:
      v79 = sub_1C8ED7C(v70, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0);
    }
    v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v70, *(_QWORD *)(v79 + 8));
    if ( !v81 )
      sub_1C3E7C0(0, v80);
    v82 = this->fields.data;
    if ( !v82 )
      sub_1C3E7C0(0, v80);
    BattlePointData = BattleServantData__GetBattlePointData(v82, *(_DWORD *)(v81 + 20), 0);
    if ( BattlePointData )
      v85 = BattlePointData;
    else
      v85 = v71;
    if ( !BattlePointData )
      goto LABEL_186;
    if ( !v85 )
      sub_1C3E7C0(BattlePointData, v84);
    v71 = BattlePointData;
    if ( !v85->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_186:
      v86 = this->fields.data;
      if ( !v86 )
        sub_1C3E7C0(BattlePointData, v84);
      v71 = v85;
      if ( !v86->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v71 = v85;
        if ( UnityEngine_Object__op_Inequality(battlePointRoot, 0, 0) )
        {
          v88 = *(_DWORD *)(v81 + 20);
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
          v71 = v85;
          if ( !v91 )
          {
            if ( !Manager__LoadBattlePointGauge )
              sub_1C3E7C0(v91, v92);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Manager__LoadBattlePointGauge,
                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
            this->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)Component_object;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&this->fields.battlePointGaugeComponent,
              (int32_t)Component_object,
              v94,
              v95);
            battlePointGaugeComponent = this->fields.battlePointGaugeComponent;
            if ( !battlePointGaugeComponent )
              sub_1C3E7C0(0, v96);
            BattlePointGaugeComponent__Init(battlePointGaugeComponent, *(_DWORD *)(v81 + 20), 0);
            BattleServantParamComponent__UpdateBattlePointImmediately(this, this->fields.data, v98);
            break;
          }
        }
      }
    }
  }
  v99 = *(_QWORD *)v70;
  v100 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
  {
    v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
    {
      --v100;
      v101 += 4;
      if ( !v100 )
        goto LABEL_172;
    }
    v102 = v99 + 16LL * *v101 + 312;
  }
  else
  {
LABEL_172:
    v102 = sub_1C8ED7C(v70, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v102)(v70, *(_QWORD *)(v102 + 8));
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
          BYTE4(this[1].fields.showBuffComponent) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0);
          return;
        }
      }
    }
LABEL_16:
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(this, method);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0);
}


void BattleServantParamComponent__playAddition(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4C5A481 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3098/*"Battle/Prefab/ef_add_enemy"*/);
    byte_4C5A481 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_41233740(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3098/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0,
                                                          0),
          (v6 = this->fields.data) == 0) )
    {
      sub_1C3E7C0(clsIconComponent, method);
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
  if ( (byte_4C5A46B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1C3E564(&StringLiteral_18920/*"effect/ef_cwflash01"*/);
    byte_4C5A46B = 1;
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
    UnityEngine_Object__Destroy_71341564(v6, 0);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_41233740(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18920/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0,
                                                  0);
        if ( v8 )
        {
          if ( LODWORD(v8->max_length) )
          {
            v8->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1C3E508((CGThumbnailListItem_o *)v8->m_Items, (int32_t)this, v10, v11);
            return;
          }
LABEL_23:
          sub_1C3E7C8(this, method);
        }
      }
    }
LABEL_22:
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5A45C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A45C = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C3E7C0(0, v4);
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

  if ( (byte_4C5A45D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A45D = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C3E7C0(0, v4);
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

  if ( (byte_4C5A45B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A45B = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C3E7C0(0, v4);
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

  if ( (byte_4C5A477 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A477 = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
    {
      v6 = this->fields.hpShift;
      if ( !v6 )
        sub_1C3E7C0(0, v4);
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

  if ( (byte_4C5A476 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A476 = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0, 0) )
    return 0.0;
  v6 = this->fields.hpShift;
  if ( !v6 )
    sub_1C3E7C0(0, v4);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v6, this->fields.data, v5);
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
  UnityEngine_Object_o *ComponentInChildren_object__51713140; // x23
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

  if ( (byte_4C5A484 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A484 = 1;
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
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
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
      ComponentInChildren_object__51713140 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__51713140(
                                                                       (UnityEngine_GameObject_o *)v6,
                                                                       1,
                                                                       (const MethodInfo_3151474 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__51713140, 0, 0);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__51713140 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__51713140,
          buffData->fields.popIcon,
          v12);
        monitor = ComponentInChildren_object__51713140[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v14 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__51713140,
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
        v15 = ComponentInChildren_object__51713140[1].monitor;
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
    sub_1C3E7C0(perf, buffData);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v17; // x8
  struct BattleServantParamSetting_o *v18; // x8
  struct BattleServantParamSetting_o *v19; // x8
  struct BattleServantParamSetting_o *v20; // x8
  int v21; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v22; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C5A46F & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C3E564(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    sub_1C3E564(&StringLiteral_20039/*"hp_break_"*/);
    byte_4C5A46F = 1;
  }
  component = 0;
  v22 = 0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_33;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__51228128(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !AssetStorage )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    v21 = 1;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v9, v10, v11, v12, v13, v14);
    AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_20039/*"hp_break_"*/, v15, 0);
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
    v17 = this->fields.battleServantParamSetting;
    if ( !v17 )
      goto LABEL_33;
    AssetStorage = (AssetData_o *)System_String__IsNullOrEmpty(v17->fields.TargetIconSpriteName, 0);
    if ( ((unsigned __int8)AssetStorage & 1) == 0 )
    {
      AssetStorage = (AssetData_o *)this->fields.targetMark;
      if ( !AssetStorage )
        goto LABEL_33;
      AssetStorage = (AssetData_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                      (UnityEngine_GameObject_o *)AssetStorage,
                                      &component,
                                      (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_atlas((UISprite_o *)component, v7, 0);
        v18 = this->fields.battleServantParamSetting;
        if ( !v18 )
          goto LABEL_33;
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_spriteName((UISprite_o *)component, v18->fields.TargetIconSpriteName, 0);
      }
    }
    v19 = this->fields.battleServantParamSetting;
    if ( v19 )
    {
      if ( System_String__IsNullOrEmpty(v19->fields.FixTargetIconSpriteName, 0) )
        return;
      AssetStorage = (AssetData_o *)this->fields.lockTargetMark;
      if ( AssetStorage )
      {
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)AssetStorage,
                &v22,
                (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
          return;
        AssetStorage = (AssetData_o *)v22;
        if ( v22 )
        {
          UISprite__set_atlas((UISprite_o *)v22, v7, 0);
          v20 = this->fields.battleServantParamSetting;
          if ( v20 )
          {
            AssetStorage = (AssetData_o *)v22;
            if ( v22 )
            {
              UISprite__set_spriteName((UISprite_o *)v22, v20->fields.FixTargetIconSpriteName, 0);
              return;
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C3E7C0(AssetStorage, v4);
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

  if ( (byte_4C5A45F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_13205/*"SvtW_StartClose"*/);
    byte_4C5A45F = 1;
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_63;
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
        v17 = sub_1C8ED7C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_63;
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
        v22 = sub_1C8ED7C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
      Item = (UIWidget_o *)SimpleAnimation__get_Item(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
      v29 = sub_1C8ED7C(v25, v24, 8);
LABEL_56:
      (*(void (__fastcall **)(UIWidget_o *, _QWORD, float))v29)(v25, *(_QWORD *)(v29 + 8), 1.0);
      SimpleAnimation__Play_66582224((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
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
                           (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
                           0);
    if ( !Item )
      goto LABEL_63;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0);
    Item = (UIWidget_o *)UnityEngine_Animation__get_Item(
                           (UnityEngine_Animation_o *)v12,
                           (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
                           0);
    if ( !Item )
      goto LABEL_63;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0);
    UnityEngine_Animation__Play_71086848((UnityEngine_Animation_o *)v12, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
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
    sub_1C3E7C0(Item, v6);
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
  struct BattleServantData_o *v26; // x8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x3

  if ( (byte_4C5A456 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_BaseClassIconData_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_ClassIconData_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A456 = 1;
  }
  p_data = &this->fields.data;
  this->fields.modeWindow = 1;
  this->fields.data = battleServantData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.data, (int32_t)battleServantData, (int32_t)stageEntity, method);
  if ( !battleServantData )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0, 0) )
  {
    v9 = this->fields.clsIconComponent;
    v10 = (BattleServantParamComponent_ClassIconData_o *)sub_1C3E7B0(BattleServantParamComponent_ClassIconData_TypeInfo);
    BattleServantParamComponent_ClassIconData___ctor(v10, battleServantData, v9, 0);
  }
  else
  {
LABEL_8:
    v10 = (BattleServantParamComponent_ClassIconData_o *)sub_1C3E7B0(BattleServantParamComponent_BaseClassIconData_TypeInfo);
    BattleServantParamComponent_BaseClassIconData___ctor((BattleServantParamComponent_BaseClassIconData_o *)v10, 0);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.classIconData, (int32_t)v10, v11, v12);
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
  sub_1C3E508(
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
  v26 = this->fields.data;
  if ( !v26 )
LABEL_28:
    sub_1C3E7C0(v20, v21);
  if ( v26->fields._IsShowGrandEffect_k__BackingField )
    BattleServantParamComponent__InstantiateGrandEffectObject(this, v21);
LABEL_27:
  BattleServantParamComponent__initUpdateView(this, 0, v24);
  BattleServantParamComponent__updateView(this, v27);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v28);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v29);
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

  if ( (byte_4C5A460 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_13205/*"SvtW_StartClose"*/);
    byte_4C5A460 = 1;
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v14 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
        v20 = sub_1C8ED7C(gameObject, SimpleAnimation_State_TypeInfo, 13);
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
        v34 = sub_1C8ED7C(Item, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v34)(Item, *(_QWORD *)(v34 + 8), v31);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v14 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v21 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
        v26 = sub_1C8ED7C(gameObject, SimpleAnimation_State_TypeInfo, 13);
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
        v40 = sub_1C8ED7C(v21, SimpleAnimation_State_TypeInfo, 4);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v40)(v21, *(_QWORD *)(v40 + 8), v37);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
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
      v47 = sub_1C8ED7C(v43, v42, 8);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v47)(v43, *(_QWORD *)(v47 + 8), -1.0);
      SimpleAnimation__Play_66582224((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
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
    v27 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v14, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v14,
                            (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0);
    if ( !v27 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v27, length, 0);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v14,
                            (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/,
                            0);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0);
    UnityEngine_Animation__Play_71086848((UnityEngine_Animation_o *)v14, (System_String_o *)StringLiteral_13205/*"SvtW_StartClose"*/, 0);
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
    sub_1C3E7C0(gameObject, v6);
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
  const MethodInfo *v3; // x3

  this->fields.perf = inperf;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3);
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

  if ( (byte_4C5A46A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_19060/*"enemy_icon_leader"*/);
    sub_1C3E564(&StringLiteral_23309/*"servant_icon"*/);
    byte_4C5A46A = 1;
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
        v8 = &StringLiteral_19060/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v8 = &StringLiteral_23309/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v8, 0);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          v9 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4C506A1 )
          {
            transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A1 = 1;
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
    sub_1C3E7C0(transform, v5);
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_1C3E7C0(this, flg);
  v4 = this;
  v5 = 0;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C3E7C8(this, flg);
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
  const MethodInfo *v9; // x1
  BattleServantData_o *data; // x0
  int32_t v11; // w26
  char isGuts; // w24
  _BOOL4 v13; // w28
  UnityEngine_Component_o *v14; // x23
  UnityEngine_Component_o *v15; // x21
  BattleServantParamComponent___c_c *v16; // x0
  __int64 _9__154_0; // x22
  Il2CppObject *v18; // x25
  struct BattleServantParamComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *battleServantParamSetting; // x25
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantData_o *v25; // x8
  _BOOL4 IsGrand_k__BackingField; // w29
  BattleServantParamSetting_o *v27; // x25
  int v28; // w24
  struct BattleServantParamSetting_o *v29; // x8
  BattleServantParamSetting_o *v30; // x23
  BattleServantParamComponent_TargetIconViewInfo_o *fixed; // x0
  struct BattleServantData_o *v32; // x8
  float TARGET_ICON_SPRITE_POSX; // s8
  float v34; // s9
  BattleServantParamComponent_c *v35; // x0
  float LocalPositionX; // s8
  float FIX_TARGET_ICON_SPRITE_POSX; // s9
  BattleServantParamComponent_c *v38; // x0
  struct BattleServantParamSetting_o *v39; // x8
  BattleServantParamSetting_o *v40; // x23
  struct BattleServantParamComponent_StaticFields *v41; // x8
  const MethodInfo *v42; // x1
  BattleServantParamComponent_c *v43; // x0
  int v44; // w24
  const MethodInfo *v45; // x0
  const MethodInfo *v46; // x0
  const MethodInfo *v47; // x1
  BattleServantParamComponent_c *v48; // x0
  int v49; // w24
  const MethodInfo *v50; // x0
  const MethodInfo *v51; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v53; // x8
  _BOOL4 v54; // w20
  UnityEngine_Transform_o *transform; // x0
  UpHateData_o *upHateData; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5A475 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_BattleServantParamComponent___c__setTargetMark_b__154_0__);
    sub_1C3E564(&BattleServantParamComponent___c_TypeInfo);
    byte_4C5A475 = 1;
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
  v11 = data->fields.uniqueId;
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
  v13 = data->fields.isRaid || BattleServantData__get_IsSuperBossUi(data, 0);
  data = (BattleServantData_o *)this->fields.targetMark;
  if ( !data )
    goto LABEL_114;
  data = (BattleServantData_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)data,
                                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.lockTargetMark
    || (v14 = (UnityEngine_Component_o *)data,
        data = (BattleServantData_o *)UnityEngine_GameObject__GetComponent_object_(
                                        this->fields.lockTargetMark,
                                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___),
        !this->fields.targetMark)
    || (v15 = (UnityEngine_Component_o *)data,
        (data = (BattleServantData_o *)UnityEngine_GameObject__get_gameObject(this->fields.targetMark, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v11 == uniqueId, 0),
        (data = (BattleServantData_o *)this->fields.lockTargetMark) == 0)
    || (data = (BattleServantData_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0)) == 0 )
  {
LABEL_114:
    sub_1C3E7C0(data, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, isGuts, 0);
  v16 = BattleServantParamComponent___c_TypeInfo;
  if ( !BattleServantParamComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent___c_TypeInfo);
    v16 = BattleServantParamComponent___c_TypeInfo;
  }
  _9__154_0 = (__int64)v16->static_fields->__9__154_0;
  if ( !_9__154_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleServantParamComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__154_0 = sub_1C3E7B0(System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__TypeInfo);
    System_Action_object__object____ctor(
      (System_Action_object__object__o *)_9__154_0,
      v18,
      Method_BattleServantParamComponent___c__setTargetMark_b__154_0__,
      0);
    static_fields = BattleServantParamComponent___c_TypeInfo->static_fields;
    static_fields->__9__154_0 = (struct System_Action_UISprite__BattleServantParamComponent_TargetIconViewInfo__o *)_9__154_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__154_0, _9__154_0, v20, v21);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_54;
  v23 = this->fields.battleServantParamSetting;
  if ( !v23 )
    goto LABEL_114;
  if ( !v23->fields.IsOverwriteTargetSetting )
  {
LABEL_54:
    v32 = this->fields.data;
    if ( !v32 )
      goto LABEL_114;
    if ( !v32->fields._IsGrand_k__BackingField )
    {
      if ( v13 )
      {
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
        FIX_TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
        v38 = BattleServantParamComponent_TypeInfo;
      }
      else
      {
        v38 = BattleServantParamComponent_TypeInfo;
        if ( BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        {
          v41 = BattleServantParamComponent_TypeInfo->static_fields;
          LocalPositionX = v41->TARGET_ICON_SPRITE_POSX;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
          v38 = BattleServantParamComponent_TypeInfo;
          v41 = BattleServantParamComponent_TypeInfo->static_fields;
          LocalPositionX = v41->TARGET_ICON_SPRITE_POSX;
          if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
            v38 = BattleServantParamComponent_TypeInfo;
            v41 = BattleServantParamComponent_TypeInfo->static_fields;
          }
        }
        FIX_TARGET_ICON_SPRITE_POSX = v41->FIX_TARGET_ICON_SPRITE_POSX;
      }
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = BattleServantParamComponent_TypeInfo;
      }
      v59.fields.z = 0.0;
      v59.fields.y = v38->static_fields->TARGET_ICON_SPRITE_POSY;
      v59.fields.x = LocalPositionX;
      ComponentHelper__SetLocalPosition(v14, v59, 0);
      v60.fields.z = 0.0;
      v60.fields.x = FIX_TARGET_ICON_SPRITE_POSX;
      v60.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
      ComponentHelper__SetLocalPosition(v15, v60, 0);
      v48 = BattleServantParamComponent_TypeInfo;
      v49 = (unsigned __int8)isGuts & (v11 == uniqueId);
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      if ( v49 )
      {
        data = (BattleServantData_o *)BattleServantParamComponent__TargetIconWhenFixViewInfo((const MethodInfo *)v48);
        if ( !_9__154_0 )
          goto LABEL_114;
        v50 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                    *(_QWORD *)(_9__154_0 + 64),
                                    v14,
                                    data,
                                    *(_QWORD *)(_9__154_0 + 40));
        fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo(v50);
      }
      else
      {
        data = (BattleServantData_o *)BattleServantParamComponent__NormalTargetIconViewInfo((const MethodInfo *)v48);
        if ( !_9__154_0 )
          goto LABEL_114;
        v51 = (const MethodInfo *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                    *(_QWORD *)(_9__154_0 + 64),
                                    v14,
                                    data,
                                    *(_QWORD *)(_9__154_0 + 40));
        fixed = BattleServantParamComponent__FixTargetIconViewInfo(v51);
      }
      goto LABEL_106;
    }
    if ( v13 )
    {
      TARGET_ICON_SPRITE_POSX = GameObjectExtensions__GetLocalPositionX(this->fields.targetMark, 0);
      v34 = GameObjectExtensions__GetLocalPositionX(this->fields.lockTargetMark, 0);
      v35 = BattleServantParamComponent_TypeInfo;
      goto LABEL_81;
    }
    v35 = BattleServantParamComponent_TypeInfo;
    if ( BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    {
      TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      v35 = BattleServantParamComponent_TypeInfo;
      TARGET_ICON_SPRITE_POSX = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        v35 = BattleServantParamComponent_TypeInfo;
        v34 = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSX;
LABEL_81:
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = BattleServantParamComponent_TypeInfo;
        }
        v57.fields.z = 0.0;
        v57.fields.y = v35->static_fields->TARGET_ICON_SPRITE_POSY;
        v57.fields.x = TARGET_ICON_SPRITE_POSX;
        ComponentHelper__SetLocalPosition(v14, v57, 0);
        v58.fields.z = 0.0;
        v58.fields.x = v34;
        v58.fields.y = BattleServantParamComponent_TypeInfo->static_fields->TARGET_ICON_SPRITE_POSY;
        ComponentHelper__SetLocalPosition(v15, v58, 0);
        v43 = BattleServantParamComponent_TypeInfo;
        v44 = (unsigned __int8)isGuts & (v11 == uniqueId);
        if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        if ( v44 )
        {
          data = (BattleServantData_o *)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo((const MethodInfo *)v43);
          if ( !_9__154_0 )
            goto LABEL_114;
          data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                          *(_QWORD *)(_9__154_0 + 64),
                                          v14,
                                          data,
                                          *(_QWORD *)(_9__154_0 + 40));
          if ( !v15 )
            goto LABEL_114;
          UISprite__set_spriteName(
            (UISprite_o *)v15,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo(v45);
        }
        else
        {
          data = (BattleServantData_o *)BattleServantParamComponent__GrandTargetIconViewInfo((const MethodInfo *)v43);
          if ( !_9__154_0 )
            goto LABEL_114;
          data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                          *(_QWORD *)(_9__154_0 + 64),
                                          v14,
                                          data,
                                          *(_QWORD *)(_9__154_0 + 40));
          if ( !v15 )
            goto LABEL_114;
          UISprite__set_spriteName(
            (UISprite_o *)v15,
            BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
            0);
          fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo(v46);
        }
        goto LABEL_106;
      }
    }
    v34 = TARGET_ICON_SPRITE_POSX;
    goto LABEL_81;
  }
  ComponentHelper__SetLocalPosition(v14, v23->fields.TargetIconPosition, 0);
  v24 = this->fields.battleServantParamSetting;
  if ( !v24 )
    goto LABEL_114;
  ComponentHelper__SetLocalPosition(v15, v24->fields.FixTargetIconPosition, 0);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_114;
  IsGrand_k__BackingField = v25->fields._IsGrand_k__BackingField;
  v27 = this->fields.battleServantParamSetting;
  v28 = (unsigned __int8)isGuts & (v11 == uniqueId);
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  if ( v28 )
  {
    if ( IsGrand_k__BackingField )
    {
      data = (BattleServantData_o *)BattleServantParamComponent__GrandTargetIconWhenFixViewInfo_47584648(v27, v9);
      if ( !_9__154_0 )
        goto LABEL_114;
      data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                      *(_QWORD *)(_9__154_0 + 64),
                                      v14,
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
        if ( !v15 )
          goto LABEL_114;
        UISprite__set_spriteName(
          (UISprite_o *)v15,
          BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGETING_GRAND_SP_NAME,
          0);
      }
      v30 = this->fields.battleServantParamSetting;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      fixed = BattleServantParamComponent__GrandFixTargetIconWhenTargetViewInfo_47584788(v30, v9);
    }
    else
    {
      data = (BattleServantData_o *)BattleServantParamComponent__TargetIconWhenFixViewInfo_47584032(v27, v9);
      if ( !_9__154_0 )
        goto LABEL_114;
      (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
        *(_QWORD *)(_9__154_0 + 64),
        v14,
        data,
        *(_QWORD *)(_9__154_0 + 40));
      fixed = BattleServantParamComponent__FixTargetIconWhenTargetViewInfo_47584172(
                this->fields.battleServantParamSetting,
                v42);
    }
  }
  else if ( IsGrand_k__BackingField )
  {
    data = (BattleServantData_o *)BattleServantParamComponent__GrandNormalTargetIconViewInfo(v27, v9);
    if ( !_9__154_0 )
      goto LABEL_114;
    data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
                                    *(_QWORD *)(_9__154_0 + 64),
                                    v14,
                                    data,
                                    *(_QWORD *)(_9__154_0 + 40));
    v39 = this->fields.battleServantParamSetting;
    if ( !v39 )
      goto LABEL_114;
    if ( System_String__IsNullOrEmpty(v39->fields.FixTargetIconSpriteName, 0) )
    {
      data = (BattleServantData_o *)BattleServantParamComponent_TypeInfo;
      if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
      if ( !v15 )
        goto LABEL_114;
      UISprite__set_spriteName(
        (UISprite_o *)v15,
        BattleServantParamComponent_TypeInfo->static_fields->FIX_TARGET_GRAND_SP_NAME,
        0);
    }
    v40 = this->fields.battleServantParamSetting;
    if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    fixed = BattleServantParamComponent__GrandFixTargetIconViewInfo_47584484(v40, v9);
  }
  else
  {
    data = (BattleServantData_o *)BattleServantParamComponent__NormalTargetIconViewInfo_47583728(v27, v9);
    if ( !_9__154_0 )
      goto LABEL_114;
    (*(void (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantData_o *, _QWORD))(_9__154_0 + 24))(
      *(_QWORD *)(_9__154_0 + 64),
      v14,
      data,
      *(_QWORD *)(_9__154_0 + 40));
    fixed = BattleServantParamComponent__FixTargetIconViewInfo_47583868(this->fields.battleServantParamSetting, v47);
  }
LABEL_106:
  data = (BattleServantData_o *)(*(__int64 (__fastcall **)(_QWORD, UnityEngine_Component_o *, BattleServantParamComponent_TargetIconViewInfo_o *, _QWORD))(_9__154_0 + 24))(
                                  *(_QWORD *)(_9__154_0 + 64),
                                  v15,
                                  fixed,
                                  *(_QWORD *)(_9__154_0 + 40));
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_114;
  v53 = perf->fields.data;
  if ( !v53 )
    goto LABEL_114;
  if ( v53->fields.isMultiTargetBattle )
  {
    v54 = uniqueId == -1 || v11 == uniqueId;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    CommonFunction__SetColorAllChild(transform, v54, this->fields.GRAY, 0);
    this->fields.isActiveHpBar = v54;
    if ( v54 )
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
  __int64 v8; // x1

  if ( (byte_4C5A462 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A462 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0 && BattleServantData__isAlive(data, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v7 )
    {
      if ( !Component_object )
        sub_1C3E7C0(v7, v8);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent__setVisible(BattleServantParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C5A461 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A461 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1C3E7C0(root, flg);
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
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct UISprite_o *v58; // x21
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct BattleServantChangeBarComponent_o *v69; // x21
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Collections_Hashtable_o *v74; // x0
  __int64 v75; // x0
  char v76[4]; // [xsp+0h] [xbp-40h] BYREF
  int v77; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v79; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C5A480 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleServantParamComponent_shiftUpdateStatus__);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_20299/*"ignoretimescale"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_24462/*"updateShiftHplabel"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    this = (BattleServantParamComponent_o *)sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A480 = 1;
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
          v14 = (_QWORD *)sub_1C3E57C(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C3E548(v14, v14[4]);
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
          this = (BattleServantParamComponent_o *)sub_1C3E60C(object___TypeInfo, 12);
          if ( this )
          {
            v21 = this;
            v22 = StringLiteral_19710/*"from"*/;
            if ( StringLiteral_19710/*"from"*/ )
            {
              v22 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, v21->klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
              v23 = StringLiteral_19710/*"from"*/;
            }
            else
            {
              v23 = 0;
            }
            if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
              goto LABEL_80;
            v21->fields.root = (struct UnityEngine_GameObject_o *)v23;
            sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.root, v23, v19, v20);
            v79 = 0;
            v22 = j_il2cpp_value_box_0(int_TypeInfo, &v79, v24, v25, v26, v27, v28, v29);
            v32 = (struct UnityEngine_GameObject_o *)v22;
            if ( v22 )
            {
              v22 = sub_1C3E6A0(v22, v21->klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
            }
            if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_80;
            v21->fields.target = v32;
            sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.target, (int32_t)v32, v30, v31);
            v22 = StringLiteral_24130/*"to"*/;
            if ( StringLiteral_24130/*"to"*/ )
            {
              v22 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, v21->klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
              v23 = StringLiteral_24130/*"to"*/;
            }
            else
            {
              v23 = 0;
            }
            if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_80;
            *(_QWORD *)&v21->fields.index = v23;
            sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.index, v23, v33, v34);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0);
              v22 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v35, v36, v37, v38, v39, v40);
              v43 = v22;
              if ( !v22 || (v22 = sub_1C3E6A0(v22, v21->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 3 )
                  goto LABEL_80;
                *(_QWORD *)&v21->fields.hpformatflg = v43;
                sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.hpformatflg, v43, v41, v42);
                v22 = StringLiteral_22456/*"onupdate"*/;
                if ( StringLiteral_22456/*"onupdate"*/ )
                {
                  v22 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, v21->klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v23 = StringLiteral_22456/*"onupdate"*/;
                }
                else
                {
                  v23 = 0;
                }
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 4 )
                  goto LABEL_80;
                v21->fields.hplabel = (struct UILabel_o *)v23;
                sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.hplabel, v23, v44, v45);
                v22 = StringLiteral_24462/*"updateShiftHplabel"*/;
                if ( StringLiteral_24462/*"updateShiftHplabel"*/ )
                {
                  v22 = sub_1C3E6A0(StringLiteral_24462/*"updateShiftHplabel"*/, v21->klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v23 = StringLiteral_24462/*"updateShiftHplabel"*/;
                }
                else
                {
                  v23 = 0;
                }
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 5 )
                  goto LABEL_80;
                v21->fields.maxhplabel = (struct UILabel_o *)v23;
                sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.maxhplabel, v23, v46, v47);
                v22 = StringLiteral_24091/*"time"*/;
                if ( StringLiteral_24091/*"time"*/ )
                {
                  v22 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v21->klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v23 = StringLiteral_24091/*"time"*/;
                }
                else
                {
                  v23 = 0;
                }
                if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 6 )
                  goto LABEL_80;
                v21->fields.totalhplabel = (struct UILabel_o *)v23;
                sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.totalhplabel, v23, v48, v49);
                v77 = 1069547520;
                v22 = j_il2cpp_value_box_0(float_TypeInfo, &v77, v50, v51, v52, v53, v54, v55);
                v58 = (struct UISprite_o *)v22;
                if ( !v22 || (v22 = sub_1C3E6A0(v22, v21->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 7 )
                    goto LABEL_80;
                  v21->fields.breakSprite = v58;
                  sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.breakSprite, (int32_t)v58, v56, v57);
                  v22 = StringLiteral_20299/*"ignoretimescale"*/;
                  if ( StringLiteral_20299/*"ignoretimescale"*/ )
                  {
                    v22 = sub_1C3E6A0(StringLiteral_20299/*"ignoretimescale"*/, v21->klass->_1.element_class);
                    if ( !v22 )
                      goto LABEL_81;
                    v23 = StringLiteral_20299/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v23 = 0;
                  }
                  if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 8 )
                    goto LABEL_80;
                  v21->fields.hpGauge = (struct BattleHpGaugeBarComponent_o *)v23;
                  sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.hpGauge, v23, v59, v60);
                  v76[0] = 1;
                  v22 = j_il2cpp_value_box_0(bool_TypeInfo, v76, v61, v62, v63, v64, v65, v66);
                  v69 = (struct BattleServantChangeBarComponent_o *)v22;
                  if ( !v22 || (v22 = sub_1C3E6A0(v22, v21->klass->_1.element_class)) != 0 )
                  {
                    if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 9 )
                      goto LABEL_80;
                    v21->fields.hpChange = v69;
                    sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.hpChange, (int32_t)v69, v67, v68);
                    v22 = StringLiteral_22448/*"oncomplete"*/;
                    if ( StringLiteral_22448/*"oncomplete"*/ )
                    {
                      v22 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v21->klass->_1.element_class);
                      if ( !v22 )
                        goto LABEL_81;
                      v23 = StringLiteral_22448/*"oncomplete"*/;
                    }
                    else
                    {
                      v23 = 0;
                    }
                    if ( LODWORD(v21->fields.m_CancellationTokenSource) <= 0xA )
                      goto LABEL_80;
                    v21->fields.hpShift = (struct BattleServantHpShiftComponent_o *)v23;
                    sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.hpShift, v23, v70, v71);
                    v22 = StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v23 = 0;
LABEL_74:
                      if ( LODWORD(v21->fields.m_CancellationTokenSource) > 0xB )
                      {
                        v21->fields.clsIconComponent = (struct ServantClassIconComponent_o *)v23;
                        sub_1C3E508((CGThumbnailListItem_o *)&v21->fields.clsIconComponent, v23, v72, v73);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v74 = iTween__Hash((System_Object_array *)v21, 0);
                        iTween__ValueTo(gameObject, v74, 0);
                        return;
                      }
LABEL_80:
                      sub_1C3E7C8(v22, v23);
                    }
                    v22 = sub_1C3E6A0(StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/, v21->klass->_1.element_class);
                    if ( v22 )
                    {
                      v23 = StringLiteral_4624/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v75 = sub_1C3E7E4(v22);
              sub_1C3E68C(v75, 0);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5A482 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
    byte_4C5A482 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1C3E7C0(0, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_395C644 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


System_Collections_IEnumerator_o *BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5A483 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent__showSideEffectList_d__172_TypeInfo);
    byte_4C5A483 = 1;
  }
  v3 = sub_1C3E7B0(BattleServantParamComponent__showSideEffectList_d__172_TypeInfo);
  BattleServantParamComponent__showSideEffectList_d__172___ctor(
    (BattleServantParamComponent__showSideEffectList_d__172_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v11; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v13; // x8
  UnityEngine_Object_o *ServantActor; // x21
  _BOOL4 IsMatchCurrentCommonAnimName; // w23
  int v16; // w8
  struct BattleServantData_o *v17; // x8
  int v18; // w8
  void *v19; // x21
  int v20; // w24
  char v21; // w23
  __int64 v22; // x27
  int v23; // w27
  struct BattleServantData_o *v24; // x8
  UnityEngine_Object_o *v25; // x20
  System_Enum_o v26; // [xsp+8h] [xbp-68h] BYREF
  int v27; // [xsp+18h] [xbp-58h]

  if ( (byte_4C5A474 & 1) == 0 )
  {
    sub_1C3E564(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_13362/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1C3E564(&StringLiteral_24738/*"wait"*/);
    byte_4C5A474 = 1;
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
  BattleServantShowBuffComponent__setBuffList(v8, (BattleBuffData_ShowBuffData_array *)ShowServantParam, 0);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_59;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_59;
  if ( data->fields.isMultiTargetBattle )
  {
    v11 = this->fields.data;
    if ( !v11 )
      goto LABEL_59;
    if ( v11->fields.isEnemy )
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
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_59;
  ShowServantParam = this->fields.perf;
  if ( !ShowServantParam )
    goto LABEL_59;
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v13->fields.uniqueId,
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
  v27 = 49;
  v26.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v26.monitor = (void *)-1LL;
  ShowServantParam = System_Enum__ToString(&v26, 0);
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
    sub_1C3E7C0(ShowServantParam, v7);
  ShowServantParam = (void *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    v16 = 0;
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
    v16 = (unsigned __int8)ShowServantParam & 1;
  }
  if ( v16 | IsMatchCurrentCommonAnimName )
  {
    v27 = 9;
    v26.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v26.monitor = (void *)-1LL;
    ShowServantParam = System_Enum__ToString(&v26, 0);
    if ( !ServantActor )
      goto LABEL_59;
    BattleActorControl__playAnimation_47217028(
      (BattleActorControl_o *)ServantActor,
      (System_String_o *)ShowServantParam,
      0,
      0);
  }
LABEL_36:
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_59;
  if ( !v17->fields.isSleepWaitMode )
    return;
  ShowServantParam = BattleBuffData__getActiveList(buffData, 1, 0);
  if ( !ShowServantParam )
    goto LABEL_59;
  v18 = *((_DWORD *)ShowServantParam + 6);
  v19 = ShowServantParam;
  if ( v18 < 1 )
    goto LABEL_63;
  v20 = 0;
  v21 = 0;
  do
  {
    if ( v20 >= (unsigned int)v18 )
      sub_1C3E7C8(ShowServantParam, v7);
    v22 = *((_QWORD *)v19 + v20 + 4);
    if ( !v22 )
      goto LABEL_59;
    if ( !*(_BYTE *)(v22 + 528) )
    {
      ShowServantParam = BattleBuffData__get_buffMst(buffData, 0);
      if ( !ShowServantParam )
        goto LABEL_59;
      ShowServantParam = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                           *(_DWORD *)(v22 + 16),
                           (const MethodInfo_33B2F58 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_59;
      v23 = *((_DWORD *)ShowServantParam + 4);
      ShowServantParam = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_13362/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0);
      v21 |= v23 == (_DWORD)ShowServantParam;
    }
    v18 = *((_DWORD *)v19 + 6);
    ++v20;
  }
  while ( v20 < v18 );
  if ( (v21 & 1) == 0 )
  {
LABEL_63:
    ShowServantParam = this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_59;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0);
    v24 = this->fields.data;
    if ( !v24 )
      goto LABEL_59;
    ShowServantParam = this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_59;
    v25 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v24->fields.uniqueId,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (void *)UnityEngine_Object__op_Inequality(v25, 0, 0);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v25 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v25, this->fields.uniqueID, 0) )
          BattleActorControl__playAnimation_47217028(
            (BattleActorControl_o *)v25,
            (System_String_o *)StringLiteral_24738/*"wait"*/,
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

  if ( (byte_4C5A473 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A473 = 1;
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
            perf = (BattlePerformance_o *)ServantActor[22].klass;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0);
              return;
            }
LABEL_17:
            sub_1C3E7C0(perf, v10);
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

  if ( (byte_4C5A468 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A468 = 1;
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
    sub_1C3E7C0(data, *(_QWORD *)&now);
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
  __int64 v21; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  UILabel_o *v30; // x24
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  UILabel_o *v39; // x23
  Il2CppObject *v40; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  Il2CppObject *v47; // x0
  __int64 *v48; // x8
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v57; // x2
  int32_t v58; // [xsp+8h] [xbp-48h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5A469 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_25121/*"{0}"*/);
    sub_1C3E564(&StringLiteral_25176/*"{0}/{1}"*/);
    sub_1C3E564(&StringLiteral_25072/*"{0:#,0}"*/);
    sub_1C3E564(&StringLiteral_25076/*"{0:#,0}/{1:#,0}"*/);
    byte_4C5A469 = 1;
  }
  if ( this->fields.hpformatflg )
    v9 = &StringLiteral_25072/*"{0:#,0}"*/;
  else
    v9 = &StringLiteral_25121/*"{0}"*/;
  v10 = (System_String_o *)*v9;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0, 0) )
  {
    v18 = this->fields.hplabel;
    v59 = now;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v12, v13, v14, v15, v16, v17);
    data = System_String__Format(v10, v19, 0);
    if ( !v18 )
      goto LABEL_36;
    UILabel__set_text(v18, data, 0);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    v30 = this->fields.maxhplabel;
    v59 = max;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v24, v25, v26, v27, v28, v29);
    data = System_String__Format(v10, v31, 0);
    if ( !v30 )
      goto LABEL_36;
    UILabel__set_text(v30, data, 0);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0, 0) )
  {
    v39 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v59 = now;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v33, v34, v35, v36, v37, v38);
      v58 = max;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v41, v42, v43, v44, v45, v46);
      v48 = &StringLiteral_25076/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v59 = now;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v33, v34, v35, v36, v37, v38);
      v58 = max;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v49, v50, v51, v52, v53, v54);
      v48 = &StringLiteral_25176/*"{0}/{1}"*/;
    }
    data = System_String__Format_63677760((System_String_o *)*v48, v40, v47, 0);
    if ( !v39 )
      goto LABEL_36;
    UILabel__set_text(v39, data, 0);
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
      BattleServantParamComponent__SetBreakSpriteDisplay(this, now == 0 && isShiftableServant, v57);
      return;
    }
LABEL_36:
    sub_1C3E7C0(data, v21);
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
  if ( (byte_4C5A464 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A464 = 1;
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
      sub_1C3E7C0(this, svtdata);
    }
  }
}


void BattleServantParamComponent__updateNp_47599508(
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
  if ( (byte_4C5A465 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A465 = 1;
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
            sub_1C3E7C8(v11, svtdata);
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
          sub_1C3E7C0(this, svtdata);
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
    sub_1C3E7C0(0, *(_QWORD *)&nowHp);
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
LABEL_28:
      sub_1C3E7C0(BuffData, v6);
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
        goto LABEL_28;
      resumptionHpFromLossMaxHp = (unsigned int)v7->fields.resumptionHpFromLossMaxHp;
      if ( (__int64)v10 >= (int)resumptionHpFromLossMaxHp )
      {
        if ( v10 >= max_length_low )
LABEL_30:
          sub_1C3E7C8(BuffData, v6);
        BuffData = (BattleBuffData_o *)skillIcon->m_Items[v10];
        if ( !BuffData )
          goto LABEL_28;
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)BuffData, 0, 0);
      }
      else
      {
        if ( v10 >= resumptionHpFromLossMaxHp )
          goto LABEL_30;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_28;
        v14 = (BattleSkillInfoData_o *)*((_QWORD *)&v7->fields.passiveList + v10);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0);
        if ( !v9 )
          goto LABEL_28;
        if ( v10 >= (unsigned int)v9->fields.resumptionHpFromLossMaxHp )
          goto LABEL_30;
        if ( *((_BYTE *)p_passiveList + v10) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_28;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v10,
                                           0);
        }
        v15 = this->fields.skillIcon;
        v16 = (int)BuffData;
        if ( !v15 )
          goto LABEL_28;
        if ( v10 >= LODWORD(v15->max_length) )
          goto LABEL_30;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_28;
        v17 = v15->m_Items[v10];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v10, 0);
        if ( !this->fields.data )
          goto LABEL_28;
        v18 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0);
        if ( v10 >= (unsigned int)v9->fields.resumptionHpFromLossMaxHp )
          goto LABEL_30;
        if ( !v17 )
          goto LABEL_28;
        BattleServantSkillIConComponent__SetSkillInfo(
          v17,
          v14,
          v18 & 1,
          v16,
          (int32_t)BuffData,
          *((_BYTE *)p_passiveList + v10),
          0);
      }
      skillIcon = this->fields.skillIcon;
      ++v10;
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
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v7; // x8

  if ( (byte_4C5A467 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A467 = 1;
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
      sub_1C3E7C0(data, v5);
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
  if ( (byte_4C5A46E & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A46E = 1;
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
    sub_1C3E7C0(this, method);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  *(_QWORD *)&this->fields.CurClassId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.SvtData = svtData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)svtData, v7, v8);
  this->fields.ClassIconComp = classIconComp;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ClassIconComp, (int32_t)classIconComp, v9, v10);
}


void BattleServantParamComponent_ClassIconData__ChangeClassIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, method);
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_47619768(this, this->fields.CurClassId, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantParamComponent_ClassIconData__ChangeClassIcon_47619768(
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
    sub_1C3E7C0(this, *(_QWORD *)&classId);
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
  const MethodInfo *v11; // x3
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v19; // x22
  UnityEngine_Object_o *v20; // x24
  Il2CppObject *v21; // x23
  System_Action_object__o *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x25
  int32_t EffectId; // w23
  UnityEngine_GameObject_o *ParentObj; // x24
  float DelayTime; // s8
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  System_Action_o *v31; // x24
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C5A4A0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BattleEffectUtility_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__);
    sub_1C3E564(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__);
    sub_1C3E564(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
    byte_4C5A4A0 = 1;
  }
  component = 0;
  v7 = sub_1C3E7B0(BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = arg;
  v12 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v7 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)arg, v13, v14);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_25;
  v17 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 16LL);
  if ( v17 < 1 )
  {
    EffectObject = 0;
  }
  else
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObject = BattleEffectUtility__getEffectObject(v17, 0, 1, 0);
  }
  *(_QWORD *)(v7 + 32) = EffectObject;
  v19 = (UnityEngine_GameObject_o **)(v7 + 32);
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)EffectObject, v15, v16);
  v20 = *(UnityEngine_Object_o **)(v7 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    ActionExtensions__Call(noEffectAction, 0);
    return *v19;
  }
  Component_object = *v19;
  if ( !*v19 )
    goto LABEL_25;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v21 = component;
    v22 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)v7,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0);
    if ( !v21 )
      goto LABEL_25;
    v21[12].klass = (Il2CppClass *)v22;
    sub_1C3E508((CGThumbnailListItem_o *)&v21[12], (int32_t)v22, v23, v24);
  }
  v25 = *v12;
  if ( !*v12 )
    goto LABEL_25;
  v26 = *v19;
  EffectId = v25->fields.EffectId;
  ParentObj = v25->fields.ParentObj;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetEffectParent(v26, EffectId, ParentObj, 0);
  if ( !*v12
    || (DelayTime = (*v12)->fields.DelayTime,
        ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        v31 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v7,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v31, 0, 0),
        !ClassIconComp) )
  {
LABEL_25:
    sub_1C3E7C0(Component_object, v9);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_71327136(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0);
  v32 = *v12;
  this->fields.PrevEffectArg = *v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.PrevEffectArg, (int32_t)v32, v33, v34);
  return *v19;
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
  const MethodInfo *v18; // x3

  if ( (byte_4C5A49C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__);
    byte_4C5A49C = 1;
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
    sub_1C3E7C0(SvtData, isSkipEffect);
  }
LABEL_12:
  v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, 0);
  v16 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v12, v14, v15);
  this->fields.PlayingEffectObj = v16;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.PlayingEffectObj, (int32_t)v16, v17, v18);
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
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_47619768(this, this->fields.CurClassId, v4);
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

  if ( (byte_4C5A49D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A49D = 1;
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
    sub_1C3E7C0(SvtData, v4);
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
  const MethodInfo *v16; // x3

  if ( (byte_4C5A49E & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
    byte_4C5A49E = 1;
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
  v10 = sub_1C3E7B0(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = v8,
        CurClassId = this->fields.CurClassId,
        *(float *)(v10 + 24) = delayTime,
        *(_DWORD *)(v10 + 20) = CurClassId,
        (ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp) == 0) )
  {
    sub_1C3E7C0(ClassIconComp, v12);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0);
  *(_QWORD *)(v10 + 32) = gameObject;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 32), (int32_t)gameObject, v15, v16);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v10;
}


void BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  BuffAggregationArgs_c *v3; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_4C5A49F & 1) == 0 )
  {
    sub_1C3E564(&BuffAggregationArgs_TypeInfo);
    byte_4C5A49F = 1;
  }
  v3 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
  if ( !SvtData )
    sub_1C3E7C0(v3, method);
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

  if ( (byte_4C5A4A1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4360/*"ChangeClassIcon"*/);
    byte_4C5A4A1 = 1;
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
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_47619768(_4__this, arg->fields.ClassId, v7),
          (v9 = this->fields.arg) == 0) )
    {
      sub_1C3E7C0(_4__this, v6);
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
  struct BattleServantParamComponent___c__DisplayClass187_0_o *v15; // x23
  int32_t effectId; // w21
  System_Action_o *v17; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass187_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *v22; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v24; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v26; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v27; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__187_o *v28; // x22
  struct BattleServantData_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  struct BattlePerformance_o *v36; // x8
  struct BattleData_o *data; // x8
  System_String_o *v38; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v44; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C5A4A4 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BattleEffectUtility_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&Method_BattleServantParamComponent___c__DisplayClass187_0__CoAddClassIconEffect_b__0__);
    sub_1C3E564(&BattleServantParamComponent___c__DisplayClass187_0_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)sub_1C3E564(&StringLiteral_18839/*"ef_commandaura_{0}"*/);
    byte_4C5A4A4 = 1;
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
    v7 = (Il2CppObject *)sub_1C3E7B0(BattleServantParamComponent___c__DisplayClass187_0_TypeInfo);
    System_Object___ctor(v7, 0);
    v4->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass187_0_o *)v7;
    p__8__1 = &v4->fields.__8__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v9, v10);
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
    method = (const MethodInfo *)(unsigned int)v4->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v4->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, 0);
      _4__this->fields.currentClassIconAuraEffectPriority = v4->fields.priority;
    }
    v15 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_77;
    v15->fields.isLoading = 1;
    effectId = v4->fields.effectId;
    v17 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v15,
      Method_BattleServantParamComponent___c__DisplayClass187_0__CoAddClassIconEffect_b__0__,
      0);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v17, perf, 0);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_77;
  if ( _8__1->fields.isLoading )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C3E508(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_77;
  v22 = v4->fields.servantData;
  if ( !v22 )
    goto LABEL_77;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_77;
  ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v22->fields.uniqueId, 0);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  v24 = v4->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v24, ServantGameObject, 1, 0);
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
  v26 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0);
  if ( !v26 )
    goto LABEL_77;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v26, (UnityEngine_Transform_o *)this, 0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v27 = this;
  if ( !byte_4C506A6 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v27 )
    goto LABEL_77;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v27,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0);
  v28 = this;
  if ( !byte_4C506A1 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v28 )
    goto LABEL_77;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v28,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
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
          (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_77;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v4->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_77:
    sub_1C3E7C0(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v4->fields.effectId,
                                                                             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v29 = this->fields.servantData;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v29, &path, &name, 0);
        v36 = _4__this->fields.perf;
        if ( v36 )
        {
          data = v36->fields.data;
          if ( data )
          {
            v38 = path;
            battleGenderType = data->fields.battleGenderType;
            v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v30, v31, v32, v33, v34, v35);
            v40 = System_String__Format((System_String_o *)StringLiteral_18839/*"ef_commandaura_{0}"*/, v39, 0);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v38,
                                                                        v40,
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
              v44 = UnityEngine_Object__Instantiate_object__51929056(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v44, 0);
              if ( v44 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v44,
                  !_4__this->fields.isHideFaceTexture,
                  0);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__187_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v4->fields.effectId,
                    v44,
                    (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__187_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C5A4A5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5A4A5 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1C3E7C0(0, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, void *))callBack->klass[1]._1.image)(
      callBack,
      callBack->klass[1]._1.gc_desc);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleServantParamComponent__DelayMethod_d__176_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C5A4A2 & 1) == 0 )
  {
    sub_1C3E564(&BattleServantParamComponent___c_TypeInfo);
    byte_4C5A4A2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleServantParamComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantParamComponent___c_TypeInfo->static_fields->__9 = (struct BattleServantParamComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleServantParamComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, sprite);
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

  if ( (byte_4C5A4A3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    byte_4C5A4A3 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_340D8C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v10; // w22
  char v11; // w21

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
    v10 = 0;
    v11 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C3E7C8(this, method);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)skillIcon->m_Items[v10];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                         (BattleServantSkillIConComponent_o *)this,
                                                                                         method);
      max_length = skillIcon->max_length;
      ++v10;
      v11 |= (unsigned __int8)this;
    }
    while ( v10 < max_length );
    if ( (v11 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)BattleServantData__get_BuffData(
                                                                                             (BattleServantData_o *)this,
                                                                                             0)) == 0
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_o *)this[2].monitor) == 0 )
    {
LABEL_19:
      sub_1C3E7C0(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__145_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  if ( (byte_4C5A4A6 & 1) == 0 )
  {
    sub_1C3E564(&BattleEffectUtility_TypeInfo);
    sub_1C3E564(&BattleServantParamComponent_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__);
    this = (BattleServantParamComponent__showSideEffectList_d__172_o *)sub_1C3E564(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C5A4A6 = 1;
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
                                                                       (const MethodInfo_395C7D4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v4 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__172_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0),
        !v4) )
  {
LABEL_16:
    sub_1C3E7C0(this, method);
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
  v12 = (UnityEngine_WaitForSeconds_o *)sub_1C3E7B0(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v12, SideEffectShowWaitTime, 0);
  v2->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C3E508(p__2__current, (int32_t)v12, v14, v15);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleServantParamComponent__showSideEffectList_d__172_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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