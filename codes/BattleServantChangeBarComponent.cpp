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

  if ( (byte_4BB781D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, method);
    byte_4BB781D = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1C13DCC(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.splitList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v17; // x1
  Il2CppObject *Component_object; // x0
  _BOOL4 isSuperBossShift; // w8
  UIAtlas_o *v20; // x22
  UISprite_o *frontHpBart; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Object_array *v28; // x24
  __int64 v29; // x0
  int64_t v30; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v32; // x21
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  int32_t bartype; // w1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x25
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Object_array *v70; // x22
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x21
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x19
  __int64 v97; // x0
  int32_t v98; // [xsp+8h] [xbp-68h] BYREF
  int32_t v99; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BB7819 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, *(_QWORD *)&type);
    sub_1C13D24(&AssetManager_TypeInfo, v7);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1C13D24(&int_TypeInfo, v9);
    sub_1C13D24(&object___TypeInfo, v10);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v12);
    sub_1C13D24(&StringLiteral_3244/*"Battle"*/, v13);
    sub_1C13D24(&StringLiteral_3262/*"Battle/UniqueCamera/"*/, v14);
    sub_1C13D24(&StringLiteral_20296/*"host"*/, v15);
    byte_4BB7819 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3244/*"Battle"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__49747248(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3262/*"Battle/UniqueCamera/"*/,
                                    (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    isSuperBossShift = this->fields.isSuperBossShift;
    v20 = (UIAtlas_o *)Component_object;
    this->fields.bartype = type;
    if ( isSuperBossShift )
    {
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      frontHpBart = this->fields.frontHpBart;
      AssetStorage = (AssetData_o *)sub_1C13DCC(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v28 = (System_Object_array *)AssetStorage;
      v29 = StringLiteral_20296/*"host"*/;
      if ( StringLiteral_20296/*"host"*/ )
      {
        v29 = sub_1C13E60(StringLiteral_20296/*"host"*/, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_71;
        v30 = StringLiteral_20296/*"host"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( !v28->max_length )
        goto LABEL_70;
      v28->m_Items[0] = (Il2CppObject *)v30;
      sub_1C13CC8((PartyOrganizationUtility_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
      v99 = type;
      v29 = j_il2cpp_value_box_0(int_TypeInfo, &v99, v36, v37, v38);
      v45 = v29;
      if ( v29 )
      {
        v29 = sub_1C13E60(v29, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_71;
      }
      if ( v28->max_length <= 1 )
        goto LABEL_70;
      v28->m_Items[1] = (Il2CppObject *)v45;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v28->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
      v29 = StringLiteral_16374/*"^c"*/;
      if ( StringLiteral_16374/*"^c"*/ )
      {
        v29 = sub_1C13E60(StringLiteral_16374/*"^c"*/, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_71;
        v30 = StringLiteral_16374/*"^c"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( v28->max_length <= 2 )
        goto LABEL_70;
      v28->m_Items[2] = (Il2CppObject *)v30;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v28->m_Items[2], v30, v46, v47, v48, v49, v50, v51);
      v98 = shiftIndex + 1;
      v29 = j_il2cpp_value_box_0(int_TypeInfo, &v98, v52, v53, v54);
      v61 = v29;
      if ( v29 )
      {
        v29 = sub_1C13E60(v29, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_71;
      }
      if ( v28->max_length <= 3 )
        goto LABEL_70;
      v28->m_Items[3] = (Il2CppObject *)v61;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v28->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
      AssetStorage = (AssetData_o *)System_String__Concat_62979396(v28, 0LL);
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
        UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
        v63 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1C13DCC(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v70 = (System_Object_array *)AssetStorage;
        v29 = StringLiteral_20296/*"host"*/;
        if ( StringLiteral_20296/*"host"*/ )
        {
          v29 = sub_1C13E60(StringLiteral_20296/*"host"*/, v70->obj.klass->_1.element_class);
          if ( !v29 )
            goto LABEL_71;
          v30 = StringLiteral_20296/*"host"*/;
        }
        else
        {
          v30 = 0LL;
        }
        if ( !v70->max_length )
          goto LABEL_70;
        v70->m_Items[0] = (Il2CppObject *)v30;
        sub_1C13CC8((PartyOrganizationUtility_o *)v70->m_Items, v30, v64, v65, v66, v67, v68, v69);
        v99 = type;
        v29 = j_il2cpp_value_box_0(int_TypeInfo, &v99, v71, v72, v73);
        v80 = v29;
        if ( !v29 || (v29 = sub_1C13E60(v29, v70->obj.klass->_1.element_class)) != 0 )
        {
          if ( v70->max_length <= 1 )
            goto LABEL_70;
          v70->m_Items[1] = (Il2CppObject *)v80;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v70->m_Items[1], v80, v74, v75, v76, v77, v78, v79);
          v29 = StringLiteral_16374/*"^c"*/;
          if ( StringLiteral_16374/*"^c"*/ )
          {
            v29 = sub_1C13E60(StringLiteral_16374/*"^c"*/, v70->obj.klass->_1.element_class);
            if ( !v29 )
              goto LABEL_71;
            v30 = StringLiteral_16374/*"^c"*/;
          }
          else
          {
            v30 = 0LL;
          }
          if ( v70->max_length <= 2 )
            goto LABEL_70;
          v70->m_Items[2] = (Il2CppObject *)v30;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v70->m_Items[2], v30, v81, v82, v83, v84, v85, v86);
          v98 = shiftIndex;
          v29 = j_il2cpp_value_box_0(int_TypeInfo, &v98, v87, v88, v89);
          v96 = v29;
          if ( !v29 || (v29 = sub_1C13E60(v29, v70->obj.klass->_1.element_class)) != 0 )
          {
            if ( v70->max_length > 3 )
            {
              v70->m_Items[3] = (Il2CppObject *)v96;
              sub_1C13CC8((PartyOrganizationUtility_o *)&v70->m_Items[3], v96, v90, v91, v92, v93, v94, v95);
              AssetStorage = (AssetData_o *)System_String__Concat_62979396(v70, 0LL);
              if ( v63 )
              {
                UISprite__set_spriteName(v63, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1C13F80(AssetStorage, v17);
            }
LABEL_70:
            sub_1C13F88(v29, v30);
          }
        }
LABEL_71:
        v97 = sub_1C13FA4(v29);
        sub_1C13E4C(v97, 0LL);
      }
    }
    else
    {
      AssetStorage = (AssetData_o *)this->fields.hpframe;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      AssetStorage = (AssetData_o *)this->fields.frontHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      AssetStorage = (AssetData_o *)this->fields.damageHpBart;
      if ( !AssetStorage )
        goto LABEL_69;
      UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.splitSprite;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      }
      v32 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v33);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v34);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UISprite_o *hpframe; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  UISprite_o *frontHpBart; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Object_array *v25; // x23
  __int64 v26; // x0
  int64_t v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x24
  UISprite_o *damageHpBart; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Object_array *v61; // x23
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x24
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
  int64_t v87; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v89; // x21
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Object_array *v96; // x22
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x20
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x19
  __int64 v123; // x0
  int v124; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v125; // [xsp+10h] [xbp-70h] BYREF
  int v126; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v127; // [xsp+18h] [xbp-68h] BYREF
  int32_t v128; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BB781A & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&type);
    sub_1C13D24(&object___TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v10);
    sub_1C13D24(&StringLiteral_20295/*"horizontalsliderthumbextent"*/, v11);
    sub_1C13D24(&StringLiteral_20296/*"host"*/, v12);
    sub_1C13D24(&StringLiteral_20294/*"horizontalsliderthumb"*/, v13);
    byte_4BB781A = 1;
  }
  hpframe = this->fields.hpframe;
  v128 = type;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128, *(_QWORD *)&shiftIndex, method, v4);
  v16 = System_String__Concat((Il2CppObject *)StringLiteral_20295/*"horizontalsliderthumbextent"*/, v15, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v16, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v16 = (System_String_o *)sub_1C13DCC(object___TypeInfo, 4LL);
  if ( !v16 )
    goto LABEL_65;
  v25 = (System_Object_array *)v16;
  v26 = StringLiteral_20296/*"host"*/;
  if ( StringLiteral_20296/*"host"*/ )
  {
    v26 = sub_1C13E60(StringLiteral_20296/*"host"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
    v27 = StringLiteral_20296/*"host"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_63;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v127 = type;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v127, v28, v29, v30);
  v37 = v26;
  if ( v26 )
  {
    v26 = sub_1C13E60(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_63;
  v25->m_Items[1] = (Il2CppObject *)v37;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v25->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v26 = StringLiteral_16374/*"^c"*/;
  if ( StringLiteral_16374/*"^c"*/ )
  {
    v26 = sub_1C13E60(StringLiteral_16374/*"^c"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
    v27 = StringLiteral_16374/*"^c"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_63;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v25->m_Items[2], v27, v38, v39, v40, v41, v42, v43);
  v126 = shiftIndex + 1;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v126, v44, v45, v46);
  v53 = v26;
  if ( v26 )
  {
    v26 = sub_1C13E60(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_63;
  v25->m_Items[3] = (Il2CppObject *)v53;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v16 = System_String__Concat_62979396(v25, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v16, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v16 = (System_String_o *)sub_1C13DCC(object___TypeInfo, 4LL);
  if ( !v16 )
    goto LABEL_65;
  v61 = (System_Object_array *)v16;
  v26 = StringLiteral_20294/*"horizontalsliderthumb"*/;
  if ( StringLiteral_20294/*"horizontalsliderthumb"*/ )
  {
    v26 = sub_1C13E60(StringLiteral_20294/*"horizontalsliderthumb"*/, v61->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
    v27 = StringLiteral_20294/*"horizontalsliderthumb"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v61->max_length )
    goto LABEL_63;
  v61->m_Items[0] = (Il2CppObject *)v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)v61->m_Items, v27, v55, v56, v57, v58, v59, v60);
  v125 = type;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v125, v62, v63, v64);
  v71 = v26;
  if ( v26 )
  {
    v26 = sub_1C13E60(v26, v61->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
  }
  if ( v61->max_length <= 1 )
    goto LABEL_63;
  v61->m_Items[1] = (Il2CppObject *)v71;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v61->m_Items[1], v71, v65, v66, v67, v68, v69, v70);
  v26 = StringLiteral_16374/*"^c"*/;
  if ( StringLiteral_16374/*"^c"*/ )
  {
    v26 = sub_1C13E60(StringLiteral_16374/*"^c"*/, v61->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
    v27 = StringLiteral_16374/*"^c"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v61->max_length <= 2 )
    goto LABEL_63;
  v61->m_Items[2] = (Il2CppObject *)v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v61->m_Items[2], v27, v72, v73, v74, v75, v76, v77);
  v124 = shiftIndex + 1;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v124, v78, v79, v80);
  v87 = v26;
  if ( v26 )
  {
    v26 = sub_1C13E60(v26, v61->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_64;
  }
  if ( v61->max_length <= 3 )
    goto LABEL_63;
  v61->m_Items[3] = (Il2CppObject *)v87;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v61->m_Items[3], v87, v81, v82, v83, v84, v85, v86);
  v16 = System_String__Concat_62979396(v61, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v16, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v89 = this->fields.backHpBar;
    v16 = (System_String_o *)sub_1C13DCC(object___TypeInfo, 4LL);
    if ( !v16 )
      goto LABEL_65;
    v96 = (System_Object_array *)v16;
    v26 = StringLiteral_20296/*"host"*/;
    if ( StringLiteral_20296/*"host"*/ )
    {
      v26 = sub_1C13E60(StringLiteral_20296/*"host"*/, v96->obj.klass->_1.element_class);
      if ( !v26 )
        goto LABEL_64;
      v27 = StringLiteral_20296/*"host"*/;
    }
    else
    {
      v27 = 0LL;
    }
    if ( !v96->max_length )
      goto LABEL_63;
    v96->m_Items[0] = (Il2CppObject *)v27;
    sub_1C13CC8((PartyOrganizationUtility_o *)v96->m_Items, v27, v90, v91, v92, v93, v94, v95);
    v128 = type;
    v26 = j_il2cpp_value_box_0(int_TypeInfo, &v128, v97, v98, v99);
    v106 = v26;
    if ( !v26 || (v26 = sub_1C13E60(v26, v96->obj.klass->_1.element_class)) != 0 )
    {
      if ( v96->max_length <= 1 )
        goto LABEL_63;
      v96->m_Items[1] = (Il2CppObject *)v106;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v96->m_Items[1], v106, v100, v101, v102, v103, v104, v105);
      v26 = StringLiteral_16374/*"^c"*/;
      if ( StringLiteral_16374/*"^c"*/ )
      {
        v26 = sub_1C13E60(StringLiteral_16374/*"^c"*/, v96->obj.klass->_1.element_class);
        if ( !v26 )
          goto LABEL_64;
        v27 = StringLiteral_16374/*"^c"*/;
      }
      else
      {
        v27 = 0LL;
      }
      if ( v96->max_length <= 2 )
        goto LABEL_63;
      v96->m_Items[2] = (Il2CppObject *)v27;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v96->m_Items[2], v27, v107, v108, v109, v110, v111, v112);
      v127 = shiftIndex;
      v26 = j_il2cpp_value_box_0(int_TypeInfo, &v127, v113, v114, v115);
      v122 = v26;
      if ( !v26 || (v26 = sub_1C13E60(v26, v96->obj.klass->_1.element_class)) != 0 )
      {
        if ( v96->max_length > 3 )
        {
          v96->m_Items[3] = (Il2CppObject *)v122;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v96->m_Items[3], v122, v116, v117, v118, v119, v120, v121);
          v16 = System_String__Concat_62979396(v96, 0LL);
          if ( v89 )
          {
            UISprite__set_spriteName(v89, v16, 0LL);
            return;
          }
LABEL_65:
          sub_1C13F80(v16, v17);
        }
LABEL_63:
        sub_1C13F88(v26, v27);
      }
    }
LABEL_64:
    v123 = sub_1C13FA4(v26);
    sub_1C13E4C(v123, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantChangeBarComponent__setMpFrames(
        BattleServantChangeBarComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UISprite_o *hpframe; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  UISprite_o *frontHpBart; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *splitSprite; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UISprite_o *v25; // x21
  Il2CppObject *v26; // x0
  UnityEngine_Object_o *backHpBar; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  UISprite_o *v31; // x20
  Il2CppObject *v32; // x0
  int32_t v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB781B & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&type);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_21886/*"move"*/, v8);
    sub_1C13D24(&StringLiteral_19328/*"enemyEntryMaxCountEachTurn"*/, v9);
    sub_1C13D24(&StringLiteral_21887/*"moveDown"*/, v10);
    sub_1C13D24(&StringLiteral_21885/*"mouse-wheel-scroll-size"*/, v11);
    byte_4BB781B = 1;
  }
  hpframe = this->fields.hpframe;
  v34 = type;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, method, v3, v4);
  v14 = System_String__Concat((Il2CppObject *)StringLiteral_21885/*"mouse-wheel-scroll-size"*/, v13, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v14, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v33 = type;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v17, v18, v19);
  v14 = System_String__Concat((Il2CppObject *)StringLiteral_19328/*"enemyEntryMaxCountEachTurn"*/, v20, 0LL);
  if ( !frontHpBart )
    goto LABEL_16;
  UISprite__set_spriteName(frontHpBart, v14, 0LL);
  splitSprite = (UnityEngine_Object_o *)this->fields.splitSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(splitSprite, 0LL, 0LL) )
  {
    v25 = this->fields.splitSprite;
    v34 = type;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v22, v23, v24);
    v14 = System_String__Concat((Il2CppObject *)StringLiteral_21887/*"moveDown"*/, v26, 0LL);
    if ( !v25 )
      goto LABEL_16;
    UISprite__set_spriteName(v25, v14, 0LL);
  }
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v31 = this->fields.backHpBar;
    v34 = type;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v28, v29, v30);
    v14 = System_String__Concat((Il2CppObject *)StringLiteral_21886/*"move"*/, v32, 0LL);
    if ( v31 )
    {
      UISprite__set_spriteName(v31, v14, 0LL);
      return;
    }
LABEL_16:
    sub_1C13F80(v14, v15);
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
  int64_t v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  unsigned __int64 v20; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v24; // x23
  int mWidth; // w26
  __int64 v26; // x27
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BB781C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, split);
    this = (BattleServantChangeBarComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB781C = 1;
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
      sub_1C13F88(this, split);
    v12 = (UnityEngine_Object_o *)splitList->m_Items[v10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v12, 0LL);
    splitList = *p_splitList;
    ++v10;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v13 = sub_1C13DCC(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v13;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v6->fields.splitList, v13, v14, v15, v16, v17, v18, v19);
    if ( (int)split->max_length >= 1 )
    {
      v20 = 0LL;
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
        if ( v20 >= split->max_length )
          goto LABEL_25;
        v24 = this;
        if ( !this )
          break;
        mWidth = frontHpBart->fields.mWidth;
        v26 = *(__int64 *)((char *)&split->obj.klass + i);
        this = (BattleServantChangeBarComponent_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
        if ( !this )
          break;
        v34.fields.x = (double)mWidth * (double)(maxHp - v26) / (double)maxHp;
        v34.fields.y = 0.0;
        v34.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v24, 1, 0LL);
        v33 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v20 >= v33->max_length )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v33->obj.klass + i) = (Il2CppClass *)v24;
        sub_1C13CC8((PartyOrganizationUtility_o *)((char *)v33 + i), (int64_t)v24, v27, v28, v29, v30, v31, v32);
        if ( (__int64)++v20 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1C13F80(this, split);
    }
  }
}