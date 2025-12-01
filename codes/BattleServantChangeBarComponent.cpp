void BattleServantChangeBarComponent___ctor(BattleServantChangeBarComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCAB19 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    byte_4CCAB19 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C71458(UnityEngine_GameObject___TypeInfo, 0);
  this->fields.splitList = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Object_array *v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v23; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t bartype; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  Il2CppObject *v47; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  AssetData_o *v56; // x22
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  __int64 v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x19
  __int64 v79; // x0
  int32_t v80; // [xsp+8h] [xbp-68h] BYREF
  int32_t v81; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CCAB15 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    sub_1C713B0(&StringLiteral_3081/*"Battle/Common"*/);
    sub_1C713B0(&StringLiteral_3101/*"BattleAssetUIAtlas"*/);
    sub_1C713B0(&StringLiteral_20102/*"hp_gauge_"*/);
    byte_4CCAB15 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3081/*"Battle/Common"*/, 0);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__51560868(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3101/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      AssetStorage = (AssetData_o *)sub_1C71458(object___TypeInfo, 4);
      if ( !AssetStorage )
        goto LABEL_69;
      v19 = (System_Object_array *)AssetStorage;
      v20 = StringLiteral_20102/*"hp_gauge_"*/;
      if ( StringLiteral_20102/*"hp_gauge_"*/ )
      {
        v20 = sub_1C714EC(StringLiteral_20102/*"hp_gauge_"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
        v21 = StringLiteral_20102/*"hp_gauge_"*/;
      }
      else
      {
        v21 = 0;
      }
      if ( !LODWORD(v19->max_length) )
        goto LABEL_70;
      v19->m_Items[0] = (Il2CppObject *)v21;
      sub_1C71354((GrandQuestFolderBoardItem_o *)v19->m_Items, v21, v13, v14, v15, v16, v17, v18);
      v81 = type;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &v81);
      v33 = (Il2CppObject *)v20;
      if ( v20 )
      {
        v20 = sub_1C714EC(v20, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
      }
      if ( LODWORD(v19->max_length) <= 1 )
        goto LABEL_70;
      v19->m_Items[1] = v33;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->m_Items[1], (int32_t)v33, v27, v28, v29, v30, v31, v32);
      v20 = StringLiteral_16109/*"_"*/;
      if ( StringLiteral_16109/*"_"*/ )
      {
        v20 = sub_1C714EC(StringLiteral_16109/*"_"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
        v40 = StringLiteral_16109/*"_"*/;
      }
      else
      {
        v40 = 0;
      }
      if ( LODWORD(v19->max_length) <= 2 )
        goto LABEL_70;
      v19->m_Items[2] = (Il2CppObject *)v40;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
      v80 = shiftIndex + 1;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &v80);
      v47 = (Il2CppObject *)v20;
      if ( v20 )
      {
        v20 = sub_1C714EC(v20, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
      }
      if ( LODWORD(v19->max_length) <= 3 )
        goto LABEL_70;
      v19->m_Items[3] = v47;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->m_Items[3], (int32_t)v47, v41, v42, v43, v44, v45, v46);
      AssetStorage = (AssetData_o *)System_String__Concat_64070180(v19, 0);
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
        v49 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C71458(object___TypeInfo, 4);
        if ( !AssetStorage )
          goto LABEL_69;
        v56 = AssetStorage;
        v20 = StringLiteral_20102/*"hp_gauge_"*/;
        if ( StringLiteral_20102/*"hp_gauge_"*/ )
        {
          v20 = sub_1C714EC(StringLiteral_20102/*"hp_gauge_"*/, v56->klass->_1.element_class);
          if ( !v20 )
            goto LABEL_71;
          v57 = StringLiteral_20102/*"hp_gauge_"*/;
        }
        else
        {
          v57 = 0;
        }
        if ( !LODWORD(v56->fields.name) )
          goto LABEL_70;
        v56->fields.attrib = (struct System_String_o *)v57;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->fields.attrib, v57, v50, v51, v52, v53, v54, v55);
        v81 = type;
        v20 = j_il2cpp_value_box_0(int_TypeInfo, &v81);
        v64 = v20;
        if ( !v20 || (v20 = sub_1C714EC(v20, v56->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v56->fields.name) <= 1 )
            goto LABEL_70;
          *(_QWORD *)&v56->fields.nowVersion = v64;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->fields.nowVersion, v64, v58, v59, v60, v61, v62, v63);
          v20 = StringLiteral_16109/*"_"*/;
          if ( StringLiteral_16109/*"_"*/ )
          {
            v20 = sub_1C714EC(StringLiteral_16109/*"_"*/, v56->klass->_1.element_class);
            if ( !v20 )
              goto LABEL_71;
            v71 = StringLiteral_16109/*"_"*/;
          }
          else
          {
            v71 = 0;
          }
          if ( LODWORD(v56->fields.name) <= 2 )
            goto LABEL_70;
          *(_QWORD *)&v56->fields.size = v71;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->fields.size, v71, v65, v66, v67, v68, v69, v70);
          v80 = shiftIndex;
          v20 = j_il2cpp_value_box_0(int_TypeInfo, &v80);
          v78 = v20;
          if ( !v20 || (v20 = sub_1C714EC(v20, v56->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v56->fields.name) > 3 )
            {
              v56->fields.keyType = (struct System_String_o *)v78;
              sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->fields.keyType, v78, v72, v73, v74, v75, v76, v77);
              AssetStorage = (AssetData_o *)System_String__Concat_64070180((System_Object_array *)v56, 0);
              if ( v49 )
              {
                UISprite__set_spriteName(v49, (System_String_o *)AssetStorage, 0);
                return;
              }
LABEL_69:
              sub_1C71608(AssetStorage, v8);
            }
LABEL_70:
            sub_1C71610(v20);
          }
        }
LABEL_71:
        v79 = sub_1C7162C(v20);
        sub_1C714D8(v79, 0);
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
      v23 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v24);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v25);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Object_array *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x24
  UISprite_o *damageHpBart; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Object_array *v49; // x23
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  Il2CppObject *v57; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  Il2CppObject *v71; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_String_o *v80; // x22
  __int64 v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x20
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  __int64 v102; // x19
  __int64 v103; // x0
  int v104; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v105; // [xsp+10h] [xbp-70h] BYREF
  int v106; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v107; // [xsp+18h] [xbp-68h] BYREF
  int32_t v108; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CCAB16 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    sub_1C713B0(&StringLiteral_20101/*"hp_frame_"*/);
    sub_1C713B0(&StringLiteral_20102/*"hp_gauge_"*/);
    sub_1C713B0(&StringLiteral_20100/*"hp_damage_"*/);
    byte_4CCAB16 = 1;
  }
  hpframe = this->fields.hpframe;
  v108 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_20101/*"hp_frame_"*/, v8, 0);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v9, 0);
  frontHpBart = this->fields.frontHpBart;
  v9 = (System_String_o *)sub_1C71458(object___TypeInfo, 4);
  if ( !v9 )
    goto LABEL_65;
  v18 = (System_Object_array *)v9;
  v19 = StringLiteral_20102/*"hp_gauge_"*/;
  if ( StringLiteral_20102/*"hp_gauge_"*/ )
  {
    v19 = sub_1C714EC(StringLiteral_20102/*"hp_gauge_"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v20 = StringLiteral_20102/*"hp_gauge_"*/;
  }
  else
  {
    v20 = 0;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_63;
  v18->m_Items[0] = (Il2CppObject *)v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v18->m_Items, v20, v12, v13, v14, v15, v16, v17);
  v107 = type;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v107);
  v27 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C714EC(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_63;
  v18->m_Items[1] = v27;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v18->m_Items[1], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v19 = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    v19 = sub_1C714EC(StringLiteral_16109/*"_"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v34 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_63;
  v18->m_Items[2] = (Il2CppObject *)v34;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v18->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  v106 = shiftIndex + 1;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v41 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C714EC(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v18->max_length) <= 3 )
    goto LABEL_63;
  v18->m_Items[3] = v41;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v18->m_Items[3], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v9 = System_String__Concat_64070180(v18, 0);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v9, 0);
  damageHpBart = this->fields.damageHpBart;
  v9 = (System_String_o *)sub_1C71458(object___TypeInfo, 4);
  if ( !v9 )
    goto LABEL_65;
  v49 = (System_Object_array *)v9;
  v19 = StringLiteral_20100/*"hp_damage_"*/;
  if ( StringLiteral_20100/*"hp_damage_"*/ )
  {
    v19 = sub_1C714EC(StringLiteral_20100/*"hp_damage_"*/, v49->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v50 = StringLiteral_20100/*"hp_damage_"*/;
  }
  else
  {
    v50 = 0;
  }
  if ( !LODWORD(v49->max_length) )
    goto LABEL_63;
  v49->m_Items[0] = (Il2CppObject *)v50;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v49->m_Items, v50, v43, v44, v45, v46, v47, v48);
  v105 = type;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v105);
  v57 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C714EC(v19, v49->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v49->max_length) <= 1 )
    goto LABEL_63;
  v49->m_Items[1] = v57;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v49->m_Items[1], (int32_t)v57, v51, v52, v53, v54, v55, v56);
  v19 = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    v19 = sub_1C714EC(StringLiteral_16109/*"_"*/, v49->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
    v64 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v64 = 0;
  }
  if ( LODWORD(v49->max_length) <= 2 )
    goto LABEL_63;
  v49->m_Items[2] = (Il2CppObject *)v64;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v49->m_Items[2], v64, v58, v59, v60, v61, v62, v63);
  v104 = shiftIndex + 1;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v104);
  v71 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_1C714EC(v19, v49->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_64;
  }
  if ( LODWORD(v49->max_length) <= 3 )
    goto LABEL_63;
  v49->m_Items[3] = v71;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v49->m_Items[3], (int32_t)v71, v65, v66, v67, v68, v69, v70);
  v9 = System_String__Concat_64070180(v49, 0);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v9, 0);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0, 0) )
  {
    v73 = this->fields.backHpBar;
    v9 = (System_String_o *)sub_1C71458(object___TypeInfo, 4);
    if ( !v9 )
      goto LABEL_65;
    v80 = v9;
    v19 = StringLiteral_20102/*"hp_gauge_"*/;
    if ( StringLiteral_20102/*"hp_gauge_"*/ )
    {
      v19 = sub_1C714EC(StringLiteral_20102/*"hp_gauge_"*/, v80->klass->_1.element_class);
      if ( !v19 )
        goto LABEL_64;
      v81 = StringLiteral_20102/*"hp_gauge_"*/;
    }
    else
    {
      v81 = 0;
    }
    if ( !LODWORD(v80[1].klass) )
      goto LABEL_63;
    v80[1].monitor = (void *)v81;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v80[1].monitor, v81, v74, v75, v76, v77, v78, v79);
    v108 = type;
    v19 = j_il2cpp_value_box_0(int_TypeInfo, &v108);
    v88 = v19;
    if ( !v19 || (v19 = sub_1C714EC(v19, v80->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v80[1].klass) <= 1 )
        goto LABEL_63;
      v80[1].fields = (System_String_Fields)v88;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v80[1].fields, v88, v82, v83, v84, v85, v86, v87);
      v19 = StringLiteral_16109/*"_"*/;
      if ( StringLiteral_16109/*"_"*/ )
      {
        v19 = sub_1C714EC(StringLiteral_16109/*"_"*/, v80->klass->_1.element_class);
        if ( !v19 )
          goto LABEL_64;
        v95 = StringLiteral_16109/*"_"*/;
      }
      else
      {
        v95 = 0;
      }
      if ( LODWORD(v80[1].klass) <= 2 )
        goto LABEL_63;
      v80[2].klass = (System_String_c *)v95;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v80[2], v95, v89, v90, v91, v92, v93, v94);
      v107 = shiftIndex;
      v19 = j_il2cpp_value_box_0(int_TypeInfo, &v107);
      v102 = v19;
      if ( !v19 || (v19 = sub_1C714EC(v19, v80->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v80[1].klass) > 3 )
        {
          v80[2].monitor = (void *)v102;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v80[2].monitor, v102, v96, v97, v98, v99, v100, v101);
          v9 = System_String__Concat_64070180((System_Object_array *)v80, 0);
          if ( v73 )
          {
            UISprite__set_spriteName(v73, v9, 0);
            return;
          }
LABEL_65:
          sub_1C71608(v9, v10);
        }
LABEL_63:
        sub_1C71610(v19);
      }
    }
LABEL_64:
    v103 = sub_1C7162C(v19);
    sub_1C714D8(v103, 0);
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

  if ( (byte_4CCAB17 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_21776/*"mp_framebg_"*/);
    sub_1C713B0(&StringLiteral_19102/*"enemymp_"*/);
    sub_1C713B0(&StringLiteral_21777/*"mp_mark_"*/);
    sub_1C713B0(&StringLiteral_21775/*"mp_frame_"*/);
    byte_4CCAB17 = 1;
  }
  hpframe = this->fields.hpframe;
  v18 = type;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_21775/*"mp_frame_"*/, v6, 0);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v7, 0);
  frontHpBart = this->fields.frontHpBart;
  v17 = type;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v7 = System_String__Concat((Il2CppObject *)StringLiteral_19102/*"enemymp_"*/, v10, 0);
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
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_21777/*"mp_mark_"*/, v13, 0);
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
    v7 = System_String__Concat((Il2CppObject *)StringLiteral_21776/*"mp_framebg_"*/, v16, 0);
    if ( v15 )
    {
      UISprite__set_spriteName(v15, v7, 0);
      return;
    }
LABEL_16:
    sub_1C71608(v7, v8);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned __int64 v19; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v23; // x23
  int mWidth; // w26
  __int64 v25; // x27
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4CCAB18 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB18 = 1;
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
      sub_1C71610(this);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v11, 0);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1C71458(UnityEngine_GameObject___TypeInfo, LODWORD(split->max_length));
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v6->fields.splitList, v12, v13, v14, v15, v16, v17, v18);
    if ( SLODWORD(split->max_length) >= 1 )
    {
      v19 = 0;
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
        if ( v19 >= LODWORD(split->max_length) )
          goto LABEL_25;
        v23 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v25 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
        if ( !this )
          break;
        v33.fields.x = (double)mWidth * (double)(maxHp - v25) / (double)maxHp;
        v33.fields.y = 0.0;
        v33.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 1, 0);
        v32 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v19 >= LODWORD(v32->max_length) )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v32->obj.klass + i) = (Il2CppClass *)v23;
        sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)v32 + i), (int32_t)v23, v26, v27, v28, v29, v30, v31);
        if ( (__int64)++v19 >= SLODWORD(split->max_length) )
          return;
      }
LABEL_24:
      sub_1C71608(this, split);
    }
  }
}