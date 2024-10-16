void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB8D95 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_GameObject___TypeInfo, method);
    byte_4AB8D95 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1BAB4C4(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_Object_array *v24; // x24
  __int64 v25; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *splitSprite; // x21
  UnityEngine_Object_o *v28; // x21
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  int32_t bartype; // w1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x25
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  System_Object_array *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x19
  __int64 v65; // x0
  int32_t v66; // [xsp+8h] [xbp-68h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4AB8D91 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, *(_QWORD *)&type);
    sub_1BAB41C(&AssetManager_TypeInfo, v7);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1BAB41C(&int_TypeInfo, v9);
    sub_1BAB41C(&object___TypeInfo, v10);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_16153/*"_"*/, v12);
    sub_1BAB41C(&StringLiteral_3205/*"Battle/Common"*/, v13);
    sub_1BAB41C(&StringLiteral_3223/*"BattleAssetUIAtlas"*/, v14);
    sub_1BAB41C(&StringLiteral_20006/*"hp_gauge_"*/, v15);
    byte_4AB8D91 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3205/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__48916712(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3223/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      AssetStorage = (AssetData_o *)sub_1BAB4C4(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v24 = (System_Object_array *)AssetStorage;
      v25 = StringLiteral_20006/*"hp_gauge_"*/;
      if ( StringLiteral_20006/*"hp_gauge_"*/ )
      {
        v25 = sub_1BAB558(StringLiteral_20006/*"hp_gauge_"*/, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
        v26 = StringLiteral_20006/*"hp_gauge_"*/;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !v24->max_length )
        goto LABEL_70;
      v24->m_Items[0] = (Il2CppObject *)v26;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v24->m_Items, v26, v22, v23);
      v67 = type;
      v25 = j_il2cpp_value_box_0(int_TypeInfo, &v67, v32, v33, v34);
      v37 = (Il2CppObject *)v25;
      if ( v25 )
      {
        v25 = sub_1BAB558(v25, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
      }
      if ( v24->max_length <= 1 )
        goto LABEL_70;
      v24->m_Items[1] = v37;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v24->m_Items[1], (int32_t)v37, v35, v36);
      v25 = StringLiteral_16153/*"_"*/;
      if ( StringLiteral_16153/*"_"*/ )
      {
        v25 = sub_1BAB558(StringLiteral_16153/*"_"*/, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
        v26 = StringLiteral_16153/*"_"*/;
      }
      else
      {
        v26 = 0LL;
      }
      if ( v24->max_length <= 2 )
        goto LABEL_70;
      v24->m_Items[2] = (Il2CppObject *)v26;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v24->m_Items[2], v26, v38, v39);
      v66 = shiftIndex + 1;
      v25 = j_il2cpp_value_box_0(int_TypeInfo, &v66, v40, v41, v42);
      v45 = (Il2CppObject *)v25;
      if ( v25 )
      {
        v25 = sub_1BAB558(v25, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
      }
      if ( v24->max_length <= 3 )
        goto LABEL_70;
      v24->m_Items[3] = v45;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v24->m_Items[3], (int32_t)v45, v43, v44);
      AssetStorage = (AssetData_o *)System_String__Concat_62059580(v24, 0LL);
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
        v47 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1BAB4C4(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v50 = (System_Object_array *)AssetStorage;
        v25 = StringLiteral_20006/*"hp_gauge_"*/;
        if ( StringLiteral_20006/*"hp_gauge_"*/ )
        {
          v25 = sub_1BAB558(StringLiteral_20006/*"hp_gauge_"*/, v50->obj.klass->_1.element_class);
          if ( !v25 )
            goto LABEL_71;
          v26 = StringLiteral_20006/*"hp_gauge_"*/;
        }
        else
        {
          v26 = 0LL;
        }
        if ( !v50->max_length )
          goto LABEL_70;
        v50->m_Items[0] = (Il2CppObject *)v26;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v50->m_Items, v26, v48, v49);
        v67 = type;
        v25 = j_il2cpp_value_box_0(int_TypeInfo, &v67, v51, v52, v53);
        v56 = (Il2CppObject *)v25;
        if ( !v25 || (v25 = sub_1BAB558(v25, v50->obj.klass->_1.element_class)) != 0 )
        {
          if ( v50->max_length <= 1 )
            goto LABEL_70;
          v50->m_Items[1] = v56;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v50->m_Items[1], (int32_t)v56, v54, v55);
          v25 = StringLiteral_16153/*"_"*/;
          if ( StringLiteral_16153/*"_"*/ )
          {
            v25 = sub_1BAB558(StringLiteral_16153/*"_"*/, v50->obj.klass->_1.element_class);
            if ( !v25 )
              goto LABEL_71;
            v26 = StringLiteral_16153/*"_"*/;
          }
          else
          {
            v26 = 0LL;
          }
          if ( v50->max_length <= 2 )
            goto LABEL_70;
          v50->m_Items[2] = (Il2CppObject *)v26;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v50->m_Items[2], v26, v57, v58);
          v66 = shiftIndex;
          v25 = j_il2cpp_value_box_0(int_TypeInfo, &v66, v59, v60, v61);
          v64 = (Il2CppObject *)v25;
          if ( !v25 || (v25 = sub_1BAB558(v25, v50->obj.klass->_1.element_class)) != 0 )
          {
            if ( v50->max_length > 3 )
            {
              v50->m_Items[3] = v64;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v50->m_Items[3], (int32_t)v64, v62, v63);
              AssetStorage = (AssetData_o *)System_String__Concat_62059580(v50, 0LL);
              if ( v47 )
              {
                UISprite__set_spriteName(v47, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1BAB678(AssetStorage, v17);
            }
LABEL_70:
            sub_1BAB680(v25, v26);
          }
        }
LABEL_71:
        v65 = sub_1BAB69C(v25);
        sub_1BAB544(v65, 0LL);
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
      v28 = (UnityEngine_Object_o *)this->fields.backHpBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
      {
        AssetStorage = (AssetData_o *)this->fields.backHpBar;
        if ( !AssetStorage )
          goto LABEL_69;
        UISprite__set_atlas((UISprite_o *)AssetStorage, v20, 0LL);
      }
      bartype = this->fields.bartype;
      if ( this->fields.isBoss )
        BattleServantChangeBarComponent__setMpFrames(this, bartype, v29);
      else
        BattleServantChangeBarComponent__setHpFrames(this, bartype, shiftIndex, v30);
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x24
  UISprite_o *damageHpBart; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_Object_array *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  System_Object_array *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *v74; // x19
  __int64 v75; // x0
  int v76; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v77; // [xsp+10h] [xbp-70h] BYREF
  int v78; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v79; // [xsp+18h] [xbp-68h] BYREF
  int32_t v80; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4AB8D92 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&object___TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_16153/*"_"*/, v10);
    sub_1BAB41C(&StringLiteral_20005/*"hp_frame_"*/, v11);
    sub_1BAB41C(&StringLiteral_20006/*"hp_gauge_"*/, v12);
    sub_1BAB41C(&StringLiteral_20004/*"hp_damage_"*/, v13);
    byte_4AB8D92 = 1;
  }
  hpframe = this->fields.hpframe;
  v80 = type;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, *(_QWORD *)&shiftIndex, method, v4);
  v16 = System_String__Concat((Il2CppObject *)StringLiteral_20005/*"hp_frame_"*/, v15, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v16, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v16 = (System_String_o *)sub_1BAB4C4(object___TypeInfo, 4LL);
  if ( !v16 )
    goto LABEL_65;
  v21 = (System_Object_array *)v16;
  v22 = StringLiteral_20006/*"hp_gauge_"*/;
  if ( StringLiteral_20006/*"hp_gauge_"*/ )
  {
    v22 = sub_1BAB558(StringLiteral_20006/*"hp_gauge_"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_20006/*"hp_gauge_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_63;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v21->m_Items, v23, v19, v20);
  v79 = type;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v79, v24, v25, v26);
  v29 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BAB558(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_63;
  v21->m_Items[1] = v29;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v29, v27, v28);
  v22 = StringLiteral_16153/*"_"*/;
  if ( StringLiteral_16153/*"_"*/ )
  {
    v22 = sub_1BAB558(StringLiteral_16153/*"_"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_16153/*"_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_63;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], v23, v30, v31);
  v78 = shiftIndex + 1;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v78, v32, v33, v34);
  v37 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BAB558(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_63;
  v21->m_Items[3] = v37;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v37, v35, v36);
  v16 = System_String__Concat_62059580(v21, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v16, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v16 = (System_String_o *)sub_1BAB4C4(object___TypeInfo, 4LL);
  if ( !v16 )
    goto LABEL_65;
  v41 = (System_Object_array *)v16;
  v22 = StringLiteral_20004/*"hp_damage_"*/;
  if ( StringLiteral_20004/*"hp_damage_"*/ )
  {
    v22 = sub_1BAB558(StringLiteral_20004/*"hp_damage_"*/, v41->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_20004/*"hp_damage_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v41->max_length )
    goto LABEL_63;
  v41->m_Items[0] = (Il2CppObject *)v23;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v41->m_Items, v23, v39, v40);
  v77 = type;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v77, v42, v43, v44);
  v47 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BAB558(v22, v41->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v41->max_length <= 1 )
    goto LABEL_63;
  v41->m_Items[1] = v47;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v41->m_Items[1], (int32_t)v47, v45, v46);
  v22 = StringLiteral_16153/*"_"*/;
  if ( StringLiteral_16153/*"_"*/ )
  {
    v22 = sub_1BAB558(StringLiteral_16153/*"_"*/, v41->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_16153/*"_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v41->max_length <= 2 )
    goto LABEL_63;
  v41->m_Items[2] = (Il2CppObject *)v23;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v41->m_Items[2], v23, v48, v49);
  v76 = shiftIndex + 1;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v76, v50, v51, v52);
  v55 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BAB558(v22, v41->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v41->max_length <= 3 )
    goto LABEL_63;
  v41->m_Items[3] = v55;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v41->m_Items[3], (int32_t)v55, v53, v54);
  v16 = System_String__Concat_62059580(v41, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v16, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v57 = this->fields.backHpBar;
    v16 = (System_String_o *)sub_1BAB4C4(object___TypeInfo, 4LL);
    if ( !v16 )
      goto LABEL_65;
    v60 = (System_Object_array *)v16;
    v22 = StringLiteral_20006/*"hp_gauge_"*/;
    if ( StringLiteral_20006/*"hp_gauge_"*/ )
    {
      v22 = sub_1BAB558(StringLiteral_20006/*"hp_gauge_"*/, v60->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_64;
      v23 = StringLiteral_20006/*"hp_gauge_"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v60->max_length )
      goto LABEL_63;
    v60->m_Items[0] = (Il2CppObject *)v23;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v60->m_Items, v23, v58, v59);
    v80 = type;
    v22 = j_il2cpp_value_box_0(int_TypeInfo, &v80, v61, v62, v63);
    v66 = (Il2CppObject *)v22;
    if ( !v22 || (v22 = sub_1BAB558(v22, v60->obj.klass->_1.element_class)) != 0 )
    {
      if ( v60->max_length <= 1 )
        goto LABEL_63;
      v60->m_Items[1] = v66;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v60->m_Items[1], (int32_t)v66, v64, v65);
      v22 = StringLiteral_16153/*"_"*/;
      if ( StringLiteral_16153/*"_"*/ )
      {
        v22 = sub_1BAB558(StringLiteral_16153/*"_"*/, v60->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_64;
        v23 = StringLiteral_16153/*"_"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v60->max_length <= 2 )
        goto LABEL_63;
      v60->m_Items[2] = (Il2CppObject *)v23;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v60->m_Items[2], v23, v67, v68);
      v79 = shiftIndex;
      v22 = j_il2cpp_value_box_0(int_TypeInfo, &v79, v69, v70, v71);
      v74 = (Il2CppObject *)v22;
      if ( !v22 || (v22 = sub_1BAB558(v22, v60->obj.klass->_1.element_class)) != 0 )
      {
        if ( v60->max_length > 3 )
        {
          v60->m_Items[3] = v74;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v60->m_Items[3], (int32_t)v74, v72, v73);
          v16 = System_String__Concat_62059580(v60, 0LL);
          if ( v57 )
          {
            UISprite__set_spriteName(v57, v16, 0LL);
            return;
          }
LABEL_65:
          sub_1BAB678(v16, v17);
        }
LABEL_63:
        sub_1BAB680(v22, v23);
      }
    }
LABEL_64:
    v75 = sub_1BAB69C(v22);
    sub_1BAB544(v75, 0LL);
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

  if ( (byte_4AB8D93 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_21563/*"mp_framebg_"*/, v8);
    sub_1BAB41C(&StringLiteral_19059/*"enemymp_"*/, v9);
    sub_1BAB41C(&StringLiteral_21564/*"mp_mark_"*/, v10);
    sub_1BAB41C(&StringLiteral_21562/*"mp_frame_"*/, v11);
    byte_4AB8D93 = 1;
  }
  hpframe = this->fields.hpframe;
  v34 = type;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, method, v3, v4);
  v14 = System_String__Concat((Il2CppObject *)StringLiteral_21562/*"mp_frame_"*/, v13, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v14, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v33 = type;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v17, v18, v19);
  v14 = System_String__Concat((Il2CppObject *)StringLiteral_19059/*"enemymp_"*/, v20, 0LL);
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
    v14 = System_String__Concat((Il2CppObject *)StringLiteral_21564/*"mp_mark_"*/, v26, 0LL);
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
    v14 = System_String__Concat((Il2CppObject *)StringLiteral_21563/*"mp_framebg_"*/, v32, 0LL);
    if ( v31 )
    {
      UISprite__set_spriteName(v31, v14, 0LL);
      return;
    }
LABEL_16:
    sub_1BAB678(v14, v15);
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
  if ( (byte_4AB8D94 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_GameObject___TypeInfo, split);
    this = (BattleServantChangeBarComponent_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    byte_4AB8D94 = 1;
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
      sub_1BAB680(this, split);
    v12 = (UnityEngine_Object_o *)splitList->m_Items[v10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620(v12, 0LL);
    splitList = *p_splitList;
    ++v10;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v13 = sub_1BAB4C4(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v13;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->fields.splitList, v13, v14, v15);
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
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)((char *)v25 + i), (int32_t)v20, v23, v24);
        if ( (__int64)++v16 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1BAB678(this, split);
    }
  }
}