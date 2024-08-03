void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF38F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, method);
    byte_49FF38F = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1B64170(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
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
  Il2CppObject *Component_object; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v19; // x22
  UISprite_o *frontHpBart; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_Object_array *v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v27; // x21
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  int32_t bartype; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_Object_array *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x19
  __int64 v52; // x0
  int32_t v53; // [xsp+8h] [xbp-68h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FF38B & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, *(_QWORD *)&type);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&object___TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v12);
    sub_1B640C8(&StringLiteral_3189/*"Battle/Common"*/, v13);
    sub_1B640C8(&StringLiteral_3207/*"BattleAssetUIAtlas"*/, v14);
    sub_1B640C8(&StringLiteral_19897/*"hp_gauge_"*/, v15);
    byte_49FF38B = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3189/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__48347676(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3207/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v19 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_1B64170(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v23 = (System_Object_array *)AssetStorage;
      v24 = StringLiteral_19897/*"hp_gauge_"*/;
      if ( StringLiteral_19897/*"hp_gauge_"*/ )
      {
        v24 = sub_1B64204(StringLiteral_19897/*"hp_gauge_"*/, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_71;
        v25 = StringLiteral_19897/*"hp_gauge_"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( !v23->max_length )
        goto LABEL_70;
      v23->m_Items[0] = (Il2CppObject *)v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v23->m_Items, v25, v21, v22);
      v54 = type;
      v24 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
      v33 = (Il2CppObject *)v24;
      if ( v24 )
      {
        v24 = sub_1B64204(v24, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_71;
      }
      if ( v23->max_length <= 1 )
        goto LABEL_70;
      v23->m_Items[1] = v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->m_Items[1], (int32_t)v33, v31, v32);
      v24 = StringLiteral_16054/*"_"*/;
      if ( StringLiteral_16054/*"_"*/ )
      {
        v24 = sub_1B64204(StringLiteral_16054/*"_"*/, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_71;
        v25 = StringLiteral_16054/*"_"*/;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v23->max_length <= 2 )
        goto LABEL_70;
      v23->m_Items[2] = (Il2CppObject *)v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->m_Items[2], v25, v34, v35);
      v53 = shiftIndex + 1;
      v24 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
      v38 = (Il2CppObject *)v24;
      if ( v24 )
      {
        v24 = sub_1B64204(v24, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_71;
      }
      if ( v23->max_length <= 3 )
        goto LABEL_70;
      v23->m_Items[3] = v38;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->m_Items[3], (int32_t)v38, v36, v37);
      AssetStorage = (AssetData_o *)System_String__Concat_61386848(v23, 0LL);
      if ( !frontHpBart )
        goto LABEL_69;
      UISprite__set_spriteName(frontHpBart, (System_String_o *)AssetStorage, 0LL);
      backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
        v40 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1B64170(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v43 = (System_Object_array *)AssetStorage;
        v24 = StringLiteral_19897/*"hp_gauge_"*/;
        if ( StringLiteral_19897/*"hp_gauge_"*/ )
        {
          v24 = sub_1B64204(StringLiteral_19897/*"hp_gauge_"*/, v43->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_71;
          v25 = StringLiteral_19897/*"hp_gauge_"*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( !v43->max_length )
          goto LABEL_70;
        v43->m_Items[0] = (Il2CppObject *)v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)v43->m_Items, v25, v41, v42);
        v54 = type;
        v24 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
        v46 = (Il2CppObject *)v24;
        if ( !v24 || (v24 = sub_1B64204(v24, v43->obj.klass->_1.element_class)) != 0 )
        {
          if ( v43->max_length <= 1 )
            goto LABEL_70;
          v43->m_Items[1] = v46;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->m_Items[1], (int32_t)v46, v44, v45);
          v24 = StringLiteral_16054/*"_"*/;
          if ( StringLiteral_16054/*"_"*/ )
          {
            v24 = sub_1B64204(StringLiteral_16054/*"_"*/, v43->obj.klass->_1.element_class);
            if ( !v24 )
              goto LABEL_71;
            v25 = StringLiteral_16054/*"_"*/;
          }
          else
          {
            v25 = 0LL;
          }
          if ( v43->max_length <= 2 )
            goto LABEL_70;
          v43->m_Items[2] = (Il2CppObject *)v25;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->m_Items[2], v25, v47, v48);
          v53 = shiftIndex;
          v24 = j_il2cpp_value_box_0(int_TypeInfo, &v53);
          v51 = (Il2CppObject *)v24;
          if ( !v24 || (v24 = sub_1B64204(v24, v43->obj.klass->_1.element_class)) != 0 )
          {
            if ( v43->max_length > 3 )
            {
              v43->m_Items[3] = v51;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->m_Items[3], (int32_t)v51, v49, v50);
              AssetStorage = (AssetData_o *)System_String__Concat_61386848(v43, 0LL);
              if ( v40 )
              {
                UISprite__set_spriteName(v40, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1B64324(AssetStorage);
            }
LABEL_70:
            sub_1B6432C(v24, v25);
          }
        }
LABEL_71:
        v52 = sub_1B64348(v24);
        sub_1B641F0(v52, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      }
      v27 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v19, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v28);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v29);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Object_array *v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x24
  UISprite_o *damageHpBart; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  System_Object_array *v33; // x23
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_Object_array *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x19
  __int64 v55; // x0
  int v56; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v57; // [xsp+10h] [xbp-70h] BYREF
  int v58; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v59; // [xsp+18h] [xbp-68h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FF38C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&object___TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v9);
    sub_1B640C8(&StringLiteral_19896/*"hp_frame_"*/, v10);
    sub_1B640C8(&StringLiteral_19897/*"hp_gauge_"*/, v11);
    sub_1B640C8(&StringLiteral_19895/*"hp_damage_"*/, v12);
    byte_49FF38C = 1;
  }
  hpframe = this->fields.hpframe;
  v60 = type;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
  v15 = System_String__Concat((Il2CppObject *)StringLiteral_19896/*"hp_frame_"*/, v14, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v15, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v15 = (System_String_o *)sub_1B64170(object___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_65;
  v19 = (System_Object_array *)v15;
  v20 = StringLiteral_19897/*"hp_gauge_"*/;
  if ( StringLiteral_19897/*"hp_gauge_"*/ )
  {
    v20 = sub_1B64204(StringLiteral_19897/*"hp_gauge_"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_19897/*"hp_gauge_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_63;
  v19->m_Items[0] = (Il2CppObject *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v19->m_Items, v21, v17, v18);
  v59 = type;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v24 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1B64204(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_63;
  v19->m_Items[1] = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v24, v22, v23);
  v20 = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    v20 = sub_1B64204(StringLiteral_16054/*"_"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_16054/*"_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_63;
  v19->m_Items[2] = (Il2CppObject *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], v21, v25, v26);
  v58 = shiftIndex + 1;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v29 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1B64204(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_63;
  v19->m_Items[3] = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[3], (int32_t)v29, v27, v28);
  v15 = System_String__Concat_61386848(v19, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v15, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v15 = (System_String_o *)sub_1B64170(object___TypeInfo, 4LL);
  if ( !v15 )
    goto LABEL_65;
  v33 = (System_Object_array *)v15;
  v20 = StringLiteral_19895/*"hp_damage_"*/;
  if ( StringLiteral_19895/*"hp_damage_"*/ )
  {
    v20 = sub_1B64204(StringLiteral_19895/*"hp_damage_"*/, v33->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_19895/*"hp_damage_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_63;
  v33->m_Items[0] = (Il2CppObject *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v33->m_Items, v21, v31, v32);
  v57 = type;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v36 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1B64204(v20, v33->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_63;
  v33->m_Items[1] = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->m_Items[1], (int32_t)v36, v34, v35);
  v20 = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    v20 = sub_1B64204(StringLiteral_16054/*"_"*/, v33->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_16054/*"_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_63;
  v33->m_Items[2] = (Il2CppObject *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->m_Items[2], v21, v37, v38);
  v56 = shiftIndex + 1;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
  v41 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1B64204(v20, v33->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_63;
  v33->m_Items[3] = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->m_Items[3], (int32_t)v41, v39, v40);
  v15 = System_String__Concat_61386848(v33, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v15, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v43 = this->fields.backHpBar;
    v15 = (System_String_o *)sub_1B64170(object___TypeInfo, 4LL);
    if ( !v15 )
      goto LABEL_65;
    v46 = (System_Object_array *)v15;
    v20 = StringLiteral_19897/*"hp_gauge_"*/;
    if ( StringLiteral_19897/*"hp_gauge_"*/ )
    {
      v20 = sub_1B64204(StringLiteral_19897/*"hp_gauge_"*/, v46->obj.klass->_1.element_class);
      if ( !v20 )
        goto LABEL_64;
      v21 = StringLiteral_19897/*"hp_gauge_"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v46->max_length )
      goto LABEL_63;
    v46->m_Items[0] = (Il2CppObject *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v46->m_Items, v21, v44, v45);
    v60 = type;
    v20 = j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v49 = (Il2CppObject *)v20;
    if ( !v20 || (v20 = sub_1B64204(v20, v46->obj.klass->_1.element_class)) != 0 )
    {
      if ( v46->max_length <= 1 )
        goto LABEL_63;
      v46->m_Items[1] = v49;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->m_Items[1], (int32_t)v49, v47, v48);
      v20 = StringLiteral_16054/*"_"*/;
      if ( StringLiteral_16054/*"_"*/ )
      {
        v20 = sub_1B64204(StringLiteral_16054/*"_"*/, v46->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_64;
        v21 = StringLiteral_16054/*"_"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v46->max_length <= 2 )
        goto LABEL_63;
      v46->m_Items[2] = (Il2CppObject *)v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->m_Items[2], v21, v50, v51);
      v59 = shiftIndex;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
      v54 = (Il2CppObject *)v20;
      if ( !v20 || (v20 = sub_1B64204(v20, v46->obj.klass->_1.element_class)) != 0 )
      {
        if ( v46->max_length > 3 )
        {
          v46->m_Items[3] = v54;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->m_Items[3], (int32_t)v54, v52, v53);
          v15 = System_String__Concat_61386848(v46, 0LL);
          if ( v43 )
          {
            UISprite__set_spriteName(v43, v15, 0LL);
            return;
          }
LABEL_65:
          sub_1B64324(v15);
        }
LABEL_63:
        sub_1B6432C(v20, v21);
      }
    }
LABEL_64:
    v55 = sub_1B64348(v20);
    sub_1B641F0(v55, 0LL);
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
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF38D & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_21450/*"mp_framebg_"*/, v6);
    sub_1B640C8(&StringLiteral_18956/*"enemymp_"*/, v7);
    sub_1B640C8(&StringLiteral_21451/*"mp_mark_"*/, v8);
    sub_1B640C8(&StringLiteral_21449/*"mp_frame_"*/, v9);
    byte_49FF38D = 1;
  }
  hpframe = this->fields.hpframe;
  v22 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_21449/*"mp_frame_"*/, v11, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v12, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v21 = type;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_18956/*"enemymp_"*/, v14, 0LL);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v12, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v16 = this->fields.splitSprite;
    v22 = type;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_21451/*"mp_mark_"*/, v17, 0LL);
    if ( !v16 )
      goto LABEL_16;
    UISprite__set_spriteName(v16, v12, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v19 = this->fields.backHpBar;
    v22 = type;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_21450/*"mp_framebg_"*/, v20, 0LL);
    if ( v19 )
    {
      UISprite__set_spriteName(v19, v12, 0LL);
      return;
    }
LABEL_16:
    sub_1B64324(v12);
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
  struct UnityEngine_GameObject_array *splitList; // x8
  struct UnityEngine_GameObject_array **p_splitList; // x22
  unsigned __int64 v10; // x25
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v12; // x23
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  unsigned __int64 v16; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v20; // x23
  int mWidth; // w26
  __int64 v22; // x27
  int32_t v23; // w2
  int32_t v24; // w3
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_49FF38E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, split);
    this = (BattleServantChangeBarComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF38E = 1;
  }
  p_splitList = &v6->fields.splitList;
  splitList = v6->fields.splitList;
  if ( !splitList )
    goto LABEL_24;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = splitList->max_length;
    if ( (__int64)v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
LABEL_25:
      sub_1B6432C(this, split);
    v12 = (UnityEngine_Object_o *)splitList->m_Items[v10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v12, 0LL);
    splitList = *p_splitList;
    ++v10;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v13 = sub_1B64170(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.splitList, v13, v14, v15);
    if ( (int)split->max_length >= 1 )
    {
      v16 = 0LL;
      for ( i = 32LL; ; i += 8LL )
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
        if ( v16 >= split->max_length )
          goto LABEL_25;
        v20 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v22 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v26.fields.x = (double)mWidth * (double)(maxHp - v22) / (double)maxHp;
        v26.fields.y = 0.0;
        v26.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
        v25 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v16 >= v25->max_length )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v25->obj.klass + i) = (Il2CppClass *)v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v25 + i), (int32_t)v20, v23, v24);
        if ( (__int64)++v16 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1B64324(this);
    }
  }
}