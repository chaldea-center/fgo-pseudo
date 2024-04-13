void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E666E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E666E = 1;
  }
  this->fields.isBoss = 1;
  this->fields.splitList = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 0LL);
  sub_B5D560(&this->fields.splitList);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantChangeBarComponent__setBarType(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  AssetData_o *AssetStorage; // x0
  __int64 v35; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v38; // x22
  UISprite_o *frontHpBart; // x23
  System_Object_array *v40; // x24
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v44; // x21
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  int32_t bartype; // w1
  Il2CppObject *v48; // x25
  __int64 v49; // x1
  Il2CppObject *v50; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v52; // x20
  System_Object_array *v53; // x22
  __int64 v54; // x1
  Il2CppObject *v55; // x21
  __int64 v56; // x1
  Il2CppObject *v57; // x19
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t v60; // [xsp+8h] [xbp-58h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E666A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, type, shiftIndex, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&object___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19427/*"hp_gauge_"*/, v31, v32, v33);
    byte_42E666A = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_73;
    AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
    if ( !AssetStorage )
      goto LABEL_73;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)AssetStorage,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v38 = (UIAtlas_o *)Component_srcLineSprite;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_B5D5DC(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_73;
      v40 = (System_Object_array *)AssetStorage;
      v41 = StringLiteral_19427/*"hp_gauge_"*/;
      if ( StringLiteral_19427/*"hp_gauge_"*/ )
      {
        v41 = sub_B5D684(StringLiteral_19427/*"hp_gauge_"*/, v40->obj.klass->_1.element_class);
        if ( !v41 )
          goto LABEL_75;
        v42 = StringLiteral_19427/*"hp_gauge_"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( !v40->max_length )
        goto LABEL_74;
      v40->m_Items[0] = (Il2CppObject *)v42;
      sub_B5D560(v40->m_Items);
      v61 = type;
      v41 = j_il2cpp_value_box_0(int_TypeInfo, &v61);
      v48 = (Il2CppObject *)v41;
      if ( v41 )
      {
        v41 = sub_B5D684(v41, v40->obj.klass->_1.element_class);
        if ( !v41 )
          goto LABEL_75;
      }
      if ( v40->max_length <= 1 )
        goto LABEL_74;
      v40->m_Items[1] = v48;
      sub_B5D560(&v40->m_Items[1]);
      v41 = StringLiteral_16096/*"_"*/;
      if ( StringLiteral_16096/*"_"*/ )
      {
        v41 = sub_B5D684(StringLiteral_16096/*"_"*/, v40->obj.klass->_1.element_class);
        if ( !v41 )
          goto LABEL_75;
        v49 = StringLiteral_16096/*"_"*/;
      }
      else
      {
        v49 = 0LL;
      }
      if ( v40->max_length <= 2 )
        goto LABEL_74;
      v40->m_Items[2] = (Il2CppObject *)v49;
      sub_B5D560(&v40->m_Items[2]);
      v60 = shiftIndex + 1;
      v41 = j_il2cpp_value_box_0(int_TypeInfo, &v60);
      v50 = (Il2CppObject *)v41;
      if ( v41 )
      {
        v41 = sub_B5D684(v41, v40->obj.klass->_1.element_class);
        if ( !v41 )
          goto LABEL_75;
      }
      if ( v40->max_length <= 3 )
        goto LABEL_74;
      v40->m_Items[3] = v50;
      sub_B5D560(&v40->m_Items[3]);
      AssetStorage = (AssetData_o *)System_String__Concat_44587572(v40, 0LL);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
        v52 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_B5D5DC(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_73;
        v53 = (System_Object_array *)AssetStorage;
        v41 = StringLiteral_19427/*"hp_gauge_"*/;
        if ( StringLiteral_19427/*"hp_gauge_"*/ )
        {
          v41 = sub_B5D684(StringLiteral_19427/*"hp_gauge_"*/, v53->obj.klass->_1.element_class);
          if ( !v41 )
            goto LABEL_75;
          v54 = StringLiteral_19427/*"hp_gauge_"*/;
        }
        else
        {
          v54 = 0LL;
        }
        if ( !v53->max_length )
          goto LABEL_74;
        v53->m_Items[0] = (Il2CppObject *)v54;
        sub_B5D560(v53->m_Items);
        v61 = type;
        v41 = j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v55 = (Il2CppObject *)v41;
        if ( !v41 || (v41 = sub_B5D684(v41, v53->obj.klass->_1.element_class)) != 0 )
        {
          if ( v53->max_length <= 1 )
            goto LABEL_74;
          v53->m_Items[1] = v55;
          sub_B5D560(&v53->m_Items[1]);
          v41 = StringLiteral_16096/*"_"*/;
          if ( StringLiteral_16096/*"_"*/ )
          {
            v41 = sub_B5D684(StringLiteral_16096/*"_"*/, v53->obj.klass->_1.element_class);
            if ( !v41 )
              goto LABEL_75;
            v56 = StringLiteral_16096/*"_"*/;
          }
          else
          {
            v56 = 0LL;
          }
          if ( v53->max_length <= 2 )
            goto LABEL_74;
          v53->m_Items[2] = (Il2CppObject *)v56;
          sub_B5D560(&v53->m_Items[2]);
          v60 = shiftIndex;
          v41 = j_il2cpp_value_box_0(int_TypeInfo, &v60);
          v57 = (Il2CppObject *)v41;
          if ( !v41 || (v41 = sub_B5D684(v41, v53->obj.klass->_1.element_class)) != 0 )
          {
            if ( v53->max_length > 3 )
            {
              v53->m_Items[3] = v57;
              sub_B5D560(&v53->m_Items[3]);
              AssetStorage = (AssetData_o *)System_String__Concat_44587572(v53, 0LL);
              if ( v52 )
              {
                UISprite__set_spriteName(v52, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_73:
              sub_B5D69C(AssetStorage, v35);
            }
LABEL_74:
            v58 = sub_B5D6C8(v41);
            sub_B5D668(v58, 0LL);
          }
        }
LABEL_75:
        v59 = sub_B5D6BC();
        sub_B5D668(v59, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
      }
      v44 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_73;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v38, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v45);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v46);
    }
  }
}


void __fastcall BattleServantChangeBarComponent__setHpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UISprite_o *hpframe; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  UISprite_o *frontHpBart; // x22
  System_Object_array *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x24
  __int64 v34; // x1
  int32_t v35; // w28
  int v36; // w26
  Il2CppObject *v37; // x24
  UISprite_o *damageHpBart; // x22
  System_Object_array *v39; // x23
  __int64 v40; // x1
  Il2CppObject *v41; // x24
  __int64 v42; // x1
  Il2CppObject *v43; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v45; // x21
  System_Object_array *v46; // x22
  __int64 v47; // x1
  Il2CppObject *v48; // x20
  __int64 v49; // x1
  Il2CppObject *v50; // x19
  __int64 v51; // x0
  __int64 v52; // x0
  int v53; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v54; // [xsp+10h] [xbp-60h] BYREF
  int v55; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v56; // [xsp+18h] [xbp-58h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E666B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, type, shiftIndex, method);
    sub_B5D5C4(&object___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19426/*"hp_frame_"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19427/*"hp_gauge_"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_19425/*"hp_damage_"*/, v22, v23, v24);
    byte_42E666B = 1;
  }
  hpframe = this->fields.hpframe;
  v57 = type;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v27 = System_String__Concat((Il2CppObject *)StringLiteral_19426/*"hp_frame_"*/, v26, 0LL);
  if ( !hpframe )
    goto LABEL_66;
  UISprite__set_spriteName(hpframe, v27, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v27 = (System_String_o *)sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !v27 )
    goto LABEL_66;
  v30 = (System_Object_array *)v27;
  v31 = StringLiteral_19427/*"hp_gauge_"*/;
  if ( StringLiteral_19427/*"hp_gauge_"*/ )
  {
    v31 = sub_B5D684(StringLiteral_19427/*"hp_gauge_"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
    v32 = StringLiteral_19427/*"hp_gauge_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v30->max_length )
    goto LABEL_64;
  v30->m_Items[0] = (Il2CppObject *)v32;
  sub_B5D560(v30->m_Items);
  v56 = type;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
  v33 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_B5D684(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_64;
  v30->m_Items[1] = v33;
  sub_B5D560(&v30->m_Items[1]);
  v31 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v31 = sub_B5D684(StringLiteral_16096/*"_"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
    v34 = StringLiteral_16096/*"_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_64;
  v30->m_Items[2] = (Il2CppObject *)v34;
  sub_B5D560(&v30->m_Items[2]);
  v35 = shiftIndex;
  v36 = shiftIndex + 1;
  v55 = v36;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v55);
  v37 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_B5D684(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_64;
  v30->m_Items[3] = v37;
  sub_B5D560(&v30->m_Items[3]);
  v27 = System_String__Concat_44587572(v30, 0LL);
  if ( !frontHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(frontHpBart, v27, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v27 = (System_String_o *)sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !v27 )
    goto LABEL_66;
  v39 = (System_Object_array *)v27;
  v31 = StringLiteral_19425/*"hp_damage_"*/;
  if ( StringLiteral_19425/*"hp_damage_"*/ )
  {
    v31 = sub_B5D684(StringLiteral_19425/*"hp_damage_"*/, v39->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
    v40 = StringLiteral_19425/*"hp_damage_"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !v39->max_length )
    goto LABEL_64;
  v39->m_Items[0] = (Il2CppObject *)v40;
  sub_B5D560(v39->m_Items);
  v54 = type;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v41 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_B5D684(v31, v39->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_64;
  v39->m_Items[1] = v41;
  sub_B5D560(&v39->m_Items[1]);
  v31 = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    v31 = sub_B5D684(StringLiteral_16096/*"_"*/, v39->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
    v42 = StringLiteral_16096/*"_"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_64;
  v39->m_Items[2] = (Il2CppObject *)v42;
  sub_B5D560(&v39->m_Items[2]);
  v53 = v36;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v43 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = sub_B5D684(v31, v39->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_65;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_64;
  v39->m_Items[3] = v43;
  sub_B5D560(&v39->m_Items[3]);
  v27 = System_String__Concat_44587572(v39, 0LL);
  if ( !damageHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(damageHpBart, v27, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v45 = this->fields.backHpBar;
    v27 = (System_String_o *)sub_B5D5DC(object___TypeInfo, 4LL);
    if ( !v27 )
      goto LABEL_66;
    v46 = (System_Object_array *)v27;
    v31 = StringLiteral_19427/*"hp_gauge_"*/;
    if ( StringLiteral_19427/*"hp_gauge_"*/ )
    {
      v31 = sub_B5D684(StringLiteral_19427/*"hp_gauge_"*/, v46->obj.klass->_1.element_class);
      if ( !v31 )
        goto LABEL_65;
      v47 = StringLiteral_19427/*"hp_gauge_"*/;
    }
    else
    {
      v47 = 0LL;
    }
    if ( !v46->max_length )
      goto LABEL_64;
    v46->m_Items[0] = (Il2CppObject *)v47;
    sub_B5D560(v46->m_Items);
    v57 = type;
    v31 = j_il2cpp_value_box_0(int_TypeInfo, &v57);
    v48 = (Il2CppObject *)v31;
    if ( !v31 || (v31 = sub_B5D684(v31, v46->obj.klass->_1.element_class)) != 0 )
    {
      if ( v46->max_length <= 1 )
        goto LABEL_64;
      v46->m_Items[1] = v48;
      sub_B5D560(&v46->m_Items[1]);
      v31 = StringLiteral_16096/*"_"*/;
      if ( StringLiteral_16096/*"_"*/ )
      {
        v31 = sub_B5D684(StringLiteral_16096/*"_"*/, v46->obj.klass->_1.element_class);
        if ( !v31 )
          goto LABEL_65;
        v49 = StringLiteral_16096/*"_"*/;
      }
      else
      {
        v49 = 0LL;
      }
      if ( v46->max_length <= 2 )
        goto LABEL_64;
      v46->m_Items[2] = (Il2CppObject *)v49;
      sub_B5D560(&v46->m_Items[2]);
      v56 = v35;
      v31 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
      v50 = (Il2CppObject *)v31;
      if ( !v31 || (v31 = sub_B5D684(v31, v46->obj.klass->_1.element_class)) != 0 )
      {
        if ( v46->max_length > 3 )
        {
          v46->m_Items[3] = v50;
          sub_B5D560(&v46->m_Items[3]);
          v27 = System_String__Concat_44587572(v46, 0LL);
          if ( v45 )
          {
            UISprite__set_spriteName(v45, v27, 0LL);
            return;
          }
LABEL_66:
          sub_B5D69C(v27, v28);
        }
LABEL_64:
        v51 = sub_B5D6C8(v31);
        sub_B5D668(v51, 0LL);
      }
    }
LABEL_65:
    v52 = sub_B5D6BC();
    sub_B5D668(v52, 0LL);
  }
}


void __fastcall BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UISprite_o *hpframe; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  UISprite_o *frontHpBart; // x21
  Il2CppObject *v26; // x0
  UnityEngine_Object_o *splitSprite; // x21
  UISprite_o *v28; // x21
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *backHpBar; // x21
  UISprite_o *v31; // x20
  Il2CppObject *v32; // x0
  int32_t v33; // [xsp+8h] [xbp-28h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E666C & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_20854/*"mp_framebg_"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_18601/*"enemymp_"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_20855/*"mp_mark_"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_20853/*"mp_frame_"*/, v18, v19, v20);
    byte_42E666C = 1;
  }
  hpframe = this->fields.hpframe;
  v34 = type;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v23 = System_String__Concat((Il2CppObject *)StringLiteral_20853/*"mp_frame_"*/, v22, 0LL);
  if ( !hpframe )
    goto LABEL_18;
  UISprite__set_spriteName(hpframe, v23, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v33 = type;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v23 = System_String__Concat((Il2CppObject *)StringLiteral_18601/*"enemymp_"*/, v26, 0LL);
  if ( !frontHpBart )
    goto LABEL_18;
  UISprite__set_spriteName(frontHpBart, v23, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v28 = this->fields.splitSprite;
    v34 = type;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v23 = System_String__Concat((Il2CppObject *)StringLiteral_20855/*"mp_mark_"*/, v29, 0LL);
    if ( !v28 )
      goto LABEL_18;
    UISprite__set_spriteName(v28, v23, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v31 = this->fields.backHpBar;
    v34 = type;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v23 = System_String__Concat((Il2CppObject *)StringLiteral_20854/*"mp_framebg_"*/, v32, 0LL);
    if ( v31 )
    {
      UISprite__set_spriteName(v31, v23, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(v23, v24);
  }
}


void __fastcall BattleServantChangeBarComponent__setSplitHp(
        BattleServantChangeBarComponent_o *this,
        System_Int64_array *split,
        int64_t maxHp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  unsigned int *splitList; // x8
  unsigned int **p_splitList; // x22
  unsigned __int64 v12; // x24
  unsigned __int64 v13; // x9
  UnityEngine_Object_o *v14; // x23
  unsigned __int64 v15; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  UnityEngine_GameObject_o *v19; // x23
  int mWidth; // w26
  __int64 v21; // x27
  unsigned int *v22; // x26
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42E666D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)split, maxHp, method);
    this = (BattleServantChangeBarComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E666D = 1;
  }
  p_splitList = (unsigned int **)&v6->fields.splitList;
  splitList = (unsigned int *)v6->fields.splitList;
  if ( !splitList )
    goto LABEL_26;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = splitList[6];
    if ( (__int64)v12 >= (int)v13 )
      break;
    if ( v12 >= v13 )
    {
LABEL_27:
      v23 = sub_B5D6C8(this);
      sub_B5D668(v23, 0LL);
    }
    v14 = *(UnityEngine_Object_o **)&splitList[2 * v12 + 8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v14, 0LL);
    splitList = *p_splitList;
    ++v12;
    if ( !*p_splitList )
      goto LABEL_26;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_26;
    *p_splitList = (unsigned int *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, split->max_length);
    sub_B5D560(&v6->fields.splitList);
    if ( (int)split->max_length >= 1 )
    {
      v15 = 0LL;
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
        if ( v15 >= split->max_length )
          goto LABEL_27;
        v19 = (UnityEngine_GameObject_o *)this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v21 = *(__int64 *)((char *)&split->obj.klass + i * 4);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v25.fields.x = (double)mWidth * (double)(maxHp - v21) / (double)maxHp;
        v25.fields.y = 0.0;
        v25.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
        UnityEngine_GameObject__SetActive(v19, 1, 0LL);
        v22 = *p_splitList;
        if ( !*p_splitList )
          break;
        this = (BattleServantChangeBarComponent_o *)sub_B5D684(v19, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
        if ( !this )
        {
          v24 = sub_B5D6BC();
          sub_B5D668(v24, 0LL);
        }
        if ( v15 >= v22[6] )
          goto LABEL_27;
        *(_QWORD *)&v22[i] = v19;
        sub_B5D560(&v22[i]);
        if ( (__int64)++v15 >= (int)split->max_length )
          return;
      }
LABEL_26:
      sub_B5D69C(this, split);
    }
  }
}