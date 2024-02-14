void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0

  if ( (byte_421278E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, method);
    byte_421278E = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_B0D840(&this->fields.splitList, v3);
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v19; // x22
  UISprite_o *frontHpBart; // x23
  System_Object_array *v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v25; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  int32_t bartype; // w1
  Il2CppObject *v29; // x25
  __int64 v30; // x1
  Il2CppObject *v31; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v33; // x20
  System_Object_array *v34; // x22
  __int64 v35; // x1
  Il2CppObject *v36; // x21
  __int64 v37; // x1
  Il2CppObject *v38; // x19
  __int64 v39; // x0
  __int64 v40; // x0
  int32_t v41; // [xsp+8h] [xbp-58h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_421278A & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, *(_QWORD *)&type);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&object___TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v12);
    sub_B0D8A4(&StringLiteral_2766/*"Battle/Common"*/, v13);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v14);
    sub_B0D8A4(&StringLiteral_19245/*"hp_gauge_"*/, v15);
    byte_421278A = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2766/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_73;
    AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( !AssetStorage )
      goto LABEL_73;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)AssetStorage,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v19 = (UIAtlas_o *)Component_srcLineSprite;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_B0D8BC(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_73;
      v21 = (System_Object_array *)AssetStorage;
      v22 = StringLiteral_19245/*"hp_gauge_"*/;
      if ( StringLiteral_19245/*"hp_gauge_"*/ )
      {
        v22 = sub_B0D964(StringLiteral_19245/*"hp_gauge_"*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_75;
        v23 = StringLiteral_19245/*"hp_gauge_"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( !v21->max_length )
        goto LABEL_74;
      v21->m_Items[0] = (Il2CppObject *)v23;
      sub_B0D840(v21->m_Items, v23);
      v42 = type;
      v22 = j_il2cpp_value_box_0(int_TypeInfo, &v42);
      v29 = (Il2CppObject *)v22;
      if ( v22 )
      {
        v22 = sub_B0D964(v22, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_75;
      }
      if ( v21->max_length <= 1 )
        goto LABEL_74;
      v21->m_Items[1] = v29;
      sub_B0D840(&v21->m_Items[1], v29);
      v22 = StringLiteral_15952/*"_"*/;
      if ( StringLiteral_15952/*"_"*/ )
      {
        v22 = sub_B0D964(StringLiteral_15952/*"_"*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_75;
        v30 = StringLiteral_15952/*"_"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_74;
      v21->m_Items[2] = (Il2CppObject *)v30;
      sub_B0D840(&v21->m_Items[2], v30);
      v41 = shiftIndex + 1;
      v22 = j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v31 = (Il2CppObject *)v22;
      if ( v22 )
      {
        v22 = sub_B0D964(v22, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_75;
      }
      if ( v21->max_length <= 3 )
        goto LABEL_74;
      v21->m_Items[3] = v31;
      sub_B0D840(&v21->m_Items[3], v31);
      AssetStorage = (AssetData_o *)System_String__Concat_43859688(v21, 0LL);
      if ( !frontHpBart )
        goto LABEL_73;
      UISprite__set_spriteName(frontHpBart, (System_String_o *)AssetStorage, 0LL);
      backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_73;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
        v33 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_B0D8BC(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_73;
        v34 = (System_Object_array *)AssetStorage;
        v22 = StringLiteral_19245/*"hp_gauge_"*/;
        if ( StringLiteral_19245/*"hp_gauge_"*/ )
        {
          v22 = sub_B0D964(StringLiteral_19245/*"hp_gauge_"*/, v34->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_75;
          v35 = StringLiteral_19245/*"hp_gauge_"*/;
        }
        else
        {
          v35 = 0LL;
        }
        if ( !v34->max_length )
          goto LABEL_74;
        v34->m_Items[0] = (Il2CppObject *)v35;
        sub_B0D840(v34->m_Items, v35);
        v42 = type;
        v22 = j_il2cpp_value_box_0(int_TypeInfo, &v42);
        v36 = (Il2CppObject *)v22;
        if ( !v22 || (v22 = sub_B0D964(v22, v34->obj.klass->_1.element_class)) != 0 )
        {
          if ( v34->max_length <= 1 )
            goto LABEL_74;
          v34->m_Items[1] = v36;
          sub_B0D840(&v34->m_Items[1], v36);
          v22 = StringLiteral_15952/*"_"*/;
          if ( StringLiteral_15952/*"_"*/ )
          {
            v22 = sub_B0D964(StringLiteral_15952/*"_"*/, v34->obj.klass->_1.element_class);
            if ( !v22 )
              goto LABEL_75;
            v37 = StringLiteral_15952/*"_"*/;
          }
          else
          {
            v37 = 0LL;
          }
          if ( v34->max_length <= 2 )
            goto LABEL_74;
          v34->m_Items[2] = (Il2CppObject *)v37;
          sub_B0D840(&v34->m_Items[2], v37);
          v41 = shiftIndex;
          v22 = j_il2cpp_value_box_0(int_TypeInfo, &v41);
          v38 = (Il2CppObject *)v22;
          if ( !v22 || (v22 = sub_B0D964(v22, v34->obj.klass->_1.element_class)) != 0 )
          {
            if ( v34->max_length > 3 )
            {
              v34->m_Items[3] = v38;
              sub_B0D840(&v34->m_Items[3], v38);
              AssetStorage = (AssetData_o *)System_String__Concat_43859688(v34, 0LL);
              if ( v33 )
              {
                UISprite__set_spriteName(v33, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_73:
              sub_B0D97C(AssetStorage);
            }
LABEL_74:
            v39 = sub_B0D9A8(v22);
            sub_B0D948(v39, 0LL);
          }
        }
LABEL_75:
        v40 = sub_B0D99C();
        sub_B0D948(v40, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_73;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      }
      v25 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_73;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v26);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v27);
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
  System_Object_array *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x24
  __int64 v21; // x1
  int32_t v22; // w28
  int v23; // w26
  Il2CppObject *v24; // x24
  UISprite_o *damageHpBart; // x22
  System_Object_array *v26; // x23
  __int64 v27; // x1
  Il2CppObject *v28; // x24
  __int64 v29; // x1
  Il2CppObject *v30; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v32; // x21
  System_Object_array *v33; // x22
  __int64 v34; // x1
  Il2CppObject *v35; // x20
  __int64 v36; // x1
  Il2CppObject *v37; // x19
  __int64 v38; // x0
  __int64 v39; // x0
  int v40; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v41; // [xsp+10h] [xbp-60h] BYREF
  int v42; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v43; // [xsp+18h] [xbp-58h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_421278B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&object___TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v9);
    sub_B0D8A4(&StringLiteral_19244/*"hp_frame_"*/, v10);
    sub_B0D8A4(&StringLiteral_19245/*"hp_gauge_"*/, v11);
    sub_B0D8A4(&StringLiteral_19243/*"hp_damage_"*/, v12);
    byte_421278B = 1;
  }
  hpframe = this->fields.hpframe;
  v44 = type;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v15 = System_String__Concat((Il2CppObject *)StringLiteral_19244/*"hp_frame_"*/, v14, 0LL);
  if ( !hpframe )
    goto LABEL_66;
  UISprite__set_spriteName(hpframe, v15, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v15 = (System_String_o *)sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_66;
  v17 = (System_Object_array *)v15;
  v18 = StringLiteral_19245/*"hp_gauge_"*/;
  if ( StringLiteral_19245/*"hp_gauge_"*/ )
  {
    v18 = sub_B0D964(StringLiteral_19245/*"hp_gauge_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
    v19 = StringLiteral_19245/*"hp_gauge_"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
    goto LABEL_64;
  v17->m_Items[0] = (Il2CppObject *)v19;
  sub_B0D840(v17->m_Items, v19);
  v43 = type;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v20 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B0D964(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_64;
  v17->m_Items[1] = v20;
  sub_B0D840(&v17->m_Items[1], v20);
  v18 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v18 = sub_B0D964(StringLiteral_15952/*"_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
    v21 = StringLiteral_15952/*"_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_64;
  v17->m_Items[2] = (Il2CppObject *)v21;
  sub_B0D840(&v17->m_Items[2], v21);
  v22 = shiftIndex;
  v23 = shiftIndex + 1;
  v42 = v23;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v24 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B0D964(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_64;
  v17->m_Items[3] = v24;
  sub_B0D840(&v17->m_Items[3], v24);
  v15 = System_String__Concat_43859688(v17, 0LL);
  if ( !frontHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(frontHpBart, v15, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v15 = (System_String_o *)sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_66;
  v26 = (System_Object_array *)v15;
  v18 = StringLiteral_19243/*"hp_damage_"*/;
  if ( StringLiteral_19243/*"hp_damage_"*/ )
  {
    v18 = sub_B0D964(StringLiteral_19243/*"hp_damage_"*/, v26->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
    v27 = StringLiteral_19243/*"hp_damage_"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_64;
  v26->m_Items[0] = (Il2CppObject *)v27;
  sub_B0D840(v26->m_Items, v27);
  v41 = type;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v28 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B0D964(v18, v26->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_64;
  v26->m_Items[1] = v28;
  sub_B0D840(&v26->m_Items[1], v28);
  v18 = StringLiteral_15952/*"_"*/;
  if ( StringLiteral_15952/*"_"*/ )
  {
    v18 = sub_B0D964(StringLiteral_15952/*"_"*/, v26->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
    v29 = StringLiteral_15952/*"_"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_64;
  v26->m_Items[2] = (Il2CppObject *)v29;
  sub_B0D840(&v26->m_Items[2], v29);
  v40 = v23;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v30 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_B0D964(v18, v26->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_65;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_64;
  v26->m_Items[3] = v30;
  sub_B0D840(&v26->m_Items[3], v30);
  v15 = System_String__Concat_43859688(v26, 0LL);
  if ( !damageHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(damageHpBart, v15, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v32 = this->fields.backHpBar;
    v15 = (System_String_o *)sub_B0D8BC(object___TypeInfo, 4LL);
    if ( !v15 )
      goto LABEL_66;
    v33 = (System_Object_array *)v15;
    v18 = StringLiteral_19245/*"hp_gauge_"*/;
    if ( StringLiteral_19245/*"hp_gauge_"*/ )
    {
      v18 = sub_B0D964(StringLiteral_19245/*"hp_gauge_"*/, v33->obj.klass->_1.element_class);
      if ( !v18 )
        goto LABEL_65;
      v34 = StringLiteral_19245/*"hp_gauge_"*/;
    }
    else
    {
      v34 = 0LL;
    }
    if ( !v33->max_length )
      goto LABEL_64;
    v33->m_Items[0] = (Il2CppObject *)v34;
    sub_B0D840(v33->m_Items, v34);
    v44 = type;
    v18 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
    v35 = (Il2CppObject *)v18;
    if ( !v18 || (v18 = sub_B0D964(v18, v33->obj.klass->_1.element_class)) != 0 )
    {
      if ( v33->max_length <= 1 )
        goto LABEL_64;
      v33->m_Items[1] = v35;
      sub_B0D840(&v33->m_Items[1], v35);
      v18 = StringLiteral_15952/*"_"*/;
      if ( StringLiteral_15952/*"_"*/ )
      {
        v18 = sub_B0D964(StringLiteral_15952/*"_"*/, v33->obj.klass->_1.element_class);
        if ( !v18 )
          goto LABEL_65;
        v36 = StringLiteral_15952/*"_"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v33->max_length <= 2 )
        goto LABEL_64;
      v33->m_Items[2] = (Il2CppObject *)v36;
      sub_B0D840(&v33->m_Items[2], v36);
      v43 = v22;
      v18 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
      v37 = (Il2CppObject *)v18;
      if ( !v18 || (v18 = sub_B0D964(v18, v33->obj.klass->_1.element_class)) != 0 )
      {
        if ( v33->max_length > 3 )
        {
          v33->m_Items[3] = v37;
          sub_B0D840(&v33->m_Items[3], v37);
          v15 = System_String__Concat_43859688(v33, 0LL);
          if ( v32 )
          {
            UISprite__set_spriteName(v32, v15, 0LL);
            return;
          }
LABEL_66:
          sub_B0D97C(v15);
        }
LABEL_64:
        v38 = sub_B0D9A8(v18);
        sub_B0D948(v38, 0LL);
      }
    }
LABEL_65:
    v39 = sub_B0D99C();
    sub_B0D948(v39, 0LL);
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
  UnityEngine_Object_o *splitSprite; // x21
  UISprite_o *v16; // x21
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *backHpBar; // x21
  UISprite_o *v19; // x20
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421278C & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_20653/*"mp_framebg_"*/, v6);
    sub_B0D8A4(&StringLiteral_18429/*"enemymp_"*/, v7);
    sub_B0D8A4(&StringLiteral_20654/*"mp_mark_"*/, v8);
    sub_B0D8A4(&StringLiteral_20652/*"mp_frame_"*/, v9);
    byte_421278C = 1;
  }
  hpframe = this->fields.hpframe;
  v22 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_20652/*"mp_frame_"*/, v11, 0LL);
  if ( !hpframe )
    goto LABEL_18;
  UISprite__set_spriteName(hpframe, v12, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v21 = type;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_18429/*"enemymp_"*/, v14, 0LL);
  if ( !frontHpBart )
    goto LABEL_18;
  UISprite__set_spriteName(frontHpBart, v12, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v16 = this->fields.splitSprite;
    v22 = type;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_20654/*"mp_mark_"*/, v17, 0LL);
    if ( !v16 )
      goto LABEL_18;
    UISprite__set_spriteName(v16, v12, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v19 = this->fields.backHpBar;
    v22 = type;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_20653/*"mp_framebg_"*/, v20, 0LL);
    if ( v19 )
    {
      UISprite__set_spriteName(v19, v12, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(v12);
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  UnityEngine_GameObject_o *v18; // x23
  int mWidth; // w26
  __int64 v20; // x27
  unsigned int *v21; // x26
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_421278D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, split);
    this = (BattleServantChangeBarComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421278D = 1;
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
      v22 = sub_B0D9A8(this);
      sub_B0D948(v22, 0LL);
    }
    v12 = *(UnityEngine_Object_o **)&splitList[2 * v10 + 8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v12, 0LL);
    splitList = *p_splitList;
    ++v10;
    if ( !*p_splitList )
      goto LABEL_26;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_26;
    v13 = sub_B0D8BC(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (unsigned int *)v13;
    sub_B0D840(&v6->fields.splitList, v13);
    if ( (int)split->max_length >= 1 )
    {
      v14 = 0LL;
      for ( i = 8LL; ; i += 2LL )
      {
        this = (BattleServantChangeBarComponent_o *)v6->fields.splitSprite;
        if ( !this )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
        v18 = (UnityEngine_GameObject_o *)this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v20 = *(__int64 *)((char *)&split->obj.klass + i * 4);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v24.fields.x = (double)mWidth * (double)(maxHp - v20) / (double)maxHp;
        v24.fields.y = 0.0;
        v24.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0LL);
        UnityEngine_GameObject__SetActive(v18, 1, 0LL);
        v21 = *p_splitList;
        if ( !*p_splitList )
          break;
        this = (BattleServantChangeBarComponent_o *)sub_B0D964(v18, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !this )
        {
          v23 = sub_B0D99C();
          sub_B0D948(v23, 0LL);
        }
        if ( v14 >= v21[6] )
          goto LABEL_27;
        *(_QWORD *)&v21[i] = v18;
        sub_B0D840(&v21[i], v18);
        if ( (__int64)++v14 >= (int)split->max_length )
          return;
      }
LABEL_26:
      sub_B0D97C(this);
    }
  }
}