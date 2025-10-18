void BattleServantChangeBarComponent___ctor(BattleServantChangeBarComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46603 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    byte_4C46603 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C37100(UnityEngine_GameObject___TypeInfo, 0);
  this->fields.splitList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantChangeBarComponent__setBarType(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        int32_t shiftIndex,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Component_object; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v10; // x22
  UISprite_o *frontHpBart; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Object_array *v14; // x24
  __int64 v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v18; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  int32_t bartype; // w1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x25
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x1
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
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x19
  __int64 v70; // x0
  int32_t v71; // [xsp+8h] [xbp-68h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C465FF & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C37058(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    sub_1C37058(&StringLiteral_20026/*"hp_gauge_"*/);
    byte_4C465FF = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__51154888(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v10 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_1C37100(object___TypeInfo, 4);
      if ( !AssetStorage )
        goto LABEL_69;
      v14 = (System_Object_array *)AssetStorage;
      v15 = StringLiteral_20026/*"hp_gauge_"*/;
      if ( StringLiteral_20026/*"hp_gauge_"*/ )
      {
        v15 = sub_1C37194(StringLiteral_20026/*"hp_gauge_"*/, v14->obj.klass->_1.element_class);
        if ( !v15 )
          goto LABEL_71;
        v16 = StringLiteral_20026/*"hp_gauge_"*/;
      }
      else
      {
        v16 = 0;
      }
      if ( !LODWORD(v14->max_length) )
        goto LABEL_70;
      v14->m_Items[0] = (Il2CppObject *)v16;
      sub_1C36FFC((CGThumbnailListItem_o *)v14->m_Items, v16, v12, v13);
      v72 = type;
      v15 = j_il2cpp_value_box_0(int_TypeInfo, &v72, v22, v23, v24, v25, v26, v27);
      v30 = (Il2CppObject *)v15;
      if ( v15 )
      {
        v15 = sub_1C37194(v15, v14->obj.klass->_1.element_class);
        if ( !v15 )
          goto LABEL_71;
      }
      if ( LODWORD(v14->max_length) <= 1 )
        goto LABEL_70;
      v14->m_Items[1] = v30;
      sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[1], (int32_t)v30, v28, v29);
      v15 = StringLiteral_16109/*"_"*/;
      if ( StringLiteral_16109/*"_"*/ )
      {
        v15 = sub_1C37194(StringLiteral_16109/*"_"*/, v14->obj.klass->_1.element_class);
        if ( !v15 )
          goto LABEL_71;
        v33 = StringLiteral_16109/*"_"*/;
      }
      else
      {
        v33 = 0;
      }
      if ( LODWORD(v14->max_length) <= 2 )
        goto LABEL_70;
      v14->m_Items[2] = (Il2CppObject *)v33;
      sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[2], v33, v31, v32);
      v71 = shiftIndex + 1;
      v15 = j_il2cpp_value_box_0(int_TypeInfo, &v71, v34, v35, v36, v37, v38, v39);
      v42 = (Il2CppObject *)v15;
      if ( v15 )
      {
        v15 = sub_1C37194(v15, v14->obj.klass->_1.element_class);
        if ( !v15 )
          goto LABEL_71;
      }
      if ( LODWORD(v14->max_length) <= 3 )
        goto LABEL_70;
      v14->m_Items[3] = v42;
      sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[3], (int32_t)v42, v40, v41);
      AssetStorage = (AssetData_o *)System_String__Concat_63600096(v14, 0);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
        v44 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C37100(object___TypeInfo, 4);
        if ( !AssetStorage )
          goto LABEL_69;
        v47 = AssetStorage;
        v15 = StringLiteral_20026/*"hp_gauge_"*/;
        if ( StringLiteral_20026/*"hp_gauge_"*/ )
        {
          v15 = sub_1C37194(StringLiteral_20026/*"hp_gauge_"*/, v47->klass->_1.element_class);
          if ( !v15 )
            goto LABEL_71;
          v48 = StringLiteral_20026/*"hp_gauge_"*/;
        }
        else
        {
          v48 = 0;
        }
        if ( !LODWORD(v47->fields.name) )
          goto LABEL_70;
        v47->fields.attrib = (struct System_String_o *)v48;
        sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.attrib, v48, v45, v46);
        v72 = type;
        v15 = j_il2cpp_value_box_0(int_TypeInfo, &v72, v49, v50, v51, v52, v53, v54);
        v57 = v15;
        if ( !v15 || (v15 = sub_1C37194(v15, v47->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v47->fields.name) <= 1 )
            goto LABEL_70;
          *(_QWORD *)&v47->fields.nowVersion = v57;
          sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.nowVersion, v57, v55, v56);
          v15 = StringLiteral_16109/*"_"*/;
          if ( StringLiteral_16109/*"_"*/ )
          {
            v15 = sub_1C37194(StringLiteral_16109/*"_"*/, v47->klass->_1.element_class);
            if ( !v15 )
              goto LABEL_71;
            v60 = StringLiteral_16109/*"_"*/;
          }
          else
          {
            v60 = 0;
          }
          if ( LODWORD(v47->fields.name) <= 2 )
            goto LABEL_70;
          *(_QWORD *)&v47->fields.size = v60;
          sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.size, v60, v58, v59);
          v71 = shiftIndex;
          v15 = j_il2cpp_value_box_0(int_TypeInfo, &v71, v61, v62, v63, v64, v65, v66);
          v69 = v15;
          if ( !v15 || (v15 = sub_1C37194(v15, v47->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v47->fields.name) > 3 )
            {
              v47->fields.keyType = (struct System_String_o *)v69;
              sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.keyType, v69, v67, v68);
              AssetStorage = (AssetData_o *)System_String__Concat_63600096((System_Object_array *)v47, 0);
              if ( v44 )
              {
                UISprite__set_spriteName(v44, (System_String_o *)AssetStorage, 0);
                return;
              }
LABEL_69:
              sub_1C372B4(AssetStorage);
            }
LABEL_70:
            sub_1C372BC(v15);
          }
        }
LABEL_71:
        v70 = sub_1C372D8(v15);
        sub_1C37180(v70, 0);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
      }
      v18 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v10, 0);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v19);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v20);
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
  UISprite_o *frontHpBart; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Object_array *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
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
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x24
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v68; // x21
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_String_o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x20
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x19
  __int64 v94; // x0
  int v95; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v96; // [xsp+10h] [xbp-70h] BYREF
  int v97; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v98; // [xsp+18h] [xbp-68h] BYREF
  int32_t v99; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C46600 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_20025/*"hp_frame_"*/);
    sub_1C37058(&StringLiteral_20026/*"hp_gauge_"*/);
    sub_1C37058(&StringLiteral_20024/*"hp_damage_"*/);
    byte_4C46600 = 1;
  }
  hpframe = this->fields.hpframe;
  v99 = type;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, *(_QWORD *)&shiftIndex, method, v4, v5, v6, v7);
  v13 = System_String__Concat((Il2CppObject *)StringLiteral_20025/*"hp_frame_"*/, v12, 0);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v13, 0);
  frontHpBart = this->fields.frontHpBart;
  v13 = (System_String_o *)sub_1C37100(object___TypeInfo, 4);
  if ( !v13 )
    goto LABEL_65;
  v17 = (System_Object_array *)v13;
  v18 = StringLiteral_20026/*"hp_gauge_"*/;
  if ( StringLiteral_20026/*"hp_gauge_"*/ )
  {
    v18 = sub_1C37194(StringLiteral_20026/*"hp_gauge_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
    v19 = StringLiteral_20026/*"hp_gauge_"*/;
  }
  else
  {
    v19 = 0;
  }
  if ( !LODWORD(v17->max_length) )
    goto LABEL_63;
  v17->m_Items[0] = (Il2CppObject *)v19;
  sub_1C36FFC((CGThumbnailListItem_o *)v17->m_Items, v19, v15, v16);
  v98 = type;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v98, v20, v21, v22, v23, v24, v25);
  v28 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1C37194(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
  }
  if ( LODWORD(v17->max_length) <= 1 )
    goto LABEL_63;
  v17->m_Items[1] = v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->m_Items[1], (int32_t)v28, v26, v27);
  v18 = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    v18 = sub_1C37194(StringLiteral_16109/*"_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
    v31 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v31 = 0;
  }
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_63;
  v17->m_Items[2] = (Il2CppObject *)v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->m_Items[2], v31, v29, v30);
  v97 = shiftIndex + 1;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v97, v32, v33, v34, v35, v36, v37);
  v40 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1C37194(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
  }
  if ( LODWORD(v17->max_length) <= 3 )
    goto LABEL_63;
  v17->m_Items[3] = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->m_Items[3], (int32_t)v40, v38, v39);
  v13 = System_String__Concat_63600096(v17, 0);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v13, 0);
  damageHpBart = this->fields.damageHpBart;
  v13 = (System_String_o *)sub_1C37100(object___TypeInfo, 4);
  if ( !v13 )
    goto LABEL_65;
  v44 = (System_Object_array *)v13;
  v18 = StringLiteral_20024/*"hp_damage_"*/;
  if ( StringLiteral_20024/*"hp_damage_"*/ )
  {
    v18 = sub_1C37194(StringLiteral_20024/*"hp_damage_"*/, v44->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
    v45 = StringLiteral_20024/*"hp_damage_"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( !LODWORD(v44->max_length) )
    goto LABEL_63;
  v44->m_Items[0] = (Il2CppObject *)v45;
  sub_1C36FFC((CGThumbnailListItem_o *)v44->m_Items, v45, v42, v43);
  v96 = type;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v96, v46, v47, v48, v49, v50, v51);
  v54 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1C37194(v18, v44->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
  }
  if ( LODWORD(v44->max_length) <= 1 )
    goto LABEL_63;
  v44->m_Items[1] = v54;
  sub_1C36FFC((CGThumbnailListItem_o *)&v44->m_Items[1], (int32_t)v54, v52, v53);
  v18 = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    v18 = sub_1C37194(StringLiteral_16109/*"_"*/, v44->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
    v57 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v57 = 0;
  }
  if ( LODWORD(v44->max_length) <= 2 )
    goto LABEL_63;
  v44->m_Items[2] = (Il2CppObject *)v57;
  sub_1C36FFC((CGThumbnailListItem_o *)&v44->m_Items[2], v57, v55, v56);
  v95 = shiftIndex + 1;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v95, v58, v59, v60, v61, v62, v63);
  v66 = (Il2CppObject *)v18;
  if ( v18 )
  {
    v18 = sub_1C37194(v18, v44->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_64;
  }
  if ( LODWORD(v44->max_length) <= 3 )
    goto LABEL_63;
  v44->m_Items[3] = v66;
  sub_1C36FFC((CGThumbnailListItem_o *)&v44->m_Items[3], (int32_t)v66, v64, v65);
  v13 = System_String__Concat_63600096(v44, 0);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v13, 0);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v68 = this->fields.backHpBar;
    v13 = (System_String_o *)sub_1C37100(object___TypeInfo, 4);
    if ( !v13 )
      goto LABEL_65;
    v71 = v13;
    v18 = StringLiteral_20026/*"hp_gauge_"*/;
    if ( StringLiteral_20026/*"hp_gauge_"*/ )
    {
      v18 = sub_1C37194(StringLiteral_20026/*"hp_gauge_"*/, v71->klass->_1.element_class);
      if ( !v18 )
        goto LABEL_64;
      v72 = StringLiteral_20026/*"hp_gauge_"*/;
    }
    else
    {
      v72 = 0;
    }
    if ( !LODWORD(v71[1].klass) )
      goto LABEL_63;
    v71[1].monitor = (void *)v72;
    sub_1C36FFC((CGThumbnailListItem_o *)&v71[1].monitor, v72, v69, v70);
    v99 = type;
    v18 = j_il2cpp_value_box_0(int_TypeInfo, &v99, v73, v74, v75, v76, v77, v78);
    v81 = v18;
    if ( !v18 || (v18 = sub_1C37194(v18, v71->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v71[1].klass) <= 1 )
        goto LABEL_63;
      v71[1].fields = (System_String_Fields)v81;
      sub_1C36FFC((CGThumbnailListItem_o *)&v71[1].fields, v81, v79, v80);
      v18 = StringLiteral_16109/*"_"*/;
      if ( StringLiteral_16109/*"_"*/ )
      {
        v18 = sub_1C37194(StringLiteral_16109/*"_"*/, v71->klass->_1.element_class);
        if ( !v18 )
          goto LABEL_64;
        v84 = StringLiteral_16109/*"_"*/;
      }
      else
      {
        v84 = 0;
      }
      if ( LODWORD(v71[1].klass) <= 2 )
        goto LABEL_63;
      v71[2].klass = (System_String_c *)v84;
      sub_1C36FFC((CGThumbnailListItem_o *)&v71[2], v84, v82, v83);
      v98 = shiftIndex;
      v18 = j_il2cpp_value_box_0(int_TypeInfo, &v98, v85, v86, v87, v88, v89, v90);
      v93 = v18;
      if ( !v18 || (v18 = sub_1C37194(v18, v71->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v71[1].klass) > 3 )
        {
          v71[2].monitor = (void *)v93;
          sub_1C36FFC((CGThumbnailListItem_o *)&v71[2].monitor, v93, v91, v92);
          v13 = System_String__Concat_63600096((System_Object_array *)v71, 0);
          if ( v68 )
          {
            UISprite__set_spriteName(v68, v13, 0);
            return;
          }
LABEL_65:
          sub_1C372B4(v13);
        }
LABEL_63:
        sub_1C372BC(v18);
      }
    }
LABEL_64:
    v94 = sub_1C372D8(v18);
    sub_1C37180(v94, 0);
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
  UISprite_o *frontHpBart; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  UISprite_o *v28; // x21
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *backHpBar; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  UISprite_o *v37; // x20
  Il2CppObject *v38; // x0
  int32_t v39; // [xsp+8h] [xbp-38h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C46601 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_21676/*"mp_framebg_"*/);
    sub_1C37058(&StringLiteral_19043/*"enemymp_"*/);
    sub_1C37058(&StringLiteral_21677/*"mp_mark_"*/);
    sub_1C37058(&StringLiteral_21675/*"mp_frame_"*/);
    byte_4C46601 = 1;
  }
  hpframe = this->fields.hpframe;
  v40 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, method, v3, v4, v5, v6, v7);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_21675/*"mp_frame_"*/, v11, 0);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v12, 0);
  frontHpBart = this->fields.frontHpBart;
  v39 = type;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v14, v15, v16, v17, v18, v19);
  v12 = System_String__Concat((Il2CppObject *)StringLiteral_19043/*"enemymp_"*/, v20, 0);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v12, 0);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0, 0) )
  {
    v28 = this->fields.splitSprite;
    v40 = type;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v22, v23, v24, v25, v26, v27);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_21677/*"mp_mark_"*/, v29, 0);
    if ( !v28 )
      goto LABEL_16;
    UISprite__set_spriteName(v28, v12, 0);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v37 = this->fields.backHpBar;
    v40 = type;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v31, v32, v33, v34, v35, v36);
    v12 = System_String__Concat((Il2CppObject *)StringLiteral_21676/*"mp_framebg_"*/, v38, 0);
    if ( v37 )
    {
      UISprite__set_spriteName(v37, v12, 0);
      return;
    }
LABEL_16:
    sub_1C372B4(v12);
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
  if ( (byte_4C46602 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46602 = 1;
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
      sub_1C372BC(this);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v11, 0);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1C37100(UnityEngine_GameObject___TypeInfo, LODWORD(split->max_length));
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.splitList, v12, v13, v14);
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
        sub_1C36FFC((CGThumbnailListItem_o *)((char *)v24 + i), (int32_t)v19, v22, v23);
        if ( (__int64)++v15 >= SLODWORD(split->max_length) )
          return;
      }
LABEL_24:
      sub_1C372B4(this);
    }
  }
}