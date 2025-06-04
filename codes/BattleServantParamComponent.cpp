void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleServantParamComponent_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleServantParamComponent_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleServantParamComponent_StaticFields *v12; // x8

  if ( (byte_4B05563 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_17345/*"btn_menu_select_grand"*/, v4);
    sub_1BC3008(&StringLiteral_17344/*"btn_menu_select"*/, v5);
    byte_4B05563 = 1;
  }
  static_fields = BattleServantParamComponent_TypeInfo->static_fields;
  static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH = 42;
  v7 = StringLiteral_17344/*"btn_menu_select"*/;
  static_fields->TARGET_SP_NAME = (struct System_String_o *)StringLiteral_17344/*"btn_menu_select"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->TARGET_SP_NAME, v7, v2, v3);
  v8 = StringLiteral_17345/*"btn_menu_select_grand"*/;
  v9 = BattleServantParamComponent_TypeInfo->static_fields;
  v9->TARGET_GRAND_SP_NAME = (struct System_String_o *)StringLiteral_17345/*"btn_menu_select_grand"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v9->TARGET_GRAND_SP_NAME, v8, v10, v11);
  v12 = BattleServantParamComponent_TypeInfo->static_fields;
  *(_OWORD *)&v12->TARGET_MARK_SPRITE_WIDTH = xmmword_BDDF20;
  *(_QWORD *)&v12->GRAND_TARGET_MARK_SPRITE_HEIGHT = 0xFFFFFFE20000005ALL;
  v12->SideEffectShowWaitTime = 1.0;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Queue_T__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v16; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4B05562 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_BaseClassIconData_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v4);
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v7);
    byte_4B05562 = 1;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BC30B0(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.effectobj, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_Queue_T__o *)sub_1BC3254(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v11,
    (const MethodInfo_38154B0 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.sideEffectShowQueue, (int32_t)v11, v12, v13);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4AFBDB6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v16 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_BDDDB0;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v16;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.classIconEffectDict, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.commandSpellEffectDict, (int32_t)v21, v22, v23);
  v24 = (Il2CppObject *)sub_1BC3254(BattleServantParamComponent_BaseClassIconData_TypeInfo);
  System_Object___ctor(v24, 0LL);
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.classIconData, (int32_t)v24, v25, v26);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantParamComponent__AddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v6; // x1

  v6 = BattleServantParamComponent__CoAddClassIconEffect(this, effectId, priority, servantData, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__ChangeTargetMarkSprite(
        BattleServantParamComponent_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *targetMark; // x0
  Il2CppObject *Component_object; // x19
  UnityEngine_Object_o *battleUIAtlas; // x22
  BattleDataDefine_c *v15; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  UIAtlas_o *v17; // x20
  BattleServantParamComponent_c *v18; // x0
  System_String_o *TARGET_GRAND_SP_NAME; // x1
  UIAtlas_o *v20; // x21
  BattleServantParamComponent_c *v21; // x0

  if ( (byte_4B05561 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, isGrand);
    sub_1BC3008(&AssetManager_TypeInfo, v5);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v6);
    sub_1BC3008(&BattleServantParamComponent_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_3084/*"BattleAssetUIAtlas"*/, v11);
    byte_4B05561 = 1;
  }
  targetMark = this->fields.targetMark;
  if ( !targetMark )
    goto LABEL_35;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       targetMark,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    battleUIAtlas = (UnityEngine_Object_o *)this->fields.battleUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleUIAtlas, 0LL, 0LL) )
    {
      if ( isGrand )
      {
        v15 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v15 = BattleDataDefine_TypeInfo;
        }
        ASSET_BATTLE_COMMON = v15->static_fields->ASSET_BATTLE_COMMON;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        targetMark = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
        if ( targetMark )
        {
          targetMark = (UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                     (AssetData_o *)targetMark,
                                                     (System_String_o *)StringLiteral_3084/*"BattleAssetUIAtlas"*/,
                                                     (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
          if ( targetMark )
          {
            targetMark = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       targetMark,
                                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
            v17 = (UIAtlas_o *)targetMark;
            if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
            if ( v17 )
            {
              targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                         v17,
                                                         BattleServantParamComponent_TypeInfo->static_fields->TARGET_GRAND_SP_NAME,
                                                         0LL);
              if ( !targetMark )
                return;
              if ( Component_object )
              {
                UISprite__set_atlas((UISprite_o *)Component_object, v17, 0LL);
                v18 = BattleServantParamComponent_TypeInfo;
                if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                  v18 = BattleServantParamComponent_TypeInfo;
                }
                TARGET_GRAND_SP_NAME = v18->static_fields->TARGET_GRAND_SP_NAME;
LABEL_34:
                UISprite__set_spriteName((UISprite_o *)Component_object, TARGET_GRAND_SP_NAME, 0LL);
                return;
              }
            }
          }
        }
      }
      else
      {
        v20 = this->fields.battleUIAtlas;
        targetMark = (UnityEngine_GameObject_o *)BattleServantParamComponent_TypeInfo;
        if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
        if ( v20 )
        {
          targetMark = (UnityEngine_GameObject_o *)UIAtlas__GetSprite(
                                                     v20,
                                                     BattleServantParamComponent_TypeInfo->static_fields->TARGET_SP_NAME,
                                                     0LL);
          if ( !targetMark )
            return;
          if ( Component_object )
          {
            UISprite__set_atlas((UISprite_o *)Component_object, this->fields.battleUIAtlas, 0LL);
            v21 = BattleServantParamComponent_TypeInfo;
            if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
              v21 = BattleServantParamComponent_TypeInfo;
            }
            TARGET_GRAND_SP_NAME = v21->static_fields->TARGET_SP_NAME;
            goto LABEL_34;
          }
        }
      }
LABEL_35:
      sub_1BC3264(targetMark, isGrand);
    }
  }
}


void __fastcall BattleServantParamComponent__ClassIconEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.classIconEffectDict, isStart, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__CoAddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B05557 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent__CoAddClassIconEffect_d__141_TypeInfo, *(_QWORD *)&effectId);
    byte_4B05557 = 1;
  }
  v9 = sub_1BC3254(BattleServantParamComponent__CoAddClassIconEffect_d__141_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 48) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = effectId;
  *(_DWORD *)(v9 + 56) = priority;
  *(_QWORD *)(v9 + 32) = servantData;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)servantData, v12, v13);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleServantParamComponent__CommandSpellEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, isStart, v3);
}


void __fastcall BattleServantParamComponent__ComplateUpdateShiftHplabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  int32_t NowHp; // w1
  const MethodInfo *v5; // x2

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(0LL, method);
  NowHp = BattleServantData__getNowHp(data, 0LL);
  BattleServantParamComponent__updateShiftHplabel(this, NowHp, v5);
}


void __fastcall BattleServantParamComponent__DelayCoroutine(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleServantParamComponent__DelayMethod(this, waitTime, callBack, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B05550 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent__DelayMethod_d__131_TypeInfo, callBack);
    byte_4B05550 = 1;
  }
  v6 = sub_1BC3254(BattleServantParamComponent__DelayMethod_d__131_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 40), (int32_t)callBack, v7, v8);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleServantParamComponent__DeleteSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v5; // w20

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1BC326C(this, method, v2);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1BC3264(this, method);
  }
}


void __fastcall BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Int32_array *IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  System_Int32_array *v13; // x21
  unsigned __int64 v14; // x22
  bool v15; // w20

  if ( (byte_4B05555 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4B05555 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_3308214 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_1BC3264(IsNullOrEmpty, v8);
    }
    v12 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v13 = IsNullOrEmpty;
    if ( (int)v12 >= 1 )
    {
      v14 = 0LL;
      v15 = forceDestroy;
      do
      {
        if ( v14 >= (unsigned int)v12 )
          sub_1BC326C(IsNullOrEmpty, v8, v10);
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v13->m_Items[v14 + 1],
          v15,
          v11);
        LODWORD(v12) = v13->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v12 );
    }
  }
}


void __fastcall BattleServantParamComponent__DestroyBattlePointGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B0555C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0555C = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1BC3264(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    *p_battlePointGaugeComponent = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_battlePointGaugeComponent, 0, v7, v8);
  }
}


void __fastcall BattleServantParamComponent__DestroyEffectObject(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        int32_t id,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject **v20; // x20
  System_Collections_ICollection_o *v21; // x0
  Il2CppObject *v22; // x20
  System_Action_o *v23; // x21
  Il2CppObject *v24; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B05556 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, effectDict);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_1BC3008(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&Method_BattleServantParamComponent___c__DisplayClass139_0__DestroyEffectObject_b__0__, v13);
    sub_1BC3008(&BattleServantParamComponent___c__DisplayClass139_0_TypeInfo, v14);
    byte_4B05556 = 1;
  }
  component = 0LL;
  v15 = sub_1BC3254(BattleServantParamComponent___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = effectDict;
  v20 = (Il2CppObject **)(v15 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 16), (int32_t)effectDict, v18, v19);
  v21 = *(System_Collections_ICollection_o **)(v15 + 16);
  *(_DWORD *)(v15 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v21, 0LL) )
  {
    Item = *v20;
    if ( !*v20 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v15 + 24),
           (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v20;
        if ( !*v20 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v15 + 24),
                 (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v22 = component;
          v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)v15,
            Method_BattleServantParamComponent___c__DisplayClass139_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v22 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))v22->klass->vtable[8].method)(
              v22,
              1LL,
              v23,
              v22->klass->vtable[9].methodPtr);
            return;
          }
LABEL_19:
          sub_1BC3264(Item, v17);
        }
      }
      Item = *v20;
      if ( !*v20 )
        goto LABEL_19;
      v24 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v15 + 24),
              (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)v24, 0LL);
      Item = *v20;
      if ( !*v20 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v15 + 24),
        (const MethodInfo_33099DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


void __fastcall BattleServantParamComponent__DestroyGrandEffectObject(
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

  if ( (byte_4B05560 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05560 = 1;
  }
  grandEffectObj = (UnityEngine_Object_o *)this->fields.grandEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandEffectObj, 0LL, 0LL) )
  {
    grandEffectRoot = (UnityEngine_Object_o *)this->fields.grandEffectRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(grandEffectRoot, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.grandEffectRoot;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_1BC3264(gameObject, v5);
      }
      p_grandEffectObj = (CGThumbnailListItem_o *)&this->fields.grandEffectObj;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      klass = (UnityEngine_Object_o *)p_grandEffectObj->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(klass, 0LL);
      p_grandEffectObj->klass = 0LL;
      sub_1BC2FAC(p_grandEffectObj, 0, v9, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__DisplayClassIconChangeEffect(
        BattleServantParamComponent_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_BaseClassIconData_o *classIconData; // x0

  classIconData = this->fields.classIconData;
  if ( !classIconData )
    sub_1BC3264(0LL, isSkipEffect);
  ((void (__fastcall *)(struct BattleServantParamComponent_BaseClassIconData_o *, bool, bool, void *, long double))classIconData->klass->vtable._5_DisplayIconEffect.method)(
    classIconData,
    isSkipEffect,
    isAddBuff,
    classIconData->klass[1]._1.image,
    *(long double *)&delayTime);
}


void __fastcall BattleServantParamComponent__EffectStartStop(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  bool i; // w19
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B05558 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8);
    this = (BattleServantParamComponent_o *)sub_1BC3008(
                                              &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
                                              v9);
    byte_4B05558 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_3308364 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1BC3264(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39C96D4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  for ( i = isStart;
        ;
        BattleServantParamComponent__EffectStartStop_46357812(
          (BattleServantParamComponent_o *)v11,
          (UnityEngine_GameObject_o *)v13.fields._currentValue,
          i,
          v12) )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v13,
            (const MethodInfo_345ABF4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    if ( !v11 )
      break;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v13,
    (const MethodInfo_345ABF0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void __fastcall BattleServantParamComponent__EffectStartStop_46357812(
        BattleServantParamComponent_o *this,
        UnityEngine_GameObject_o *effect,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B05559 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, effect);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B05559 = 1;
  }
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)effect, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( !effect )
      goto LABEL_14;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            effect,
            &component,
            (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
    {
      UnityEngine_GameObject__SetActive(effect, isStart, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive(effect, 1, 0LL);
    v7 = component;
    if ( !component )
LABEL_14:
      sub_1BC3264(v7, v8);
    if ( isStart )
      CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
    else
      ((void (*)(void))component->klass->vtable[9].method)();
  }
}


void __fastcall BattleServantParamComponent__ForceDestroyAllEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  BattleServantParamComponent__DestroyAllEffect(this, this->fields.classIconEffectDict, 1, v2);
  BattleServantParamComponent__DestroyAllEffect(this, this->fields.commandSpellEffectDict, 1, v4);
}


void __fastcall BattleServantParamComponent__GrandEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop_46357812(this, this->fields.grandEffectObj, isStart, v3);
}


void __fastcall BattleServantParamComponent__InitNextTdGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  struct BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v5; // x19
  int32_t nexttpturn; // w20
  int32_t maxtpturn; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v9; // x1

  if ( (byte_4B05546 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05546 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
      if ( !v5 )
        sub_1BC3264(isTDSeraled, v9);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__InstantiateGrandEffectObject(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *grandEffectRoot; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct BattlePerformance_o *perf; // x8
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_4B0555E & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__152_0__, method);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_5830/*"Effect/GrandServant"*/, v5);
    byte_4B0555E = 1;
  }
  grandEffectRoot = (UnityEngine_Object_o *)this->fields.grandEffectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandEffectRoot, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.grandEffectRoot;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
          (perf = this->fields.perf) == 0LL)
      || (assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField,
          v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo),
          AssetLoader_LoadEndDataHandler___ctor(
            v11,
            (Il2CppObject *)this,
            Method_BattleServantParamComponent__InstantiateGrandEffectObject_b__152_0__,
            0LL),
          !assetStorageLoadWrapper_k__BackingField) )
    {
      sub_1BC3264(gameObject, v7);
    }
    AssetStorageLoadWrapper__LoadAssetStorage(
      assetStorageLoadWrapper_k__BackingField,
      (System_String_o *)StringLiteral_5830/*"Effect/GrandServant"*/,
      v11,
      1,
      0LL);
  }
}


void __fastcall BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B05525 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_22186/*"onClickServant"*/, v4);
    byte_4B05525 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId, v6, v7, v8);
      if ( !v10 )
        sub_1BC3264(v11, v12);
      UnityEngine_GameObject__SendMessage_70016088(v10, (System_String_o *)StringLiteral_22186/*"onClickServant"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1BC3264(this, 0LL);
  BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
    this,
    playShiftGauge->fields._ChangeToHp_k__BackingField,
    method);
  ((void (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, BattleServantParamComponent_o *, Il2CppMethodPointer))playShiftGauge->klass->vtable._6_OnCompleteChangeHp.method)(
    playShiftGauge,
    this,
    playShiftGauge->klass->vtable._7_Init.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Object_o *hpGauge; // x21
  __int64 v7; // x1
  BattleHpGaugeBarComponent_o *v8; // x0

  if ( (byte_4B05549 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp);
    byte_4B05549 = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    v8 = this->fields.hpGauge;
    if ( !v8
      || (BattleHpGaugeBarComponent__updateDamageGauge(v8, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0LL),
          (v8 = this->fields.hpGauge) == 0LL) )
    {
      sub_1BC3264(v8, v7);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v8, nowHp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__PlayDownShiftEffect(
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

  if ( (byte_4B05544 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4B05544 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v10 = this->fields.hpShift;
    if ( !v10
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(
            v10,
            index,
            effectData,
            this,
            &nextAnimationTime,
            0LL,
            v9),
          (v10 = this->fields.hpShift) == 0LL) )
    {
      sub_1BC3264(v10, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v10, index, 1, 1, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantParamComponent__PlayShiftEffectGeneral(
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

  if ( (byte_4B05542 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4B05542 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL);
  result = 0.0;
  if ( v8 )
  {
    v12 = this->fields.hpShift;
    if ( !v12 )
      sub_1BC3264(0LL, v9);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0LL, v10);
    return nextAnimationTime;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__PlayUpShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        float delayTime,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *hpShift; // x22
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  BattleServantHpShiftComponent_o *v16; // x0
  const MethodInfo *v17; // x6
  Il2CppObject *v18; // x21
  System_Action_int__bool__bool__o *v19; // x22
  BattleCallBack_int__bool__bool__o *v20; // x21
  BattleServantParamComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B05543 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__bool__bool__TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_BattleCallBack_int__bool__bool___ctor__, v9);
    sub_1BC3008(&BattleCallBack_int__bool__bool__TypeInfo, v10);
    sub_1BC3008(&Method_BattleServantHpShiftComponent_UpdateIcon__, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    byte_4B05543 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v16 = this->fields.hpShift;
    if ( !v16
      || (BattleServantHpShiftComponent__UpdateIconActive(v16, index, 1, v15), (v16 = this->fields.hpShift) == 0LL) )
    {
      sub_1BC3264(v16, v14);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v16, index, effectData, this, &nextAnimationTime, 0LL, v17);
    v18 = (Il2CppObject *)this->fields.hpShift;
    v19 = (System_Action_int__bool__bool__o *)sub_1BC3254(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v19, v18, Method_BattleServantHpShiftComponent_UpdateIcon__, 0LL);
    v20 = (BattleCallBack_int__bool__bool__o *)sub_1BC3254(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v20,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v19,
      (const MethodInfo_322847C *)Method_BattleCallBack_int__bool__bool___ctor__);
    v23 = BattleServantParamComponent__DelayMethod(v21, delayTime, (BattleCallBackBase_o *)v20, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
  }
}


void __fastcall BattleServantParamComponent__RemoveEffectClearRankUpBuff(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v5; // w20

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1BC326C(this, method, v2);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1BC3264(this, method);
  }
}


void __fastcall BattleServantParamComponent__SetActiveParameterView(
        BattleServantParamComponent_o *this,
        bool val,
        const MethodInfo *method)
{
  bool v4; // w20
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0
  bool v7; // w1

  if ( !this->fields.data )
  {
    BattleServantParamComponent__setTouch(this, 0, method);
    root = this->fields.root;
    if ( root )
    {
      v7 = 0;
      goto LABEL_6;
    }
LABEL_7:
    sub_1BC3264(root, v5);
  }
  v4 = val;
  BattleServantParamComponent__setTouch(this, val, method);
  root = this->fields.root;
  if ( !root )
    goto LABEL_7;
  v7 = v4;
LABEL_6:
  UnityEngine_GameObject__SetActive(root, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__SetBreakSpriteDisplay(
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

  if ( (byte_4B0555D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, flg);
    byte_4B0555D = 1;
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, flg, 0LL);
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
      return;
    }
LABEL_24:
    sub_1BC3264(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__SetEnemyParamPosition(
        BattleServantParamComponent_o *this,
        BaseEnemyParamPosData_o *paramPosData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleServantParamSetting; // x21
  __int64 showBuffComponent; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  float v9; // s0
  float v10; // s1
  float v11; // s2
  int v12; // s0
  struct BattleServantShowBuffComponent_o *v15; // x19
  struct BattleServantParamSetting_o *v16; // x8
  struct BattleServantParamSetting_o *v17; // x8
  float x; // w8
  struct BattleServantShowBuffComponent_o *v19; // x9

  if ( (byte_4B0552D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, paramPosData);
    byte_4B0552D = 1;
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  showBuffComponent = UnityEngine_Object__op_Equality(battleServantParamSetting, 0LL, 0LL);
  if ( (showBuffComponent & 1) != 0 )
  {
    showBuffComponent = (__int64)this->fields.showBuffComponent;
    if ( showBuffComponent )
    {
      showBuffComponent = (__int64)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)showBuffComponent,
                                     0LL);
      if ( this->fields.showBuffComponent )
      {
        v8 = (UnityEngine_Transform_o *)showBuffComponent;
        showBuffComponent = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.showBuffComponent,
                                       0LL);
        if ( showBuffComponent )
        {
          *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)showBuffComponent,
                                            0LL);
          if ( paramPosData )
          {
            showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer, float, float, float))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method)(
                                  paramPosData,
                                  paramPosData->klass->vtable._7_get_BuffIconMaxLine.methodPtr,
                                  v9,
                                  v10,
                                  v11);
            if ( v8 )
            {
              UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v12, 0LL);
              v15 = this->fields.showBuffComponent;
              showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer))paramPosData->klass->vtable._7_get_BuffIconMaxLine.method)(
                                    paramPosData,
                                    paramPosData->klass->vtable._8_get_ExBattleUiTrPos.methodPtr);
              if ( v15 )
              {
                v15->fields.maxLine = showBuffComponent;
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BC3264(showBuffComponent, v7);
  }
  v16 = this->fields.battleServantParamSetting;
  if ( !v16 )
    goto LABEL_19;
  ComponentHelper__SetLocalPosition(
    (UnityEngine_Component_o *)this->fields.showBuffComponent,
    *(UnityEngine_Vector3_o *)&v16->fields.BuffIconPosition.fields.y,
    0LL);
  v17 = this->fields.battleServantParamSetting;
  if ( !v17 )
    goto LABEL_19;
  x = v17->fields.BoxColliderPosition.fields.x;
  if ( (LODWORD(x) & 0x80000000) == 0 )
  {
    v19 = this->fields.showBuffComponent;
    if ( !v19 )
      goto LABEL_19;
    *(float *)&v19->fields.maxCount = x;
  }
}


void __fastcall BattleServantParamComponent__SetGrandEffectDepth(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantParamComponent_c *v8; // x0
  int32_t PARTY_ORGANIZATION_CLASS_ICON_DEPTH; // w20
  Il2CppObject *Component_object; // x0
  int32_t klass; // w1
  int32_t v12; // w1
  int v13; // w20
  void *grandEffectObj; // x0
  __int64 v15; // x2
  int v16; // w8
  void *v17; // x19
  unsigned int v18; // w21
  __int64 v19; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v20; // 0:x0.8
  System_Nullable_int__o v21; // 0:x0.8

  if ( (byte_4B0555F & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v4);
    sub_1BC3008(&Method_System_Nullable_int__GetValueOrDefault__, v5);
    sub_1BC3008(&Method_System_Nullable_int___ctor__, v6);
    sub_1BC3008(&Method_System_Nullable_int__get_HasValue__, v7);
    byte_4B0555F = 1;
  }
  v8 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v8 = BattleServantParamComponent_TypeInfo;
  }
  if ( this->fields.clsIconComponent
    && (PARTY_ORGANIZATION_CLASS_ICON_DEPTH = v8->static_fields->PARTY_ORGANIZATION_CLASS_ICON_DEPTH,
        (Component_object = UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this->fields.clsIconComponent,
                              (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___)) != 0LL)
    && (klass = (int32_t)Component_object[11].klass,
        v20 = (System_Nullable_int__o)&v19,
        v19 = 0LL,
        System_Nullable_int____ctor(v20, klass, (const MethodInfo_37C0098 *)Method_System_Nullable_int___ctor__),
        (_BYTE)v19) )
  {
    v12 = PARTY_ORGANIZATION_CLASS_ICON_DEPTH - HIDWORD(v19);
    v21 = (System_Nullable_int__o)&v19;
    v19 = 0LL;
    System_Nullable_int____ctor(v21, v12, (const MethodInfo_37C0098 *)Method_System_Nullable_int___ctor__);
    v13 = HIDWORD(v19);
  }
  else
  {
    v13 = 0;
  }
  grandEffectObj = this->fields.grandEffectObj;
  if ( !grandEffectObj )
    goto LABEL_19;
  grandEffectObj = UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                     (UnityEngine_GameObject_o *)grandEffectObj,
                     (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !grandEffectObj )
    goto LABEL_19;
  v16 = *((_DWORD *)grandEffectObj + 6);
  v17 = grandEffectObj;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v16 )
        sub_1BC326C(grandEffectObj, method, v15);
      grandEffectObj = (void *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !grandEffectObj )
        break;
      UIWidget__set_depth((UIWidget_o *)grandEffectObj, *((_DWORD *)grandEffectObj + 44) - v13, 0LL);
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
        return;
    }
LABEL_19:
    sub_1BC3264(grandEffectObj, method);
  }
}


void __fastcall BattleServantParamComponent__UpdateBattlePoint(
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
  if ( (byte_4B0555A & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4B0555A = 1;
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
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL);
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
                                                0LL);
      if ( this )
      {
        v8 = v4->fields.battlePointGaugeComponent;
        if ( v8 )
        {
          BattlePointGaugeComponent__UpdateBattlePoint(
            v8,
            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
            0LL);
          return;
        }
LABEL_15:
        sub_1BC3264(this, svtdata);
      }
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateBattlePointImmediately(
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
  if ( (byte_4B0555B & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4B0555B = 1;
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
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL);
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
                                                0LL);
      if ( this )
      {
        v8 = v4->fields.battlePointGaugeComponent;
        if ( v8 )
        {
          BattlePointGaugeComponent__UpdateBattlePointImmediately(
            v8,
            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
            0LL);
          return;
        }
LABEL_15:
        sub_1BC3264(this, svtdata);
      }
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateClassIconEffect(
        BattleServantParamComponent_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_int__o *v24; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x23
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  System_Collections_IEnumerator_o *v32; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x1
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v42; // w20
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x4
  BattleServantParamComponent_o *v45; // x0
  const MethodInfo *v46; // x4
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B05554 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v19);
    this = (BattleServantParamComponent_o *)sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_4B05554 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  if ( !servantData )
    goto LABEL_38;
  this = (BattleServantParamComponent_o *)BattleServantData__get_BuffData(servantData, 0LL);
  if ( !this )
    goto LABEL_38;
  ClassIconEffectBuffList = (System_Collections_ICollection_o *)BattleBuffData__GetClassIconEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0LL);
  if ( BasicHelper__IsNullOrEmpty(ClassIconEffectBuffList, 0LL) )
  {
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.classIconEffectDict, 0, v22);
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.commandSpellEffectDict, 0, v23);
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_3308204 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v50 = v47;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_1BC3264(v26, v27);
    if ( !v25 )
      sub_1BC3264(v26, v27);
    v29 = DataMasterBase_object__object__int___TryGetEntity(
            v25,
            &entity,
            (int32_t)v50.fields._current[21].monitor,
            (const MethodInfo_32AF0BC *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v29 )
    {
      if ( !entity )
        sub_1BC3264(v29, v30);
      v32 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v31);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)v4, v32, 0LL);
      if ( !v24 )
        sub_1BC3264(started, v34);
      v35 = System_Collections_Generic_List_int___Contains(
              v24,
              (int32_t)current[21].monitor,
              (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v35 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v24->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !items )
          sub_1BC3264(v35, monitor_low);
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v24,
            monitor_low,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v24->fields._size = size + 1;
          items->m_Items[size + 1] = monitor_low;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v24 )
LABEL_38:
    sub_1BC3264(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v24,
    (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v48,
            (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1BC3264(0LL, v40);
    v42 = (int32_t)v48.fields._current;
    v43 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v48.fields._current,
            (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v43 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v43,
        v4->fields.classIconEffectDict,
        v42,
        0,
        v44);
      BattleServantParamComponent__DestroyEffectObject(v45, v4->fields.commandSpellEffectDict, v42, 0, v46);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v48,
    (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_4B05552 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05552 = 1;
  }
  if ( this->fields.data )
  {
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v6 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL), !v6) )
      {
        sub_1BC3264(data, v4);
      }
      UILabel__set_text(v6, (System_String_o *)data, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateNpImmediately(
        BattleServantParamComponent_o *this,
        int32_t np,
        const MethodInfo *method)
{
  UnityEngine_Object_o *npcomp; // x21
  __int64 v6; // x1
  BattleNpGaugeSystemComponent_o *v7; // x0

  if ( (byte_4B05530 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&np);
    byte_4B05530 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    BattleNpGaugeSystemComponent__setNowParam(v7, np, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  __int64 v6; // x1
  BattleServantChangeBarComponent_o *v7; // x0

  if ( (byte_4B05545 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
    byte_4B05545 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    BattleServantChangeBarComponent__setBarType(v7, 1, curGaugeIndex, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t fromHp,
        int32_t toHp,
        int32_t maxHp,
        float time,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *hpGauge; // x24
  BattleHpGaugeBarComponent_o *v28; // x0
  __int64 v29; // x1
  System_Collections_Hashtable_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v47[4]; // [xsp+8h] [xbp-78h] BYREF
  float v48; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v49; // [xsp+18h] [xbp-68h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B05548 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, *(_QWORD *)&fromHp);
    sub_1BC3008(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1BC3008(&int_TypeInfo, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&float_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v17);
    sub_1BC3008(&StringLiteral_20085/*"ignoretimescale"*/, v18);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v19);
    sub_1BC3008(&StringLiteral_22212/*"oncompleteparams"*/, v20);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v21);
    sub_1BC3008(&StringLiteral_9891/*"OnUpdateShiftGaugeChangeHp"*/, v22);
    sub_1BC3008(&StringLiteral_9794/*"OnCompleteShiftGaugeChangeHp"*/, v23);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v24);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v25);
    sub_1BC3008(&iTween_TypeInfo, v26);
    byte_4B05548 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( ((unsigned __int8)v28 & 1) != 0 )
  {
    v28 = this->fields.hpGauge;
    if ( !v28 )
      goto LABEL_13;
    BattleHpGaugeBarComponent__setInitValue(v28, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v30 = (System_Collections_Hashtable_o *)sub_1BC3254(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_63711480(v30, 0LL),
        v50 = fromHp,
        v28 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v31, v32, v33),
        !v30) )
  {
LABEL_13:
    sub_1BC3264(v28, v29);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_19506/*"from"*/,
    v28,
    v30->klass->vtable._23_Clear.methodPtr);
  v49 = toHp;
  v37 = j_il2cpp_value_box_0(int_TypeInfo, &v49, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_23872/*"to"*/,
    v37,
    v30->klass->vtable._23_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_22219/*"onupdate"*/,
    StringLiteral_9891/*"OnUpdateShiftGaugeChangeHp"*/,
    v30->klass->vtable._23_Clear.methodPtr);
  v48 = time;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &v48, v38, v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_23833/*"time"*/,
    v41,
    v30->klass->vtable._23_Clear.methodPtr);
  v47[0] = 1;
  v45 = j_il2cpp_value_box_0(bool_TypeInfo, v47, v42, v43, v44);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_20085/*"ignoretimescale"*/,
    v45,
    v30->klass->vtable._23_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_22211/*"oncomplete"*/,
    StringLiteral_9794/*"OnCompleteShiftGaugeChangeHp"*/,
    v30->klass->vtable._23_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v30->klass->vtable._22_Add.method)(
    v30,
    StringLiteral_22212/*"oncompleteparams"*/,
    playShiftGauge,
    v30->klass->vtable._23_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShortNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *shortNameLabel; // x20
  __int64 defaultShortNameLabelWidth; // x1
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v14; // w21
  UnityEngine_Object_o *v15; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v19; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UILabel_o *v24; // x20
  struct System_String_o *svtName; // x8
  float v26; // s8
  float v27; // s1
  float v28; // s0
  float v29; // s2

  if ( (byte_4B05553 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&AssetManager_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_16947/*"battle_name"*/, v7);
    byte_4B05553 = 1;
  }
  if ( this->fields.data )
  {
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(shortNameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_44;
      EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
      p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
      enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
      v14 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v15 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70034300(v15, 0LL);
      }
      if ( v14 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v14, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v19 = AssetStorage
            ? AssetData__GetObject_object__50213776(
                AssetStorage,
                (System_String_o *)StringLiteral_16947/*"battle_name"*/,
                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v21 = UnityEngine_Object__Instantiate_object__50900816(
                v19,
                transform,
                (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v21;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v21, v22, v23);
      }
      data = this->fields.data;
      if ( data )
      {
        v24 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v24 )
        {
          UILabel__set_text(v24, (System_String_o *)data, 0LL);
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
          svtName = data->fields.svtName;
          if ( !svtName )
            goto LABEL_44;
          v26 = (float)(LODWORD(data->fields.svtOverwriteName) * svtName->fields._stringLength);
          if ( (float)(int)defaultShortNameLabelWidth >= v26 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v28 = 1.0;
                v27 = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v26, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v27 = 1.0;
                v28 = (float)this->fields.defaultShortNameLabelWidth / v26;
LABEL_43:
                v29 = 1.0;
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v28,
                  0LL);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_1BC3264(data, defaultShortNameLabelWidth);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *updated; // x1

  if ( this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BC3264(0LL, v4);
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    {
      updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, v5);
      UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
    }
  }
  else
  {
    BattleServantParamComponent__DeleteSkillRankUpEffect(this, method);
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusByTransform(
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

  if ( (byte_4B05537 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05537 = 1;
  }
  if ( this->fields.data )
  {
    BattleServantParamComponent__UpdateStatusFace(this, method);
    classIconData = (BattleServantData_o *)this->fields.classIconData;
    if ( !classIconData )
      goto LABEL_12;
    ((void (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))classIconData->klass->vtable._4_unknown.method)(
      classIconData,
      classIconData->klass->vtable._5_isAiTarget.methodPtr);
    BattleServantParamComponent__UpdateNameLabel(this, v5);
    BattleServantParamComponent__UpdateShortNameLabel(this, v6);
    BattleServantParamComponent__updateSkillIcon(this, 0, v7);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      classIconData = this->fields.data;
      if ( classIconData )
      {
        v9 = this->fields.levelLabel;
        classIconData = (BattleServantData_o *)BattleServantData__getLevelLabel(classIconData, 0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)classIconData, 0LL);
          return;
        }
      }
LABEL_12:
      sub_1BC3264(classIconData, v3);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v6; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v8; // x21
  BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B05551 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v3);
    byte_4B05551 = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (CGThumbnailListItem_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v8 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL),
            (v9 = this->fields.data) == 0LL) )
      {
        sub_1BC3264(data, v6);
      }
      v10 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v9, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v10, DispLimitCount, 0LL);
      p_facetex->klass = (CGThumbnailListItem_c *)Manager__loadStatusFace;
      sub_1BC2FAC(p_facetex, (int32_t)Manager__loadStatusFace, v13, v14);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateTdGauge(
        BattleServantParamComponent_o *this,
        System_Int32_array *nowAndMaxArray,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v9; // x20
  int32_t v10; // w19
  int32_t v11; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v13; // x1

  if ( (byte_4B05547 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, nowAndMaxArray);
    byte_4B05547 = 1;
  }
  if ( nowAndMaxArray && nowAndMaxArray->max_length == 2 )
  {
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( data )
      {
        if ( nowAndMaxArray->max_length < 2 )
          sub_1BC326C(data, v6, v7);
        v9 = this->fields.nextTdGauge;
        v11 = nowAndMaxArray->m_Items[1];
        v10 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v9 )
          sub_1BC3264(isTDSeraled, v13);
        BattleNextTDgaugeComponent__setInitGauge(v9, v11, v10, isTDSeraled, 0LL);
      }
    }
  }
}


void __fastcall BattleServantParamComponent___InstantiateGrandEffectObject_b__152_0(
        BattleServantParamComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  struct BattlePerformance_o *v7; // x8
  Il2CppObject *GrandEffectPrefab_k__BackingField; // x21
  UnityEngine_Transform_o *grandEffectRoot; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4B05564 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, assetData);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B05564 = 1;
  }
  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__LoadGrandServantClassIconEffect(perf, assetData, 0LL), (v7 = this->fields.perf) == 0LL) )
  {
    sub_1BC3264(perf, assetData);
  }
  GrandEffectPrefab_k__BackingField = (Il2CppObject *)v7->fields._GrandEffectPrefab_k__BackingField;
  grandEffectRoot = this->fields.grandEffectRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__50900816(
          GrandEffectPrefab_k__BackingField,
          grandEffectRoot,
          (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
  this->fields.grandEffectObj = (struct UnityEngine_GameObject_o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.grandEffectObj, (int32_t)v10, v11, v12);
  BattleServantParamComponent__SetGrandEffectDepth(this, v13);
}


void __fastcall BattleServantParamComponent__callSkillIcon(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent_o *v3; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  __int64 v5; // x20
  char v6; // w22
  int max_length; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v3 = this;
  if ( (byte_4B0553A & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BC3008(&Method_BattleServantParamComponent_callSkillIcon__, method);
    byte_4B0553A = 1;
  }
  skillIcon = v3->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1BC3264(this, method);
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BC326C(this, method, v2);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                method);
      if ( !(v6 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v8 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1BC3020(Method_BattleServantParamComponent_callSkillIcon__);
        v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
        OverwriteAssetSoundName__PlayCommonSe(v9, 2, 0, 0LL);
        v6 = 1;
      }
      skillIcon = v3->fields.skillIcon;
      ++v5;
      if ( skillIcon )
        continue;
    }
    goto LABEL_13;
  }
  if ( v3->fields.modeWindow == 2 )
    BattleServantParamComponent__UpdateSkillRankUpEffect(v3, method);
}


void __fastcall BattleServantParamComponent__changeHp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  int32_t NowHp; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v7; // x4
  int32_t v8; // w21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( !svtdata )
    sub_1BC3264(this, 0LL);
  NowHp = BattleServantData__getNowHp(svtdata, 0LL);
  MaxHp = BattleServantData__getMaxHp(svtdata, 0LL);
  BattleServantParamComponent__updateHplabel(this, NowHp, MaxHp, 1, v7);
  v8 = BattleServantData__getNowHp(svtdata, 0LL);
  v9 = BattleServantData__getMaxHp(svtdata, 0LL);
  BattleServantParamComponent__updateHpbar(this, v8, v9, v10);
}


void __fastcall BattleServantParamComponent__changeUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
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
    || (BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v6), (NowHp = this->fields.data) == 0LL)
    || (NowHp = (BattleServantData_o *)BattleServantData__getNowHp(NowHp, 0LL), !this->fields.data) )
  {
    sub_1BC3264(NowHp, v5);
  }
  v8 = (int)NowHp;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v8, MaxHp, 1, v10);
}


bool __fastcall BattleServantParamComponent__checkId(
        BattleServantParamComponent_o *this,
        int32_t Id,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = BattleServantData__checkID(data, Id, 0LL);
  return (char)data;
}


void __fastcall BattleServantParamComponent__clearBuffIconList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  System_Object_array *v6; // x0
  __int64 v7; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v9; // x2

  if ( (byte_4B0554F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v4);
    byte_4B0554F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v5
    || (showBuffComponent = this->fields.showBuffComponent,
        v6 = System_Collections_Generic_List_object___ToArray(
               v5,
               (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1BC3264(v6, v7);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v6, v9);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x22
  __int64 v9; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4B0553C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B0553C = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_1BC3264(Component_object, v9);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B0553B & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_TypeInfo, method);
    byte_4B0553B = 1;
  }
  v3 = sub_1BC3254(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleServantParamComponent__fixUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleServantParamComponent__initUpdateView(this, 0, v2);
}


BattleServantData_o *__fastcall BattleServantParamComponent__getData(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__initUpdateView(
        BattleServantParamComponent_o *this,
        int32_t notUpdateFlag,
        const MethodInfo *method)
{
  char v3; // w20
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v22; // x1
  __int64 data; // x0
  UITexture_o *v24; // x22
  int32_t v25; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  struct BattleServantData_o *v31; // x8
  struct BattleServantData_o *v32; // x8
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v34; // x21
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v36; // x8
  struct BattleServantParamSetting_o *v37; // x8
  struct BattleServantParamSetting_o *v38; // x8
  float x; // w9
  struct BattleServantParamSetting_o *v40; // x8
  struct BattleServantParamSetting_o *v41; // x8
  struct BattleServantParamSetting_o *v42; // x8
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v44; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v46; // x21
  int32_t v47; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v49; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v52; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v54; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v56; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v58; // x21
  struct BattleServantData_o *v59; // x8
  BattleNpGaugeSystemComponent_o *v60; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v62; // w0
  const MethodInfo *v63; // x2
  BattleNextTDgaugeComponent_o *v64; // x20
  int32_t v65; // w21
  int32_t v66; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v68; // x8
  UISprite_o *v69; // x20
  UISprite_o *v70; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v73; // x8
  struct BattleServantData_o *v74; // x8
  ServantBattlePointMaster_o *v75; // x20
  __int64 v76; // x21
  __int64 v77; // x22
  __int64 v78; // x8
  __int64 v79; // x20
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x20
  BattlePointData_o *v85; // x23
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  __int64 v90; // x21
  __int64 v91; // x0
  __int64 v92; // x1
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x22
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  __int64 v103; // x0
  __int64 v104; // x1
  BattleServantData_o *v105; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v107; // x1
  BattlePointData_o *v108; // x28
  struct BattleServantData_o *v109; // x8
  UnityEngine_Object_o *battlePointRoot; // x23
  _BOOL8 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  Il2CppObject *v116; // x1
  System_String_o *v117; // x19
  AssetLoader_LoadEndDataHandler_o *v118; // x22
  __int64 v119; // x8
  __int64 v120; // x9
  int *v121; // x10
  __int64 v122; // x0
  int v123; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4B05536 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, *(_QWORD *)&notUpdateFlag);
    sub_1BC3008(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantBattlePointMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&FileName_TypeInfo, v8);
    sub_1BC3008(&System_IDisposable_TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, v10);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, v11);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BC3008(&int_TypeInfo, v13);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1BC3008(&Method_BattleServantParamComponent___c__DisplayClass93_0__initUpdateView_b__0__, v18);
    sub_1BC3008(&BattleServantParamComponent___c__DisplayClass93_0_TypeInfo, v19);
    sub_1BC3008(&StringLiteral_3064/*"Battle/BattlePoint/Prefab/{0}"*/, v20);
    byte_4B05536 = 1;
  }
  component = 0LL;
  if ( !this->fields.data )
    return;
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v24 = this->fields.facetex;
    data = BattleServantData__GetDispImageSvtId((BattleServantData_o *)data, 0LL);
    if ( !this->fields.data )
      goto LABEL_175;
    v25 = data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v24, v25, DispLimitCount, 0LL);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.facetex, (int32_t)Manager__loadStatusFace, v28, v29);
  }
  data = (__int64)this->fields.classIconData;
  if ( !data )
    goto LABEL_175;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 376LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 384LL));
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_175;
  if ( v31->fields.isEnemy )
    BattleServantParamComponent__ChangeTargetMarkSprite(this, v31->fields._IsGrand_k__BackingField, v30);
  BattleServantParamComponent__DestroyGrandEffectObject(this, v22);
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_175;
  if ( v32->fields._IsShowGrandEffect_k__BackingField )
    BattleServantParamComponent__InstantiateGrandEffectObject(this, v22);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v34 = this->fields.levelLabel;
    data = (__int64)BattleServantData__getLevelLabel((BattleServantData_o *)data, 0LL);
    if ( !v34 )
      goto LABEL_175;
    UILabel__set_text(v34, (System_String_o *)data, 0LL);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = UnityEngine_Object__op_Inequality(battleServantParamSetting, 0LL, 0LL);
  if ( (data & 1) != 0 )
  {
    v36 = this->fields.battleServantParamSetting;
    if ( !v36 )
      goto LABEL_175;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.clsIconComponent,
      LOBYTE(v36->fields.UiPosition.fields.x),
      0LL);
    v37 = this->fields.battleServantParamSetting;
    if ( !v37 )
      goto LABEL_175;
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this,
      *(UnityEngine_Vector3_o *)&v37->fields.UiPosition.fields.y,
      0LL);
    v38 = this->fields.battleServantParamSetting;
    if ( !v38 )
      goto LABEL_175;
    x = v38->fields.BoxColliderPosition.fields.x;
    if ( (LODWORD(x) & 0x80000000) != 0 )
    {
      data = (__int64)this->fields.showBuffComponent;
    }
    else
    {
      data = (__int64)this->fields.showBuffComponent;
      if ( !data )
        goto LABEL_175;
      *(float *)(data + 40) = x;
    }
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)data,
      *(UnityEngine_Vector3_o *)&v38->fields.BuffIconPosition.fields.y,
      0LL);
    v40 = this->fields.battleServantParamSetting;
    if ( !v40 )
      goto LABEL_175;
    GameObjectHelper__SetActiveSafely(this->fields.levelRoot, BYTE1(v40->fields.UiPosition.fields.x), 0LL);
    data = UnityEngine_Component__TryGetComponent_object_(
             (UnityEngine_Component_o *)this,
             &component,
             (const MethodInfo_2FF9730 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    if ( (data & 1) != 0 )
    {
      v41 = this->fields.battleServantParamSetting;
      if ( !v41 )
        goto LABEL_175;
      data = (__int64)component;
      if ( !component )
        goto LABEL_175;
      UnityEngine_BoxCollider__set_center(
        (UnityEngine_BoxCollider_o *)component,
        *(UnityEngine_Vector3_o *)&v41->fields.BoxColliderPosition.fields.y,
        0LL);
      v42 = this->fields.battleServantParamSetting;
      if ( !v42 )
        goto LABEL_175;
      data = (__int64)component;
      if ( !component )
        goto LABEL_175;
      UnityEngine_BoxCollider__set_size(
        (UnityEngine_BoxCollider_o *)component,
        *(UnityEngine_Vector3_o *)&v42->fields.BoxColliderSize.fields.y,
        0LL);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v44 = this->fields.nameLabel;
    data = (__int64)BattleServantData__getServantName((BattleServantData_o *)data, 0LL);
    if ( !v44 )
      goto LABEL_175;
    UILabel__set_text(v44, (System_String_o *)data, 0LL);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v22);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v46 = this->fields.hpGauge;
    data = BattleServantData__getNowHp((BattleServantData_o *)data, 0LL);
    if ( !this->fields.data )
      goto LABEL_175;
    v47 = data;
    data = BattleServantData__getMaxHp(this->fields.data, 0LL);
    if ( !v46 )
      goto LABEL_175;
    BattleHpGaugeBarComponent__setInitValue(v46, v47, data, 0LL);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
  if ( (data & 1) != 0 )
  {
    v49 = this->fields.data;
    if ( !v49 )
      goto LABEL_175;
    shiftDeckList = v49->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_175;
    data = (__int64)this->fields.hpChange;
    if ( !data )
      goto LABEL_175;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)data,
      1,
      shiftDeckList->max_length - v49->fields.shiftDeckIndex,
      0LL);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    data = (__int64)this->fields.hpShift;
    if ( !data )
      goto LABEL_175;
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v52);
  }
  BattleServantParamComponent__setAtlas(this, v22);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    data = (__int64)this->fields.breakSprite;
    if ( !data )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0LL);
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_175;
  data = BattleServantData__getNowHp((BattleServantData_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_175;
  v54 = data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v54, MaxHp, 1, v56);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
  if ( (data & 1) != 0 )
  {
    v58 = this->fields.npcomp;
    if ( !v58 )
      goto LABEL_175;
    v58->fields.lineCount = 3;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v58->fields.maxparam = BattleServantData__getCountMaxNp((BattleServantData_o *)data, 0LL);
    data = (__int64)this->fields.npcomp;
    if ( !data )
      goto LABEL_175;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
    v59 = this->fields.data;
    if ( !v59 )
      goto LABEL_175;
    data = (__int64)this->fields.npcomp;
    if ( !data )
      goto LABEL_175;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v59->fields.np, 0LL);
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v60 = this->fields.npcomp;
    data = BattleServantData__isAddNpGauge((BattleServantData_o *)data, 0LL);
    if ( !v60 )
      goto LABEL_175;
    BattleNpGaugeSystemComponent__setUseNp(v60, data & 1, 0LL);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v62 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
  if ( (v3 & 1) == 0 && v62 )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_175;
    v64 = this->fields.nextTdGauge;
    v65 = *(_DWORD *)(data + 400);
    v66 = *(_DWORD *)(data + 396);
    data = BattleServantData__isTDSeraled((BattleServantData_o *)data, 0LL);
    if ( !v64 )
      goto LABEL_175;
    BattleNextTDgaugeComponent__setInitGauge(v64, v65, v66, data & 1, 0LL);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v63);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
  {
    data = (__int64)this->fields.friendIcon;
    if ( !data )
      goto LABEL_175;
    data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !data )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v68 = this->fields.data;
    if ( !v68 )
      goto LABEL_175;
    if ( v68->fields.followerType )
    {
      v69 = this->fields.friendIcon;
      data = (__int64)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v69 )
        goto LABEL_175;
      UISprite__set_spriteName(v69, FileName_TypeInfo->static_fields->friendIconName, 0LL);
      data = (__int64)this->fields.friendIcon;
      if ( !data )
        goto LABEL_175;
      data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_175;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      v68 = this->fields.data;
      if ( !v68 )
        goto LABEL_175;
    }
    if ( v68->fields.flgEventJoin )
    {
      v70 = this->fields.friendIcon;
      data = (__int64)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v70 )
        goto LABEL_175;
      UISprite__set_spriteName(v70, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
      data = (__int64)this->fields.friendIcon;
      if ( !data )
        goto LABEL_175;
      data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_175;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v22);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_175;
  data = (__int64)perf->fields.data;
  if ( !data )
    goto LABEL_175;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL);
    if ( (data & 1) != 0 )
    {
      v73 = this->fields.data;
      if ( !v73 )
        goto LABEL_175;
      data = (__int64)this->fields.breakPoint;
      if ( !data )
        goto LABEL_175;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v73->fields.defeatPoint,
        v73->fields.maxDefeatPoint,
        v73->fields.isEnemy,
        0LL);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v74 = this->fields.data;
  if ( !v74 )
    goto LABEL_175;
  v75 = (ServantBattlePointMaster_o *)data;
  v77 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v76 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v125.fields.currentCryptoKey = v77;
  *(_QWORD *)&v125.fields.fakeValue = v76;
  data = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v125, 0LL);
  if ( !v75 || (data = (__int64)ServantBattlePointMaster__GetBattlePointEntities(v75, data, 0LL)) == 0 )
LABEL_175:
    sub_1BC3264(data, v22);
  v78 = *(_QWORD *)data;
  v79 = data;
  v80 = *(unsigned __int16 *)(*(_QWORD *)data + 302LL);
  if ( *(_WORD *)(*(_QWORD *)data + 302LL) )
  {
    v81 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)v81 - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_132;
    }
    v82 = v78 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_132:
    v82 = sub_1C13570(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v79, *(_QWORD *)(v82 + 8));
  if ( !v84 )
    sub_1BC3264(0LL, v83);
  v85 = 0LL;
  while ( 1 )
  {
    v86 = *(_QWORD *)v84;
    v87 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v88 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v87;
        v88 += 4;
        if ( !v87 )
          goto LABEL_140;
      }
      v89 = v86 + 16LL * *v88 + 312;
    }
    else
    {
LABEL_140:
      v89 = sub_1C13570(v84, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v84, *(_QWORD *)(v89 + 8)) & 1) == 0 )
      break;
    v90 = sub_1BC3254(BattleServantParamComponent___c__DisplayClass93_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v90, 0LL);
    if ( !v90 )
      sub_1BC3264(v91, v92);
    *(_QWORD *)(v90 + 24) = this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v90 + 24), (int32_t)this, v93, v94);
    v95 = *(_QWORD *)v84;
    v96 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v97 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v96;
        v97 += 4;
        if ( !v96 )
          goto LABEL_148;
      }
      v98 = v95 + 16LL * *v97 + 312;
    }
    else
    {
LABEL_148:
      v98 = sub_1C13570(v84, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v84, *(_QWORD *)(v98 + 8));
    *(_QWORD *)(v90 + 16) = v99;
    v100 = v90 + 16;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v90 + 16), v99, v101, v102);
    if ( !*(_QWORD *)(v90 + 16) )
      sub_1BC3264(v103, v104);
    v105 = this->fields.data;
    if ( !v105 )
      sub_1BC3264(0LL, v104);
    BattlePointData = BattleServantData__GetBattlePointData(v105, *(_DWORD *)(*(_QWORD *)(v90 + 16) + 20LL), 0LL);
    if ( BattlePointData )
      v108 = BattlePointData;
    else
      v108 = v85;
    if ( !BattlePointData )
      goto LABEL_185;
    if ( !v108 )
      sub_1BC3264(BattlePointData, v107);
    v85 = BattlePointData;
    if ( !v108->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_185:
      v109 = this->fields.data;
      if ( !v109 )
        sub_1BC3264(BattlePointData, v107);
      v85 = v108;
      if ( !v109->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v111 = UnityEngine_Object__op_Inequality(battlePointRoot, 0LL, 0LL);
        v85 = v108;
        if ( v111 )
        {
          if ( !*(_QWORD *)v100 )
            sub_1BC3264(v111, v112);
          v123 = *(_DWORD *)(*(_QWORD *)v100 + 20LL);
          v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v113, v114, v115);
          v117 = System_String__Format((System_String_o *)StringLiteral_3064/*"Battle/BattlePoint/Prefab/{0}"*/, v116, 0LL);
          v118 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v118,
            (Il2CppObject *)v90,
            Method_BattleServantParamComponent___c__DisplayClass93_0__initUpdateView_b__0__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v117, v118, 1, 0LL);
          break;
        }
      }
    }
  }
  v119 = *(_QWORD *)v84;
  v120 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
  {
    v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v121 - 1) != System_IDisposable_TypeInfo )
    {
      --v120;
      v121 += 4;
      if ( !v120 )
        goto LABEL_171;
    }
    v122 = v119 + 16LL * *v121 + 312;
  }
  else
  {
LABEL_171:
    v122 = sub_1C13570(v84, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v122)(v84, *(_QWORD *)(v122 + 8));
}


bool __fastcall BattleServantParamComponent__isNone(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  return this->fields.uniqueID == -1;
}


void __fastcall BattleServantParamComponent__onClickEnemyTarget(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
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
  this = (BattleServantParamComponent_o *)BattleData__isTutorial((BattleData_o *)this, 0LL);
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
        if ( !BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)this, 0LL) )
          return;
        this = (BattleServantParamComponent_o *)v3->fields.perf;
        if ( this )
        {
          LOBYTE(this[1].fields.skillIcon) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1BC3264(this, method);
  }
  if ( !v4 )
    goto LABEL_16;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( data->fields.tutorialId != 3 || data->fields.tutorialState )
    goto LABEL_10;
}


void __fastcall BattleServantParamComponent__onLongPressEnemyTarget(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x8

  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0LL || (masterPerf = statusPerf->fields.masterPerf) == 0LL )
    sub_1BC3264(this, method);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0LL);
}


void __fastcall BattleServantParamComponent__playAddition(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4B0554B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3075/*"Battle/Prefab/ef_add_enemy"*/, method);
    byte_4B0554B = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_40210276(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3075/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_1BC3264(clsIconComponent, method);
    }
    v6->fields.isAddition = 0;
  }
}


void __fastcall BattleServantParamComponent__playAttackEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent_o *v3; // x19
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *facetex; // x20
  struct UnityEngine_GameObject_array *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x3

  v3 = this;
  if ( (byte_4B05535 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantParamComponent_o *)sub_1BC3008(&StringLiteral_18723/*"effect/ef_cwflash01"*/, v4);
    byte_4B05535 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_22;
  if ( !effectobj->max_length )
    goto LABEL_23;
  v6 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v3->fields.effectobj;
    if ( !v7 )
      goto LABEL_22;
    if ( !v7->max_length )
      goto LABEL_23;
    v8 = (UnityEngine_Object_o *)v7->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v8, 0LL);
  }
  facetex = (UnityEngine_Object_o *)v3->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    this = (BattleServantParamComponent_o *)v3->fields.facetex;
    if ( this )
    {
      v10 = v3->fields.effectobj;
      this = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_40210276(
                                                  (BaseMonoBehaviour_o *)v3,
                                                  (System_String_o *)StringLiteral_18723/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v10 )
        {
          if ( v10->max_length )
          {
            v10->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1BC2FAC((CGThumbnailListItem_o *)v10->m_Items, (int32_t)this, v2, v12);
            return;
          }
LABEL_23:
          sub_1BC326C(this, method, v2);
        }
      }
    }
LABEL_22:
    sub_1BC3264(this, method);
  }
}


void __fastcall BattleServantParamComponent__playCloseSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B05527 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05527 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1BC3264(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    v8.fields.r = 0.5;
    v8.fields.g = 0.5;
    v8.fields.b = 0.5;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playEndShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B05528 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05528 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1BC3264(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B05526 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05526 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1BC3264(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playShiftEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_4B05541 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05541 = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      v6 = this->fields.hpShift;
      if ( !v6 )
        sub_1BC3264(0LL, v4);
      BattleServantHpShiftComponent__playShiftEffect(v6, this->fields.data, v5);
    }
  }
}


float __fastcall BattleServantParamComponent__playShiftEffectBefore(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_4B05540 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05540 = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    return 0.0;
  v6 = this->fields.hpShift;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v6, this->fields.data, v5);
}


void __fastcall BattleServantParamComponent__playStartShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__popBuffLabel(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *v9; // x19
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v12; // s8
  float v13; // s9
  UnityEngine_Object_o *ComponentInChildren_object__50683200; // x23
  _DWORD *monitor; // x8
  int v16; // w22
  _DWORD *v17; // x8
  int v18; // w8
  float sideEffectLabelWidth; // s0
  float v20; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B0554E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, buffData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4B0554E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_34;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0LL);
  if ( !buffData || !perf )
    goto LABEL_34;
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
                                 perf,
                                 (unsigned int)buffData->fields.popColor,
                                 perf->klass[1]._1.properties);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_34;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_34;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        (BattleUIRangeLabel_o *)Component_object,
        buffData->fields.popLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else if ( !Component_object )
    {
      goto LABEL_34;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth((BattleUIRangeLabel_o *)Component_object, 0LL);
    v12 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v13 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_object__50683200 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__50683200(
                                                                       (UnityEngine_GameObject_o *)v9,
                                                                       1,
                                                                       (const MethodInfo_3055D40 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__50683200, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__50683200 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__50683200,
          buffData->fields.popIcon,
          0LL);
        monitor = ComponentInChildren_object__50683200[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v16 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__50683200,
                                        0LL);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_34;
        v23.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v16 * 0.5)) + 5.0);
        v23.fields.y = 0.0;
        v23.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v23, 0LL);
        v17 = ComponentInChildren_object__50683200[1].monitor;
        if ( !v17 )
          goto LABEL_34;
        v18 = v17[42];
        if ( v12 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v20 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v18 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v13 = 0.0;
          if ( v20 > sideEffectLabelWidth )
            v13 = v20 - sideEffectLabelWidth;
        }
        else
        {
          v13 = (float)(v12 * (float)((float)v18 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 0, 0LL);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v22 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v22 )
      {
        UnityEngine_Transform__SetParent(v22, (UnityEngine_Transform_o *)perf, 0LL);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
        if ( perf )
        {
          v24.fields.y = 1.0;
          v24.fields.z = 1.0;
          v24.fields.x = v12;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v24, 0LL);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
          if ( perf )
          {
            v25.fields.y = 0.0;
            v25.fields.z = 0.0;
            v25.fields.x = v13;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v25, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1BC3264(perf, buffData);
  }
}


void __fastcall BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v15; // x20
  UISprite_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v22; // x8
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  int v26; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v27; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B05539 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&AssetManager_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___, v5);
    sub_1BC3008(&int_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_3066/*"Battle/Common"*/, v8);
    sub_1BC3008(&StringLiteral_3084/*"BattleAssetUIAtlas"*/, v9);
    sub_1BC3008(&StringLiteral_19827/*"hp_break_"*/, v10);
    byte_4B05539 = 1;
  }
  component = 0LL;
  v27 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3066/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_33;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__50213776(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3084/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !AssetStorage )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v15 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( !AssetStorage )
      goto LABEL_33;
    UISprite__set_atlas((UISprite_o *)AssetStorage, v15, 0LL);
    v16 = this->fields.breakSprite;
    v26 = 1;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19);
    AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_19827/*"hp_break_"*/, v20, 0LL);
    if ( !v16 )
      goto LABEL_33;
    UISprite__set_spriteName(v16, (System_String_o *)AssetStorage, 0LL);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Equality(battleServantParamSetting, 0LL, 0LL);
  if ( ((unsigned __int8)AssetStorage & 1) == 0 )
  {
    v22 = this->fields.battleServantParamSetting;
    if ( !v22 )
      goto LABEL_33;
    AssetStorage = (AssetData_o *)System_String__IsNullOrEmpty(v22->fields.TargetIconSpriteName, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) == 0 )
    {
      AssetStorage = (AssetData_o *)this->fields.targetMark;
      if ( !AssetStorage )
        goto LABEL_33;
      AssetStorage = (AssetData_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                      (UnityEngine_GameObject_o *)AssetStorage,
                                      &component,
                                      (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_atlas((UISprite_o *)component, v15, 0LL);
        v23 = this->fields.battleServantParamSetting;
        if ( !v23 )
          goto LABEL_33;
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_spriteName((UISprite_o *)component, v23->fields.TargetIconSpriteName, 0LL);
      }
    }
    v24 = this->fields.battleServantParamSetting;
    if ( v24 )
    {
      if ( System_String__IsNullOrEmpty(v24->fields.FixTargetIconSpriteName, 0LL) )
        return;
      AssetStorage = (AssetData_o *)this->fields.lockTargetMark;
      if ( AssetStorage )
      {
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)AssetStorage,
                &v27,
                (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
          return;
        AssetStorage = (AssetData_o *)v27;
        if ( v27 )
        {
          UISprite__set_atlas((UISprite_o *)v27, v15, 0LL);
          v25 = this->fields.battleServantParamSetting;
          if ( v25 )
          {
            AssetStorage = (AssetData_o *)v27;
            if ( v27 )
            {
              UISprite__set_spriteName((UISprite_o *)v27, v25->fields.FixTargetIconSpriteName, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_33:
    sub_1BC3264(AssetStorage, v12);
  }
}


void __fastcall BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *facetex; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  UnityEngine_Component_o *Item; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v15; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v17; // x21
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Component_c *v21; // x8
  UnityEngine_Component_o *v22; // x21
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  UnityEngine_Component_c *v26; // x8
  SimpleAnimation_State_c *v27; // x1
  UnityEngine_Component_o *v28; // x21
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x9
  __int64 v32; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v34; // x2
  UnityEngine_Color_o v35; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B05529 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_13069/*"SvtW_StartClose"*/, v7);
    byte_4B05529 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    Item = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !Item )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
    v35.fields.r = 0.0;
    v35.fields.g = 0.0;
    v35.fields.b = 0.0;
    v35.fields.a = 0.0;
    TweenColor__Begin(gameObject, 0.4, v35, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_58;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      klass = Item->klass;
      v17 = Item;
      v18 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v18;
          p_offset += 2;
          if ( !v18 )
            goto LABEL_19;
        }
        v20 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_19:
        v20 = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v26 = Item->klass;
      v27 = SimpleAnimation_State_TypeInfo;
      v28 = Item;
      v29 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v30 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
        while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v29;
          v30 += 2;
          if ( !v29 )
            goto LABEL_50;
        }
LABEL_51:
        v32 = (__int64)(&v26[1]._1.castClass + 2 * *(_DWORD *)v30);
        goto LABEL_52;
      }
      goto LABEL_50;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v21 = Item->klass;
      v22 = Item;
      v23 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v24 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          v24 += 2;
          if ( !v23 )
            goto LABEL_29;
        }
        v25 = (__int64)(&v21[1]._1.gc_desc + 2 * *(_DWORD *)v24);
      }
      else
      {
LABEL_29:
        v25 = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v26 = Item->klass;
      v27 = SimpleAnimation_State_TypeInfo;
      v28 = Item;
      v31 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v30 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
        while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v31;
          v30 += 2;
          if ( !v31 )
            goto LABEL_50;
        }
        goto LABEL_51;
      }
LABEL_50:
      v32 = sub_1C13570(v28, v27, 8LL);
LABEL_52:
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
      SimpleAnimation__Play_65293968((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_53;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_59;
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v15,
                                        (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v15,
                                        (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
    UnityEngine_Animation__Play_69779584((UnityEngine_Animation_o *)v15, (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_53:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    Item = (UnityEngine_Component_o *)this->fields.battlePointGaugeComponent;
    if ( Item )
    {
      BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)Item, 0, 0LL);
      goto LABEL_58;
    }
LABEL_59:
    sub_1BC3264(Item, v9);
  }
LABEL_58:
  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 0, v10);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v34);
}


void __fastcall BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *clsIconComponent; // x21
  ServantClassIconComponent_o *v10; // x22
  BattleServantParamComponent_ClassIconData_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleNpGaugeSystemComponent_o *v15; // x0
  __int64 v16; // x1
  struct BattleServantData_o *v17; // x8
  int32_t AppearanceId; // w21
  int32_t DispLimitCount; // w0
  _BOOL4 isForceAppearance; // w22
  int32_t v21; // w20
  struct BattleServantParamSetting_o *Manager__LoadBattleServantParamSetting; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x3

  if ( (byte_4B05524 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_BaseClassIconData_TypeInfo, data);
    sub_1BC3008(&BattleServantParamComponent_ClassIconData_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v8);
    byte_4B05524 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  if ( !data )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0LL, 0LL) )
  {
    v10 = this->fields.clsIconComponent;
    v11 = (BattleServantParamComponent_ClassIconData_o *)sub_1BC3254(BattleServantParamComponent_ClassIconData_TypeInfo);
    BattleServantParamComponent_ClassIconData___ctor(v11, data, v10, v12);
  }
  else
  {
LABEL_8:
    v11 = (BattleServantParamComponent_ClassIconData_o *)sub_1BC3254(BattleServantParamComponent_BaseClassIconData_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.classIconData, (int32_t)v11, v13, v14);
  v17 = this->fields.data;
  if ( !v17 )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v15 = this->fields.npcomp;
      if ( !v15 )
LABEL_21:
        sub_1BC3264(v15, v16);
      BattleNpGaugeSystemComponent__resetSlider(v15, 0LL);
    }
    this->fields.uniqueID = -1;
    goto LABEL_20;
  }
  this->fields.uniqueID = v17->fields.uniqueId;
  if ( !data )
    goto LABEL_21;
  AppearanceId = BattleServantData__getAppearanceId(data, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(data, 1, 0LL);
  isForceAppearance = data->fields.isForceAppearance;
  v21 = DispLimitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleServantParamSetting = ServantAssetLoadManager__LoadBattleServantParamSetting(
                                             AppearanceId,
                                             v21,
                                             isForceAppearance,
                                             0LL);
  this->fields.battleServantParamSetting = Manager__LoadBattleServantParamSetting;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.battleServantParamSetting,
    (int32_t)Manager__LoadBattleServantParamSetting,
    v23,
    v24);
LABEL_20:
  BattleServantParamComponent__initUpdateView(this, 0, v25);
  BattleServantParamComponent__updateView(this, v27);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v28);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *facetex; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v14; // x21
  float v15; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v18; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v20; // x8
  __int64 v21; // x23
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  SimpleAnimation_State_o *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x23
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  UnityEngine_AnimationState_o *v31; // x21
  float length; // s0
  long double v33; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v35; // q8
  __int64 v36; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  long double v39; // q0
  SimpleAnimation_State_c *v40; // x8
  long double v41; // q8
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  SimpleAnimation_State_c *v46; // x1
  __int64 v47; // x22
  __int64 v48; // x9
  SimpleAnimation_State_c **v49; // x10
  __int64 v50; // x9
  __int64 v51; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  UnityEngine_Color_o v55; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B0552A & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_13069/*"SvtW_StartClose"*/, v8);
    byte_4B0552A = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_78;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !this->fields.perf )
      goto LABEL_78;
    v14 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    v15 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v55.fields.r = 1.0;
    v55.fields.g = 1.0;
    v55.fields.b = 1.0;
    v55.fields.a = 1.0;
    TweenColor__Begin(v14, v15, v55, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item(
               (SimpleAnimation_o *)Component_object,
               (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
               0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v20 = *(_QWORD *)gameObject;
      v21 = gameObject;
      v22 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v23 = (SimpleAnimation_State_c **)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          v23 += 2;
          if ( !v22 )
            goto LABEL_21;
        }
        v24 = v20 + 16LL * (*(_DWORD *)v23 + 13) + 312;
      }
      else
      {
LABEL_21:
        v24 = sub_1C13570(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !Item )
        goto LABEL_78;
      klass = Item->klass;
      v35 = v33;
      v36 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v36;
          p_offset += 2;
          if ( !v36 )
            goto LABEL_46;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
      }
      else
      {
LABEL_46:
        p_method = sub_1C13570(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
        Item,
        *(_QWORD *)(p_method + 8),
        v35);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v45 = *(_QWORD *)gameObject;
      v46 = SimpleAnimation_State_TypeInfo;
      v47 = gameObject;
      v48 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v48;
          v49 += 2;
          if ( !v48 )
            goto LABEL_67;
        }
LABEL_68:
        v51 = v45 + 16LL * (*(_DWORD *)v49 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v25 = SimpleAnimation__get_Item(
              (SimpleAnimation_o *)Component_object,
              (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
              0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v26 = *(_QWORD *)gameObject;
      v27 = gameObject;
      v28 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v28;
          v29 += 2;
          if ( !v28 )
            goto LABEL_31;
        }
        v30 = v26 + 16LL * (*(_DWORD *)v29 + 13) + 312;
      }
      else
      {
LABEL_31:
        v30 = sub_1C13570(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
      if ( !v25 )
        goto LABEL_78;
      v40 = v25->klass;
      v41 = v39;
      v42 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
      {
        v43 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
        while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v42;
          v43 += 2;
          if ( !v42 )
            goto LABEL_53;
        }
        v44 = (__int64)&v40->vtable[*(_DWORD *)v43 + 4].method;
      }
      else
      {
LABEL_53:
        v44 = sub_1C13570(v25, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v44)(v25, *(_QWORD *)(v44 + 8), v41);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v45 = *(_QWORD *)gameObject;
      v46 = SimpleAnimation_State_TypeInfo;
      v47 = gameObject;
      v50 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v50;
          v49 += 2;
          if ( !v50 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v51 = sub_1C13570(v47, v46, 8LL);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v51)(v47, *(_QWORD *)(v51 + 8), -1.0);
      SimpleAnimation__Play_65293968((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_78;
    v31 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v18,
                            (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
    if ( !v31 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v31, length, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v18,
                            (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
    UnityEngine_Animation__Play_69779584((UnityEngine_Animation_o *)v18, (System_String_o *)StringLiteral_13069/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_70:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.battlePointGaugeComponent;
    if ( gameObject )
    {
      BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gameObject, 0LL);
      goto LABEL_75;
    }
LABEL_78:
    sub_1BC3264(gameObject, v10);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, 1, v12);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v11);
  BattleServantParamComponent__updateSkillIcon(this, 0, v53);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v54);
}


void __fastcall BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.perf = inperf;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3);
}


void __fastcall BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *roleTypeSprite; // x20
  __int64 transform; // x0
  __int64 v7; // x1
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v10; // x8
  UnityEngine_Transform_o *v11; // x20
  bool v12; // w1

  if ( (byte_4B05534 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18860/*"enemy_icon_leader"*/, v3);
    sub_1BC3008(&StringLiteral_23058/*"servant_icon"*/, v4);
    byte_4B05534 = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(roleTypeSprite, 0LL, 0LL);
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
        v10 = &StringLiteral_18860/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v10 = &StringLiteral_23058/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v10, 0LL);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          v11 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4AFBDB1 )
          {
            transform = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v7);
            byte_4AFBDB1 = 1;
          }
          if ( v11 )
          {
            UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (__int64)this->fields.roleTypeSprite;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v12 = 1;
LABEL_26:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v12, 0LL);
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
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( transform )
    {
      v12 = 0;
      goto LABEL_26;
    }
LABEL_27:
    sub_1BC3264(transform, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setSkillFlash(
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
    sub_1BC3264(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BC326C(this, flg, method);
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
void __fastcall BattleServantParamComponent__setTargetMark(
        BattleServantParamComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *targetMark; // x21
  UnityEngine_Object_o *lockTargetMark; // x21
  const MethodInfo *v11; // x1
  void *data; // x0
  int v13; // w26
  unsigned int localPosition; // s9
  unsigned int v15; // s8
  UIWidget_o *v16; // x21
  struct BattleServantData_o *v17; // x8
  _BOOL4 IsGrand_k__BackingField; // w27
  __int64 v19; // x8
  int32_t GRAND_TARGET_MARK_SPRITE_DEPTH; // w1
  UIWidget_o *v21; // x23
  UnityEngine_Object_o *battleServantParamSetting; // x24
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  struct BattleServantParamSetting_o *v26; // x8
  struct BattleServantParamSetting_o *v27; // x8
  struct BattleServantParamSetting_o *v28; // x8
  struct BattleServantParamSetting_o *v29; // x8
  struct BattleServantParamSetting_o *v30; // x8
  struct BattleServantParamSetting_o *v31; // x8
  UnityEngine_Object_o *v32; // x20
  struct BattleServantParamSetting_o *v33; // x8
  struct BattleServantParamSetting_o *v34; // x8
  struct BattleServantParamSetting_o *v35; // x8
  struct BattleServantParamSetting_o *v36; // x8
  struct BattleServantParamSetting_o *v37; // x8
  struct BattleServantParamSetting_o *v38; // x8
  struct BattleServantParamSetting_o *v39; // x8
  UnityEngine_Object_o *v40; // x21
  UnityEngine_Object_o *v41; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v43; // x8
  _BOOL4 v44; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B0553F & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B0553F = 1;
  }
  if ( this->fields.data )
  {
    targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
    {
      lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(lockTargetMark, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_98;
        v13 = *((_DWORD *)data + 6);
        if ( *((_BYTE *)data + 489) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.targetMark;
          if ( !data )
            goto LABEL_98;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_98;
          localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          localPosition = -1034158080;
        }
        data = this->fields.data;
        if ( !data )
          goto LABEL_98;
        if ( *((_BYTE *)data + 489) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.lockTargetMark;
          if ( !data )
            goto LABEL_98;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_98;
          v15 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          v15 = -1034289152;
        }
        data = this->fields.targetMark;
        if ( data )
        {
          data = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v16 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v46.fields.y = 22.0;
              v46.fields.z = 0.0;
              LODWORD(v46.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v46, 0LL);
              v17 = this->fields.data;
              if ( v17 )
              {
                IsGrand_k__BackingField = v17->fields._IsGrand_k__BackingField;
                data = BattleServantParamComponent_TypeInfo;
                if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
                  data = BattleServantParamComponent_TypeInfo;
                }
                v19 = *((_QWORD *)data + 23);
                if ( IsGrand_k__BackingField )
                {
                  if ( !v16 )
                    goto LABEL_98;
                  UIWidget__set_width(v16, *(_DWORD *)(v19 + 36), 0LL);
                  UIWidget__set_height(
                    v16,
                    BattleServantParamComponent_TypeInfo->static_fields->GRAND_TARGET_MARK_SPRITE_HEIGHT,
                    0LL);
                  GRAND_TARGET_MARK_SPRITE_DEPTH = BattleServantParamComponent_TypeInfo->static_fields->GRAND_TARGET_MARK_SPRITE_DEPTH;
                }
                else
                {
                  if ( !v16 )
                    goto LABEL_98;
                  UIWidget__set_width(v16, *(_DWORD *)(v19 + 24), 0LL);
                  UIWidget__set_height(
                    v16,
                    BattleServantParamComponent_TypeInfo->static_fields->TARGET_MARK_SPRITE_HEIGHT,
                    0LL);
                  GRAND_TARGET_MARK_SPRITE_DEPTH = BattleServantParamComponent_TypeInfo->static_fields->TARGET_MARK_SPRITE_DEPTH;
                }
                UIWidget__set_depth(v16, GRAND_TARGET_MARK_SPRITE_DEPTH, 0LL);
                data = this->fields.lockTargetMark;
                if ( data )
                {
                  data = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v21 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v47.fields.y = 22.0;
                      v47.fields.z = 0.0;
                      LODWORD(v47.fields.x) = v15;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v47, 0LL);
                      if ( v21 )
                      {
                        UIWidget__set_depth(v21, -30, 0LL);
                        UIWidget__set_width(v21, 74, 0LL);
                        UIWidget__set_height(v21, 74, 0LL);
                        v49.fields.r = 1.0;
                        v49.fields.g = 1.0;
                        v49.fields.b = 1.0;
                        v49.fields.a = 1.0;
                        UIWidget__set_color(v21, v49, 0LL);
                        battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        data = (void *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0LL, 0LL);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v23 = this->fields.battleServantParamSetting;
                          if ( !v23 )
                            goto LABEL_98;
                          ComponentHelper__SetLocalPosition(
                            (UnityEngine_Component_o *)v16,
                            v23->fields.TargetIconPosition,
                            0LL);
                          v24 = this->fields.battleServantParamSetting;
                          if ( !v24 )
                            goto LABEL_98;
                          UIWidget__set_width(v16, v24->fields.TargetIconWidth, 0LL);
                          v25 = this->fields.battleServantParamSetting;
                          if ( !v25 )
                            goto LABEL_98;
                          UIWidget__set_height(v16, v25->fields.TargetIconHeight, 0LL);
                          v26 = this->fields.battleServantParamSetting;
                          if ( !v26 )
                            goto LABEL_98;
                          UIWidget__set_depth(v16, v26->fields.TargetIconDepth, 0LL);
                          v27 = this->fields.battleServantParamSetting;
                          if ( !v27 )
                            goto LABEL_98;
                          ComponentHelper__SetLocalPosition(
                            (UnityEngine_Component_o *)v21,
                            v27->fields.FixTargetIconPosition,
                            0LL);
                          v28 = this->fields.battleServantParamSetting;
                          if ( !v28 )
                            goto LABEL_98;
                          UIWidget__set_width(v21, v28->fields.FixTargetIconWidth, 0LL);
                          v29 = this->fields.battleServantParamSetting;
                          if ( !v29 )
                            goto LABEL_98;
                          UIWidget__set_height(v21, v29->fields.FixTargetIconHeight, 0LL);
                          v30 = this->fields.battleServantParamSetting;
                          if ( !v30 )
                            goto LABEL_98;
                          UIWidget__set_depth(v21, v30->fields.FixTargetIconDepth, 0LL);
                          v31 = this->fields.battleServantParamSetting;
                          if ( !v31 )
                            goto LABEL_98;
                          UIWidget__set_color(v21, v31->fields.FixTargetIconColor, 0LL);
                        }
                        if ( isTargetLock )
                        {
                          data = this->fields.targetMark;
                          if ( data )
                          {
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( data )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v13 == uniqueId, 0LL);
                              data = this->fields.lockTargetMark;
                              if ( data )
                              {
                                data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                                if ( data )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
                                  data = this->fields.data;
                                  if ( data )
                                  {
                                    if ( !BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) )
                                    {
                                      data = this->fields.data;
                                      if ( !data )
                                        goto LABEL_98;
                                      if ( !BattleServantData__isGuts((BattleServantData_o *)data, 0LL) )
                                        return;
                                    }
                                    data = this->fields.data;
                                    if ( data )
                                    {
                                      if ( !BattleServantData__isUpHate((BattleServantData_o *)data, 0LL, 0LL) )
                                        return;
                                      data = this->fields.lockTargetMark;
                                      if ( data )
                                      {
                                        data = UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)data,
                                                 0LL);
                                        if ( data )
                                        {
                                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
                                          if ( v13 != uniqueId )
                                            return;
                                          UIWidget__set_depth(v16, -29, 0LL);
                                          UIWidget__set_width(v16, 70, 0LL);
                                          UIWidget__set_height(v16, 70, 0LL);
                                          data = this->fields.lockTargetMark;
                                          if ( data )
                                          {
                                            data = UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)data,
                                                     0LL);
                                            if ( data )
                                            {
                                              v48.fields.y = 22.0;
                                              v48.fields.z = 0.0;
                                              LODWORD(v48.fields.x) = v15;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v48,
                                                0LL);
                                              UIWidget__set_depth(v21, -30, 0LL);
                                              UIWidget__set_width(v21, 78, 0LL);
                                              UIWidget__set_height(v21, 78, 0LL);
                                              v50.fields.r = 1.0;
                                              v50.fields.g = 0.0;
                                              v50.fields.b = 0.0;
                                              v50.fields.a = 1.0;
                                              UIWidget__set_color(v21, v50, 0LL);
                                              v32 = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
                                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              data = (void *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
                                              if ( ((unsigned __int8)data & 1) == 0 )
                                                return;
                                              v33 = this->fields.battleServantParamSetting;
                                              if ( v33 )
                                              {
                                                UIWidget__set_width(v16, v33->fields.TargetIconWidthWhenFix, 0LL);
                                                v34 = this->fields.battleServantParamSetting;
                                                if ( v34 )
                                                {
                                                  UIWidget__set_height(v16, v34->fields.TargetIconHeightWhenFix, 0LL);
                                                  v35 = this->fields.battleServantParamSetting;
                                                  if ( v35 )
                                                  {
                                                    UIWidget__set_depth(v16, v35->fields.TargetIconDepthWhenFix, 0LL);
                                                    v36 = this->fields.battleServantParamSetting;
                                                    if ( v36 )
                                                    {
                                                      UIWidget__set_width(
                                                        v21,
                                                        v36->fields.FixTargetIconWidthWhenTarget,
                                                        0LL);
                                                      v37 = this->fields.battleServantParamSetting;
                                                      if ( v37 )
                                                      {
                                                        UIWidget__set_height(
                                                          v21,
                                                          v37->fields.FixTargetIconHeightWhenTarget,
                                                          0LL);
                                                        v38 = this->fields.battleServantParamSetting;
                                                        if ( v38 )
                                                        {
                                                          UIWidget__set_depth(
                                                            v21,
                                                            v38->fields.FixTargetIconDepthWhenTarget,
                                                            0LL);
                                                          v39 = this->fields.battleServantParamSetting;
                                                          if ( v39 )
                                                          {
                                                            UIWidget__set_color(
                                                              v21,
                                                              v39->fields.FixTargetIconColorWhenTarget,
                                                              0LL);
                                                            return;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          v40 = (UnityEngine_Object_o *)this->fields.targetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
                          {
                            data = this->fields.targetMark;
                            if ( !data )
                              goto LABEL_98;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_98;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v13 == uniqueId, 0LL);
                          }
                          v41 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          data = (void *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
                          if ( ((unsigned __int8)data & 1) != 0 )
                          {
                            data = this->fields.lockTargetMark;
                            if ( !data )
                              goto LABEL_98;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_98;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
                          }
                          perf = this->fields.perf;
                          if ( perf )
                          {
                            v43 = perf->fields.data;
                            if ( v43 )
                            {
                              if ( !v43->fields.isMultiTargetBattle )
                                return;
                              v44 = uniqueId == -1 || v13 == uniqueId;
                              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(transform, v44, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v44;
                              if ( !v44 )
                                return;
                              data = this->fields.showBuffComponent;
                              if ( data )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(
                                  (BattleServantShowBuffComponent_o *)data,
                                  v11);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_98:
        sub_1BC3264(data, v11);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setTouch(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B0552C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B0552C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v8 )
    {
      if ( !Component_object )
        sub_1BC3264(v8, v9);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setVisible(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4B0552B & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B0552B = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(root, flg);
  }
}


void __fastcall BattleServantParamComponent__shiftUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x21
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
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v17; // x8
  struct BattleActionData_o *nowAction; // x9
  char v19; // w19
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  struct BattleServantData_o *data; // x8
  struct BattlePerformance_o *v24; // x8
  struct BattleActionData_o *v25; // x8
  _BOOL4 isSkillShift; // w19
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v30; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  System_Object_array *v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x22
  const MethodInfo *v42; // x3
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x21
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x21
  const MethodInfo *v56; // x3
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x21
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  System_Collections_Hashtable_o *v64; // x0
  __int64 v65; // x0
  char v66[4]; // [xsp+0h] [xbp-40h] BYREF
  int v67; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v69; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4B0554A & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleServantParamComponent_shiftUpdateStatus__, method);
    sub_1BC3008(&bool_TypeInfo, v3);
    sub_1BC3008(&int_TypeInfo, v4);
    sub_1BC3008(&object___TypeInfo, v5);
    sub_1BC3008(&float_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v7);
    sub_1BC3008(&StringLiteral_20085/*"ignoretimescale"*/, v8);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v9);
    sub_1BC3008(&StringLiteral_24204/*"updateShiftHplabel"*/, v10);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v11);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v12);
    sub_1BC3008(&StringLiteral_4584/*"ComplateUpdateShiftHplabel"*/, v13);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v14);
    this = (BattleServantParamComponent_o *)sub_1BC3008(&iTween_TypeInfo, v15);
    byte_4B0554A = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0LL);
  v17 = v2->fields.perf;
  if ( !v17 )
    goto LABEL_79;
  nowAction = v17->fields.nowAction;
  if ( !nowAction )
    goto LABEL_79;
  v19 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v2->fields.data;
    if ( !this )
      goto LABEL_79;
    BattleServantData__updateHp((BattleServantData_o *)this, 0LL);
    v17 = v2->fields.perf;
    if ( !v17 )
      goto LABEL_79;
  }
  this = (BattleServantParamComponent_o *)v17->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag((BattleActionData_o *)this, 0LL);
  BattleServantParamComponent__initUpdateView(v2, NotShiftUpdateFlag, v21);
  data = v2->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(v2, data->fields.buffData, v22);
  if ( (v19 & 1) != 0 )
  {
    v24 = v2->fields.perf;
    if ( v24 )
    {
      v25 = v24->fields.nowAction;
      if ( v25 )
      {
        isSkillShift = v25->fields.isSkillShift;
        v27 = Method_BattleServantParamComponent_shiftUpdateStatus__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1BC3020(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v28 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v27, v27[4]);
        if ( isSkillShift )
        {
          OverwriteAssetSoundName__PlayCommonSe(v28, 24, 0, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlayCommonSe(v28, 16, 0, 0LL);
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0LL);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v30);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
          this = (BattleServantParamComponent_o *)sub_1BC30B0(object___TypeInfo, 12LL);
          if ( this )
          {
            v34 = (System_Object_array *)this;
            v35 = StringLiteral_19506/*"from"*/;
            if ( StringLiteral_19506/*"from"*/ )
            {
              v35 = sub_1BC3144(StringLiteral_19506/*"from"*/, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
              v36 = StringLiteral_19506/*"from"*/;
            }
            else
            {
              v36 = 0LL;
            }
            if ( !v34->max_length )
              goto LABEL_80;
            v34->m_Items[0] = (Il2CppObject *)v36;
            sub_1BC2FAC((CGThumbnailListItem_o *)v34->m_Items, v36, v32, v33);
            v69 = 0;
            v35 = j_il2cpp_value_box_0(int_TypeInfo, &v69, v37, v38, v39);
            v41 = (Il2CppObject *)v35;
            if ( v35 )
            {
              v35 = sub_1BC3144(v35, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
            }
            if ( v34->max_length <= 1 )
              goto LABEL_80;
            v34->m_Items[1] = v41;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[1], (int32_t)v41, v32, v40);
            v35 = StringLiteral_23872/*"to"*/;
            if ( StringLiteral_23872/*"to"*/ )
            {
              v35 = sub_1BC3144(StringLiteral_23872/*"to"*/, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
              v36 = StringLiteral_23872/*"to"*/;
            }
            else
            {
              v36 = 0LL;
            }
            if ( v34->max_length <= 2 )
              goto LABEL_80;
            v34->m_Items[2] = (Il2CppObject *)v36;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[2], v36, v32, v42);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v35 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v43, v44, v45);
              v47 = (Il2CppObject *)v35;
              if ( !v35 || (v35 = sub_1BC3144(v35, v34->obj.klass->_1.element_class)) != 0 )
              {
                if ( v34->max_length <= 3 )
                  goto LABEL_80;
                v34->m_Items[3] = v47;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[3], (int32_t)v47, v32, v46);
                v35 = StringLiteral_22219/*"onupdate"*/;
                if ( StringLiteral_22219/*"onupdate"*/ )
                {
                  v35 = sub_1BC3144(StringLiteral_22219/*"onupdate"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_22219/*"onupdate"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 4 )
                  goto LABEL_80;
                v34->m_Items[4] = (Il2CppObject *)v36;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[4], v36, v32, v48);
                v35 = StringLiteral_24204/*"updateShiftHplabel"*/;
                if ( StringLiteral_24204/*"updateShiftHplabel"*/ )
                {
                  v35 = sub_1BC3144(StringLiteral_24204/*"updateShiftHplabel"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_24204/*"updateShiftHplabel"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 5 )
                  goto LABEL_80;
                v34->m_Items[5] = (Il2CppObject *)v36;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[5], v36, v32, v49);
                v35 = StringLiteral_23833/*"time"*/;
                if ( StringLiteral_23833/*"time"*/ )
                {
                  v35 = sub_1BC3144(StringLiteral_23833/*"time"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_23833/*"time"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 6 )
                  goto LABEL_80;
                v34->m_Items[6] = (Il2CppObject *)v36;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[6], v36, v32, v50);
                v67 = 1069547520;
                v35 = j_il2cpp_value_box_0(float_TypeInfo, &v67, v51, v52, v53);
                v55 = (Il2CppObject *)v35;
                if ( !v35 || (v35 = sub_1BC3144(v35, v34->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v34->max_length <= 7 )
                    goto LABEL_80;
                  v34->m_Items[7] = v55;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[7], (int32_t)v55, v32, v54);
                  v35 = StringLiteral_20085/*"ignoretimescale"*/;
                  if ( StringLiteral_20085/*"ignoretimescale"*/ )
                  {
                    v35 = sub_1BC3144(StringLiteral_20085/*"ignoretimescale"*/, v34->obj.klass->_1.element_class);
                    if ( !v35 )
                      goto LABEL_81;
                    v36 = StringLiteral_20085/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v36 = 0LL;
                  }
                  if ( v34->max_length <= 8 )
                    goto LABEL_80;
                  v34->m_Items[8] = (Il2CppObject *)v36;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[8], v36, v32, v56);
                  v66[0] = 1;
                  v35 = j_il2cpp_value_box_0(bool_TypeInfo, v66, v57, v58, v59);
                  v61 = (Il2CppObject *)v35;
                  if ( !v35 || (v35 = sub_1BC3144(v35, v34->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v34->max_length <= 9 )
                      goto LABEL_80;
                    v34->m_Items[9] = v61;
                    sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[9], (int32_t)v61, v32, v60);
                    v35 = StringLiteral_22211/*"oncomplete"*/;
                    if ( StringLiteral_22211/*"oncomplete"*/ )
                    {
                      v35 = sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v34->obj.klass->_1.element_class);
                      if ( !v35 )
                        goto LABEL_81;
                      v36 = StringLiteral_22211/*"oncomplete"*/;
                    }
                    else
                    {
                      v36 = 0LL;
                    }
                    if ( v34->max_length <= 0xA )
                      goto LABEL_80;
                    v34->m_Items[10] = (Il2CppObject *)v36;
                    sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[10], v36, v32, v62);
                    v35 = StringLiteral_4584/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4584/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v36 = 0LL;
LABEL_74:
                      if ( v34->max_length > 0xB )
                      {
                        v34->m_Items[11] = (Il2CppObject *)v36;
                        sub_1BC2FAC((CGThumbnailListItem_o *)&v34->m_Items[11], v36, v32, v63);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v64 = iTween__Hash(v34, 0LL);
                        iTween__ValueTo(gameObject, v64, 0LL);
                        return;
                      }
LABEL_80:
                      sub_1BC326C(v35, v36, v32);
                    }
                    v35 = sub_1BC3144(StringLiteral_4584/*"ComplateUpdateShiftHplabel"*/, v34->obj.klass->_1.element_class);
                    if ( v35 )
                    {
                      v36 = StringLiteral_4584/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v65 = sub_1BC3288(v35);
              sub_1BC3130(v65, 0LL);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1BC3264(this, method);
  }
}


void __fastcall BattleServantParamComponent__showSideEffect(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *sideEffectShowQueue; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4B0554C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData);
    byte_4B0554C = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1BC3264(0LL, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B0554D & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent__showSideEffectList_d__127_TypeInfo, method);
    byte_4B0554D = 1;
  }
  v3 = sub_1BC3254(BattleServantParamComponent__showSideEffectList_d__127_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *showBuffComponent; // x21
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  const MethodInfo *v11; // x1
  BattleServantShowBuffComponent_o *v12; // x21
  const MethodInfo *v13; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v16; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v18; // x8
  UnityEngine_Object_o *ServantActor; // x21
  _BOOL4 IsMatchCurrentCommonAnimName; // w23
  int v21; // w8
  struct BattleServantData_o *v22; // x8
  __int64 v23; // x2
  int max_length; // w8
  BattleBuffData_ShowBuffData_array *v25; // x21
  int v26; // w24
  char v27; // w23
  BattleBuffData_ShowBuffData_o *v28; // x27
  int bounds; // w27
  struct BattleServantData_o *v30; // x8
  UnityEngine_Object_o *v31; // x20
  System_Enum_o v32; // [xsp+8h] [xbp-68h] BYREF
  int v33; // [xsp+18h] [xbp-58h]

  if ( (byte_4B0553E & 1) == 0 )
  {
    sub_1BC3008(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData);
    sub_1BC3008(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_13226/*"TAMAMOCAT_STUN_BUFF_ID"*/, v7);
    sub_1BC3008(&StringLiteral_24479/*"wait"*/, v8);
    byte_4B0553E = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_59;
  v12 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v12 )
    goto LABEL_59;
  BattleServantShowBuffComponent__setBuffList(v12, ShowServantParam, v13);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_59;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_59;
  if ( data->fields.isMultiTargetBattle )
  {
    v16 = this->fields.data;
    if ( !v16 )
      goto LABEL_59;
    if ( v16->fields.isEnemy )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.showBuffComponent;
      if ( !ShowServantParam )
        goto LABEL_59;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShowServantParam, 0LL);
      CommonFunction__SetColorAllChild(transform, this->fields.isActiveHpBar, this->fields.GRAY, 0LL);
      if ( this->fields.isActiveHpBar )
      {
        ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.showBuffComponent;
        if ( !ShowServantParam )
          goto LABEL_59;
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v11);
      }
    }
  }
  v18 = this->fields.data;
  if ( !v18 )
    goto LABEL_59;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
  if ( !ShowServantParam )
    goto LABEL_59;
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v18->fields.uniqueId,
                                           0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
    goto LABEL_36;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
  if ( !ShowServantParam )
    goto LABEL_59;
  if ( !BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0LL) )
    goto LABEL_27;
  v33 = 49;
  v32.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v32.monitor = (void *)-1LL;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)System_Enum__ToString(&v32, 0LL);
  if ( !ServantActor )
    goto LABEL_59;
  if ( BattleActorControl__checkAnimation(
         (BattleActorControl_o *)ServantActor,
         (System_String_o *)ShowServantParam,
         0LL) )
  {
    IsMatchCurrentCommonAnimName = BattleActorControl__IsMatchCurrentCommonAnimName(
                                     (BattleActorControl_o *)ServantActor,
                                     9,
                                     1,
                                     0LL);
  }
  else
  {
LABEL_27:
    IsMatchCurrentCommonAnimName = 0;
  }
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
  if ( !ShowServantParam )
LABEL_59:
    sub_1BC3264(ShowServantParam, v11);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleServantData__IsCounterWaitMotion(
                                                            (BattleServantData_o *)ShowServantParam,
                                                            0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    v21 = 0;
  }
  else
  {
    if ( !ServantActor )
      goto LABEL_59;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleActorControl__IsMatchCurrentCommonAnimName(
                                                              (BattleActorControl_o *)ServantActor,
                                                              49,
                                                              1,
                                                              0LL);
    v21 = (unsigned __int8)ShowServantParam & 1;
  }
  if ( v21 | IsMatchCurrentCommonAnimName )
  {
    v33 = 9;
    v32.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v32.monitor = (void *)-1LL;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)System_Enum__ToString(&v32, 0LL);
    if ( !ServantActor )
      goto LABEL_59;
    BattleActorControl__playAnimation_45902528(
      (BattleActorControl_o *)ServantActor,
      (System_String_o *)ShowServantParam,
      0,
      0LL);
  }
LABEL_36:
  v22 = this->fields.data;
  if ( !v22 )
    goto LABEL_59;
  if ( !v22->fields.isSleepWaitMode )
    return;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_59;
  max_length = ShowServantParam->max_length;
  v25 = ShowServantParam;
  if ( max_length < 1 )
    goto LABEL_63;
  v26 = 0;
  v27 = 0;
  do
  {
    if ( v26 >= (unsigned int)max_length )
      sub_1BC326C(ShowServantParam, v11, v23);
    v28 = v25->m_Items[v26];
    if ( !v28 )
      goto LABEL_59;
    if ( !v28[7].fields.isFrame )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_59;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                                                                v28->fields.buffId,
                                                                (const MethodInfo_32AF070 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_59;
      bounds = (int)ShowServantParam->bounds;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)ConstantMaster__getValue(
                                                                (System_String_o *)StringLiteral_13226/*"TAMAMOCAT_STUN_BUFF_ID"*/,
                                                                0LL);
      v27 |= bounds == (_DWORD)ShowServantParam;
    }
    max_length = v25->max_length;
    ++v26;
  }
  while ( v26 < max_length );
  if ( (v27 & 1) == 0 )
  {
LABEL_63:
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_59;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v30 = this->fields.data;
    if ( !v30 )
      goto LABEL_59;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_59;
    v31 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v30->fields.uniqueId,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v31 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v31, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_45902528(
            (BattleActorControl_o *)v31,
            (System_String_o *)StringLiteral_24479/*"wait"*/,
            0,
            0LL);
        return;
      }
      goto LABEL_59;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__updateBuffIconList(
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

  if ( (byte_4B0553D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, svtData);
    byte_4B0553D = 1;
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
        ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(ServantActor, 0LL, 0LL);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_17;
          BattleActorControl__updateBuffLoopEffect((BattleActorControl_o *)ServantActor, 0LL);
          BattleActorControl__UpdateActorVisibilityByBuff((BattleActorControl_o *)ServantActor, 0, 0LL);
          if ( doAuraUpdate )
          {
            perf = (BattlePerformance_o *)ServantActor[21].monitor;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0LL);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0LL);
              return;
            }
LABEL_17:
            sub_1BC3264(perf, v10);
          }
        }
      }
    }
  }
}


void __fastcall BattleServantParamComponent__updateBuffIconSelf(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleServantData_o *data; // x8

  data = this->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__updateHpbar(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleHpGaugeBarComponent_o *data; // x0
  int v8; // w0
  UnityEngine_Object_o *hpGauge; // x23
  int v10; // w22
  bool v11; // w0

  if ( (byte_4B05532 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_4B05532 = 1;
  }
  data = (BattleHpGaugeBarComponent_o *)this->fields.data;
  if ( !data )
    goto LABEL_14;
  v8 = ((__int64 (__fastcall *)(BattleHpGaugeBarComponent_o *, void *, _QWORD, const MethodInfo *))data->klass[1]._1.parent)(
         data,
         data->klass[1]._1.generic_class,
         *(_QWORD *)&max,
         method);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  v10 = v8;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( v11 )
    {
      data = this->fields.hpGauge;
      if ( !data )
        goto LABEL_14;
      BattleHpGaugeBarComponent__setZero(data, 0LL);
    }
  }
  else if ( v11 )
  {
    data = this->fields.hpGauge;
    if ( data )
    {
      BattleHpGaugeBarComponent__setValue(data, now, max, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(data, *(_QWORD *)&now);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__updateHplabel(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isDispBreak,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 *v15; // x9
  System_String_o *v16; // x23
  UnityEngine_Object_o *hplabel; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UILabel_o *v21; // x24
  Il2CppObject *v22; // x0
  System_String_o *data; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UILabel_o *v30; // x24
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  UILabel_o *v36; // x23
  Il2CppObject *v37; // x24
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  __int64 *v42; // x8
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v48; // x2
  int32_t v49; // [xsp+8h] [xbp-48h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B05533 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_24860/*"{0}"*/, v11);
    sub_1BC3008(&StringLiteral_24915/*"{0}/{1}"*/, v12);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v13);
    sub_1BC3008(&StringLiteral_24815/*"{0:#,0}/{1:#,0}"*/, v14);
    byte_4B05533 = 1;
  }
  if ( this->fields.hpformatflg )
    v15 = &StringLiteral_24811/*"{0:#,0}"*/;
  else
    v15 = &StringLiteral_24860/*"{0}"*/;
  v16 = (System_String_o *)*v15;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v21 = this->fields.hplabel;
    v50 = now;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v18, v19, v20);
    data = System_String__Format(v16, v22, 0LL);
    if ( !v21 )
      goto LABEL_36;
    UILabel__set_text(v21, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_36;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
    }
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v30 = this->fields.maxhplabel;
    v50 = max;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v27, v28, v29);
    data = System_String__Format(v16, v31, 0LL);
    if ( !v30 )
      goto LABEL_36;
    UILabel__set_text(v30, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v36 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v50 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v33, v34, v35);
      v49 = max;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v38, v39, v40);
      v42 = &StringLiteral_24815/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v50 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v33, v34, v35);
      v49 = max;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v43, v44, v45);
      v42 = &StringLiteral_24915/*"{0}/{1}"*/;
    }
    data = System_String__Format_62389940((System_String_o *)*v42, v37, v41, 0LL);
    if ( !v36 )
      goto LABEL_36;
    UILabel__set_text(v36, data, 0LL);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) && isDispBreak )
  {
    data = (System_String_o *)this->fields.data;
    if ( data )
    {
      isShiftableServant = BattleServantData__isShiftableServant((BattleServantData_o *)data, 0LL);
      BattleServantParamComponent__SetBreakSpriteDisplay(this, now == 0 && isShiftableServant, v48);
      return;
    }
LABEL_36:
    sub_1BC3264(data, v24);
  }
}


void __fastcall BattleServantParamComponent__updateNp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x20
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x21

  v4 = this;
  if ( (byte_4B0552E & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4B0552E = 1;
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
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      this = (BattleServantParamComponent_o *)v4->fields.npcomp;
      if ( this )
      {
        BattleNpGaugeSystemComponent__changeParam((BattleNpGaugeSystemComponent_o *)this, svtdata->fields.np, 0LL);
        return;
      }
LABEL_12:
      sub_1BC3264(this, svtdata);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_46338744(
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
  __int64 v12; // x2
  il2cpp_array_size_t max_length; // w8

  v8 = this;
  if ( (byte_4B0552F & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4B0552F = 1;
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
    v11 = UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( npArray )
    {
      if ( v11 )
      {
        max_length = npArray->max_length;
        if ( (int)max_length > index )
        {
          if ( max_length <= index )
            sub_1BC326C(v11, svtdata, v12);
          this = (BattleServantParamComponent_o *)v8->fields.npcomp;
          if ( this )
          {
            BattleNpGaugeSystemComponent__changeParam(
              (BattleNpGaugeSystemComponent_o *)this,
              npArray->m_Items[index + 1],
              0LL);
            return;
          }
LABEL_16:
          sub_1BC3264(this, svtdata);
        }
      }
    }
  }
}


void __fastcall BattleServantParamComponent__updateShiftHplabel(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  int32_t MaxHp; // w2
  const MethodInfo *v7; // x4

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(0LL, nowHp);
  MaxHp = BattleServantData__getMaxHp(data, 0LL);
  BattleServantParamComponent__updateHplabel(this, nowHp, MaxHp, 1, v7);
}


void __fastcall BattleServantParamComponent__updateSkillIcon(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  BattleBuffData_o *v7; // x20
  __int64 v8; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleBuffData_o *v10; // x21
  unsigned __int64 v11; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_activeList; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 passiveList_low; // x10
  BattleSkillInfoData_o *v15; // x23
  struct BattleServantSkillIConComponent_array *v16; // x8
  int32_t v17; // w24
  BattleServantSkillIConComponent_o *v18; // x25
  char v19; // w26
  const MethodInfo *v20; // x6
  BattleServantSkillIConComponent_o *v21; // x8

  data = this->fields.data;
  if ( data )
  {
    BuffData = BattleServantData__get_BuffData(data, 0LL);
    if ( !BuffData
      || (BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL),
          (BuffData = (BattleBuffData_o *)this->fields.data) == 0LL)
      || (BuffData = (BattleBuffData_o *)BattleServantData__getActiveSkillInfos((BattleServantData_o *)BuffData, 0LL),
          !this->fields.data)
      || (v7 = BuffData,
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelect(this->fields.data, 0LL),
          (skillIcon = this->fields.skillIcon) == 0LL) )
    {
LABEL_29:
      sub_1BC3264(BuffData, v6);
    }
    v10 = BuffData;
    v11 = 0LL;
    p_activeList = &BuffData->fields.activeList;
    while ( 1 )
    {
      max_length = skillIcon->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( !v7 )
        goto LABEL_29;
      passiveList_low = LODWORD(v7->fields.passiveList);
      if ( (__int64)v11 >= (int)passiveList_low )
      {
        if ( v11 >= max_length )
LABEL_31:
          sub_1BC326C(BuffData, v6, v8);
        v21 = skillIcon->m_Items[v11];
        if ( !v21 )
          goto LABEL_29;
        BuffData = (BattleBuffData_o *)v21->fields.root;
        if ( !BuffData )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BuffData, 0, 0LL);
      }
      else
      {
        if ( v11 >= passiveList_low )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v15 = (BattleSkillInfoData_o *)*((_QWORD *)&v7->fields.activeList + v11);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0LL);
        if ( !v10 )
          goto LABEL_29;
        if ( v11 >= LODWORD(v10->fields.passiveList) )
          goto LABEL_31;
        if ( *((_BYTE *)p_activeList + v11) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_29;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v11,
                                           0LL);
        }
        v16 = this->fields.skillIcon;
        v17 = (int)BuffData;
        if ( !v16 )
          goto LABEL_29;
        if ( v11 >= v16->max_length )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v18 = v16->m_Items[v11];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v11, 0LL);
        if ( !this->fields.data )
          goto LABEL_29;
        v19 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0LL);
        if ( v11 >= LODWORD(v10->fields.passiveList) )
          goto LABEL_31;
        if ( !v18 )
          goto LABEL_29;
        BattleServantSkillIConComponent__SetSkillInfo(
          v18,
          v15,
          v19 & 1,
          v17,
          (int32_t)BuffData,
          *((_BYTE *)p_activeList + v11),
          v20);
      }
      skillIcon = this->fields.skillIcon;
      ++v11;
      if ( !skillIcon )
        goto LABEL_29;
    }
  }
}


void __fastcall BattleServantParamComponent__updateTDGauge(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v7; // x8

  if ( (byte_4B05531 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, svtData);
    byte_4B05531 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextTdGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_15;
    if ( !BattleServantData__hasTreasureDvc(data, 0LL) )
      goto LABEL_10;
    data = this->fields.data;
    if ( !data )
      goto LABEL_15;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_10:
      data = (BattleServantData_o *)this->fields.nextTdGauge;
      if ( data )
      {
        BattleNextTDgaugeComponent__setHide((BattleNextTDgaugeComponent_o *)data, 0LL);
        return;
      }
LABEL_15:
      sub_1BC3264(data, v5);
    }
    v7 = this->fields.data;
    if ( !v7 )
      goto LABEL_15;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_15;
    BattleNextTDgaugeComponent__setValue((BattleNextTDgaugeComponent_o *)data, v7->fields.nexttpturn, 0LL);
  }
}


void __fastcall BattleServantParamComponent__updateView(BattleServantParamComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v14; // x2
  struct BattleServantData_o *v15; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct BattleServantData_o *v18; // x8
  struct BattleServantData_o *v19; // x8

  v3 = this;
  if ( (byte_4B05538 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05538 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( BYTE6(this[1].fields.battleUIAtlas) )
  {
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)PartsActor,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_36;
      this = (BattleServantParamComponent_o *)PartsActor->fields.battleSvtData;
      if ( !this )
        goto LABEL_36;
      if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
        goto LABEL_34;
    }
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( BattleServantData__isAlive(data, 0, 0LL) )
    goto LABEL_18;
  this = (BattleServantParamComponent_o *)v3->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( BattleServantData__isGuts((BattleServantData_o *)this, 0LL) )
    goto LABEL_18;
  this = (BattleServantParamComponent_o *)v3->fields.data;
  if ( !this )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)BattleServantData__isOverKill((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_18:
    this = (BattleServantParamComponent_o *)v3->fields.root;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (BattleServantParamComponent_o *)v3->fields.data;
      if ( this )
      {
        this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
        if ( v3->fields.data )
        {
          v7 = (int)this;
          MaxHp = BattleServantData__getMaxHp(v3->fields.data, 0LL);
          BattleServantParamComponent__updateHplabel(v3, v7, MaxHp, 1, v9);
          this = (BattleServantParamComponent_o *)v3->fields.data;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
            if ( v3->fields.data )
            {
              v10 = (int)this;
              v11 = BattleServantData__getMaxHp(v3->fields.data, 0LL);
              BattleServantParamComponent__updateHpbar(v3, v10, v11, v12);
              npcomp = (UnityEngine_Object_o *)v3->fields.npcomp;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v15 = v3->fields.data;
                if ( !v15 )
                  goto LABEL_36;
                this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                if ( !this )
                  goto LABEL_36;
                BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)this, v15->fields.np, 0LL);
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
    sub_1BC3264(this, method);
  }
  v19 = v3->fields.data;
  if ( !v19 )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)v19->fields.deckSvt;
  if ( !this )
    goto LABEL_36;
  if ( !BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion((BattleDeckServantData_o *)this, 0LL) )
  {
LABEL_34:
    BattleServantParamComponent__setTouch(v3, 0, v2);
    this = (BattleServantParamComponent_o *)v3->fields.root;
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
}


void __fastcall BattleServantParamComponent_BaseClassIconData___ctor(
        BattleServantParamComponent_BaseClassIconData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent_BaseClassIconData__DisplayIconEffect(
        BattleServantParamComponent_BaseClassIconData_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent_BaseClassIconData__InitIcon(
        BattleServantParamComponent_BaseClassIconData_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent_ClassIconData___ctor(
        BattleServantParamComponent_ClassIconData_o *this,
        BattleServantData_o *svtData,
        ServantClassIconComponent_o *classIconComp,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  *(_QWORD *)&this->fields.CurClassId = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.SvtData = svtData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)svtData, v7, v8);
  this->fields.ClassIconComp = classIconComp;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.ClassIconComp, (int32_t)classIconComp, v9, v10);
}


void __fastcall BattleServantParamComponent_ClassIconData__ChangeClassIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, method);
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_46361392(this, this->fields.CurClassId, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent_ClassIconData__ChangeClassIcon_46361392(
        BattleServantParamComponent_ClassIconData_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  struct BattleServantData_o *SvtData; // x8
  BattleServantParamComponent_ClassIconData_o *v4; // x19
  struct BattleServantData_o *v5; // x8
  struct BattleServantData_o *v6; // x8

  SvtData = this->fields.SvtData;
  if ( !SvtData
    || (v4 = this, (this = (BattleServantParamComponent_ClassIconData_o *)this->fields.ClassIconComp) == 0LL)
    || (ServantClassIconComponent__SetImage(
          (ServantClassIconComponent_o *)this,
          classId,
          SvtData->fields._frameType_k__BackingField,
          0,
          SvtData->fields._IsGrand_k__BackingField,
          SvtData->fields._IsShowGrandEffect_k__BackingField,
          0LL),
        (v5 = v4->fields.SvtData) == 0LL)
    || (this = (BattleServantParamComponent_ClassIconData_o *)v4->fields.ClassIconComp) == 0LL
    || (ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, v5->fields.isEnemy, 0LL),
        (v6 = v4->fields.SvtData) == 0LL) )
  {
    sub_1BC3264(this, *(_QWORD *)&classId);
  }
  v4->fields.FrameType = v6->fields._frameType_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BattleServantParamComponent_ClassIconData__DisplayEffect(
        BattleServantParamComponent_ClassIconData_o *this,
        BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg,
        System_Action_o *noEffectAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v26; // x22
  UnityEngine_Object_o *v27; // x24
  Il2CppObject *v28; // x23
  System_Action_object__o *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x25
  int32_t EffectId; // w23
  UnityEngine_GameObject_o *ParentObj; // x24
  float DelayTime; // s8
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  System_Action_o *v38; // x24
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B05569 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_string__TypeInfo, arg);
    sub_1BC3008(&System_Action_TypeInfo, v7);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v8);
    sub_1BC3008(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__, v11);
    sub_1BC3008(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__, v12);
    sub_1BC3008(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo, v13);
    byte_4B05569 = 1;
  }
  component = 0LL;
  v14 = sub_1BC3254(BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_25;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = arg;
  v19 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v14 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)arg, v20, v21);
  if ( !*(_QWORD *)(v14 + 24) )
    goto LABEL_25;
  v24 = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 16LL);
  if ( v24 < 1 )
  {
    EffectObject = 0LL;
  }
  else
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObject = BattleEffectUtility__getEffectObject(v24, 0LL, 1, 0LL);
  }
  *(_QWORD *)(v14 + 32) = EffectObject;
  v26 = (UnityEngine_GameObject_o **)(v14 + 32);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 32), (int32_t)EffectObject, v22, v23);
  v27 = *(UnityEngine_Object_o **)(v14 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    ActionExtensions__Call(noEffectAction, 0LL);
    return *v26;
  }
  Component_object = *v26;
  if ( !*v26 )
    goto LABEL_25;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v28 = component;
    v29 = (System_Action_object__o *)sub_1BC3254(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)v14,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0LL);
    if ( !v28 )
      goto LABEL_25;
    v28[12].klass = (Il2CppClass *)v29;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v28[12], (int32_t)v29, v30, v31);
  }
  v32 = *v19;
  if ( !*v19 )
    goto LABEL_25;
  v33 = *v26;
  EffectId = v32->fields.EffectId;
  ParentObj = v32->fields.ParentObj;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetEffectParent(v33, EffectId, ParentObj, 0LL);
  if ( !*v19
    || (DelayTime = (*v19)->fields.DelayTime,
        ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        v38 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v14,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0LL),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v38, 0, 0LL),
        !ClassIconComp) )
  {
LABEL_25:
    sub_1BC3264(Component_object, v16);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_70019872(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0LL);
  v39 = *v19;
  this->fields.PrevEffectArg = *v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.PrevEffectArg, (int32_t)v39, v40, v41);
  return *v26;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent_ClassIconData__DisplayIconEffect(
        BattleServantParamComponent_ClassIconData_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleServantData_o *SvtData; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v13; // x21
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *PrevEffectArg; // x8
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B05565 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isSkipEffect);
    sub_1BC3008(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, v9);
    byte_4B05565 = 1;
  }
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_16;
  if ( BattleServantData__getClassId(SvtData, 0, 0LL) == this->fields.CurClassId )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v11);
    return;
  }
  SvtData = (BattleServantData_o *)BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
                                     this,
                                     delayTime,
                                     isAddBuff,
                                     v12);
  v13 = (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)SvtData;
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
    sub_1BC3264(SvtData, isSkipEffect);
  }
LABEL_12:
  v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__,
    0LL);
  v17 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v13, v15, v16);
  this->fields.PlayingEffectObj = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.PlayingEffectObj, (int32_t)v17, v18, v19);
}


void __fastcall BattleServantParamComponent_ClassIconData__InitIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2

  if ( BattleServantParamComponent_ClassIconData__IsChangeAble(this, method) )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v3);
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_46361392(this, this->fields.CurClassId, v4);
  }
}


bool __fastcall BattleServantParamComponent_ClassIconData__IsChangeAble(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PlayingEffectObj; // x20
  __int64 v4; // x1
  BattleServantData_o *SvtData; // x0
  bool v6; // w20
  struct BattleServantData_o *v7; // x8

  if ( (byte_4B05566 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05566 = 1;
  }
  PlayingEffectObj = (UnityEngine_Object_o *)this->fields.PlayingEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(PlayingEffectObj, 0LL, 0LL) )
    return 0;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_12;
  v6 = 1;
  SvtData = (BattleServantData_o *)BattleServantData__getClassId(SvtData, 1, 0LL);
  if ( (_DWORD)SvtData == this->fields.CurClassId )
  {
    v7 = this->fields.SvtData;
    if ( v7 )
      return v7->fields._frameType_k__BackingField != this->fields.FrameType;
LABEL_12:
    sub_1BC3264(SvtData, v4);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *__fastcall BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
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

  if ( (byte_4B05567 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo, isAddBuff);
    byte_4B05567 = 1;
  }
  CurChangeBuff = this->fields.CurChangeBuff;
  if ( CurChangeBuff )
    v8 = BattleBuffData_BuffData__GetActClassIconChangeEffectIdAtBuffRemove(CurChangeBuff, 0LL);
  else
    v8 = -1;
  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, (const MethodInfo *)isAddBuff);
  if ( isAddBuff )
  {
    v9 = this->fields.CurChangeBuff;
    if ( v9 )
      v8 = BattleBuffData_BuffData__get_ClassIconChangeEffectId(v9, 0LL);
    else
      v8 = -1;
  }
  v10 = sub_1BC3254(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = v8,
        CurClassId = this->fields.CurClassId,
        *(float *)(v10 + 24) = delayTime,
        *(_DWORD *)(v10 + 20) = CurClassId,
        (ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp) == 0LL) )
  {
    sub_1BC3264(ClassIconComp, v12);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0LL);
  *(_QWORD *)(v10 + 32) = gameObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)gameObject, v15, v16);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v10;
}


void __fastcall BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  BuffAggregationArgs_c *v3; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_4B05568 & 1) == 0 )
  {
    sub_1BC3008(&BuffAggregationArgs_TypeInfo, method);
    byte_4B05568 = 1;
  }
  v3 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
  if ( !SvtData )
    sub_1BC3264(v3, method);
  this->fields.CurClassId = BattleServantData__GetClassId(
                              SvtData,
                              &this->fields.CurChangeBuff,
                              BuffAggregationArgs_TypeInfo->static_fields->DisplaySet,
                              1,
                              0LL);
}


void __fastcall BattleServantParamComponent_ClassIconData_DisplayEffectArgument___ctor(
        BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___ctor(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___DisplayEffect_b__0(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  BattleServantParamComponent_ClassIconData_o *_4__this; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg; // x8
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v9; // x8

  if ( (byte_4B0556A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4322/*"ChangeClassIcon"*/, eventName);
    byte_4B0556A = 1;
  }
  _4__this = (BattleServantParamComponent_ClassIconData_o *)System_String__op_Equality(
                                                              eventName,
                                                              (System_String_o *)StringLiteral_4322/*"ChangeClassIcon"*/,
                                                              0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    arg = this->fields.arg;
    if ( !arg
      || (_4__this = this->fields.__4__this) == 0LL
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_46361392(_4__this, arg->fields.ClassId, v7),
          (v9 = this->fields.arg) == 0LL) )
    {
      sub_1BC3264(_4__this, v6);
    }
    v9->fields.IsChangedIcon = 1;
  }
}


void __fastcall BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___DisplayEffect_b__1(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetActiveIfNotNull(this->fields.effectObj, 1, 0LL);
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__141___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__141_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__141__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__141_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleServantParamComponent__CoAddClassIconEffect_d__141_o *v4; // x19
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v21; // x22
  struct BattleServantParamComponent___c__DisplayClass141_0_o **p__8__1; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct BattleServantData_o *servantData; // x8
  const MethodInfo *v26; // x3
  struct BattleServantParamComponent___c__DisplayClass141_0_o *v27; // x23
  int32_t effectId; // w21
  System_Action_o *v29; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass141_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *v34; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v36; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__141_o *v38; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__141_o *v39; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__141_o *v40; // x22
  System_String_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct BattlePerformance_o *v45; // x8
  struct BattleData_o *data; // x8
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  System_String_o *v49; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v53; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B0556D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EffectMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v10);
    sub_1BC3008(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v13);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v14);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1BC3008(&Method_BattleServantParamComponent___c__DisplayClass141_0__CoAddClassIconEffect_b__0__, v16);
    sub_1BC3008(&BattleServantParamComponent___c__DisplayClass141_0_TypeInfo, v17);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)sub_1BC3008(&StringLiteral_18643/*"ef_commandaura_{0}"*/, v18);
    byte_4B0556D = 1;
  }
  component = 0LL;
  name = 0LL;
  path = 0LL;
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
    v21 = (Il2CppObject *)sub_1BC3254(BattleServantParamComponent___c__DisplayClass141_0_TypeInfo);
    System_Object___ctor(v21, 0LL);
    v4->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass141_0_o *)v21;
    p__8__1 = &v4->fields.__8__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v21, v23, v24);
    servantData = v4->fields.servantData;
    if ( !servantData )
      goto LABEL_74;
    method = (const MethodInfo *)(unsigned int)v4->fields.effectId;
    if ( servantData->fields._IsGrand_k__BackingField )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)ConstantMaster__GetGrandEffectId(
                                                                             (int32_t)method,
                                                                             0LL);
      method = (const MethodInfo *)(unsigned int)this;
      v4->fields.effectId = (int)this;
    }
    if ( (int)method < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_74;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_74;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v4->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, v26);
      _4__this->fields.currentClassIconAuraEffectPriority = v4->fields.priority;
    }
    v27 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_74;
    v27->fields.isLoading = 1;
    effectId = v4->fields.effectId;
    v29 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v27,
      Method_BattleServantParamComponent___c__DisplayClass141_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v29, perf, 0LL);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_74;
  if ( _8__1->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BC2FAC(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_74;
  v34 = v4->fields.servantData;
  if ( !v34 )
    goto LABEL_74;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_74;
  ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)this, v34->fields.uniqueId, 0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v36 = v4->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v36, ServantGameObject, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_74;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_74;
  v38 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v38 )
    goto LABEL_74;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v38, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v39 = this;
  if ( !byte_4AFBDB6 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)sub_1BC3008(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
    byte_4AFBDB6 = 1;
  }
  if ( !v39 )
    goto LABEL_74;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v39,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v40 = this;
  if ( !byte_4AFBDB1 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)sub_1BC3008(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
    byte_4AFBDB1 = 1;
  }
  if ( !v40 )
    goto LABEL_74;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v40,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_3056C28 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)component;
    if ( !component )
      goto LABEL_74;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_74;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_74;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v4->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_74:
    sub_1BC3264(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v4->fields.effectId,
                                                                             (const MethodInfo_32AF070 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v41 = *(System_String_o **)&this->fields.effectId;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v41, &path, &name, 0LL);
        v45 = _4__this->fields.perf;
        if ( v45 )
        {
          data = v45->fields.data;
          if ( data )
          {
            v47 = path;
            battleGenderType = data->fields.battleGenderType;
            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v42, v43, v44);
            v49 = System_String__Format((System_String_o *)StringLiteral_18643/*"ef_commandaura_{0}"*/, v48, 0LL);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v47,
                                                                        v49,
                                                                        0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0LL, 0LL) )
              return 0;
            facetex = (UnityEngine_Object_o *)_4__this->fields.facetex;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
              return 0;
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v53 = UnityEngine_Object__Instantiate_object__50900816(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v53, 0LL);
              if ( v53 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v53,
                  !_4__this->fields.isHideFaceTexture,
                  0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__141_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v4->fields.effectId,
                    v53,
                    (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_74;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__141__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__141_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__141__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__141_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__141_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__141__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__141_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__141__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__141_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__131___ctor(
        BattleServantParamComponent__DelayMethod_d__131_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__DelayMethod_d__131__MoveNext(
        BattleServantParamComponent__DelayMethod_d__131_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4B0556E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B0556E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1BC3264(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__131__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__131_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__DelayMethod_d__131__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__131_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleServantParamComponent__DelayMethod_d__131_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__131__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__131_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__131__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__131_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent___c__DisplayClass139_0___ctor(
        BattleServantParamComponent___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass139_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_4B0556B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method);
    byte_4B0556B = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_33099DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void __fastcall BattleServantParamComponent___c__DisplayClass141_0___ctor(
        BattleServantParamComponent___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass141_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleServantParamComponent___c__DisplayClass93_0___ctor(
        BattleServantParamComponent___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass93_0___initUpdateView_b__0(
        BattleServantParamComponent___c__DisplayClass93_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent___c__DisplayClass93_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleServantParamComponent_o *_4__this; // x8
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *battlePointRoot; // x21
  struct BattleServantParamComponent_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleServantParamComponent_o *v15; // x9
  struct ServantBattlePointEntity_o *entity; // x8
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_4B0556C & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, assetData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleServantParamComponent___c__DisplayClass93_0_o *)sub_1BC3008(&StringLiteral_3101/*"BattlePointGauge"*/, v8);
    byte_4B0556C = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (BattleServantParamComponent___c__DisplayClass93_0_o *)AssetData__GetObject_object__50213776(
                                                                  assetData,
                                                                  (System_String_o *)StringLiteral_3101/*"BattlePointGauge"*/,
                                                                  (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v10 = (Il2CppObject *)this;
  battlePointRoot = _4__this->fields.battlePointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent___c__DisplayClass93_0_o *)UnityEngine_Object__Instantiate_object__50900816(
                                                                  v10,
                                                                  battlePointRoot,
                                                                  (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
  if ( !this )
    goto LABEL_14;
  v12 = v4->fields.__4__this;
  this = (BattleServantParamComponent___c__DisplayClass93_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
  if ( !v12
    || (v12->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)this,
        sub_1BC2FAC((CGThumbnailListItem_o *)&v12->fields.battlePointGaugeComponent, (int32_t)this, v13, v14),
        (v15 = v4->fields.__4__this) == 0LL)
    || (entity = v4->fields.entity) == 0LL
    || (this = (BattleServantParamComponent___c__DisplayClass93_0_o *)v15->fields.battlePointGaugeComponent) == 0LL
    || (BattlePointGaugeComponent__Init((BattlePointGaugeComponent_o *)this, entity->fields.battlePointId, 0LL),
        (this = (BattleServantParamComponent___c__DisplayClass93_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(this, assetData);
  }
  BattleServantParamComponent__UpdateBattlePointImmediately(
    (BattleServantParamComponent_o *)this,
    (BattleServantData_o *)this[8].fields.__4__this,
    v17);
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  __int64 v8; // x2
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
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)BattleServantData__get_BuffData(
                                                                                       (BattleServantData_o *)this,
                                                                                       0LL);
    if ( !this )
      goto LABEL_19;
    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
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
        sub_1BC326C(this, method, v8);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)skillIcon->m_Items[v11];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                         (BattleServantSkillIConComponent_o *)this,
                                                                                         method);
      max_length = skillIcon->max_length;
      ++v11;
      v12 |= (unsigned __int8)this;
    }
    while ( v11 < max_length );
    if ( (v12 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)BattleServantData__get_BuffData(
                                                                                             (BattleServantData_o *)this,
                                                                                             0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *)this[2].klass) == 0LL )
    {
LABEL_19:
      sub_1BC3264(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__100_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__127___ctor(
        BattleServantParamComponent__showSideEffectList_d__127_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__showSideEffectList_d__127__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__127_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__127_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v8; // x21
  BattleServantParamComponent__showSideEffectList_d__127_o *v9; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v14; // x2
  BattleServantParamComponent_c *v15; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool result; // w0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B0556F & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, method);
    sub_1BC3008(&BattleServantParamComponent_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v5);
    this = (BattleServantParamComponent__showSideEffectList_d__127_o *)sub_1BC3008(
                                                                         &UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v6);
    byte_4B0556F = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__127_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__127_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_3815C08 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v8 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__127_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v8) )
  {
LABEL_16:
    sub_1BC3264(this, method);
  }
  v9 = this;
  statusEffectId = v8->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v9, statusEffectId, v22, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v8, v14);
  v15 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v15 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v15->static_fields->SideEffectShowWaitTime;
  v17 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v17, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v17;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BC2FAC(p__2__current, (int32_t)v17, v19, v20);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__showSideEffectList_d__127__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__127_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleServantParamComponent__showSideEffectList_d__127_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__127__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__127__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__127_o *this,
        const MethodInfo *method)
{
  ;
}