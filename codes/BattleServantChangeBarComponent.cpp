void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *v4; // x0

  if ( (byte_40F8A06 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, method);
    byte_40F8A06 = 1;
  }
  this->fields.isBoss = 1;
  v4 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 0LL, v2);
  this->fields.splitList = v4;
  sub_B16F98(&this->fields.splitList, v4);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantChangeBarComponent__setBarType(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v20; // x22
  UISprite_o *frontHpBart; // x0
  UISprite_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x0
  __int64 v25; // x2
  System_Object_array *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  UISprite_o *hpframe; // x0
  UISprite_o *v30; // x0
  UISprite_o *damageHpBart; // x0
  UnityEngine_Object_o *splitSprite; // x21
  UISprite_o *v33; // x0
  UnityEngine_Object_o *v34; // x21
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  UISprite_o *v37; // x0
  int32_t bartype; // w1
  Il2CppObject *v39; // x25
  Il2CppObject *v40; // x25
  System_String_o *v41; // x0
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v43; // x0
  UISprite_o *v44; // x20
  __int64 v45; // x2
  __int64 v46; // x0
  System_Object_array *v47; // x22
  Il2CppObject *v48; // x21
  Il2CppObject *v49; // x19
  System_String_o *v50; // x0
  int32_t v51; // [xsp+8h] [xbp-58h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F8A02 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&type);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&object___TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v12);
    sub_B16FFC(&StringLiteral_2743/*"Battle/Common"*/, v13);
    sub_B16FFC(&StringLiteral_2758/*"BattleAssetUIAtlas"*/, v14);
    sub_B16FFC(&StringLiteral_19110/*"hp_gauge_"*/, v15);
    byte_40F8A02 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_73;
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)StringLiteral_2758/*"BattleAssetUIAtlas"*/,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( !Object_WarBoardWaitTimeSetting )
      goto LABEL_73;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v20 = (UIAtlas_o *)Component_srcLineSprite;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      frontHpBart = this->fields.frontHpBart;
      if ( !frontHpBart )
        goto LABEL_73;
      UISprite__set_atlas(frontHpBart, v20, 0LL);
      v22 = this->fields.frontHpBart;
      v24 = sub_B17014(object___TypeInfo, 4LL, v23);
      if ( !v24 )
        goto LABEL_73;
      v26 = (System_Object_array *)v24;
      v27 = StringLiteral_19110/*"hp_gauge_"*/;
      if ( StringLiteral_19110/*"hp_gauge_"*/ )
      {
        v27 = sub_B170BC(StringLiteral_19110/*"hp_gauge_"*/, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_75;
        v28 = StringLiteral_19110/*"hp_gauge_"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( !v26->max_length )
        goto LABEL_74;
      v26->m_Items[0] = (Il2CppObject *)v28;
      sub_B16F98(v26->m_Items, v28);
      v52 = type;
      v27 = j_il2cpp_value_box_0(int_TypeInfo, &v52);
      v39 = (Il2CppObject *)v27;
      if ( v27 )
      {
        v27 = sub_B170BC(v27, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_75;
      }
      if ( v26->max_length <= 1 )
        goto LABEL_74;
      v26->m_Items[1] = v39;
      sub_B16F98(&v26->m_Items[1], v39);
      v27 = StringLiteral_15842/*"_"*/;
      if ( StringLiteral_15842/*"_"*/ )
      {
        v27 = sub_B170BC(StringLiteral_15842/*"_"*/, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_75;
        v28 = StringLiteral_15842/*"_"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v26->max_length <= 2 )
        goto LABEL_74;
      v26->m_Items[2] = (Il2CppObject *)v28;
      sub_B16F98(&v26->m_Items[2], v28);
      v51 = shiftIndex + 1;
      v27 = j_il2cpp_value_box_0(int_TypeInfo, &v51);
      v40 = (Il2CppObject *)v27;
      if ( v27 )
      {
        v27 = sub_B170BC(v27, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_75;
      }
      if ( v26->max_length <= 3 )
        goto LABEL_74;
      v26->m_Items[3] = v40;
      sub_B16F98(&v26->m_Items[3], v40);
      v41 = System_String__Concat_43753516(v26, 0LL);
      if ( !v22 )
        goto LABEL_73;
      UISprite__set_spriteName(v22, v41, 0LL);
      backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
      {
        v43 = this->fields.backHpBar;
        if ( !v43 )
          goto LABEL_73;
        UISprite__set_atlas(v43, v20, 0LL);
        v44 = this->fields.backHpBar;
        v46 = sub_B17014(object___TypeInfo, 4LL, v45);
        if ( !v46 )
          goto LABEL_73;
        v47 = (System_Object_array *)v46;
        v27 = StringLiteral_19110/*"hp_gauge_"*/;
        if ( StringLiteral_19110/*"hp_gauge_"*/ )
        {
          v27 = sub_B170BC(StringLiteral_19110/*"hp_gauge_"*/, v47->obj.klass->_1.element_class);
          if ( !v27 )
            goto LABEL_75;
          v28 = StringLiteral_19110/*"hp_gauge_"*/;
        }
        else
        {
          v28 = 0LL;
        }
        if ( !v47->max_length )
          goto LABEL_74;
        v47->m_Items[0] = (Il2CppObject *)v28;
        sub_B16F98(v47->m_Items, v28);
        v52 = type;
        v27 = j_il2cpp_value_box_0(int_TypeInfo, &v52);
        v48 = (Il2CppObject *)v27;
        if ( !v27 || (v27 = sub_B170BC(v27, v47->obj.klass->_1.element_class)) != 0 )
        {
          if ( v47->max_length <= 1 )
            goto LABEL_74;
          v47->m_Items[1] = v48;
          sub_B16F98(&v47->m_Items[1], v48);
          v27 = StringLiteral_15842/*"_"*/;
          if ( StringLiteral_15842/*"_"*/ )
          {
            v27 = sub_B170BC(StringLiteral_15842/*"_"*/, v47->obj.klass->_1.element_class);
            if ( !v27 )
              goto LABEL_75;
            v28 = StringLiteral_15842/*"_"*/;
          }
          else
          {
            v28 = 0LL;
          }
          if ( v47->max_length <= 2 )
            goto LABEL_74;
          v47->m_Items[2] = (Il2CppObject *)v28;
          sub_B16F98(&v47->m_Items[2], v28);
          v51 = shiftIndex;
          v27 = j_il2cpp_value_box_0(int_TypeInfo, &v51);
          v49 = (Il2CppObject *)v27;
          if ( !v27 || (v27 = sub_B170BC(v27, v47->obj.klass->_1.element_class)) != 0 )
          {
            if ( v47->max_length > 3 )
            {
              v47->m_Items[3] = v49;
              sub_B16F98(&v47->m_Items[3], v49);
              v50 = System_String__Concat_43753516(v47, 0LL);
              if ( v44 )
              {
                UISprite__set_spriteName(v44, v50, 0LL);
                return;
              }
LABEL_73:
              sub_B170D4();
            }
LABEL_74:
            sub_B17100(v27, v28, v25);
            sub_B170A0();
          }
        }
LABEL_75:
        sub_B170F4();
        sub_B170A0();
      }
    }
    else
    {
      hpframe = this->fields.hpframe;
      if ( !hpframe )
        goto LABEL_73;
      UISprite__set_atlas(hpframe, v20, 0LL);
      v30 = this->fields.frontHpBart;
      if ( !v30 )
        goto LABEL_73;
      UISprite__set_atlas(v30, v20, 0LL);
      damageHpBart = this->fields.damageHpBart;
      if ( !damageHpBart )
        goto LABEL_73;
      UISprite__set_atlas(damageHpBart, v20, 0LL);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
      {
        v33 = this->fields.splitSprite;
        if ( !v33 )
          goto LABEL_73;
        UISprite__set_atlas(v33, v20, 0LL);
      }
      v34 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
      {
        v37 = this->fields.backHpBar;
        if ( !v37 )
          goto LABEL_73;
        UISprite__set_atlas(v37, v20, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v35);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v36);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantChangeBarComponent__setHpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *hpframe; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UISprite_o *frontHpBart; // x22
  __int64 v17; // x2
  __int64 v18; // x0
  __int64 v19; // x2
  System_Object_array *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x24
  int32_t v24; // w28
  int v25; // w26
  Il2CppObject *v26; // x24
  System_String_o *v27; // x0
  UISprite_o *damageHpBart; // x22
  __int64 v29; // x2
  __int64 v30; // x0
  System_Object_array *v31; // x23
  Il2CppObject *v32; // x24
  Il2CppObject *v33; // x24
  System_String_o *v34; // x0
  UnityEngine_Object_o *backHpBar; // x22
  __int64 v36; // x2
  UISprite_o *v37; // x21
  __int64 v38; // x0
  System_Object_array *v39; // x22
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x19
  System_String_o *v42; // x0
  int v43; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v44; // [xsp+10h] [xbp-60h] BYREF
  int v45; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v46; // [xsp+18h] [xbp-58h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40F8A03 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&object___TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v9);
    sub_B16FFC(&StringLiteral_19109/*"hp_frame_"*/, v10);
    sub_B16FFC(&StringLiteral_19110/*"hp_gauge_"*/, v11);
    sub_B16FFC(&StringLiteral_19108/*"hp_damage_"*/, v12);
    byte_40F8A03 = 1;
  }
  hpframe = this->fields.hpframe;
  v47 = type;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v15 = System_String__Concat((Il2CppObject *)StringLiteral_19109/*"hp_frame_"*/, v14, 0LL);
  if ( !hpframe )
    goto LABEL_66;
  UISprite__set_spriteName(hpframe, v15, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v18 = sub_B17014(object___TypeInfo, 4LL, v17);
  if ( !v18 )
    goto LABEL_66;
  v20 = (System_Object_array *)v18;
  v21 = StringLiteral_19110/*"hp_gauge_"*/;
  if ( StringLiteral_19110/*"hp_gauge_"*/ )
  {
    v21 = sub_B170BC(StringLiteral_19110/*"hp_gauge_"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
    v22 = StringLiteral_19110/*"hp_gauge_"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_64;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_B16F98(v20->m_Items, v22);
  v46 = type;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v23 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B170BC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_64;
  v20->m_Items[1] = v23;
  sub_B16F98(&v20->m_Items[1], v23);
  v21 = StringLiteral_15842/*"_"*/;
  if ( StringLiteral_15842/*"_"*/ )
  {
    v21 = sub_B170BC(StringLiteral_15842/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
    v22 = StringLiteral_15842/*"_"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_64;
  v20->m_Items[2] = (Il2CppObject *)v22;
  sub_B16F98(&v20->m_Items[2], v22);
  v24 = shiftIndex;
  v25 = shiftIndex + 1;
  v45 = v25;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v26 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B170BC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_64;
  v20->m_Items[3] = v26;
  sub_B16F98(&v20->m_Items[3], v26);
  v27 = System_String__Concat_43753516(v20, 0LL);
  if ( !frontHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(frontHpBart, v27, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v30 = sub_B17014(object___TypeInfo, 4LL, v29);
  if ( !v30 )
    goto LABEL_66;
  v31 = (System_Object_array *)v30;
  v21 = StringLiteral_19108/*"hp_damage_"*/;
  if ( StringLiteral_19108/*"hp_damage_"*/ )
  {
    v21 = sub_B170BC(StringLiteral_19108/*"hp_damage_"*/, v31->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
    v22 = StringLiteral_19108/*"hp_damage_"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_64;
  v31->m_Items[0] = (Il2CppObject *)v22;
  sub_B16F98(v31->m_Items, v22);
  v44 = type;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v32 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B170BC(v21, v31->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_64;
  v31->m_Items[1] = v32;
  sub_B16F98(&v31->m_Items[1], v32);
  v21 = StringLiteral_15842/*"_"*/;
  if ( StringLiteral_15842/*"_"*/ )
  {
    v21 = sub_B170BC(StringLiteral_15842/*"_"*/, v31->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
    v22 = StringLiteral_15842/*"_"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_64;
  v31->m_Items[2] = (Il2CppObject *)v22;
  sub_B16F98(&v31->m_Items[2], v22);
  v43 = v25;
  v21 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v33 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_B170BC(v21, v31->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_65;
  }
  if ( v31->max_length <= 3 )
    goto LABEL_64;
  v31->m_Items[3] = v33;
  sub_B16F98(&v31->m_Items[3], v33);
  v34 = System_String__Concat_43753516(v31, 0LL);
  if ( !damageHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(damageHpBart, v34, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v37 = this->fields.backHpBar;
    v38 = sub_B17014(object___TypeInfo, 4LL, v36);
    if ( !v38 )
      goto LABEL_66;
    v39 = (System_Object_array *)v38;
    v21 = StringLiteral_19110/*"hp_gauge_"*/;
    if ( StringLiteral_19110/*"hp_gauge_"*/ )
    {
      v21 = sub_B170BC(StringLiteral_19110/*"hp_gauge_"*/, v39->obj.klass->_1.element_class);
      if ( !v21 )
        goto LABEL_65;
      v22 = StringLiteral_19110/*"hp_gauge_"*/;
    }
    else
    {
      v22 = 0LL;
    }
    if ( !v39->max_length )
      goto LABEL_64;
    v39->m_Items[0] = (Il2CppObject *)v22;
    sub_B16F98(v39->m_Items, v22);
    v47 = type;
    v21 = j_il2cpp_value_box_0(int_TypeInfo, &v47);
    v40 = (Il2CppObject *)v21;
    if ( !v21 || (v21 = sub_B170BC(v21, v39->obj.klass->_1.element_class)) != 0 )
    {
      if ( v39->max_length <= 1 )
        goto LABEL_64;
      v39->m_Items[1] = v40;
      sub_B16F98(&v39->m_Items[1], v40);
      v21 = StringLiteral_15842/*"_"*/;
      if ( StringLiteral_15842/*"_"*/ )
      {
        v21 = sub_B170BC(StringLiteral_15842/*"_"*/, v39->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_65;
        v22 = StringLiteral_15842/*"_"*/;
      }
      else
      {
        v22 = 0LL;
      }
      if ( v39->max_length <= 2 )
        goto LABEL_64;
      v39->m_Items[2] = (Il2CppObject *)v22;
      sub_B16F98(&v39->m_Items[2], v22);
      v46 = v24;
      v21 = j_il2cpp_value_box_0(int_TypeInfo, &v46);
      v41 = (Il2CppObject *)v21;
      if ( !v21 || (v21 = sub_B170BC(v21, v39->obj.klass->_1.element_class)) != 0 )
      {
        if ( v39->max_length > 3 )
        {
          v39->m_Items[3] = v41;
          sub_B16F98(&v39->m_Items[3], v41);
          v42 = System_String__Concat_43753516(v39, 0LL);
          if ( v37 )
          {
            UISprite__set_spriteName(v37, v42, 0LL);
            return;
          }
LABEL_66:
          sub_B170D4();
        }
LABEL_64:
        sub_B17100(v21, v22, v19);
        sub_B170A0();
      }
    }
LABEL_65:
    sub_B170F4();
    sub_B170A0();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *hpframe; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UISprite_o *frontHpBart; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UnityEngine_Object_o *splitSprite; // x21
  UISprite_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_Object_o *backHpBar; // x21
  UISprite_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // [xsp+8h] [xbp-28h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8A04 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20505/*"mp_framebg_"*/, v6);
    sub_B16FFC(&StringLiteral_18303/*"enemymp_"*/, v7);
    sub_B16FFC(&StringLiteral_20506/*"mp_mark_"*/, v8);
    sub_B16FFC(&StringLiteral_20504/*"mp_frame_"*/, v9);
    byte_40F8A04 = 1;
  }
  hpframe = this->fields.hpframe;
  v25 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_20504/*"mp_frame_"*/, v11, 0LL);
  if ( !hpframe )
    goto LABEL_18;
  UISprite__set_spriteName(hpframe, v12, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v24 = type;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v15 = System_String__Concat((Il2CppObject *)StringLiteral_18303/*"enemymp_"*/, v14, 0LL);
  if ( !frontHpBart )
    goto LABEL_18;
  UISprite__set_spriteName(frontHpBart, v15, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v17 = this->fields.splitSprite;
    v25 = type;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v19 = System_String__Concat((Il2CppObject *)StringLiteral_20506/*"mp_mark_"*/, v18, 0LL);
    if ( !v17 )
      goto LABEL_18;
    UISprite__set_spriteName(v17, v19, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v21 = this->fields.backHpBar;
    v25 = type;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v23 = System_String__Concat((Il2CppObject *)StringLiteral_20505/*"mp_framebg_"*/, v22, 0LL);
    if ( v21 )
    {
      UISprite__set_spriteName(v21, v23, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall BattleServantChangeBarComponent__setSplitHp(
        BattleServantChangeBarComponent_o *this,
        System_Int64_array *split,
        int64_t maxHp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *v6; // x21
  __int64 v7; // x1
  unsigned int *splitList; // x8
  unsigned int **p_splitList; // x22
  unsigned __int64 v10; // x24
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x23
  __int64 v13; // x0
  unsigned __int64 v14; // x24
  __int64 i; // x25
  UnityEngine_Component_o *splitSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  UnityEngine_GameObject_o *v19; // x23
  int mWidth; // w26
  __int64 v21; // x27
  UnityEngine_Transform_o *transform; // x0
  unsigned int *v23; // x26
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_40F8A05 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, split);
    this = (BattleServantChangeBarComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F8A05 = 1;
  }
  p_splitList = (unsigned int **)&v6->fields.splitList;
  splitList = (unsigned int *)v6->fields.splitList;
  if ( !splitList )
    goto LABEL_26;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = splitList[6];
    if ( (__int64)v10 >= (int)v11 )
      break;
    if ( v10 >= v11 )
    {
LABEL_27:
      sub_B17100(this, split, maxHp);
      sub_B170A0();
    }
    v12 = *(UnityEngine_Object_o **)&splitList[2 * v10 + 8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v12, 0LL);
    splitList = *p_splitList;
    ++v10;
    if ( !*p_splitList )
      goto LABEL_26;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_26;
    v13 = sub_B17014(UnityEngine_GameObject___TypeInfo, split->max_length, maxHp);
    *p_splitList = (unsigned int *)v13;
    sub_B16F98(&v6->fields.splitList, v13);
    if ( (int)split->max_length >= 1 )
    {
      v14 = 0LL;
      for ( i = 8LL; ; i += 2LL )
      {
        splitSprite = (UnityEngine_Component_o *)v6->fields.splitSprite;
        if ( !splitSprite )
          break;
        gameObject = UnityEngine_Component__get_gameObject(splitSprite, 0LL);
        this = (BattleServantChangeBarComponent_o *)BaseMonoBehaviour__createObject(
                                                      (BaseMonoBehaviour_o *)v6,
                                                      gameObject,
                                                      v6->fields.splitTr,
                                                      0LL,
                                                      0LL);
        frontHpBart = v6->fields.frontHpBart;
        if ( !frontHpBart )
          break;
        if ( v14 >= split->max_length )
          goto LABEL_27;
        v19 = (UnityEngine_GameObject_o *)this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v21 = *(__int64 *)((char *)&split->obj.klass + i * 4);
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !transform )
          break;
        v24.fields.x = (double)mWidth * (double)(maxHp - v21) / (double)maxHp;
        v24.fields.y = 0.0;
        v24.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
        UnityEngine_GameObject__SetActive(v19, 1, 0LL);
        v23 = *p_splitList;
        if ( !*p_splitList )
          break;
        this = (BattleServantChangeBarComponent_o *)sub_B170BC(v19, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
        if ( !this )
        {
          sub_B170F4();
          sub_B170A0();
        }
        if ( v14 >= v23[6] )
          goto LABEL_27;
        *(_QWORD *)&v23[i] = v19;
        sub_B16F98(&v23[i], v19);
        if ( (__int64)++v14 >= (int)split->max_length )
          return;
      }
LABEL_26:
      sub_B170D4();
    }
  }
}