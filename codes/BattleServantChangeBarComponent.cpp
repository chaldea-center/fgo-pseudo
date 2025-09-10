void BattleServantChangeBarComponent___ctor(BattleServantChangeBarComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A8D2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    byte_4C2A8D2 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C2D538(UnityEngine_GameObject___TypeInfo, 0);
  this->fields.splitList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


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
  UIAtlas_o *v11; // x22
  UISprite_o *frontHpBart; // x23
  __int64 v13; // x2
  const MethodInfo *v14; // x3
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
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x25
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v35; // x20
  const MethodInfo *v36; // x3
  AssetData_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  __int64 v42; // x21
  const MethodInfo *v43; // x3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  const MethodInfo *v47; // x3
  __int64 v48; // x19
  __int64 v49; // x0
  int32_t v50; // [xsp+8h] [xbp-68h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C2A8CE & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_3084/*"Battle/Common"*/);
    sub_1C2D490(&StringLiteral_3104/*"BattleAssetUIAtlas"*/);
    sub_1C2D490(&StringLiteral_20011/*"hp_gauge_"*/);
    byte_4C2A8CE = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3084/*"Battle/Common"*/, 0);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__51051712(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3104/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v11 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_1C2D538(object___TypeInfo, 4);
      if ( !AssetStorage )
        goto LABEL_69;
      v15 = (System_Object_array *)AssetStorage;
      v16 = StringLiteral_20011/*"hp_gauge_"*/;
      if ( StringLiteral_20011/*"hp_gauge_"*/ )
      {
        v16 = sub_1C2D5CC(StringLiteral_20011/*"hp_gauge_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_20011/*"hp_gauge_"*/;
      }
      else
      {
        v17 = 0;
      }
      if ( !LODWORD(v15->max_length) )
        goto LABEL_70;
      v15->m_Items[0] = (Il2CppObject *)v17;
      sub_1C2D434((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
      v51 = type;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v51, v23, v24, v25);
      v27 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( LODWORD(v15->max_length) <= 1 )
        goto LABEL_70;
      v15->m_Items[1] = v27;
      sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v27, v13, v26);
      v16 = StringLiteral_16105/*"_"*/;
      if ( StringLiteral_16105/*"_"*/ )
      {
        v16 = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_16105/*"_"*/;
      }
      else
      {
        v17 = 0;
      }
      if ( LODWORD(v15->max_length) <= 2 )
        goto LABEL_70;
      v15->m_Items[2] = (Il2CppObject *)v17;
      sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[2], v17, v13, v28);
      v50 = shiftIndex + 1;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v50, v29, v30, v31);
      v33 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( LODWORD(v15->max_length) <= 3 )
        goto LABEL_70;
      v15->m_Items[3] = v33;
      sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v33, v13, v32);
      AssetStorage = (AssetData_o *)System_String__Concat_63496304(v15, 0);
      if ( !frontHpBart )
        goto LABEL_69;
      UISprite__set_spriteName(frontHpBart, (System_String_o *)AssetStorage, 0);
      backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
        v35 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C2D538(object___TypeInfo, 4);
        if ( !AssetStorage )
          goto LABEL_69;
        v37 = AssetStorage;
        v16 = StringLiteral_20011/*"hp_gauge_"*/;
        if ( StringLiteral_20011/*"hp_gauge_"*/ )
        {
          v16 = sub_1C2D5CC(StringLiteral_20011/*"hp_gauge_"*/, v37->klass->_1.element_class);
          if ( !v16 )
            goto LABEL_71;
          v17 = StringLiteral_20011/*"hp_gauge_"*/;
        }
        else
        {
          v17 = 0;
        }
        if ( !LODWORD(v37->fields.name) )
          goto LABEL_70;
        v37->fields.attrib = (struct System_String_o *)v17;
        sub_1C2D434((CGThumbnailListItem_o *)&v37->fields.attrib, v17, v13, v36);
        v51 = type;
        v16 = j_il2cpp_value_box_0(int_TypeInfo, &v51, v38, v39, v40);
        v42 = v16;
        if ( !v16 || (v16 = sub_1C2D5CC(v16, v37->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v37->fields.name) <= 1 )
            goto LABEL_70;
          *(_QWORD *)&v37->fields.nowVersion = v42;
          sub_1C2D434((CGThumbnailListItem_o *)&v37->fields.nowVersion, v42, v13, v41);
          v16 = StringLiteral_16105/*"_"*/;
          if ( StringLiteral_16105/*"_"*/ )
          {
            v16 = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v37->klass->_1.element_class);
            if ( !v16 )
              goto LABEL_71;
            v17 = StringLiteral_16105/*"_"*/;
          }
          else
          {
            v17 = 0;
          }
          if ( LODWORD(v37->fields.name) <= 2 )
            goto LABEL_70;
          *(_QWORD *)&v37->fields.size = v17;
          sub_1C2D434((CGThumbnailListItem_o *)&v37->fields.size, v17, v13, v43);
          v50 = shiftIndex;
          v16 = j_il2cpp_value_box_0(int_TypeInfo, &v50, v44, v45, v46);
          v48 = v16;
          if ( !v16 || (v16 = sub_1C2D5CC(v16, v37->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v37->fields.name) > 3 )
            {
              v37->fields.keyType = (struct System_String_o *)v48;
              sub_1C2D434((CGThumbnailListItem_o *)&v37->fields.keyType, v48, v13, v47);
              AssetStorage = (AssetData_o *)System_String__Concat_63496304((System_Object_array *)v37, 0);
              if ( v35 )
              {
                UISprite__set_spriteName(v35, (System_String_o *)AssetStorage, 0);
                return;
              }
LABEL_69:
              sub_1C2D6EC(AssetStorage, v8);
            }
LABEL_70:
            sub_1C2D6F4(v16, v17, v13);
          }
        }
LABEL_71:
        v49 = sub_1C2D710(v16);
        sub_1C2D5B8(v49, 0);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      }
      v19 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
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
void BattleServantChangeBarComponent__setHpFrames(
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  System_Object_array *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x24
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x24
  UISprite_o *damageHpBart; // x22
  const MethodInfo *v30; // x3
  System_Object_array *v31; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x24
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v44; // x21
  const MethodInfo *v45; // x3
  System_String_o *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  const MethodInfo *v50; // x3
  __int64 v51; // x20
  const MethodInfo *v52; // x3
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  const MethodInfo *v56; // x3
  __int64 v57; // x19
  __int64 v58; // x0
  int v59; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v60; // [xsp+10h] [xbp-70h] BYREF
  int v61; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v62; // [xsp+18h] [xbp-68h] BYREF
  int32_t v63; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C2A8CF & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_20010/*"hp_frame_"*/);
    sub_1C2D490(&StringLiteral_20011/*"hp_gauge_"*/);
    sub_1C2D490(&StringLiteral_20009/*"hp_damage_"*/);
    byte_4C2A8CF = 1;
  }
  hpframe = this->fields.hpframe;
  v63 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, *(_QWORD *)&shiftIndex, method, v4);
  v10 = System_String__Concat((Il2CppObject *)StringLiteral_20010/*"hp_frame_"*/, v9, 0);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v10, 0);
  frontHpBart = this->fields.frontHpBart;
  v10 = (System_String_o *)sub_1C2D538(object___TypeInfo, 4);
  if ( !v10 )
    goto LABEL_65;
  v15 = (System_Object_array *)v10;
  v16 = StringLiteral_20011/*"hp_gauge_"*/;
  if ( StringLiteral_20011/*"hp_gauge_"*/ )
  {
    v16 = sub_1C2D5CC(StringLiteral_20011/*"hp_gauge_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_20011/*"hp_gauge_"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_63;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v62 = type;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v62, v18, v19, v20);
  v22 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_63;
  v15->m_Items[1] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v22, v13, v21);
  v16 = StringLiteral_16105/*"_"*/;
  if ( StringLiteral_16105/*"_"*/ )
  {
    v16 = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_16105/*"_"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_63;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[2], v17, v13, v23);
  v61 = shiftIndex + 1;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v61, v24, v25, v26);
  v28 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_63;
  v15->m_Items[3] = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v28, v13, v27);
  v10 = System_String__Concat_63496304(v15, 0);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v10, 0);
  damageHpBart = this->fields.damageHpBart;
  v10 = (System_String_o *)sub_1C2D538(object___TypeInfo, 4);
  if ( !v10 )
    goto LABEL_65;
  v31 = (System_Object_array *)v10;
  v16 = StringLiteral_20009/*"hp_damage_"*/;
  if ( StringLiteral_20009/*"hp_damage_"*/ )
  {
    v16 = sub_1C2D5CC(StringLiteral_20009/*"hp_damage_"*/, v31->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_20009/*"hp_damage_"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v31->max_length) )
    goto LABEL_63;
  v31->m_Items[0] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)v31->m_Items, v17, v13, v30);
  v60 = type;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v60, v32, v33, v34);
  v36 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C2D5CC(v16, v31->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( LODWORD(v31->max_length) <= 1 )
    goto LABEL_63;
  v31->m_Items[1] = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v31->m_Items[1], (int32_t)v36, v13, v35);
  v16 = StringLiteral_16105/*"_"*/;
  if ( StringLiteral_16105/*"_"*/ )
  {
    v16 = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v31->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
    v17 = StringLiteral_16105/*"_"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v31->max_length) <= 2 )
    goto LABEL_63;
  v31->m_Items[2] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v31->m_Items[2], v17, v13, v37);
  v59 = shiftIndex + 1;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v59, v38, v39, v40);
  v42 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C2D5CC(v16, v31->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_64;
  }
  if ( LODWORD(v31->max_length) <= 3 )
    goto LABEL_63;
  v31->m_Items[3] = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v31->m_Items[3], (int32_t)v42, v13, v41);
  v10 = System_String__Concat_63496304(v31, 0);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v10, 0);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v44 = this->fields.backHpBar;
    v10 = (System_String_o *)sub_1C2D538(object___TypeInfo, 4);
    if ( !v10 )
      goto LABEL_65;
    v46 = v10;
    v16 = StringLiteral_20011/*"hp_gauge_"*/;
    if ( StringLiteral_20011/*"hp_gauge_"*/ )
    {
      v16 = sub_1C2D5CC(StringLiteral_20011/*"hp_gauge_"*/, v46->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_64;
      v17 = StringLiteral_20011/*"hp_gauge_"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( !LODWORD(v46[1].klass) )
      goto LABEL_63;
    v46[1].monitor = (void *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v46[1].monitor, v17, v13, v45);
    v63 = type;
    v16 = j_il2cpp_value_box_0(int_TypeInfo, &v63, v47, v48, v49);
    v51 = v16;
    if ( !v16 || (v16 = sub_1C2D5CC(v16, v46->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v46[1].klass) <= 1 )
        goto LABEL_63;
      v46[1].fields = (System_String_Fields)v51;
      sub_1C2D434((CGThumbnailListItem_o *)&v46[1].fields, v51, v13, v50);
      v16 = StringLiteral_16105/*"_"*/;
      if ( StringLiteral_16105/*"_"*/ )
      {
        v16 = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v46->klass->_1.element_class);
        if ( !v16 )
          goto LABEL_64;
        v17 = StringLiteral_16105/*"_"*/;
      }
      else
      {
        v17 = 0;
      }
      if ( LODWORD(v46[1].klass) <= 2 )
        goto LABEL_63;
      v46[2].klass = (System_String_c *)v17;
      sub_1C2D434((CGThumbnailListItem_o *)&v46[2], v17, v13, v52);
      v62 = shiftIndex;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v62, v53, v54, v55);
      v57 = v16;
      if ( !v16 || (v16 = sub_1C2D5CC(v16, v46->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v46[1].klass) > 3 )
        {
          v46[2].monitor = (void *)v57;
          sub_1C2D434((CGThumbnailListItem_o *)&v46[2].monitor, v57, v13, v56);
          v10 = System_String__Concat_63496304((System_Object_array *)v46, 0);
          if ( v44 )
          {
            UISprite__set_spriteName(v44, v10, 0);
            return;
          }
LABEL_65:
          sub_1C2D6EC(v10, v11);
        }
LABEL_63:
        sub_1C2D6F4(v16, v17, v13);
      }
    }
LABEL_64:
    v58 = sub_1C2D710(v16);
    sub_1C2D5B8(v58, 0);
  }
}


void BattleServantChangeBarComponent__setMpFrames(
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

  if ( (byte_4C2A8D0 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_21658/*"mp_framebg_"*/);
    sub_1C2D490(&StringLiteral_19031/*"enemymp_"*/);
    sub_1C2D490(&StringLiteral_21659/*"mp_mark_"*/);
    sub_1C2D490(&StringLiteral_21657/*"mp_frame_"*/);
    byte_4C2A8D0 = 1;
  }
  hpframe = this->fields.hpframe;
  v29 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, method, v3, v4);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_21657/*"mp_frame_"*/, v8, 0);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v9, 0);
  frontHpBart = this->fields.frontHpBart;
  v28 = type;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v12, v13, v14);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_19031/*"enemymp_"*/, v15, 0);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v9, 0);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
  {
    v20 = this->fields.splitSprite;
    v29 = type;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v17, v18, v19);
    v9 = System_String__Concat((Il2CppObject *)StringLiteral_21659/*"mp_mark_"*/, v21, 0);
    if ( !v20 )
      goto LABEL_16;
    UISprite__set_spriteName(v20, v9, 0);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v26 = this->fields.backHpBar;
    v29 = type;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v23, v24, v25);
    v9 = System_String__Concat((Il2CppObject *)StringLiteral_21658/*"mp_framebg_"*/, v27, 0);
    if ( v26 )
    {
      UISprite__set_spriteName(v26, v9, 0);
      return;
    }
LABEL_16:
    sub_1C2D6EC(v9, v10);
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
  unsigned __int64 v9; // x25
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v11; // x23
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned __int64 v15; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v19; // x23
  int mWidth; // w26
  __int64 v21; // x27
  const MethodInfo *v22; // x3
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C2A8D1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A8D1 = 1;
  }
  p_splitList = &v6->fields.splitList;
  splitList = v6->fields.splitList;
  if ( !splitList )
    goto LABEL_24;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(splitList->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
LABEL_25:
      sub_1C2D6F4(this, split, maxHp);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v11, 0);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1C2D538(UnityEngine_GameObject___TypeInfo, LODWORD(split->max_length));
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.splitList, v12, v13, v14);
    if ( SLODWORD(split->max_length) >= 1 )
    {
      v15 = 0;
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
        if ( v15 >= LODWORD(split->max_length) )
          goto LABEL_25;
        v19 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v21 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
        if ( !this )
          break;
        v24.fields.x = (double)mWidth * (double)(maxHp - v21) / (double)maxHp;
        v24.fields.y = 0.0;
        v24.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, 1, 0);
        v23 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v15 >= LODWORD(v23->max_length) )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v23->obj.klass + i) = (Il2CppClass *)v19;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v23 + i), (int32_t)v19, maxHp, v22);
        if ( (__int64)++v15 >= SLODWORD(split->max_length) )
          return;
      }
LABEL_24:
      sub_1C2D6EC(this, split);
    }
  }
}