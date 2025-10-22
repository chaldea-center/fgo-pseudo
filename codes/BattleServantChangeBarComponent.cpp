void BattleServantChangeBarComponent___ctor(BattleServantChangeBarComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5A3FA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_GameObject___TypeInfo);
    byte_4C5A3FA = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C3E60C(UnityEngine_GameObject___TypeInfo, 0);
  this->fields.splitList = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
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
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  AssetData_o *v47; // x22
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x19
  __int64 v68; // x0
  int32_t v69; // [xsp+8h] [xbp-68h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C5A3F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C3E564(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    sub_1C3E564(&StringLiteral_20044/*"hp_gauge_"*/);
    byte_4C5A3F6 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__51228128(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      AssetStorage = (AssetData_o *)sub_1C3E60C(object___TypeInfo, 4);
      if ( !AssetStorage )
        goto LABEL_69;
      v15 = (System_Object_array *)AssetStorage;
      v16 = StringLiteral_20044/*"hp_gauge_"*/;
      if ( StringLiteral_20044/*"hp_gauge_"*/ )
      {
        v16 = sub_1C3E6A0(StringLiteral_20044/*"hp_gauge_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_20044/*"hp_gauge_"*/;
      }
      else
      {
        v17 = 0;
      }
      if ( !LODWORD(v15->max_length) )
        goto LABEL_70;
      v15->m_Items[0] = (Il2CppObject *)v17;
      sub_1C3E508((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
      v70 = type;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v70, v23, v24, v25, v26, v27, v28);
      v31 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( LODWORD(v15->max_length) <= 1 )
        goto LABEL_70;
      v15->m_Items[1] = v31;
      sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v31, v29, v30);
      v16 = StringLiteral_16119/*"_"*/;
      if ( StringLiteral_16119/*"_"*/ )
      {
        v16 = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
        v17 = StringLiteral_16119/*"_"*/;
      }
      else
      {
        v17 = 0;
      }
      if ( LODWORD(v15->max_length) <= 2 )
        goto LABEL_70;
      v15->m_Items[2] = (Il2CppObject *)v17;
      sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[2], v17, v32, v33);
      v69 = shiftIndex + 1;
      v16 = j_il2cpp_value_box_0(int_TypeInfo, &v69, v34, v35, v36, v37, v38, v39);
      v42 = (Il2CppObject *)v16;
      if ( v16 )
      {
        v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
        if ( !v16 )
          goto LABEL_71;
      }
      if ( LODWORD(v15->max_length) <= 3 )
        goto LABEL_70;
      v15->m_Items[3] = v42;
      sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v42, v40, v41);
      AssetStorage = (AssetData_o *)System_String__Concat_63674908(v15, 0);
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
        v44 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C3E60C(object___TypeInfo, 4);
        if ( !AssetStorage )
          goto LABEL_69;
        v47 = AssetStorage;
        v16 = StringLiteral_20044/*"hp_gauge_"*/;
        if ( StringLiteral_20044/*"hp_gauge_"*/ )
        {
          v16 = sub_1C3E6A0(StringLiteral_20044/*"hp_gauge_"*/, v47->klass->_1.element_class);
          if ( !v16 )
            goto LABEL_71;
          v17 = StringLiteral_20044/*"hp_gauge_"*/;
        }
        else
        {
          v17 = 0;
        }
        if ( !LODWORD(v47->fields.name) )
          goto LABEL_70;
        v47->fields.attrib = (struct System_String_o *)v17;
        sub_1C3E508((CGThumbnailListItem_o *)&v47->fields.attrib, v17, v45, v46);
        v70 = type;
        v16 = j_il2cpp_value_box_0(int_TypeInfo, &v70, v48, v49, v50, v51, v52, v53);
        v56 = v16;
        if ( !v16 || (v16 = sub_1C3E6A0(v16, v47->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v47->fields.name) <= 1 )
            goto LABEL_70;
          *(_QWORD *)&v47->fields.nowVersion = v56;
          sub_1C3E508((CGThumbnailListItem_o *)&v47->fields.nowVersion, v56, v54, v55);
          v16 = StringLiteral_16119/*"_"*/;
          if ( StringLiteral_16119/*"_"*/ )
          {
            v16 = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v47->klass->_1.element_class);
            if ( !v16 )
              goto LABEL_71;
            v17 = StringLiteral_16119/*"_"*/;
          }
          else
          {
            v17 = 0;
          }
          if ( LODWORD(v47->fields.name) <= 2 )
            goto LABEL_70;
          *(_QWORD *)&v47->fields.size = v17;
          sub_1C3E508((CGThumbnailListItem_o *)&v47->fields.size, v17, v57, v58);
          v69 = shiftIndex;
          v16 = j_il2cpp_value_box_0(int_TypeInfo, &v69, v59, v60, v61, v62, v63, v64);
          v67 = v16;
          if ( !v16 || (v16 = sub_1C3E6A0(v16, v47->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v47->fields.name) > 3 )
            {
              v47->fields.keyType = (struct System_String_o *)v67;
              sub_1C3E508((CGThumbnailListItem_o *)&v47->fields.keyType, v67, v65, v66);
              AssetStorage = (AssetData_o *)System_String__Concat_63674908((System_Object_array *)v47, 0);
              if ( v44 )
              {
                UISprite__set_spriteName(v44, (System_String_o *)AssetStorage, 0);
                return;
              }
LABEL_69:
              sub_1C3E7C0(AssetStorage, v8);
            }
LABEL_70:
            sub_1C3E7C8(v16, v17);
          }
        }
LABEL_71:
        v68 = sub_1C3E7E4(v16);
        sub_1C3E68C(v68, 0);
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UISprite_o *hpframe; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  UISprite_o *frontHpBart; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Object_array *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x24
  UISprite_o *damageHpBart; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Object_array *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x24
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x5
  __int64 v60; // x6
  __int64 v61; // x7
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v66; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_String_o *v69; // x22
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  __int64 v73; // x5
  __int64 v74; // x6
  __int64 v75; // x7
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x20
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x5
  __int64 v85; // x6
  __int64 v86; // x7
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  __int64 v89; // x19
  __int64 v90; // x0
  int v91; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v92; // [xsp+10h] [xbp-70h] BYREF
  int v93; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v94; // [xsp+18h] [xbp-68h] BYREF
  int32_t v95; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C5A3F7 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_20043/*"hp_frame_"*/);
    sub_1C3E564(&StringLiteral_20044/*"hp_gauge_"*/);
    sub_1C3E564(&StringLiteral_20042/*"hp_damage_"*/);
    byte_4C5A3F7 = 1;
  }
  hpframe = this->fields.hpframe;
  v95 = type;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95, *(_QWORD *)&shiftIndex, method, v4, v5, v6, v7);
  v13 = System_String__Concat((Il2CppObject *)StringLiteral_20043/*"hp_frame_"*/, v12, 0);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v13, 0);
  frontHpBart = this->fields.frontHpBart;
  v13 = (System_String_o *)sub_1C3E60C(object___TypeInfo, 4);
  if ( !v13 )
    goto LABEL_65;
  v18 = (System_Object_array *)v13;
  v19 = StringLiteral_20044/*"hp_gauge_"*/;
  if ( StringLiteral_20044/*"hp_gauge_"*/ )
  {
    v19 = sub_1C3E6A0(StringLiteral_20044/*"hp_gauge_"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v20 = StringLiteral_20044/*"hp_gauge_"*/;
  }
  else
  {
    v20 = 0;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_63;
  v18->m_Items[0] = (Il2CppObject *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)v18->m_Items, v20, v16, v17);
  v94 = type;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v94, v21, v22, v23, v24, v25, v26);
  v29 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C3E6A0(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_63;
  v18->m_Items[1] = v29;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[1], (int32_t)v29, v27, v28);
  v19 = StringLiteral_16119/*"_"*/;
  if ( StringLiteral_16119/*"_"*/ )
  {
    v19 = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v20 = StringLiteral_16119/*"_"*/;
  }
  else
  {
    v20 = 0;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_63;
  v18->m_Items[2] = (Il2CppObject *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[2], v20, v30, v31);
  v93 = shiftIndex + 1;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v93, v32, v33, v34, v35, v36, v37);
  v40 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C3E6A0(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v18->max_length) <= 3 )
    goto LABEL_63;
  v18->m_Items[3] = v40;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[3], (int32_t)v40, v38, v39);
  v13 = System_String__Concat_63674908(v18, 0);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v13, 0);
  damageHpBart = this->fields.damageHpBart;
  v13 = (System_String_o *)sub_1C3E60C(object___TypeInfo, 4);
  if ( !v13 )
    goto LABEL_65;
  v44 = (System_Object_array *)v13;
  v19 = StringLiteral_20042/*"hp_damage_"*/;
  if ( StringLiteral_20042/*"hp_damage_"*/ )
  {
    v19 = sub_1C3E6A0(StringLiteral_20042/*"hp_damage_"*/, v44->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v20 = StringLiteral_20042/*"hp_damage_"*/;
  }
  else
  {
    v20 = 0;
  }
  if ( !LODWORD(v44->max_length) )
    goto LABEL_63;
  v44->m_Items[0] = (Il2CppObject *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)v44->m_Items, v20, v42, v43);
  v92 = type;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v92, v45, v46, v47, v48, v49, v50);
  v53 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C3E6A0(v19, v44->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v44->max_length) <= 1 )
    goto LABEL_63;
  v44->m_Items[1] = v53;
  sub_1C3E508((CGThumbnailListItem_o *)&v44->m_Items[1], (int32_t)v53, v51, v52);
  v19 = StringLiteral_16119/*"_"*/;
  if ( StringLiteral_16119/*"_"*/ )
  {
    v19 = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v44->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v20 = StringLiteral_16119/*"_"*/;
  }
  else
  {
    v20 = 0;
  }
  if ( LODWORD(v44->max_length) <= 2 )
    goto LABEL_63;
  v44->m_Items[2] = (Il2CppObject *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)&v44->m_Items[2], v20, v54, v55);
  v91 = shiftIndex + 1;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v91, v56, v57, v58, v59, v60, v61);
  v64 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C3E6A0(v19, v44->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v44->max_length) <= 3 )
    goto LABEL_63;
  v44->m_Items[3] = v64;
  sub_1C3E508((CGThumbnailListItem_o *)&v44->m_Items[3], (int32_t)v64, v62, v63);
  v13 = System_String__Concat_63674908(v44, 0);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v13, 0);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v66 = this->fields.backHpBar;
    v13 = (System_String_o *)sub_1C3E60C(object___TypeInfo, 4);
    if ( !v13 )
      goto LABEL_65;
    v69 = v13;
    v19 = StringLiteral_20044/*"hp_gauge_"*/;
    if ( StringLiteral_20044/*"hp_gauge_"*/ )
    {
      v19 = sub_1C3E6A0(StringLiteral_20044/*"hp_gauge_"*/, v69->klass->_1.element_class);
      if ( !v19 )
        goto LABEL_64;
      v20 = StringLiteral_20044/*"hp_gauge_"*/;
    }
    else
    {
      v20 = 0;
    }
    if ( !LODWORD(v69[1].klass) )
      goto LABEL_63;
    v69[1].monitor = (void *)v20;
    sub_1C3E508((CGThumbnailListItem_o *)&v69[1].monitor, v20, v67, v68);
    v95 = type;
    v19 = j_il2cpp_value_box_0(int_TypeInfo, &v95, v70, v71, v72, v73, v74, v75);
    v78 = v19;
    if ( !v19 || (v19 = sub_1C3E6A0(v19, v69->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v69[1].klass) <= 1 )
        goto LABEL_63;
      v69[1].fields = (System_String_Fields)v78;
      sub_1C3E508((CGThumbnailListItem_o *)&v69[1].fields, v78, v76, v77);
      v19 = StringLiteral_16119/*"_"*/;
      if ( StringLiteral_16119/*"_"*/ )
      {
        v19 = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v69->klass->_1.element_class);
        if ( !v19 )
          goto LABEL_64;
        v20 = StringLiteral_16119/*"_"*/;
      }
      else
      {
        v20 = 0;
      }
      if ( LODWORD(v69[1].klass) <= 2 )
        goto LABEL_63;
      v69[2].klass = (System_String_c *)v20;
      sub_1C3E508((CGThumbnailListItem_o *)&v69[2], v20, v79, v80);
      v94 = shiftIndex;
      v19 = j_il2cpp_value_box_0(int_TypeInfo, &v94, v81, v82, v83, v84, v85, v86);
      v89 = v19;
      if ( !v19 || (v19 = sub_1C3E6A0(v19, v69->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v69[1].klass) > 3 )
        {
          v69[2].monitor = (void *)v89;
          sub_1C3E508((CGThumbnailListItem_o *)&v69[2].monitor, v89, v87, v88);
          v13 = System_String__Concat_63674908((System_Object_array *)v69, 0);
          if ( v66 )
          {
            UISprite__set_spriteName(v66, v13, 0);
            return;
          }
LABEL_65:
          sub_1C3E7C0(v13, v14);
        }
LABEL_63:
        sub_1C3E7C8(v19, v20);
      }
    }
LABEL_64:
    v90 = sub_1C3E7E4(v19);
    sub_1C3E68C(v90, 0);
  }
}


void BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UISprite_o *hpframe; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UISprite_o *frontHpBart; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  UISprite_o *v29; // x21
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *backHpBar; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  UISprite_o *v38; // x20
  Il2CppObject *v39; // x0
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A3F8 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_21694/*"mp_framebg_"*/);
    sub_1C3E564(&StringLiteral_19061/*"enemymp_"*/);
    sub_1C3E564(&StringLiteral_21695/*"mp_mark_"*/);
    sub_1C3E564(&StringLiteral_21693/*"mp_frame_"*/);
    byte_4C5A3F8 = 1;
  }
  hpframe = this->fields.hpframe;
  v41 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, method, v3, v4, v5, v6, v7);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_21693/*"mp_frame_"*/, v11, 0);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v12, 0);
  frontHpBart = this->fields.frontHpBart;
  v40 = type;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v15, v16, v17, v18, v19, v20);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_19061/*"enemymp_"*/, v21, 0);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v12, 0);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
  {
    v29 = this->fields.splitSprite;
    v41 = type;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v23, v24, v25, v26, v27, v28);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_21695/*"mp_mark_"*/, v30, 0);
    if ( !v29 )
      goto LABEL_16;
    UISprite__set_spriteName(v29, v12, 0);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v38 = this->fields.backHpBar;
    v41 = type;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v32, v33, v34, v35, v36, v37);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_21694/*"mp_framebg_"*/, v39, 0);
    if ( v38 )
    {
      UISprite__set_spriteName(v38, v12, 0);
      return;
    }
LABEL_16:
    sub_1C3E7C0(v12, v13);
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
  if ( (byte_4C5A3F9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A3F9 = 1;
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
      sub_1C3E7C8(this, split);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v11, 0);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1C3E60C(UnityEngine_GameObject___TypeInfo, LODWORD(split->max_length));
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.splitList, v12, v13, v14);
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
        sub_1C3E508((CGThumbnailListItem_o *)((char *)v24 + i), (int32_t)v19, v22, v23);
        if ( (__int64)++v15 >= SLODWORD(split->max_length) )
          return;
      }
LABEL_24:
      sub_1C3E7C0(this, split);
    }
  }
}