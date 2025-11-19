void BattleServantChangeBarComponent___ctor(BattleServantChangeBarComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB99C7 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_GameObject___TypeInfo);
    byte_4CB99C7 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C6BAB0(UnityEngine_GameObject___TypeInfo, 0);
  this->fields.splitList = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Object_array *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  int32_t bartype; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  AssetData_o *v36; // x22
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x19
  __int64 v47; // x0
  int32_t v48; // [xsp+8h] [xbp-68h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB99C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_3079/*"Battle/Common"*/);
    sub_1C6BA08(&StringLiteral_3099/*"BattleAssetUIAtlas"*/);
    sub_1C6BA08(&StringLiteral_20090/*"hp_gauge_"*/);
    byte_4CB99C3 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3079/*"Battle/Common"*/, 0);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__51495936(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3099/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      AssetStorage = (AssetData_o *)sub_1C6BAB0(object___TypeInfo, 4);
      if ( !AssetStorage )
        goto LABEL_69;
      v15 = (System_Object_array *)AssetStorage;
      v16 = StringLiteral_20090/*"hp_gauge_"*/;
      if ( StringLiteral_20090/*"hp_gauge_"*/ )
      {
        v16 = sub_1C6BB44(StringLiteral_20090/*"hp_gauge_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_20090/*"hp_gauge_"*/;
      }
      else
      {
        v17 = 0;
      }
      if ( !LODWORD(v15->max_length) )
        goto LABEL_70;
      v15->m_Items[0] = (Il2CppObject *)v17;
      sub_1C6B9AC((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
      v49 = type;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
      v25 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( LODWORD(v15->max_length) <= 1 )
        goto LABEL_70;
      v15->m_Items[1] = v25;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v25, v23, v24);
      v16 = StringLiteral_16102/*"_"*/;
      if ( StringLiteral_16102/*"_"*/ )
      {
        v16 = sub_1C6BB44(StringLiteral_16102/*"_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v28 = StringLiteral_16102/*"_"*/;
      }
      else
      {
        v28 = 0;
      }
      if ( LODWORD(v15->max_length) <= 2 )
        goto LABEL_70;
      v15->m_Items[2] = (Il2CppObject *)v28;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[2], v28, v26, v27);
      v48 = shiftIndex + 1;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
      v31 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( LODWORD(v15->max_length) <= 3 )
        goto LABEL_70;
      v15->m_Items[3] = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v31, v29, v30);
      AssetStorage = (AssetData_o *)System_String__Concat_64005248(v15, 0);
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
        v33 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C6BAB0(object___TypeInfo, 4);
        if ( !AssetStorage )
          goto LABEL_69;
        v36 = AssetStorage;
        v16 = StringLiteral_20090/*"hp_gauge_"*/;
        if ( StringLiteral_20090/*"hp_gauge_"*/ )
        {
          v16 = sub_1C6BB44(StringLiteral_20090/*"hp_gauge_"*/, v36->klass->_1.element_class);
          if ( !v16 )
            goto LABEL_71;
          v37 = StringLiteral_20090/*"hp_gauge_"*/;
        }
        else
        {
          v37 = 0;
        }
        if ( !LODWORD(v36->fields.name) )
          goto LABEL_70;
        v36->fields.attrib = (struct System_String_o *)v37;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v36->fields.attrib, v37, v34, v35);
        v49 = type;
        v16 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
        v40 = v16;
        if ( !v16 || (v16 = sub_1C6BB44(v16, v36->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v36->fields.name) <= 1 )
            goto LABEL_70;
          *(_QWORD *)&v36->fields.nowVersion = v40;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v36->fields.nowVersion, v40, v38, v39);
          v16 = StringLiteral_16102/*"_"*/;
          if ( StringLiteral_16102/*"_"*/ )
          {
            v16 = sub_1C6BB44(StringLiteral_16102/*"_"*/, v36->klass->_1.element_class);
            if ( !v16 )
              goto LABEL_71;
            v43 = StringLiteral_16102/*"_"*/;
          }
          else
          {
            v43 = 0;
          }
          if ( LODWORD(v36->fields.name) <= 2 )
            goto LABEL_70;
          *(_QWORD *)&v36->fields.size = v43;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v36->fields.size, v43, v41, v42);
          v48 = shiftIndex;
          v16 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
          v46 = v16;
          if ( !v16 || (v16 = sub_1C6BB44(v16, v36->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v36->fields.name) > 3 )
            {
              v36->fields.keyType = (struct System_String_o *)v46;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v36->fields.keyType, v46, v44, v45);
              AssetStorage = (AssetData_o *)System_String__Concat_64005248((System_Object_array *)v36, 0);
              if ( v33 )
              {
                UISprite__set_spriteName(v33, (System_String_o *)AssetStorage, 0);
                return;
              }
LABEL_69:
              sub_1C6BC60(AssetStorage, v8);
            }
LABEL_70:
            sub_1C6BC68(v16);
          }
        }
LABEL_71:
        v47 = sub_1C6BC84(v16);
        sub_1C6BB30(v47, 0);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Object_array *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x24
  UISprite_o *damageHpBart; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Object_array *v29; // x23
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_String_o *v44; // x22
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x19
  __int64 v55; // x0
  int v56; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v57; // [xsp+10h] [xbp-70h] BYREF
  int v58; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v59; // [xsp+18h] [xbp-68h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB99C4 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_20089/*"hp_frame_"*/);
    sub_1C6BA08(&StringLiteral_20090/*"hp_gauge_"*/);
    sub_1C6BA08(&StringLiteral_20088/*"hp_damage_"*/);
    byte_4CB99C4 = 1;
  }
  hpframe = this->fields.hpframe;
  v60 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_20089/*"hp_frame_"*/, v8, 0);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v9, 0);
  frontHpBart = this->fields.frontHpBart;
  v9 = (System_String_o *)sub_1C6BAB0(object___TypeInfo, 4);
  if ( !v9 )
    goto LABEL_65;
  v14 = (System_Object_array *)v9;
  v15 = StringLiteral_20090/*"hp_gauge_"*/;
  if ( StringLiteral_20090/*"hp_gauge_"*/ )
  {
    v15 = sub_1C6BB44(StringLiteral_20090/*"hp_gauge_"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
    v16 = StringLiteral_20090/*"hp_gauge_"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_63;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)v14->m_Items, v16, v12, v13);
  v59 = type;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v19 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C6BB44(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_63;
  v14->m_Items[1] = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->m_Items[1], (int32_t)v19, v17, v18);
  v15 = StringLiteral_16102/*"_"*/;
  if ( StringLiteral_16102/*"_"*/ )
  {
    v15 = sub_1C6BB44(StringLiteral_16102/*"_"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
    v22 = StringLiteral_16102/*"_"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_63;
  v14->m_Items[2] = (Il2CppObject *)v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->m_Items[2], v22, v20, v21);
  v58 = shiftIndex + 1;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v25 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C6BB44(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
  }
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_63;
  v14->m_Items[3] = v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->m_Items[3], (int32_t)v25, v23, v24);
  v9 = System_String__Concat_64005248(v14, 0);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v9, 0);
  damageHpBart = this->fields.damageHpBart;
  v9 = (System_String_o *)sub_1C6BAB0(object___TypeInfo, 4);
  if ( !v9 )
    goto LABEL_65;
  v29 = (System_Object_array *)v9;
  v15 = StringLiteral_20088/*"hp_damage_"*/;
  if ( StringLiteral_20088/*"hp_damage_"*/ )
  {
    v15 = sub_1C6BB44(StringLiteral_20088/*"hp_damage_"*/, v29->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
    v30 = StringLiteral_20088/*"hp_damage_"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( !LODWORD(v29->max_length) )
    goto LABEL_63;
  v29->m_Items[0] = (Il2CppObject *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)v29->m_Items, v30, v27, v28);
  v57 = type;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v57);
  v33 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C6BB44(v15, v29->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
  }
  if ( LODWORD(v29->max_length) <= 1 )
    goto LABEL_63;
  v29->m_Items[1] = v33;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v29->m_Items[1], (int32_t)v33, v31, v32);
  v15 = StringLiteral_16102/*"_"*/;
  if ( StringLiteral_16102/*"_"*/ )
  {
    v15 = sub_1C6BB44(StringLiteral_16102/*"_"*/, v29->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
    v36 = StringLiteral_16102/*"_"*/;
  }
  else
  {
    v36 = 0;
  }
  if ( LODWORD(v29->max_length) <= 2 )
    goto LABEL_63;
  v29->m_Items[2] = (Il2CppObject *)v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v29->m_Items[2], v36, v34, v35);
  v56 = shiftIndex + 1;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
  v39 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C6BB44(v15, v29->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_64;
  }
  if ( LODWORD(v29->max_length) <= 3 )
    goto LABEL_63;
  v29->m_Items[3] = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v29->m_Items[3], (int32_t)v39, v37, v38);
  v9 = System_String__Concat_64005248(v29, 0);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v9, 0);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v41 = this->fields.backHpBar;
    v9 = (System_String_o *)sub_1C6BAB0(object___TypeInfo, 4);
    if ( !v9 )
      goto LABEL_65;
    v44 = v9;
    v15 = StringLiteral_20090/*"hp_gauge_"*/;
    if ( StringLiteral_20090/*"hp_gauge_"*/ )
    {
      v15 = sub_1C6BB44(StringLiteral_20090/*"hp_gauge_"*/, v44->klass->_1.element_class);
      if ( !v15 )
        goto LABEL_64;
      v45 = StringLiteral_20090/*"hp_gauge_"*/;
    }
    else
    {
      v45 = 0;
    }
    if ( !LODWORD(v44[1].klass) )
      goto LABEL_63;
    v44[1].monitor = (void *)v45;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v44[1].monitor, v45, v42, v43);
    v60 = type;
    v15 = j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v48 = v15;
    if ( !v15 || (v15 = sub_1C6BB44(v15, v44->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v44[1].klass) <= 1 )
        goto LABEL_63;
      v44[1].fields = (System_String_Fields)v48;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v44[1].fields, v48, v46, v47);
      v15 = StringLiteral_16102/*"_"*/;
      if ( StringLiteral_16102/*"_"*/ )
      {
        v15 = sub_1C6BB44(StringLiteral_16102/*"_"*/, v44->klass->_1.element_class);
        if ( !v15 )
          goto LABEL_64;
        v51 = StringLiteral_16102/*"_"*/;
      }
      else
      {
        v51 = 0;
      }
      if ( LODWORD(v44[1].klass) <= 2 )
        goto LABEL_63;
      v44[2].klass = (System_String_c *)v51;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v44[2], v51, v49, v50);
      v59 = shiftIndex;
      v15 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
      v54 = v15;
      if ( !v15 || (v15 = sub_1C6BB44(v15, v44->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v44[1].klass) > 3 )
        {
          v44[2].monitor = (void *)v54;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v44[2].monitor, v54, v52, v53);
          v9 = System_String__Concat_64005248((System_Object_array *)v44, 0);
          if ( v41 )
          {
            UISprite__set_spriteName(v41, v9, 0);
            return;
          }
LABEL_65:
          sub_1C6BC60(v9, v10);
        }
LABEL_63:
        sub_1C6BC68(v15);
      }
    }
LABEL_64:
    v55 = sub_1C6BC84(v15);
    sub_1C6BB30(v55, 0);
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
  UnityEngine_Object_o *splitSprite; // x21
  UISprite_o *v12; // x21
  Il2CppObject *v13; // x0
  UnityEngine_Object_o *backHpBar; // x21
  UISprite_o *v15; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB99C5 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_21761/*"mp_framebg_"*/);
    sub_1C6BA08(&StringLiteral_19092/*"enemymp_"*/);
    sub_1C6BA08(&StringLiteral_21762/*"mp_mark_"*/);
    sub_1C6BA08(&StringLiteral_21760/*"mp_frame_"*/);
    byte_4CB99C5 = 1;
  }
  hpframe = this->fields.hpframe;
  v18 = type;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_21760/*"mp_frame_"*/, v6, 0);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v7, 0);
  frontHpBart = this->fields.frontHpBart;
  v17 = type;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_19092/*"enemymp_"*/, v10, 0);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v7, 0);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
  {
    v12 = this->fields.splitSprite;
    v18 = type;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_21762/*"mp_mark_"*/, v13, 0);
    if ( !v12 )
      goto LABEL_16;
    UISprite__set_spriteName(v12, v7, 0);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v15 = this->fields.backHpBar;
    v18 = type;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_21761/*"mp_framebg_"*/, v16, 0);
    if ( v15 )
    {
      UISprite__set_spriteName(v15, v7, 0);
      return;
    }
LABEL_16:
    sub_1C6BC60(v7, v8);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4CB99C6 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB99C6 = 1;
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
      sub_1C6BC68(this);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v11, 0);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1C6BAB0(UnityEngine_GameObject___TypeInfo, LODWORD(split->max_length));
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.splitList, v12, v13, v14);
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
        v25.fields.x = (double)mWidth * (double)(maxHp - v21) / (double)maxHp;
        v25.fields.y = 0.0;
        v25.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, 1, 0);
        v24 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v15 >= LODWORD(v24->max_length) )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v24->obj.klass + i) = (Il2CppClass *)v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v24 + i), (int32_t)v19, v22, v23);
        if ( (__int64)++v15 >= SLODWORD(split->max_length) )
          return;
      }
LABEL_24:
      sub_1C6BC60(this, split);
    }
  }
}