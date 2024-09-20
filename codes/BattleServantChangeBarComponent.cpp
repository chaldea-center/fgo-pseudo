void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E156 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    byte_4A5E156 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
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
  Il2CppObject *Component_object; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v11; // x22
  UISprite_o *frontHpBart; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_Object_array *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  int32_t bartype; // w1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_Object_array *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x19
  __int64 v56; // x0
  int32_t v57; // [xsp+8h] [xbp-68h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5E152 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_19976/*"hp_gauge_"*/);
    byte_4A5E152 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3209/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__48635516(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v11 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_1B88658(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v15 = (System_Object_array *)AssetStorage;
      v16 = StringLiteral_19976/*"hp_gauge_"*/;
      if ( StringLiteral_19976/*"hp_gauge_"*/ )
      {
        v16 = sub_1B886EC(StringLiteral_19976/*"hp_gauge_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_19976/*"hp_gauge_"*/;
      }
      else
      {
        v17 = 0LL;
      }
      if ( !v15->max_length )
        goto LABEL_70;
      v15->m_Items[0] = (Il2CppObject *)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v15->m_Items, v17, v13, v14);
      v58 = type;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v58, v23, v24, v25);
      v28 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1B886EC(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( v15->max_length <= 1 )
        goto LABEL_70;
      v15->m_Items[1] = v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[1], (int32_t)v28, v26, v27);
      v16 = StringLiteral_16123/*"_"*/;
      if ( StringLiteral_16123/*"_"*/ )
      {
        v16 = sub_1B886EC(StringLiteral_16123/*"_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_16123/*"_"*/;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v15->max_length <= 2 )
        goto LABEL_70;
      v15->m_Items[2] = (Il2CppObject *)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[2], v17, v29, v30);
      v57 = shiftIndex + 1;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v57, v31, v32, v33);
      v36 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1B886EC(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( v15->max_length <= 3 )
        goto LABEL_70;
      v15->m_Items[3] = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[3], (int32_t)v36, v34, v35);
      AssetStorage = (AssetData_o *)System_String__Concat_61718484(v15, 0LL);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
        v38 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1B88658(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v41 = (System_Object_array *)AssetStorage;
        v16 = StringLiteral_19976/*"hp_gauge_"*/;
        if ( StringLiteral_19976/*"hp_gauge_"*/ )
        {
          v16 = sub_1B886EC(StringLiteral_19976/*"hp_gauge_"*/, v41->obj.klass->_1.element_class);
          if ( !v16 )
            goto LABEL_71;
          v17 = StringLiteral_19976/*"hp_gauge_"*/;
        }
        else
        {
          v17 = 0LL;
        }
        if ( !v41->max_length )
          goto LABEL_70;
        v41->m_Items[0] = (Il2CppObject *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)v41->m_Items, v17, v39, v40);
        v58 = type;
        v16 = j_il2cpp_value_box_0(int_TypeInfo, &v58, v42, v43, v44);
        v47 = (Il2CppObject *)v16;
        if ( !v16 || (v16 = sub_1B886EC(v16, v41->obj.klass->_1.element_class)) != 0 )
        {
          if ( v41->max_length <= 1 )
            goto LABEL_70;
          v41->m_Items[1] = v47;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[1], (int32_t)v47, v45, v46);
          v16 = StringLiteral_16123/*"_"*/;
          if ( StringLiteral_16123/*"_"*/ )
          {
            v16 = sub_1B886EC(StringLiteral_16123/*"_"*/, v41->obj.klass->_1.element_class);
            if ( !v16 )
              goto LABEL_71;
            v17 = StringLiteral_16123/*"_"*/;
          }
          else
          {
            v17 = 0LL;
          }
          if ( v41->max_length <= 2 )
            goto LABEL_70;
          v41->m_Items[2] = (Il2CppObject *)v17;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[2], v17, v48, v49);
          v57 = shiftIndex;
          v16 = j_il2cpp_value_box_0(int_TypeInfo, &v57, v50, v51, v52);
          v55 = (Il2CppObject *)v16;
          if ( !v16 || (v16 = sub_1B886EC(v16, v41->obj.klass->_1.element_class)) != 0 )
          {
            if ( v41->max_length > 3 )
            {
              v41->m_Items[3] = v55;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->m_Items[3], (int32_t)v55, v53, v54);
              AssetStorage = (AssetData_o *)System_String__Concat_61718484(v41, 0LL);
              if ( v38 )
              {
                UISprite__set_spriteName(v38, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1B8880C(AssetStorage, v8);
            }
LABEL_70:
            sub_1B88814(v16, v17);
          }
        }
LABEL_71:
        v56 = sub_1B88830(v16);
        sub_1B886D8(v56, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      }
      v19 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v20);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v21);
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
  __int64 v4; // x4
  UISprite_o *hpframe; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  UISprite_o *frontHpBart; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_Object_array *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x24
  UISprite_o *damageHpBart; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_Object_array *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x24
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_Object_array *v54; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x19
  __int64 v69; // x0
  int v70; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v71; // [xsp+10h] [xbp-70h] BYREF
  int v72; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v73; // [xsp+18h] [xbp-68h] BYREF
  int32_t v74; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5E153 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_19975/*"hp_frame_"*/);
    sub_1B885B0(&StringLiteral_19976/*"hp_gauge_"*/);
    sub_1B885B0(&StringLiteral_19974/*"hp_damage_"*/);
    byte_4A5E153 = 1;
  }
  hpframe = this->fields.hpframe;
  v74 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, *(_QWORD *)&shiftIndex, method, v4);
  v10 = System_String__Concat((Il2CppObject *)StringLiteral_19975/*"hp_frame_"*/, v9, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v10, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v10 = (System_String_o *)sub_1B88658(object___TypeInfo, 4LL);
  if ( !v10 )
    goto LABEL_65;
  v15 = (System_Object_array *)v10;
  v16 = StringLiteral_19976/*"hp_gauge_"*/;
  if ( StringLiteral_19976/*"hp_gauge_"*/ )
  {
    v16 = sub_1B886EC(StringLiteral_19976/*"hp_gauge_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_19976/*"hp_gauge_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_63;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v15->m_Items, v17, v13, v14);
  v73 = type;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v73, v18, v19, v20);
  v23 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_63;
  v15->m_Items[1] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[1], (int32_t)v23, v21, v22);
  v16 = StringLiteral_16123/*"_"*/;
  if ( StringLiteral_16123/*"_"*/ )
  {
    v16 = sub_1B886EC(StringLiteral_16123/*"_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_16123/*"_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_63;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[2], v17, v24, v25);
  v72 = shiftIndex + 1;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v72, v26, v27, v28);
  v31 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_63;
  v15->m_Items[3] = v31;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[3], (int32_t)v31, v29, v30);
  v10 = System_String__Concat_61718484(v15, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v10, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v10 = (System_String_o *)sub_1B88658(object___TypeInfo, 4LL);
  if ( !v10 )
    goto LABEL_65;
  v35 = (System_Object_array *)v10;
  v16 = StringLiteral_19974/*"hp_damage_"*/;
  if ( StringLiteral_19974/*"hp_damage_"*/ )
  {
    v16 = sub_1B886EC(StringLiteral_19974/*"hp_damage_"*/, v35->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_19974/*"hp_damage_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v35->max_length )
    goto LABEL_63;
  v35->m_Items[0] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v35->m_Items, v17, v33, v34);
  v71 = type;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v71, v36, v37, v38);
  v41 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1B886EC(v16, v35->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_63;
  v35->m_Items[1] = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->m_Items[1], (int32_t)v41, v39, v40);
  v16 = StringLiteral_16123/*"_"*/;
  if ( StringLiteral_16123/*"_"*/ )
  {
    v16 = sub_1B886EC(StringLiteral_16123/*"_"*/, v35->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_16123/*"_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_63;
  v35->m_Items[2] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->m_Items[2], v17, v42, v43);
  v70 = shiftIndex + 1;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v70, v44, v45, v46);
  v49 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1B886EC(v16, v35->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_63;
  v35->m_Items[3] = v49;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->m_Items[3], (int32_t)v49, v47, v48);
  v10 = System_String__Concat_61718484(v35, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v10, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v51 = this->fields.backHpBar;
    v10 = (System_String_o *)sub_1B88658(object___TypeInfo, 4LL);
    if ( !v10 )
      goto LABEL_65;
    v54 = (System_Object_array *)v10;
    v16 = StringLiteral_19976/*"hp_gauge_"*/;
    if ( StringLiteral_19976/*"hp_gauge_"*/ )
    {
      v16 = sub_1B886EC(StringLiteral_19976/*"hp_gauge_"*/, v54->obj.klass->_1.element_class);
      if ( !v16 )
        goto LABEL_64;
      v17 = StringLiteral_19976/*"hp_gauge_"*/;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v54->max_length )
      goto LABEL_63;
    v54->m_Items[0] = (Il2CppObject *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v54->m_Items, v17, v52, v53);
    v74 = type;
    v16 = j_il2cpp_value_box_0(int_TypeInfo, &v74, v55, v56, v57);
    v60 = (Il2CppObject *)v16;
    if ( !v16 || (v16 = sub_1B886EC(v16, v54->obj.klass->_1.element_class)) != 0 )
    {
      if ( v54->max_length <= 1 )
        goto LABEL_63;
      v54->m_Items[1] = v60;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[1], (int32_t)v60, v58, v59);
      v16 = StringLiteral_16123/*"_"*/;
      if ( StringLiteral_16123/*"_"*/ )
      {
        v16 = sub_1B886EC(StringLiteral_16123/*"_"*/, v54->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_64;
        v17 = StringLiteral_16123/*"_"*/;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v54->max_length <= 2 )
        goto LABEL_63;
      v54->m_Items[2] = (Il2CppObject *)v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[2], v17, v61, v62);
      v73 = shiftIndex;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v73, v63, v64, v65);
      v68 = (Il2CppObject *)v16;
      if ( !v16 || (v16 = sub_1B886EC(v16, v54->obj.klass->_1.element_class)) != 0 )
      {
        if ( v54->max_length > 3 )
        {
          v54->m_Items[3] = v68;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->m_Items[3], (int32_t)v68, v66, v67);
          v10 = System_String__Concat_61718484(v54, 0LL);
          if ( v51 )
          {
            UISprite__set_spriteName(v51, v10, 0LL);
            return;
          }
LABEL_65:
          sub_1B8880C(v10, v11);
        }
LABEL_63:
        sub_1B88814(v16, v17);
      }
    }
LABEL_64:
    v69 = sub_1B88830(v16);
    sub_1B886D8(v69, 0LL);
  }
}


void __fastcall BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  UISprite_o *hpframe; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  UISprite_o *frontHpBart; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UISprite_o *v20; // x21
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *backHpBar; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UISprite_o *v26; // x20
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E154 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_21532/*"mp_framebg_"*/);
    sub_1B885B0(&StringLiteral_19029/*"enemymp_"*/);
    sub_1B885B0(&StringLiteral_21533/*"mp_mark_"*/);
    sub_1B885B0(&StringLiteral_21531/*"mp_frame_"*/);
    byte_4A5E154 = 1;
  }
  hpframe = this->fields.hpframe;
  v29 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, method, v3, v4);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_21531/*"mp_frame_"*/, v8, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v9, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v28 = type;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v12, v13, v14);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_19029/*"enemymp_"*/, v15, 0LL);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v9, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v20 = this->fields.splitSprite;
    v29 = type;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v17, v18, v19);
    v9 = System_String__Concat((Il2CppObject *)StringLiteral_21533/*"mp_mark_"*/, v21, 0LL);
    if ( !v20 )
      goto LABEL_16;
    UISprite__set_spriteName(v20, v9, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v26 = this->fields.backHpBar;
    v29 = type;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v23, v24, v25);
    v9 = System_String__Concat((Il2CppObject *)StringLiteral_21532/*"mp_framebg_"*/, v27, 0LL);
    if ( v26 )
    {
      UISprite__set_spriteName(v26, v9, 0LL);
      return;
    }
LABEL_16:
    sub_1B8880C(v9, v10);
  }
}


void __fastcall BattleServantChangeBarComponent__setSplitHp(
        BattleServantChangeBarComponent_o *this,
        System_Int64_array *split,
        int64_t maxHp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *splitList; // x8
  struct UnityEngine_GameObject_array **p_splitList; // x22
  unsigned __int64 v9; // x25
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v11; // x23
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  unsigned __int64 v15; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v19; // x23
  int mWidth; // w26
  __int64 v21; // x27
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A5E155 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E155 = 1;
  }
  p_splitList = &v6->fields.splitList;
  splitList = v6->fields.splitList;
  if ( !splitList )
    goto LABEL_24;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = splitList->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
LABEL_25:
      sub_1B88814(this, split);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v11, 0LL);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1B88658(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.splitList, v12, v13, v14);
    if ( (int)split->max_length >= 1 )
    {
      v15 = 0LL;
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
        if ( v15 >= split->max_length )
          goto LABEL_25;
        v19 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v21 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v25.fields.x = (double)mWidth * (double)(maxHp - v21) / (double)maxHp;
        v25.fields.y = 0.0;
        v25.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, 1, 0LL);
        v24 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v15 >= v24->max_length )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v24->obj.klass + i) = (Il2CppClass *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v24 + i), (int32_t)v19, v22, v23);
        if ( (__int64)++v15 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1B8880C(this, split);
    }
  }
}