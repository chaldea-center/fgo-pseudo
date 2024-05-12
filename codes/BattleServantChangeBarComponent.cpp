void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4388CB5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    byte_4388CB5 = 1;
  }
  this->fields.isBoss = 1;
  this->fields.splitList = (struct UnityEngine_GameObject_array *)sub_B775DC(UnityEngine_GameObject___TypeInfo, 0LL);
  sub_B77560(&this->fields.splitList);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantChangeBarComponent__setBarType(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v11; // x22
  UISprite_o *frontHpBart; // x23
  System_Object_array *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v17; // x21
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  int32_t bartype; // w1
  __int64 v21; // x2
  Il2CppObject *v22; // x25
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v27; // x20
  System_Object_array *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x19
  __int64 v35; // x0
  __int64 v36; // x0
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4388CB1 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_2862/*"Battle/Common"*/);
    sub_B775C4(&StringLiteral_2880/*"BattleAssetUIAtlas"*/);
    sub_B775C4(&StringLiteral_19575/*"hp_gauge_"*/);
    byte_4388CB1 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2862/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_73;
    AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_2880/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
    if ( !AssetStorage )
      goto LABEL_73;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)AssetStorage,
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v11 = (UIAtlas_o *)Component_srcLineSprite;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_B775DC(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_73;
      v13 = (System_Object_array *)AssetStorage;
      v14 = StringLiteral_19575/*"hp_gauge_"*/;
      if ( StringLiteral_19575/*"hp_gauge_"*/ )
      {
        v14 = sub_B77684(StringLiteral_19575/*"hp_gauge_"*/, v13->obj.klass->_1.element_class);
        if ( !v14 )
          goto LABEL_75;
        v15 = StringLiteral_19575/*"hp_gauge_"*/;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !v13->max_length )
        goto LABEL_74;
      v13->m_Items[0] = (Il2CppObject *)v15;
      sub_B77560(v13->m_Items);
      v38 = type;
      v14 = j_il2cpp_value_box_0(int_TypeInfo, &v38, v21);
      v22 = (Il2CppObject *)v14;
      if ( v14 )
      {
        v14 = sub_B77684(v14, v13->obj.klass->_1.element_class);
        if ( !v14 )
          goto LABEL_75;
      }
      if ( v13->max_length <= 1 )
        goto LABEL_74;
      v13->m_Items[1] = v22;
      sub_B77560(&v13->m_Items[1]);
      v14 = StringLiteral_16197/*"_"*/;
      if ( StringLiteral_16197/*"_"*/ )
      {
        v14 = sub_B77684(StringLiteral_16197/*"_"*/, v13->obj.klass->_1.element_class);
        if ( !v14 )
          goto LABEL_75;
        v23 = StringLiteral_16197/*"_"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v13->max_length <= 2 )
        goto LABEL_74;
      v13->m_Items[2] = (Il2CppObject *)v23;
      sub_B77560(&v13->m_Items[2]);
      v37 = shiftIndex + 1;
      v14 = j_il2cpp_value_box_0(int_TypeInfo, &v37, v24);
      v25 = (Il2CppObject *)v14;
      if ( v14 )
      {
        v14 = sub_B77684(v14, v13->obj.klass->_1.element_class);
        if ( !v14 )
          goto LABEL_75;
      }
      if ( v13->max_length <= 3 )
        goto LABEL_74;
      v13->m_Items[3] = v25;
      sub_B77560(&v13->m_Items[3]);
      AssetStorage = (AssetData_o *)System_String__Concat_44911720(v13, 0LL);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
        v27 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_B775DC(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_73;
        v28 = (System_Object_array *)AssetStorage;
        v14 = StringLiteral_19575/*"hp_gauge_"*/;
        if ( StringLiteral_19575/*"hp_gauge_"*/ )
        {
          v14 = sub_B77684(StringLiteral_19575/*"hp_gauge_"*/, v28->obj.klass->_1.element_class);
          if ( !v14 )
            goto LABEL_75;
          v29 = StringLiteral_19575/*"hp_gauge_"*/;
        }
        else
        {
          v29 = 0LL;
        }
        if ( !v28->max_length )
          goto LABEL_74;
        v28->m_Items[0] = (Il2CppObject *)v29;
        sub_B77560(v28->m_Items);
        v38 = type;
        v14 = j_il2cpp_value_box_0(int_TypeInfo, &v38, v30);
        v31 = (Il2CppObject *)v14;
        if ( !v14 || (v14 = sub_B77684(v14, v28->obj.klass->_1.element_class)) != 0 )
        {
          if ( v28->max_length <= 1 )
            goto LABEL_74;
          v28->m_Items[1] = v31;
          sub_B77560(&v28->m_Items[1]);
          v14 = StringLiteral_16197/*"_"*/;
          if ( StringLiteral_16197/*"_"*/ )
          {
            v14 = sub_B77684(StringLiteral_16197/*"_"*/, v28->obj.klass->_1.element_class);
            if ( !v14 )
              goto LABEL_75;
            v32 = StringLiteral_16197/*"_"*/;
          }
          else
          {
            v32 = 0LL;
          }
          if ( v28->max_length <= 2 )
            goto LABEL_74;
          v28->m_Items[2] = (Il2CppObject *)v32;
          sub_B77560(&v28->m_Items[2]);
          v37 = shiftIndex;
          v14 = j_il2cpp_value_box_0(int_TypeInfo, &v37, v33);
          v34 = (Il2CppObject *)v14;
          if ( !v14 || (v14 = sub_B77684(v14, v28->obj.klass->_1.element_class)) != 0 )
          {
            if ( v28->max_length > 3 )
            {
              v28->m_Items[3] = v34;
              sub_B77560(&v28->m_Items[3]);
              AssetStorage = (AssetData_o *)System_String__Concat_44911720(v28, 0LL);
              if ( v27 )
              {
                UISprite__set_spriteName(v27, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_73:
              sub_B7769C(AssetStorage, v8);
            }
LABEL_74:
            v35 = sub_B776C8(v14);
            sub_B77668(v35, 0LL);
          }
        }
LABEL_75:
        v36 = sub_B776BC();
        sub_B77668(v36, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_73;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      }
      v17 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_73;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v18);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v19);
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
  UISprite_o *hpframe; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  UISprite_o *frontHpBart; // x22
  System_Object_array *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x24
  __int64 v17; // x1
  int32_t v18; // w28
  int v19; // w26
  __int64 v20; // x2
  Il2CppObject *v21; // x24
  UISprite_o *damageHpBart; // x22
  System_Object_array *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v31; // x21
  System_Object_array *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x19
  __int64 v39; // x0
  __int64 v40; // x0
  int v41; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v42; // [xsp+10h] [xbp-60h] BYREF
  int v43; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v44; // [xsp+18h] [xbp-58h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4388CB2 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_19574/*"hp_frame_"*/);
    sub_B775C4(&StringLiteral_19575/*"hp_gauge_"*/);
    sub_B775C4(&StringLiteral_19573/*"hp_damage_"*/);
    byte_4388CB2 = 1;
  }
  hpframe = this->fields.hpframe;
  v45 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, *(_QWORD *)&shiftIndex);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_19574/*"hp_frame_"*/, v8, 0LL);
  if ( !hpframe )
    goto LABEL_66;
  UISprite__set_spriteName(hpframe, v9, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v9 = (System_String_o *)sub_B775DC(object___TypeInfo, 4LL);
  if ( !v9 )
    goto LABEL_66;
  v12 = (System_Object_array *)v9;
  v13 = StringLiteral_19575/*"hp_gauge_"*/;
  if ( StringLiteral_19575/*"hp_gauge_"*/ )
  {
    v13 = sub_B77684(StringLiteral_19575/*"hp_gauge_"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
    v14 = StringLiteral_19575/*"hp_gauge_"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_64;
  v12->m_Items[0] = (Il2CppObject *)v14;
  sub_B77560(v12->m_Items);
  v44 = type;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v15);
  v16 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_B77684(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_64;
  v12->m_Items[1] = v16;
  sub_B77560(&v12->m_Items[1]);
  v13 = StringLiteral_16197/*"_"*/;
  if ( StringLiteral_16197/*"_"*/ )
  {
    v13 = sub_B77684(StringLiteral_16197/*"_"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
    v17 = StringLiteral_16197/*"_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_64;
  v12->m_Items[2] = (Il2CppObject *)v17;
  sub_B77560(&v12->m_Items[2]);
  v18 = shiftIndex;
  v19 = shiftIndex + 1;
  v43 = v19;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v43, v20);
  v21 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_B77684(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_64;
  v12->m_Items[3] = v21;
  sub_B77560(&v12->m_Items[3]);
  v9 = System_String__Concat_44911720(v12, 0LL);
  if ( !frontHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(frontHpBart, v9, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v9 = (System_String_o *)sub_B775DC(object___TypeInfo, 4LL);
  if ( !v9 )
    goto LABEL_66;
  v23 = (System_Object_array *)v9;
  v13 = StringLiteral_19573/*"hp_damage_"*/;
  if ( StringLiteral_19573/*"hp_damage_"*/ )
  {
    v13 = sub_B77684(StringLiteral_19573/*"hp_damage_"*/, v23->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
    v24 = StringLiteral_19573/*"hp_damage_"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_64;
  v23->m_Items[0] = (Il2CppObject *)v24;
  sub_B77560(v23->m_Items);
  v42 = type;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v42, v25);
  v26 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_B77684(v13, v23->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_64;
  v23->m_Items[1] = v26;
  sub_B77560(&v23->m_Items[1]);
  v13 = StringLiteral_16197/*"_"*/;
  if ( StringLiteral_16197/*"_"*/ )
  {
    v13 = sub_B77684(StringLiteral_16197/*"_"*/, v23->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
    v27 = StringLiteral_16197/*"_"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_64;
  v23->m_Items[2] = (Il2CppObject *)v27;
  sub_B77560(&v23->m_Items[2]);
  v41 = v19;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v41, v28);
  v29 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = sub_B77684(v13, v23->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_65;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_64;
  v23->m_Items[3] = v29;
  sub_B77560(&v23->m_Items[3]);
  v9 = System_String__Concat_44911720(v23, 0LL);
  if ( !damageHpBart )
    goto LABEL_66;
  UISprite__set_spriteName(damageHpBart, v9, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v31 = this->fields.backHpBar;
    v9 = (System_String_o *)sub_B775DC(object___TypeInfo, 4LL);
    if ( !v9 )
      goto LABEL_66;
    v32 = (System_Object_array *)v9;
    v13 = StringLiteral_19575/*"hp_gauge_"*/;
    if ( StringLiteral_19575/*"hp_gauge_"*/ )
    {
      v13 = sub_B77684(StringLiteral_19575/*"hp_gauge_"*/, v32->obj.klass->_1.element_class);
      if ( !v13 )
        goto LABEL_65;
      v33 = StringLiteral_19575/*"hp_gauge_"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( !v32->max_length )
      goto LABEL_64;
    v32->m_Items[0] = (Il2CppObject *)v33;
    sub_B77560(v32->m_Items);
    v45 = type;
    v13 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v34);
    v35 = (Il2CppObject *)v13;
    if ( !v13 || (v13 = sub_B77684(v13, v32->obj.klass->_1.element_class)) != 0 )
    {
      if ( v32->max_length <= 1 )
        goto LABEL_64;
      v32->m_Items[1] = v35;
      sub_B77560(&v32->m_Items[1]);
      v13 = StringLiteral_16197/*"_"*/;
      if ( StringLiteral_16197/*"_"*/ )
      {
        v13 = sub_B77684(StringLiteral_16197/*"_"*/, v32->obj.klass->_1.element_class);
        if ( !v13 )
          goto LABEL_65;
        v36 = StringLiteral_16197/*"_"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v32->max_length <= 2 )
        goto LABEL_64;
      v32->m_Items[2] = (Il2CppObject *)v36;
      sub_B77560(&v32->m_Items[2]);
      v44 = v18;
      v13 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v37);
      v38 = (Il2CppObject *)v13;
      if ( !v13 || (v13 = sub_B77684(v13, v32->obj.klass->_1.element_class)) != 0 )
      {
        if ( v32->max_length > 3 )
        {
          v32->m_Items[3] = v38;
          sub_B77560(&v32->m_Items[3]);
          v9 = System_String__Concat_44911720(v32, 0LL);
          if ( v31 )
          {
            UISprite__set_spriteName(v31, v9, 0LL);
            return;
          }
LABEL_66:
          sub_B7769C(v9, v10);
        }
LABEL_64:
        v39 = sub_B776C8(v13);
        sub_B77668(v39, 0LL);
      }
    }
LABEL_65:
    v40 = sub_B776BC();
    sub_B77668(v40, 0LL);
  }
}


void __fastcall BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UISprite_o *hpframe; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  UISprite_o *frontHpBart; // x21
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v13; // x2
  UISprite_o *v14; // x21
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *backHpBar; // x21
  __int64 v17; // x2
  UISprite_o *v18; // x20
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4388CB3 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_21010/*"mp_framebg_"*/);
    sub_B775C4(&StringLiteral_18739/*"enemymp_"*/);
    sub_B775C4(&StringLiteral_21011/*"mp_mark_"*/);
    sub_B775C4(&StringLiteral_21009/*"mp_frame_"*/);
    byte_4388CB3 = 1;
  }
  hpframe = this->fields.hpframe;
  v21 = type;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, method);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_21009/*"mp_frame_"*/, v6, 0LL);
  if ( !hpframe )
    goto LABEL_18;
  UISprite__set_spriteName(hpframe, v7, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v20 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_18739/*"enemymp_"*/, v11, 0LL);
  if ( !frontHpBart )
    goto LABEL_18;
  UISprite__set_spriteName(frontHpBart, v7, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v14 = this->fields.splitSprite;
    v21 = type;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v13);
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_21011/*"mp_mark_"*/, v15, 0LL);
    if ( !v14 )
      goto LABEL_18;
    UISprite__set_spriteName(v14, v7, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v18 = this->fields.backHpBar;
    v21 = type;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v17);
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_21010/*"mp_framebg_"*/, v19, 0LL);
    if ( v18 )
    {
      UISprite__set_spriteName(v18, v7, 0LL);
      return;
    }
LABEL_18:
    sub_B7769C(v7, v8);
  }
}


void __fastcall BattleServantChangeBarComponent__setSplitHp(
        BattleServantChangeBarComponent_o *this,
        System_Int64_array *split,
        int64_t maxHp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *v6; // x21
  unsigned int *splitList; // x8
  unsigned int **p_splitList; // x22
  unsigned __int64 v9; // x24
  unsigned __int64 v10; // x9
  UnityEngine_Object_o *v11; // x23
  unsigned __int64 v12; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  UnityEngine_GameObject_o *v16; // x23
  int mWidth; // w26
  __int64 v18; // x27
  unsigned int *v19; // x26
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4388CB4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388CB4 = 1;
  }
  p_splitList = (unsigned int **)&v6->fields.splitList;
  splitList = (unsigned int *)v6->fields.splitList;
  if ( !splitList )
    goto LABEL_26;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = splitList[6];
    if ( (__int64)v9 >= (int)v10 )
      break;
    if ( v9 >= v10 )
    {
LABEL_27:
      v20 = sub_B776C8(this);
      sub_B77668(v20, 0LL);
    }
    v11 = *(UnityEngine_Object_o **)&splitList[2 * v9 + 8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v11, 0LL);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_26;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_26;
    *p_splitList = (unsigned int *)sub_B775DC(UnityEngine_GameObject___TypeInfo, split->max_length);
    sub_B77560(&v6->fields.splitList);
    if ( (int)split->max_length >= 1 )
    {
      v12 = 0LL;
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
        if ( v12 >= split->max_length )
          goto LABEL_27;
        v16 = (UnityEngine_GameObject_o *)this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v18 = *(__int64 *)((char *)&split->obj.klass + i * 4);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v22.fields.x = (double)mWidth * (double)(maxHp - v18) / (double)maxHp;
        v22.fields.y = 0.0;
        v22.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0LL);
        UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        v19 = *p_splitList;
        if ( !*p_splitList )
          break;
        this = (BattleServantChangeBarComponent_o *)sub_B77684(v16, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
        if ( !this )
        {
          v21 = sub_B776BC();
          sub_B77668(v21, 0LL);
        }
        if ( v12 >= v19[6] )
          goto LABEL_27;
        *(_QWORD *)&v19[i] = v16;
        sub_B77560(&v19[i]);
        if ( (__int64)++v12 >= (int)split->max_length )
          return;
      }
LABEL_26:
      sub_B7769C(this, split);
    }
  }
}