void BattleServantChangeBarComponent___ctor(BattleServantChangeBarComponent_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597419D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    byte_597419D = 1;
  }
  v3 = UnityEngine_GameObject___TypeInfo;
  this->fields.isBoss = 1;
  v4 = (struct UnityEngine_GameObject_array *)sub_2213B20(v3, 0);
  this->fields.splitList = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.splitList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantChangeBarComponent__PlayHpBarEffect(
        BattleServantChangeBarComponent_o *this,
        System_String_o *effectName,
        System_Action_o *updateHpBarFunc,
        System_Action_o *updateHpLabelFunc,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v11; // x21
  void *AssetStorage; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  BattleDataDefine_c *v21; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x25
  Il2CppObject *Object_object__58532980; // x24
  UnityEngine_Transform_o *transform; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *Object; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x19
  System_Action_o *v40; // x20
  Il2CppObject *v41; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_597419C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_BattleServantHpShiftPhaseEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleServantChangeBarComponent___c__DisplayClass17_0__PlayHpBarEffect_b__0__);
    sub_2213A60(&BattleServantChangeBarComponent___c__DisplayClass17_0_TypeInfo);
    byte_597419C = 1;
  }
  v41 = 0;
  component = 0;
  v11 = sub_2213CCC(BattleServantChangeBarComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)callBack, v14, v15, v16, v17, v18, v19);
  v21 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v20);
    v21 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v21->static_fields->ASSET_BATTLE_COMMON;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_22;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)AssetStorage,
                              effectName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                     (BaseMonoBehaviour_o *)this,
                                     (UnityEngine_GameObject_o *)Object_object__58532980,
                                     transform,
                                     0,
                                     0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  AssetStorage = (void *)UnityEngine_Object__op_Equality(Object, 0, 0);
  if ( ((unsigned __int8)AssetStorage & 1) == 0 )
  {
    if ( !Object )
      goto LABEL_22;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)Object,
           &component,
           (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_BattleServantHpShiftPhaseEffectComponent___) )
    {
      AssetStorage = component;
      if ( !component )
        goto LABEL_22;
      component[13].monitor = updateHpBarFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)AssetStorage + 216),
        (int32_t)updateHpBarFunc,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      AssetStorage = component;
      if ( !component )
        goto LABEL_22;
      component[14].klass = (Il2CppClass *)updateHpLabelFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)AssetStorage + 224),
        (int32_t)updateHpLabelFunc,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)Object,
           &v41,
           (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
    {
      v39 = v41;
      v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v11,
        Method_BattleServantChangeBarComponent___c__DisplayClass17_0__PlayHpBarEffect_b__0__,
        0);
      if ( v39 )
      {
        ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, const MethodInfo *))v39->klass->vtable[8].methodPtr)(
          v39,
          1,
          v40,
          v39->klass->vtable[8].method);
        return;
      }
LABEL_22:
      sub_2213CDC(AssetStorage, v13);
    }
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantChangeBarComponent__setBarType(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v11; // x21
  int32_t overwriteHpGaugeType; // w26
  UISprite_o *frontHpBart; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Object_array *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x24
  __int64 v45; // x1
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v47; // x20
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  AssetData_o *v54; // x21
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x22
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  int32_t v69; // w1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  __int64 v76; // x19
  __int64 v77; // x1
  UnityEngine_Object_o *splitSprite; // x22
  UnityEngine_Object_o *v79; // x22
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x3
  int32_t bartype; // w1
  __int64 v83; // x0
  int32_t v84; // [xsp+8h] [xbp-68h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5974198 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_20987/*"hp_gauge_"*/);
    byte_5974198 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&type);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3208/*"Battle/Common"*/, 0);
    if ( !AssetStorage )
      goto LABEL_64;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__58532980(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !AssetStorage )
      goto LABEL_64;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v11 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( this->fields.overwriteHpGaugeType <= 0 )
        overwriteHpGaugeType = type;
      else
        overwriteHpGaugeType = this->fields.overwriteHpGaugeType;
      if ( !AssetStorage )
        goto LABEL_64;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_2213B20(object___TypeInfo, 4);
      if ( !AssetStorage )
        goto LABEL_64;
      v20 = (System_Object_array *)AssetStorage;
      v21 = StringLiteral_20987/*"hp_gauge_"*/;
      if ( StringLiteral_20987/*"hp_gauge_"*/ )
      {
        v21 = sub_2213BB4(StringLiteral_20987/*"hp_gauge_"*/, v20->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_66;
      }
      if ( !LODWORD(v20->max_length) )
        goto LABEL_65;
      v23 = StringLiteral_20987/*"hp_gauge_"*/;
      v20->m_Items[0] = (Il2CppObject *)StringLiteral_20987/*"hp_gauge_"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v20->m_Items, v23, v14, v15, v16, v17, v18, v19);
      v85 = overwriteHpGaugeType;
      v21 = j_il2cpp_value_box_0(qword_5984348, &v85);
      v30 = (Il2CppObject *)v21;
      if ( v21 )
      {
        v21 = sub_2213BB4(v21, v20->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_66;
      }
      if ( (v20->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_65;
      v20->m_Items[1] = v30;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->m_Items[1], (int32_t)v30, v24, v25, v26, v27, v28, v29);
      v21 = StringLiteral_16746/*"_"*/;
      if ( StringLiteral_16746/*"_"*/ )
      {
        v21 = sub_2213BB4(StringLiteral_16746/*"_"*/, v20->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_66;
      }
      if ( LODWORD(v20->max_length) <= 2 )
        goto LABEL_65;
      v37 = StringLiteral_16746/*"_"*/;
      v20->m_Items[2] = (Il2CppObject *)StringLiteral_16746/*"_"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      v84 = shiftIndex + 1;
      v21 = j_il2cpp_value_box_0(qword_5984348, &v84);
      v44 = (Il2CppObject *)v21;
      if ( v21 )
      {
        v21 = sub_2213BB4(v21, v20->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_66;
      }
      if ( (v20->max_length & 0xFFFFFFFC) == 0 )
        goto LABEL_65;
      v20->m_Items[3] = v44;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->m_Items[3], (int32_t)v44, v38, v39, v40, v41, v42, v43);
      AssetStorage = (AssetData_o *)System_String__Concat_75695120(v20, 0);
      if ( !frontHpBart )
        goto LABEL_64;
      UISprite__set_spriteName(frontHpBart, (System_String_o *)AssetStorage, 0);
      backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
      if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_64;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
        v47 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_2213B20(object___TypeInfo, 4);
        if ( !AssetStorage )
          goto LABEL_64;
        v54 = AssetStorage;
        v21 = StringLiteral_20987/*"hp_gauge_"*/;
        if ( !StringLiteral_20987/*"hp_gauge_"*/ || (v21 = sub_2213BB4(StringLiteral_20987/*"hp_gauge_"*/, v54->klass->_1.element_class)) != 0 )
        {
          if ( !LODWORD(v54->fields.name) )
            goto LABEL_65;
          v55 = StringLiteral_20987/*"hp_gauge_"*/;
          v54->fields.attrib = (struct System_String_o *)StringLiteral_20987/*"hp_gauge_"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v54->fields.attrib, v55, v48, v49, v50, v51, v52, v53);
          v85 = overwriteHpGaugeType;
          v21 = j_il2cpp_value_box_0(qword_5984348, &v85);
          v62 = v21;
          if ( !v21 || (v21 = sub_2213BB4(v21, v54->klass->_1.element_class)) != 0 )
          {
            if ( ((__int64)v54->fields.name & 0xFFFFFFFE) == 0 )
              goto LABEL_65;
            *(_QWORD *)&v54->fields.nowVersion = v62;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v54->fields.nowVersion, v62, v56, v57, v58, v59, v60, v61);
            v21 = StringLiteral_16746/*"_"*/;
            if ( !StringLiteral_16746/*"_"*/ || (v21 = sub_2213BB4(StringLiteral_16746/*"_"*/, v54->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v54->fields.name) <= 2 )
                goto LABEL_65;
              v69 = StringLiteral_16746/*"_"*/;
              *(_QWORD *)&v54->fields.size = StringLiteral_16746/*"_"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v54->fields.size, v69, v63, v64, v65, v66, v67, v68);
              v84 = shiftIndex;
              v21 = j_il2cpp_value_box_0(qword_5984348, &v84);
              v76 = v21;
              if ( !v21 || (v21 = sub_2213BB4(v21, v54->klass->_1.element_class)) != 0 )
              {
                if ( ((__int64)v54->fields.name & 0xFFFFFFFC) != 0 )
                {
                  v54->fields.keyType = (struct System_String_o *)v76;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v54->fields.keyType,
                    v76,
                    v70,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75);
                  AssetStorage = (AssetData_o *)System_String__Concat_75695120((System_Object_array *)v54, 0);
                  if ( v47 )
                  {
                    UISprite__set_spriteName(v47, (System_String_o *)AssetStorage, 0);
                    return;
                  }
LABEL_64:
                  sub_2213CDC(AssetStorage, v8);
                }
LABEL_65:
                sub_2213CE4(v21);
              }
            }
          }
        }
LABEL_66:
        v83 = sub_2213D00(v21, v22);
        sub_2213BA0(v83, 0);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_64;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_64;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_64;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_64;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      }
      v79 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(v79, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_64;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v80);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v81);
    }
  }
}


void BattleServantChangeBarComponent__setHpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  UISprite_o *hpframe; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  UISprite_o *frontHpBart; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Object_array *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x24
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x24
  UISprite_o *damageHpBart; // x22
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Object_array *v50; // x23
  int32_t v51; // w1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x24
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x24
  __int64 v73; // x1
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v75; // x21
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x22
  int32_t v83; // w1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x20
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  __int64 v104; // x19
  __int64 v105; // x0
  int v106; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v107; // [xsp+10h] [xbp-70h] BYREF
  int v108; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v109; // [xsp+18h] [xbp-68h] BYREF
  int32_t v110; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_5974199 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_20986/*"hp_frame_"*/);
    sub_2213A60(&StringLiteral_20987/*"hp_gauge_"*/);
    sub_2213A60(&StringLiteral_20984/*"hp_damage_"*/);
    byte_5974199 = 1;
  }
  hpframe = this->fields.hpframe;
  v110 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v110);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_20986/*"hp_frame_"*/, v8, 0);
  if ( !hpframe )
    goto LABEL_53;
  UISprite__set_spriteName(hpframe, v9, 0);
  frontHpBart = this->fields.frontHpBart;
  v9 = (System_String_o *)sub_2213B20(object___TypeInfo, 4);
  if ( !v9 )
    goto LABEL_53;
  v18 = (System_Object_array *)v9;
  v19 = StringLiteral_20987/*"hp_gauge_"*/;
  if ( StringLiteral_20987/*"hp_gauge_"*/ )
  {
    v19 = sub_2213BB4(StringLiteral_20987/*"hp_gauge_"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_51;
  v21 = StringLiteral_20987/*"hp_gauge_"*/;
  v18->m_Items[0] = (Il2CppObject *)StringLiteral_20987/*"hp_gauge_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v18->m_Items, v21, v12, v13, v14, v15, v16, v17);
  v109 = type;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v109);
  v28 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( (v18->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_51;
  v18->m_Items[1] = v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[1], (int32_t)v28, v22, v23, v24, v25, v26, v27);
  v19 = StringLiteral_16746/*"_"*/;
  if ( StringLiteral_16746/*"_"*/ )
  {
    v19 = sub_2213BB4(StringLiteral_16746/*"_"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_51;
  v35 = StringLiteral_16746/*"_"*/;
  v18->m_Items[2] = (Il2CppObject *)StringLiteral_16746/*"_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  v108 = shiftIndex + 1;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v108);
  v42 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( (v18->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_51;
  v18->m_Items[3] = v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[3], (int32_t)v42, v36, v37, v38, v39, v40, v41);
  v9 = System_String__Concat_75695120(v18, 0);
  if ( !frontHpBart )
    goto LABEL_53;
  UISprite__set_spriteName(frontHpBart, v9, 0);
  damageHpBart = this->fields.damageHpBart;
  v9 = (System_String_o *)sub_2213B20(object___TypeInfo, 4);
  if ( !v9 )
    goto LABEL_53;
  v50 = (System_Object_array *)v9;
  v19 = StringLiteral_20984/*"hp_damage_"*/;
  if ( StringLiteral_20984/*"hp_damage_"*/ )
  {
    v19 = sub_2213BB4(StringLiteral_20984/*"hp_damage_"*/, v50->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( !LODWORD(v50->max_length) )
    goto LABEL_51;
  v51 = StringLiteral_20984/*"hp_damage_"*/;
  v50->m_Items[0] = (Il2CppObject *)StringLiteral_20984/*"hp_damage_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v50->m_Items, v51, v44, v45, v46, v47, v48, v49);
  v107 = type;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v107);
  v58 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v50->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( (v50->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_51;
  v50->m_Items[1] = v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->m_Items[1], (int32_t)v58, v52, v53, v54, v55, v56, v57);
  v19 = StringLiteral_16746/*"_"*/;
  if ( StringLiteral_16746/*"_"*/ )
  {
    v19 = sub_2213BB4(StringLiteral_16746/*"_"*/, v50->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( LODWORD(v50->max_length) <= 2 )
    goto LABEL_51;
  v65 = StringLiteral_16746/*"_"*/;
  v50->m_Items[2] = (Il2CppObject *)StringLiteral_16746/*"_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->m_Items[2], v65, v59, v60, v61, v62, v63, v64);
  v106 = shiftIndex + 1;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v106);
  v72 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v50->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_52;
  }
  if ( (v50->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_51;
  v50->m_Items[3] = v72;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->m_Items[3], (int32_t)v72, v66, v67, v68, v69, v70, v71);
  v9 = System_String__Concat_75695120(v50, 0);
  if ( !damageHpBart )
    goto LABEL_53;
  UISprite__set_spriteName(damageHpBart, v9, 0);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v75 = this->fields.backHpBar;
    v9 = (System_String_o *)sub_2213B20(object___TypeInfo, 4);
    if ( !v9 )
      goto LABEL_53;
    v82 = v9;
    v19 = StringLiteral_20987/*"hp_gauge_"*/;
    if ( !StringLiteral_20987/*"hp_gauge_"*/ || (v19 = sub_2213BB4(StringLiteral_20987/*"hp_gauge_"*/, v82->klass->_1.element_class)) != 0 )
    {
      if ( !LODWORD(v82[1].klass) )
        goto LABEL_51;
      v83 = StringLiteral_20987/*"hp_gauge_"*/;
      v82[1].monitor = (void *)StringLiteral_20987/*"hp_gauge_"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82[1].monitor, v83, v76, v77, v78, v79, v80, v81);
      v110 = type;
      v19 = j_il2cpp_value_box_0(qword_5984348, &v110);
      v90 = v19;
      if ( !v19 || (v19 = sub_2213BB4(v19, v82->klass->_1.element_class)) != 0 )
      {
        if ( ((__int64)v82[1].klass & 0xFFFFFFFE) == 0 )
          goto LABEL_51;
        v82[1].fields = (System_String_Fields)v90;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82[1].fields, v90, v84, v85, v86, v87, v88, v89);
        v19 = StringLiteral_16746/*"_"*/;
        if ( !StringLiteral_16746/*"_"*/ || (v19 = sub_2213BB4(StringLiteral_16746/*"_"*/, v82->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v82[1].klass) <= 2 )
            goto LABEL_51;
          v97 = StringLiteral_16746/*"_"*/;
          v82[2].klass = (System_String_c *)StringLiteral_16746/*"_"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82[2], v97, v91, v92, v93, v94, v95, v96);
          v109 = shiftIndex;
          v19 = j_il2cpp_value_box_0(qword_5984348, &v109);
          v104 = v19;
          if ( !v19 || (v19 = sub_2213BB4(v19, v82->klass->_1.element_class)) != 0 )
          {
            if ( ((__int64)v82[1].klass & 0xFFFFFFFC) != 0 )
            {
              v82[2].monitor = (void *)v104;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v82[2].monitor, v104, v98, v99, v100, v101, v102, v103);
              v9 = System_String__Concat_75695120((System_Object_array *)v82, 0);
              if ( v75 )
              {
                UISprite__set_spriteName(v75, v9, 0);
                return;
              }
LABEL_53:
              sub_2213CDC(v9, v10);
            }
LABEL_51:
            sub_2213CE4(v19);
          }
        }
      }
    }
LABEL_52:
    v105 = sub_2213D00(v19, v20);
    sub_2213BA0(v105, 0);
  }
}


void BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UISprite_o *hpframe; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  UISprite_o *frontHpBart; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v13; // x1
  UISprite_o *v14; // x21
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *backHpBar; // x21
  UISprite_o *v17; // x20
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597419A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22784/*"mp_framebg_"*/);
    sub_2213A60(&StringLiteral_19931/*"enemymp_"*/);
    sub_2213A60(&StringLiteral_22785/*"mp_mark_"*/);
    sub_2213A60(&StringLiteral_22783/*"mp_frame_"*/);
    byte_597419A = 1;
  }
  hpframe = this->fields.hpframe;
  v20 = type;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_22783/*"mp_frame_"*/, v6, 0);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v7, 0);
  frontHpBart = this->fields.frontHpBart;
  v19 = type;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_19931/*"enemymp_"*/, v10, 0);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v7, 0);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
  {
    v14 = this->fields.splitSprite;
    v20 = type;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_22785/*"mp_mark_"*/, v15, 0);
    if ( !v14 )
      goto LABEL_16;
    UISprite__set_spriteName(v14, v7, 0);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v17 = this->fields.backHpBar;
    v20 = type;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_22784/*"mp_framebg_"*/, v18, 0);
    if ( v17 )
    {
      UISprite__set_spriteName(v17, v7, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(v7, v8);
  }
}


void BattleServantChangeBarComponent__setSplitHp(
        BattleServantChangeBarComponent_o *this,
        System_Int64_array *split,
        int64_t maxHp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *splitList; // x8
  struct UnityEngine_GameObject_array **p_splitList; // x22
  unsigned __int64 v9; // x26
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v11; // x23
  __int64 v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  unsigned __int64 v19; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v23; // x23
  int mWidth; // w26
  __int64 v25; // x27
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_597419B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597419B = 1;
  }
  p_splitList = &v6->fields.splitList;
  splitList = v6->fields.splitList;
  if ( !splitList )
    goto LABEL_10;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(splitList->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
LABEL_24:
      sub_2213CE4(this);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, split);
    UnityEngine_Object__Destroy_83459800(v11, 0);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_10;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_10;
    v12 = sub_2213B20(UnityEngine_GameObject___TypeInfo, LODWORD(split->max_length));
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.splitList, v12, v13, v14, v15, v16, v17, v18);
    if ( SLODWORD(split->max_length) >= 1 )
    {
      v19 = 0;
      for ( i = 32; ; i += 8 )
      {
        this = (BattleServantChangeBarComponent_o *)v6->fields.splitSprite;
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (BattleServantChangeBarComponent_o *)BaseMonoBehaviour__createObject(
                                                      (BaseMonoBehaviour_o *)v6,
                                                      gameObject,
                                                      v6->fields.splitTr,
                                                      0,
                                                      0);
        frontHpBart = v6->fields.frontHpBart;
        if ( !frontHpBart )
          break;
        if ( v19 >= LODWORD(split->max_length) )
          goto LABEL_24;
        v23 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v25 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
        if ( !this )
          break;
        v33.fields.z = 0.0;
        v33.fields.y = 0.0;
        v33.fields.x = (double)mWidth * (double)(maxHp - v25) / (double)maxHp;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 1, 0);
        v32 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v19 >= LODWORD(v32->max_length) )
          goto LABEL_24;
        *(Il2CppClass **)((char *)&v32->obj.klass + i) = (Il2CppClass *)v23;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v32 + i), (int32_t)v23, v26, v27, v28, v29, v30, v31);
        if ( (__int64)++v19 >= SLODWORD(split->max_length) )
          return;
      }
LABEL_10:
      sub_2213CDC(this, split);
    }
  }
}


void BattleServantChangeBarComponent___c__DisplayClass17_0___ctor(
        BattleServantChangeBarComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantChangeBarComponent___c__DisplayClass17_0___PlayHpBarEffect_b__0(
        BattleServantChangeBarComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.callBack, 0);
}