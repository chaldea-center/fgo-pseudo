void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1927A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, method, v2);
    byte_4B1927A = 1;
  }
  this->fields.isBoss = 1;
  v4 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.splitList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v26; // x1
  Il2CppObject *Component_object; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v29; // x22
  UISprite_o *frontHpBart; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Object_array *v37; // x24
  __int64 v38; // x0
  int64_t v39; // x1
  __int64 v40; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v42; // x21
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  int32_t bartype; // w1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x25
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x25
  __int64 v66; // x1
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v68; // x20
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Object_array *v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x19
  __int64 v96; // x0
  int32_t v97; // [xsp+8h] [xbp-68h] BYREF
  int32_t v98; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B19276 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&type, *(_QWORD *)&shiftIndex);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&object___TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20184/*"hp_gauge_"*/, v23, v24);
    byte_4B19276 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&type);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__49237568(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v29 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_1BCA888(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v37 = (System_Object_array *)AssetStorage;
      v38 = StringLiteral_20184/*"hp_gauge_"*/;
      if ( StringLiteral_20184/*"hp_gauge_"*/ )
      {
        v38 = sub_1BCA91C(StringLiteral_20184/*"hp_gauge_"*/, v37->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_71;
        v39 = StringLiteral_20184/*"hp_gauge_"*/;
      }
      else
      {
        v39 = 0LL;
      }
      if ( !v37->max_length )
        goto LABEL_70;
      v37->m_Items[0] = (Il2CppObject *)v39;
      sub_1BCA784((PartyOrganizationUtility_o *)v37->m_Items, v39, v31, v32, v33, v34, v35, v36);
      v98 = type;
      v38 = j_il2cpp_value_box_0(int_TypeInfo, &v98);
      v52 = v38;
      if ( v38 )
      {
        v38 = sub_1BCA91C(v38, v37->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_71;
      }
      if ( v37->max_length <= 1 )
        goto LABEL_70;
      v37->m_Items[1] = (Il2CppObject *)v52;
      sub_1BCA784((PartyOrganizationUtility_o *)&v37->m_Items[1], v52, v46, v47, v48, v49, v50, v51);
      v38 = StringLiteral_16290/*"_"*/;
      if ( StringLiteral_16290/*"_"*/ )
      {
        v38 = sub_1BCA91C(StringLiteral_16290/*"_"*/, v37->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_71;
        v39 = StringLiteral_16290/*"_"*/;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v37->max_length <= 2 )
        goto LABEL_70;
      v37->m_Items[2] = (Il2CppObject *)v39;
      sub_1BCA784((PartyOrganizationUtility_o *)&v37->m_Items[2], v39, v53, v54, v55, v56, v57, v58);
      v97 = shiftIndex + 1;
      v38 = j_il2cpp_value_box_0(int_TypeInfo, &v97);
      v65 = v38;
      if ( v38 )
      {
        v38 = sub_1BCA91C(v38, v37->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_71;
      }
      if ( v37->max_length <= 3 )
        goto LABEL_70;
      v37->m_Items[3] = (Il2CppObject *)v65;
      sub_1BCA784((PartyOrganizationUtility_o *)&v37->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
      AssetStorage = (AssetData_o *)System_String__Concat_62412672(v37, 0LL);
      if ( !frontHpBart )
        goto LABEL_69;
      UISprite__set_spriteName(frontHpBart, (System_String_o *)AssetStorage, 0LL);
      backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
      if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
        v68 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1BCA888(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v75 = (System_Object_array *)AssetStorage;
        v38 = StringLiteral_20184/*"hp_gauge_"*/;
        if ( StringLiteral_20184/*"hp_gauge_"*/ )
        {
          v38 = sub_1BCA91C(StringLiteral_20184/*"hp_gauge_"*/, v75->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_71;
          v39 = StringLiteral_20184/*"hp_gauge_"*/;
        }
        else
        {
          v39 = 0LL;
        }
        if ( !v75->max_length )
          goto LABEL_70;
        v75->m_Items[0] = (Il2CppObject *)v39;
        sub_1BCA784((PartyOrganizationUtility_o *)v75->m_Items, v39, v69, v70, v71, v72, v73, v74);
        v98 = type;
        v38 = j_il2cpp_value_box_0(int_TypeInfo, &v98);
        v82 = v38;
        if ( !v38 || (v38 = sub_1BCA91C(v38, v75->obj.klass->_1.element_class)) != 0 )
        {
          if ( v75->max_length <= 1 )
            goto LABEL_70;
          v75->m_Items[1] = (Il2CppObject *)v82;
          sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[1], v82, v76, v77, v78, v79, v80, v81);
          v38 = StringLiteral_16290/*"_"*/;
          if ( StringLiteral_16290/*"_"*/ )
          {
            v38 = sub_1BCA91C(StringLiteral_16290/*"_"*/, v75->obj.klass->_1.element_class);
            if ( !v38 )
              goto LABEL_71;
            v39 = StringLiteral_16290/*"_"*/;
          }
          else
          {
            v39 = 0LL;
          }
          if ( v75->max_length <= 2 )
            goto LABEL_70;
          v75->m_Items[2] = (Il2CppObject *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[2], v39, v83, v84, v85, v86, v87, v88);
          v97 = shiftIndex;
          v38 = j_il2cpp_value_box_0(int_TypeInfo, &v97);
          v95 = v38;
          if ( !v38 || (v38 = sub_1BCA91C(v38, v75->obj.klass->_1.element_class)) != 0 )
          {
            if ( v75->max_length > 3 )
            {
              v75->m_Items[3] = (Il2CppObject *)v95;
              sub_1BCA784((PartyOrganizationUtility_o *)&v75->m_Items[3], v95, v89, v90, v91, v92, v93, v94);
              AssetStorage = (AssetData_o *)System_String__Concat_62412672(v75, 0LL);
              if ( v68 )
              {
                UISprite__set_spriteName(v68, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1BCAA3C(AssetStorage, v26);
            }
LABEL_70:
            sub_1BCAA44(v38, v39);
          }
        }
LABEL_71:
        v96 = sub_1BCAA60(v38);
        sub_1BCA908(v96, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
      }
      v42 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v29, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v43);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v44);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UISprite_o *hpframe; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  UISprite_o *frontHpBart; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Object_array *v30; // x23
  __int64 v31; // x0
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x24
  UISprite_o *damageHpBart; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Object_array *v60; // x23
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x24
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x24
  __int64 v81; // x1
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Object_array *v90; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x20
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x19
  __int64 v111; // x0
  int v112; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v113; // [xsp+10h] [xbp-70h] BYREF
  int v114; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v115; // [xsp+18h] [xbp-68h] BYREF
  int32_t v116; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B19277 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&shiftIndex);
    sub_1BCA7E0(&object___TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20183/*"hp_frame_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20184/*"hp_gauge_"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20182/*"hp_damage_"*/, v17, v18);
    byte_4B19277 = 1;
  }
  hpframe = this->fields.hpframe;
  v116 = type;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
  v21 = System_String__Concat((Il2CppObject *)StringLiteral_20183/*"hp_frame_"*/, v20, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v21, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v21 = (System_String_o *)sub_1BCA888(object___TypeInfo, 4LL);
  if ( !v21 )
    goto LABEL_65;
  v30 = (System_Object_array *)v21;
  v31 = StringLiteral_20184/*"hp_gauge_"*/;
  if ( StringLiteral_20184/*"hp_gauge_"*/ )
  {
    v31 = sub_1BCA91C(StringLiteral_20184/*"hp_gauge_"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
    v32 = StringLiteral_20184/*"hp_gauge_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v30->max_length )
    goto LABEL_63;
  v30->m_Items[0] = (Il2CppObject *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)v30->m_Items, v32, v24, v25, v26, v27, v28, v29);
  v115 = type;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v115);
  v39 = v31;
  if ( v31 )
  {
    v31 = sub_1BCA91C(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_63;
  v30->m_Items[1] = (Il2CppObject *)v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
  v31 = StringLiteral_16290/*"_"*/;
  if ( StringLiteral_16290/*"_"*/ )
  {
    v31 = sub_1BCA91C(StringLiteral_16290/*"_"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
    v32 = StringLiteral_16290/*"_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_63;
  v30->m_Items[2] = (Il2CppObject *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->m_Items[2], v32, v40, v41, v42, v43, v44, v45);
  v114 = shiftIndex + 1;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v114);
  v52 = v31;
  if ( v31 )
  {
    v31 = sub_1BCA91C(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_63;
  v30->m_Items[3] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  v21 = System_String__Concat_62412672(v30, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v21, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v21 = (System_String_o *)sub_1BCA888(object___TypeInfo, 4LL);
  if ( !v21 )
    goto LABEL_65;
  v60 = (System_Object_array *)v21;
  v31 = StringLiteral_20182/*"hp_damage_"*/;
  if ( StringLiteral_20182/*"hp_damage_"*/ )
  {
    v31 = sub_1BCA91C(StringLiteral_20182/*"hp_damage_"*/, v60->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
    v32 = StringLiteral_20182/*"hp_damage_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v60->max_length )
    goto LABEL_63;
  v60->m_Items[0] = (Il2CppObject *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)v60->m_Items, v32, v54, v55, v56, v57, v58, v59);
  v113 = type;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v113);
  v67 = v31;
  if ( v31 )
  {
    v31 = sub_1BCA91C(v31, v60->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
  }
  if ( v60->max_length <= 1 )
    goto LABEL_63;
  v60->m_Items[1] = (Il2CppObject *)v67;
  sub_1BCA784((PartyOrganizationUtility_o *)&v60->m_Items[1], v67, v61, v62, v63, v64, v65, v66);
  v31 = StringLiteral_16290/*"_"*/;
  if ( StringLiteral_16290/*"_"*/ )
  {
    v31 = sub_1BCA91C(StringLiteral_16290/*"_"*/, v60->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
    v32 = StringLiteral_16290/*"_"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v60->max_length <= 2 )
    goto LABEL_63;
  v60->m_Items[2] = (Il2CppObject *)v32;
  sub_1BCA784((PartyOrganizationUtility_o *)&v60->m_Items[2], v32, v68, v69, v70, v71, v72, v73);
  v112 = shiftIndex + 1;
  v31 = j_il2cpp_value_box_0(int_TypeInfo, &v112);
  v80 = v31;
  if ( v31 )
  {
    v31 = sub_1BCA91C(v31, v60->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_64;
  }
  if ( v60->max_length <= 3 )
    goto LABEL_63;
  v60->m_Items[3] = (Il2CppObject *)v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&v60->m_Items[3], v80, v74, v75, v76, v77, v78, v79);
  v21 = System_String__Concat_62412672(v60, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v21, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v83 = this->fields.backHpBar;
    v21 = (System_String_o *)sub_1BCA888(object___TypeInfo, 4LL);
    if ( !v21 )
      goto LABEL_65;
    v90 = (System_Object_array *)v21;
    v31 = StringLiteral_20184/*"hp_gauge_"*/;
    if ( StringLiteral_20184/*"hp_gauge_"*/ )
    {
      v31 = sub_1BCA91C(StringLiteral_20184/*"hp_gauge_"*/, v90->obj.klass->_1.element_class);
      if ( !v31 )
        goto LABEL_64;
      v32 = StringLiteral_20184/*"hp_gauge_"*/;
    }
    else
    {
      v32 = 0LL;
    }
    if ( !v90->max_length )
      goto LABEL_63;
    v90->m_Items[0] = (Il2CppObject *)v32;
    sub_1BCA784((PartyOrganizationUtility_o *)v90->m_Items, v32, v84, v85, v86, v87, v88, v89);
    v116 = type;
    v31 = j_il2cpp_value_box_0(int_TypeInfo, &v116);
    v97 = v31;
    if ( !v31 || (v31 = sub_1BCA91C(v31, v90->obj.klass->_1.element_class)) != 0 )
    {
      if ( v90->max_length <= 1 )
        goto LABEL_63;
      v90->m_Items[1] = (Il2CppObject *)v97;
      sub_1BCA784((PartyOrganizationUtility_o *)&v90->m_Items[1], v97, v91, v92, v93, v94, v95, v96);
      v31 = StringLiteral_16290/*"_"*/;
      if ( StringLiteral_16290/*"_"*/ )
      {
        v31 = sub_1BCA91C(StringLiteral_16290/*"_"*/, v90->obj.klass->_1.element_class);
        if ( !v31 )
          goto LABEL_64;
        v32 = StringLiteral_16290/*"_"*/;
      }
      else
      {
        v32 = 0LL;
      }
      if ( v90->max_length <= 2 )
        goto LABEL_63;
      v90->m_Items[2] = (Il2CppObject *)v32;
      sub_1BCA784((PartyOrganizationUtility_o *)&v90->m_Items[2], v32, v98, v99, v100, v101, v102, v103);
      v115 = shiftIndex;
      v31 = j_il2cpp_value_box_0(int_TypeInfo, &v115);
      v110 = v31;
      if ( !v31 || (v31 = sub_1BCA91C(v31, v90->obj.klass->_1.element_class)) != 0 )
      {
        if ( v90->max_length > 3 )
        {
          v90->m_Items[3] = (Il2CppObject *)v110;
          sub_1BCA784((PartyOrganizationUtility_o *)&v90->m_Items[3], v110, v104, v105, v106, v107, v108, v109);
          v21 = System_String__Concat_62412672(v90, 0LL);
          if ( v83 )
          {
            UISprite__set_spriteName(v83, v21, 0LL);
            return;
          }
LABEL_65:
          sub_1BCAA3C(v21, v22);
        }
LABEL_63:
        sub_1BCAA44(v31, v32);
      }
    }
LABEL_64:
    v111 = sub_1BCAA60(v31);
    sub_1BCA908(v111, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UISprite_o *hpframe; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  UISprite_o *frontHpBart; // x21
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v23; // x1
  UISprite_o *v24; // x21
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *backHpBar; // x21
  UISprite_o *v27; // x20
  Il2CppObject *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19278 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_21764/*"mp_framebg_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19226/*"enemymp_"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_21765/*"mp_mark_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_21763/*"mp_frame_"*/, v13, v14);
    byte_4B19278 = 1;
  }
  hpframe = this->fields.hpframe;
  v30 = type;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v17 = System_String__Concat((Il2CppObject *)StringLiteral_21763/*"mp_frame_"*/, v16, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v17, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v29 = type;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v17 = System_String__Concat((Il2CppObject *)StringLiteral_19226/*"enemymp_"*/, v20, 0LL);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v17, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v24 = this->fields.splitSprite;
    v30 = type;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v17 = System_String__Concat((Il2CppObject *)StringLiteral_21765/*"mp_mark_"*/, v25, 0LL);
    if ( !v24 )
      goto LABEL_16;
    UISprite__set_spriteName(v24, v17, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v27 = this->fields.backHpBar;
    v30 = type;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v17 = System_String__Concat((Il2CppObject *)StringLiteral_21764/*"mp_framebg_"*/, v28, 0LL);
    if ( v27 )
    {
      UISprite__set_spriteName(v27, v17, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(v17, v18);
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
  __int64 v8; // x2
  struct UnityEngine_GameObject_array *splitList; // x8
  struct UnityEngine_GameObject_array **p_splitList; // x22
  unsigned __int64 v11; // x25
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v13; // x23
  int64_t v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  unsigned __int64 v21; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v25; // x23
  int mWidth; // w26
  __int64 v27; // x27
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B19279 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, split, maxHp);
    this = (BattleServantChangeBarComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19279 = 1;
  }
  p_splitList = &v6->fields.splitList;
  splitList = v6->fields.splitList;
  if ( !splitList )
    goto LABEL_24;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = splitList->max_length;
    if ( (__int64)v11 >= (int)max_length )
      break;
    if ( v11 >= max_length )
LABEL_25:
      sub_1BCAA44(this, split);
    v13 = (UnityEngine_Object_o *)splitList->m_Items[v11];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, split);
    UnityEngine_Object__Destroy_70154244(v13, 0LL);
    splitList = *p_splitList;
    ++v11;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v14 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.splitList, v14, v15, v16, v17, v18, v19, v20);
    if ( (int)split->max_length >= 1 )
    {
      v21 = 0LL;
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
        if ( v21 >= split->max_length )
          goto LABEL_25;
        v25 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v27 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v35.fields.x = (double)mWidth * (double)(maxHp - v27) / (double)maxHp;
        v35.fields.y = 0.0;
        v35.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, 1, 0LL);
        v34 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v21 >= v34->max_length )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v34->obj.klass + i) = (Il2CppClass *)v25;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)v34 + i), (int64_t)v25, v28, v29, v30, v31, v32, v33);
        if ( (__int64)++v21 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1BCAA3C(this, split);
    }
  }
}