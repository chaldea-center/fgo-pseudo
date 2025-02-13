void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF6B7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    byte_4BDF6B7 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.splitList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Object_array *v19; // x24
  __int64 v20; // x0
  int64_t v21; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v23; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t bartype; // w1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x25
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Object_array *v61; // x22
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x19
  __int64 v88; // x0
  int32_t v89; // [xsp+8h] [xbp-68h] BYREF
  int32_t v90; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDF6B3 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_3256/*"Battle/Common"*/);
    sub_1C21E38(&StringLiteral_3274/*"BattleAssetUIAtlas"*/);
    sub_1C21E38(&StringLiteral_20325/*"hp_gauge_"*/);
    byte_4BDF6B3 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3256/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__49880776(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3274/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      AssetStorage = (AssetData_o *)sub_1C21EE0(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v19 = (System_Object_array *)AssetStorage;
      v20 = StringLiteral_20325/*"hp_gauge_"*/;
      if ( StringLiteral_20325/*"hp_gauge_"*/ )
      {
        v20 = sub_1C21F74(StringLiteral_20325/*"hp_gauge_"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
        v21 = StringLiteral_20325/*"hp_gauge_"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( !v19->max_length )
        goto LABEL_70;
      v19->m_Items[0] = (Il2CppObject *)v21;
      sub_1C21DDC((PartyOrganizationUtility_o *)v19->m_Items, v21, v13, v14, v15, v16, v17, v18);
      v90 = type;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &v90, v27, v28, v29);
      v36 = v20;
      if ( v20 )
      {
        v20 = sub_1C21F74(v20, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
      }
      if ( v19->max_length <= 1 )
        goto LABEL_70;
      v19->m_Items[1] = (Il2CppObject *)v36;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
      v20 = StringLiteral_16399/*"_"*/;
      if ( StringLiteral_16399/*"_"*/ )
      {
        v20 = sub_1C21F74(StringLiteral_16399/*"_"*/, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
        v21 = StringLiteral_16399/*"_"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v19->max_length <= 2 )
        goto LABEL_70;
      v19->m_Items[2] = (Il2CppObject *)v21;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[2], v21, v37, v38, v39, v40, v41, v42);
      v89 = shiftIndex + 1;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &v89, v43, v44, v45);
      v52 = v20;
      if ( v20 )
      {
        v20 = sub_1C21F74(v20, v19->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_71;
      }
      if ( v19->max_length <= 3 )
        goto LABEL_70;
      v19->m_Items[3] = (Il2CppObject *)v52;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
      AssetStorage = (AssetData_o *)System_String__Concat_63126928(v19, 0LL);
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
        v54 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C21EE0(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v61 = (System_Object_array *)AssetStorage;
        v20 = StringLiteral_20325/*"hp_gauge_"*/;
        if ( StringLiteral_20325/*"hp_gauge_"*/ )
        {
          v20 = sub_1C21F74(StringLiteral_20325/*"hp_gauge_"*/, v61->obj.klass->_1.element_class);
          if ( !v20 )
            goto LABEL_71;
          v21 = StringLiteral_20325/*"hp_gauge_"*/;
        }
        else
        {
          v21 = 0LL;
        }
        if ( !v61->max_length )
          goto LABEL_70;
        v61->m_Items[0] = (Il2CppObject *)v21;
        sub_1C21DDC((PartyOrganizationUtility_o *)v61->m_Items, v21, v55, v56, v57, v58, v59, v60);
        v90 = type;
        v20 = j_il2cpp_value_box_0(int_TypeInfo, &v90, v62, v63, v64);
        v71 = v20;
        if ( !v20 || (v20 = sub_1C21F74(v20, v61->obj.klass->_1.element_class)) != 0 )
        {
          if ( v61->max_length <= 1 )
            goto LABEL_70;
          v61->m_Items[1] = (Il2CppObject *)v71;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[1], v71, v65, v66, v67, v68, v69, v70);
          v20 = StringLiteral_16399/*"_"*/;
          if ( StringLiteral_16399/*"_"*/ )
          {
            v20 = sub_1C21F74(StringLiteral_16399/*"_"*/, v61->obj.klass->_1.element_class);
            if ( !v20 )
              goto LABEL_71;
            v21 = StringLiteral_16399/*"_"*/;
          }
          else
          {
            v21 = 0LL;
          }
          if ( v61->max_length <= 2 )
            goto LABEL_70;
          v61->m_Items[2] = (Il2CppObject *)v21;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[2], v21, v72, v73, v74, v75, v76, v77);
          v89 = shiftIndex;
          v20 = j_il2cpp_value_box_0(int_TypeInfo, &v89, v78, v79, v80);
          v87 = v20;
          if ( !v20 || (v20 = sub_1C21F74(v20, v61->obj.klass->_1.element_class)) != 0 )
          {
            if ( v61->max_length > 3 )
            {
              v61->m_Items[3] = (Il2CppObject *)v87;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[3], v87, v81, v82, v83, v84, v85, v86);
              AssetStorage = (AssetData_o *)System_String__Concat_63126928(v61, 0LL);
              if ( v54 )
              {
                UISprite__set_spriteName(v54, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1C22094(AssetStorage, v8);
            }
LABEL_70:
            sub_1C2209C(v20, v21);
          }
        }
LABEL_71:
        v88 = sub_1C220B8(v20);
        sub_1C21F60(v88, 0LL);
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
      v23 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v11, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v24);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v25);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Object_array *v19; // x23
  __int64 v20; // x0
  int64_t v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x24
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x24
  UISprite_o *damageHpBart; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Object_array *v55; // x23
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x24
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Object_array *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x20
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x19
  __int64 v117; // x0
  int v118; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v119; // [xsp+10h] [xbp-70h] BYREF
  int v120; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v121; // [xsp+18h] [xbp-68h] BYREF
  int32_t v122; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BDF6B4 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_20324/*"hp_frame_"*/);
    sub_1C21E38(&StringLiteral_20325/*"hp_gauge_"*/);
    sub_1C21E38(&StringLiteral_20323/*"hp_damage_"*/);
    byte_4BDF6B4 = 1;
  }
  hpframe = this->fields.hpframe;
  v122 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122, *(_QWORD *)&shiftIndex, method, v4);
  v10 = System_String__Concat((Il2CppObject *)StringLiteral_20324/*"hp_frame_"*/, v9, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v10, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v10 = (System_String_o *)sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !v10 )
    goto LABEL_65;
  v19 = (System_Object_array *)v10;
  v20 = StringLiteral_20325/*"hp_gauge_"*/;
  if ( StringLiteral_20325/*"hp_gauge_"*/ )
  {
    v20 = sub_1C21F74(StringLiteral_20325/*"hp_gauge_"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_20325/*"hp_gauge_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_63;
  v19->m_Items[0] = (Il2CppObject *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)v19->m_Items, v21, v13, v14, v15, v16, v17, v18);
  v121 = type;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v121, v22, v23, v24);
  v31 = v20;
  if ( v20 )
  {
    v20 = sub_1C21F74(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_63;
  v19->m_Items[1] = (Il2CppObject *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v20 = StringLiteral_16399/*"_"*/;
  if ( StringLiteral_16399/*"_"*/ )
  {
    v20 = sub_1C21F74(StringLiteral_16399/*"_"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_16399/*"_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_63;
  v19->m_Items[2] = (Il2CppObject *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[2], v21, v32, v33, v34, v35, v36, v37);
  v120 = shiftIndex + 1;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v120, v38, v39, v40);
  v47 = v20;
  if ( v20 )
  {
    v20 = sub_1C21F74(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_63;
  v19->m_Items[3] = (Il2CppObject *)v47;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  v10 = System_String__Concat_63126928(v19, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v10, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v10 = (System_String_o *)sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !v10 )
    goto LABEL_65;
  v55 = (System_Object_array *)v10;
  v20 = StringLiteral_20323/*"hp_damage_"*/;
  if ( StringLiteral_20323/*"hp_damage_"*/ )
  {
    v20 = sub_1C21F74(StringLiteral_20323/*"hp_damage_"*/, v55->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_20323/*"hp_damage_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v55->max_length )
    goto LABEL_63;
  v55->m_Items[0] = (Il2CppObject *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)v55->m_Items, v21, v49, v50, v51, v52, v53, v54);
  v119 = type;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v119, v56, v57, v58);
  v65 = v20;
  if ( v20 )
  {
    v20 = sub_1C21F74(v20, v55->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v55->max_length <= 1 )
    goto LABEL_63;
  v55->m_Items[1] = (Il2CppObject *)v65;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v55->m_Items[1], v65, v59, v60, v61, v62, v63, v64);
  v20 = StringLiteral_16399/*"_"*/;
  if ( StringLiteral_16399/*"_"*/ )
  {
    v20 = sub_1C21F74(StringLiteral_16399/*"_"*/, v55->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
    v21 = StringLiteral_16399/*"_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v55->max_length <= 2 )
    goto LABEL_63;
  v55->m_Items[2] = (Il2CppObject *)v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v55->m_Items[2], v21, v66, v67, v68, v69, v70, v71);
  v118 = shiftIndex + 1;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &v118, v72, v73, v74);
  v81 = v20;
  if ( v20 )
  {
    v20 = sub_1C21F74(v20, v55->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_64;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_63;
  v55->m_Items[3] = (Il2CppObject *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v55->m_Items[3], v81, v75, v76, v77, v78, v79, v80);
  v10 = System_String__Concat_63126928(v55, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v10, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v83 = this->fields.backHpBar;
    v10 = (System_String_o *)sub_1C21EE0(object___TypeInfo, 4LL);
    if ( !v10 )
      goto LABEL_65;
    v90 = (System_Object_array *)v10;
    v20 = StringLiteral_20325/*"hp_gauge_"*/;
    if ( StringLiteral_20325/*"hp_gauge_"*/ )
    {
      v20 = sub_1C21F74(StringLiteral_20325/*"hp_gauge_"*/, v90->obj.klass->_1.element_class);
      if ( !v20 )
        goto LABEL_64;
      v21 = StringLiteral_20325/*"hp_gauge_"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v90->max_length )
      goto LABEL_63;
    v90->m_Items[0] = (Il2CppObject *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)v90->m_Items, v21, v84, v85, v86, v87, v88, v89);
    v122 = type;
    v20 = j_il2cpp_value_box_0(int_TypeInfo, &v122, v91, v92, v93);
    v100 = v20;
    if ( !v20 || (v20 = sub_1C21F74(v20, v90->obj.klass->_1.element_class)) != 0 )
    {
      if ( v90->max_length <= 1 )
        goto LABEL_63;
      v90->m_Items[1] = (Il2CppObject *)v100;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v90->m_Items[1], v100, v94, v95, v96, v97, v98, v99);
      v20 = StringLiteral_16399/*"_"*/;
      if ( StringLiteral_16399/*"_"*/ )
      {
        v20 = sub_1C21F74(StringLiteral_16399/*"_"*/, v90->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_64;
        v21 = StringLiteral_16399/*"_"*/;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v90->max_length <= 2 )
        goto LABEL_63;
      v90->m_Items[2] = (Il2CppObject *)v21;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v90->m_Items[2], v21, v101, v102, v103, v104, v105, v106);
      v121 = shiftIndex;
      v20 = j_il2cpp_value_box_0(int_TypeInfo, &v121, v107, v108, v109);
      v116 = v20;
      if ( !v20 || (v20 = sub_1C21F74(v20, v90->obj.klass->_1.element_class)) != 0 )
      {
        if ( v90->max_length > 3 )
        {
          v90->m_Items[3] = (Il2CppObject *)v116;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v90->m_Items[3], v116, v110, v111, v112, v113, v114, v115);
          v10 = System_String__Concat_63126928(v90, 0LL);
          if ( v83 )
          {
            UISprite__set_spriteName(v83, v10, 0LL);
            return;
          }
LABEL_65:
          sub_1C22094(v10, v11);
        }
LABEL_63:
        sub_1C2209C(v20, v21);
      }
    }
LABEL_64:
    v117 = sub_1C220B8(v20);
    sub_1C21F60(v117, 0LL);
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

  if ( (byte_4BDF6B5 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_21918/*"mp_framebg_"*/);
    sub_1C21E38(&StringLiteral_19357/*"enemymp_"*/);
    sub_1C21E38(&StringLiteral_21919/*"mp_mark_"*/);
    sub_1C21E38(&StringLiteral_21917/*"mp_frame_"*/);
    byte_4BDF6B5 = 1;
  }
  hpframe = this->fields.hpframe;
  v29 = type;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, method, v3, v4);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_21917/*"mp_frame_"*/, v8, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v9, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v28 = type;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v12, v13, v14);
  v9 = System_String__Concat((Il2CppObject *)StringLiteral_19357/*"enemymp_"*/, v15, 0LL);
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
    v9 = System_String__Concat((Il2CppObject *)StringLiteral_21919/*"mp_mark_"*/, v21, 0LL);
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
    v9 = System_String__Concat((Il2CppObject *)StringLiteral_21918/*"mp_framebg_"*/, v27, 0LL);
    if ( v26 )
    {
      UISprite__set_spriteName(v26, v9, 0LL);
      return;
    }
LABEL_16:
    sub_1C22094(v9, v10);
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
  int64_t v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  unsigned __int64 v19; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v23; // x23
  int mWidth; // w26
  __int64 v25; // x27
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BDF6B6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    this = (BattleServantChangeBarComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6B6 = 1;
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
      sub_1C2209C(this, split);
    v11 = (UnityEngine_Object_o *)splitList->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v11, 0LL);
    splitList = *p_splitList;
    ++v9;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v12 = sub_1C21EE0(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.splitList, v12, v13, v14, v15, v16, v17, v18);
    if ( (int)split->max_length >= 1 )
    {
      v19 = 0LL;
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
        if ( v19 >= split->max_length )
          goto LABEL_25;
        v23 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v25 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v33.fields.x = (double)mWidth * (double)(maxHp - v25) / (double)maxHp;
        v33.fields.y = 0.0;
        v33.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, 1, 0LL);
        v32 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v19 >= v32->max_length )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v32->obj.klass + i) = (Il2CppClass *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v32 + i), (int64_t)v23, v26, v27, v28, v29, v30, v31);
        if ( (__int64)++v19 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1C22094(this, split);
    }
  }
}