void __fastcall BattleServantChangeBarComponent___ctor(
        BattleServantChangeBarComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B054D8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, method);
    byte_4B054D8 = 1;
  }
  this->fields.isBoss = 1;
  v3 = (struct UnityEngine_GameObject_array *)sub_1BC30B0(UnityEngine_GameObject___TypeInfo, 0LL);
  this->fields.splitList = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.splitList, (int32_t)v3, v4, v5);
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
  __int64 v22; // x2
  const MethodInfo *v23; // x3
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
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x25
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x25
  UnityEngine_Object_o *backHpBar; // x23
  UISprite_o *v44; // x20
  const MethodInfo *v45; // x3
  System_Object_array *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x21
  const MethodInfo *v52; // x3
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x19
  __int64 v58; // x0
  int32_t v59; // [xsp+8h] [xbp-68h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B054D4 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, *(_QWORD *)&type);
    sub_1BC3008(&AssetManager_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&object___TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v12);
    sub_1BC3008(&StringLiteral_3066/*"Battle/Common"*/, v13);
    sub_1BC3008(&StringLiteral_3084/*"BattleAssetUIAtlas"*/, v14);
    sub_1BC3008(&StringLiteral_19832/*"hp_gauge_"*/, v15);
    byte_4B054D4 = 1;
  }
  if ( !this->fields.isSuperBossNormal || this->fields.isSuperBossShift )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3066/*"Battle/Common"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_69;
    AssetStorage = (AssetData_o *)AssetData__GetObject_object__50213776(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3084/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
    if ( !AssetStorage )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)AssetStorage,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
      AssetStorage = (AssetData_o *)sub_1BC30B0(object___TypeInfo, 4LL);
      if ( !AssetStorage )
        goto LABEL_69;
      v24 = (System_Object_array *)AssetStorage;
      v25 = StringLiteral_19832/*"hp_gauge_"*/;
      if ( StringLiteral_19832/*"hp_gauge_"*/ )
      {
        v25 = sub_1BC3144(StringLiteral_19832/*"hp_gauge_"*/, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
        v26 = StringLiteral_19832/*"hp_gauge_"*/;
      }
      else
      {
        v26 = 0LL;
      }
      if ( !v24->max_length )
        goto LABEL_70;
      v24->m_Items[0] = (Il2CppObject *)v26;
      sub_1BC2FAC((CGThumbnailListItem_o *)v24->m_Items, v26, v22, v23);
      v60 = type;
      v25 = j_il2cpp_value_box_0(int_TypeInfo, &v60, v32, v33, v34);
      v36 = (Il2CppObject *)v25;
      if ( v25 )
      {
        v25 = sub_1BC3144(v25, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
      }
      if ( v24->max_length <= 1 )
        goto LABEL_70;
      v24->m_Items[1] = v36;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v24->m_Items[1], (int32_t)v36, v22, v35);
      v25 = StringLiteral_15961/*"_"*/;
      if ( StringLiteral_15961/*"_"*/ )
      {
        v25 = sub_1BC3144(StringLiteral_15961/*"_"*/, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
        v26 = StringLiteral_15961/*"_"*/;
      }
      else
      {
        v26 = 0LL;
      }
      if ( v24->max_length <= 2 )
        goto LABEL_70;
      v24->m_Items[2] = (Il2CppObject *)v26;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v24->m_Items[2], v26, v22, v37);
      v59 = shiftIndex + 1;
      v25 = j_il2cpp_value_box_0(int_TypeInfo, &v59, v38, v39, v40);
      v42 = (Il2CppObject *)v25;
      if ( v25 )
      {
        v25 = sub_1BC3144(v25, v24->obj.klass->_1.element_class);
        if ( !v25 )
          goto LABEL_71;
      }
      if ( v24->max_length <= 3 )
        goto LABEL_70;
      v24->m_Items[3] = v42;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v24->m_Items[3], (int32_t)v42, v22, v41);
      AssetStorage = (AssetData_o *)System_String__Concat_62387088(v24, 0LL);
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
        v44 = this->fields.backHpBar;
        AssetStorage = (AssetData_o *)sub_1BC30B0(object___TypeInfo, 4LL);
        if ( !AssetStorage )
          goto LABEL_69;
        v46 = (System_Object_array *)AssetStorage;
        v25 = StringLiteral_19832/*"hp_gauge_"*/;
        if ( StringLiteral_19832/*"hp_gauge_"*/ )
        {
          v25 = sub_1BC3144(StringLiteral_19832/*"hp_gauge_"*/, v46->obj.klass->_1.element_class);
          if ( !v25 )
            goto LABEL_71;
          v26 = StringLiteral_19832/*"hp_gauge_"*/;
        }
        else
        {
          v26 = 0LL;
        }
        if ( !v46->max_length )
          goto LABEL_70;
        v46->m_Items[0] = (Il2CppObject *)v26;
        sub_1BC2FAC((CGThumbnailListItem_o *)v46->m_Items, v26, v22, v45);
        v60 = type;
        v25 = j_il2cpp_value_box_0(int_TypeInfo, &v60, v47, v48, v49);
        v51 = (Il2CppObject *)v25;
        if ( !v25 || (v25 = sub_1BC3144(v25, v46->obj.klass->_1.element_class)) != 0 )
        {
          if ( v46->max_length <= 1 )
            goto LABEL_70;
          v46->m_Items[1] = v51;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v51, v22, v50);
          v25 = StringLiteral_15961/*"_"*/;
          if ( StringLiteral_15961/*"_"*/ )
          {
            v25 = sub_1BC3144(StringLiteral_15961/*"_"*/, v46->obj.klass->_1.element_class);
            if ( !v25 )
              goto LABEL_71;
            v26 = StringLiteral_15961/*"_"*/;
          }
          else
          {
            v26 = 0LL;
          }
          if ( v46->max_length <= 2 )
            goto LABEL_70;
          v46->m_Items[2] = (Il2CppObject *)v26;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v46->m_Items[2], v26, v22, v52);
          v59 = shiftIndex;
          v25 = j_il2cpp_value_box_0(int_TypeInfo, &v59, v53, v54, v55);
          v57 = (Il2CppObject *)v25;
          if ( !v25 || (v25 = sub_1BC3144(v25, v46->obj.klass->_1.element_class)) != 0 )
          {
            if ( v46->max_length > 3 )
            {
              v46->m_Items[3] = v57;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v46->m_Items[3], (int32_t)v57, v22, v56);
              AssetStorage = (AssetData_o *)System_String__Concat_62387088(v46, 0LL);
              if ( v44 )
              {
                UISprite__set_spriteName(v44, (System_String_o *)AssetStorage, 0LL);
                return;
              }
LABEL_69:
              sub_1BC3264(AssetStorage, v17);
            }
LABEL_70:
            sub_1BC326C(v25, v26, v22);
          }
        }
LABEL_71:
        v58 = sub_1BC3288(v25);
        sub_1BC3130(v58, 0LL);
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
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  System_Object_array *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x24
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x24
  UISprite_o *damageHpBart; // x22
  const MethodInfo *v36; // x3
  System_Object_array *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x24
  const MethodInfo *v43; // x3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x24
  UnityEngine_Object_o *backHpBar; // x22
  UISprite_o *v50; // x21
  const MethodInfo *v51; // x3
  System_Object_array *v52; // x22
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x20
  const MethodInfo *v58; // x3
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x19
  __int64 v64; // x0
  int v65; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v66; // [xsp+10h] [xbp-70h] BYREF
  int v67; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v68; // [xsp+18h] [xbp-68h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B054D5 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&object___TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v10);
    sub_1BC3008(&StringLiteral_19831/*"hp_frame_"*/, v11);
    sub_1BC3008(&StringLiteral_19832/*"hp_gauge_"*/, v12);
    sub_1BC3008(&StringLiteral_19830/*"hp_damage_"*/, v13);
    byte_4B054D5 = 1;
  }
  hpframe = this->fields.hpframe;
  v69 = type;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, *(_QWORD *)&shiftIndex, method, v4);
  v16 = System_String__Concat((Il2CppObject *)StringLiteral_19831/*"hp_frame_"*/, v15, 0LL);
  if ( !hpframe )
    goto LABEL_65;
  UISprite__set_spriteName(hpframe, v16, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v16 = (System_String_o *)sub_1BC30B0(object___TypeInfo, 4LL);
  if ( !v16 )
    goto LABEL_65;
  v21 = (System_Object_array *)v16;
  v22 = StringLiteral_19832/*"hp_gauge_"*/;
  if ( StringLiteral_19832/*"hp_gauge_"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_19832/*"hp_gauge_"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_19832/*"hp_gauge_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_63;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)v21->m_Items, v23, v19, v20);
  v68 = type;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v68, v24, v25, v26);
  v28 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_63;
  v21->m_Items[1] = v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v28, v19, v27);
  v22 = StringLiteral_15961/*"_"*/;
  if ( StringLiteral_15961/*"_"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_15961/*"_"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_15961/*"_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_63;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[2], v23, v19, v29);
  v67 = shiftIndex + 1;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v67, v30, v31, v32);
  v34 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_63;
  v21->m_Items[3] = v34;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v21->m_Items[3], (int32_t)v34, v19, v33);
  v16 = System_String__Concat_62387088(v21, 0LL);
  if ( !frontHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(frontHpBart, v16, 0LL);
  damageHpBart = this->fields.damageHpBart;
  v16 = (System_String_o *)sub_1BC30B0(object___TypeInfo, 4LL);
  if ( !v16 )
    goto LABEL_65;
  v37 = (System_Object_array *)v16;
  v22 = StringLiteral_19830/*"hp_damage_"*/;
  if ( StringLiteral_19830/*"hp_damage_"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_19830/*"hp_damage_"*/, v37->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_19830/*"hp_damage_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v37->max_length )
    goto LABEL_63;
  v37->m_Items[0] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)v37->m_Items, v23, v19, v36);
  v66 = type;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v66, v38, v39, v40);
  v42 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v37->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v37->max_length <= 1 )
    goto LABEL_63;
  v37->m_Items[1] = v42;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v37->m_Items[1], (int32_t)v42, v19, v41);
  v22 = StringLiteral_15961/*"_"*/;
  if ( StringLiteral_15961/*"_"*/ )
  {
    v22 = sub_1BC3144(StringLiteral_15961/*"_"*/, v37->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
    v23 = StringLiteral_15961/*"_"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v37->max_length <= 2 )
    goto LABEL_63;
  v37->m_Items[2] = (Il2CppObject *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v37->m_Items[2], v23, v19, v43);
  v65 = shiftIndex + 1;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v65, v44, v45, v46);
  v48 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1BC3144(v22, v37->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_64;
  }
  if ( v37->max_length <= 3 )
    goto LABEL_63;
  v37->m_Items[3] = v48;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v37->m_Items[3], (int32_t)v48, v19, v47);
  v16 = System_String__Concat_62387088(v37, 0LL);
  if ( !damageHpBart )
    goto LABEL_65;
  UISprite__set_spriteName(damageHpBart, v16, 0LL);
  backHpBar = (UnityEngine_Object_o *)this->fields.backHpBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backHpBar, 0LL, 0LL) )
  {
    v50 = this->fields.backHpBar;
    v16 = (System_String_o *)sub_1BC30B0(object___TypeInfo, 4LL);
    if ( !v16 )
      goto LABEL_65;
    v52 = (System_Object_array *)v16;
    v22 = StringLiteral_19832/*"hp_gauge_"*/;
    if ( StringLiteral_19832/*"hp_gauge_"*/ )
    {
      v22 = sub_1BC3144(StringLiteral_19832/*"hp_gauge_"*/, v52->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_64;
      v23 = StringLiteral_19832/*"hp_gauge_"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v52->max_length )
      goto LABEL_63;
    v52->m_Items[0] = (Il2CppObject *)v23;
    sub_1BC2FAC((CGThumbnailListItem_o *)v52->m_Items, v23, v19, v51);
    v69 = type;
    v22 = j_il2cpp_value_box_0(int_TypeInfo, &v69, v53, v54, v55);
    v57 = (Il2CppObject *)v22;
    if ( !v22 || (v22 = sub_1BC3144(v22, v52->obj.klass->_1.element_class)) != 0 )
    {
      if ( v52->max_length <= 1 )
        goto LABEL_63;
      v52->m_Items[1] = v57;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[1], (int32_t)v57, v19, v56);
      v22 = StringLiteral_15961/*"_"*/;
      if ( StringLiteral_15961/*"_"*/ )
      {
        v22 = sub_1BC3144(StringLiteral_15961/*"_"*/, v52->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_64;
        v23 = StringLiteral_15961/*"_"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v52->max_length <= 2 )
        goto LABEL_63;
      v52->m_Items[2] = (Il2CppObject *)v23;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[2], v23, v19, v58);
      v68 = shiftIndex;
      v22 = j_il2cpp_value_box_0(int_TypeInfo, &v68, v59, v60, v61);
      v63 = (Il2CppObject *)v22;
      if ( !v22 || (v22 = sub_1BC3144(v22, v52->obj.klass->_1.element_class)) != 0 )
      {
        if ( v52->max_length > 3 )
        {
          v52->m_Items[3] = v63;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v52->m_Items[3], (int32_t)v63, v19, v62);
          v16 = System_String__Concat_62387088(v52, 0LL);
          if ( v50 )
          {
            UISprite__set_spriteName(v50, v16, 0LL);
            return;
          }
LABEL_65:
          sub_1BC3264(v16, v17);
        }
LABEL_63:
        sub_1BC326C(v22, v23, v19);
      }
    }
LABEL_64:
    v64 = sub_1BC3288(v22);
    sub_1BC3130(v64, 0LL);
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

  if ( (byte_4B054D6 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_21461/*"mp_framebg_"*/, v8);
    sub_1BC3008(&StringLiteral_18861/*"enemymp_"*/, v9);
    sub_1BC3008(&StringLiteral_21462/*"mp_mark_"*/, v10);
    sub_1BC3008(&StringLiteral_21460/*"mp_frame_"*/, v11);
    byte_4B054D6 = 1;
  }
  hpframe = this->fields.hpframe;
  v34 = type;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, method, v3, v4);
  v14 = System_String__Concat((Il2CppObject *)StringLiteral_21460/*"mp_frame_"*/, v13, 0LL);
  if ( !hpframe )
    goto LABEL_16;
  UISprite__set_spriteName(hpframe, v14, 0LL);
  frontHpBart = this->fields.frontHpBart;
  v33 = type;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v17, v18, v19);
  v14 = System_String__Concat((Il2CppObject *)StringLiteral_18861/*"enemymp_"*/, v20, 0LL);
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
    v14 = System_String__Concat((Il2CppObject *)StringLiteral_21462/*"mp_mark_"*/, v26, 0LL);
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
    v14 = System_String__Concat((Il2CppObject *)StringLiteral_21461/*"mp_framebg_"*/, v32, 0LL);
    if ( v31 )
    {
      UISprite__set_spriteName(v31, v14, 0LL);
      return;
    }
LABEL_16:
    sub_1BC3264(v14, v15);
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
  const MethodInfo *v15; // x3
  unsigned __int64 v16; // x24
  __int64 i; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *frontHpBart; // x8
  BattleServantChangeBarComponent_o *v20; // x23
  int mWidth; // w26
  __int64 v22; // x27
  const MethodInfo *v23; // x3
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B054D7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, split);
    this = (BattleServantChangeBarComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B054D7 = 1;
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
      sub_1BC326C(this, split, maxHp);
    v12 = (UnityEngine_Object_o *)splitList->m_Items[v10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v12, 0LL);
    splitList = *p_splitList;
    ++v10;
    if ( !*p_splitList )
      goto LABEL_24;
  }
  if ( maxHp >= 1 )
  {
    if ( !split )
      goto LABEL_24;
    v13 = sub_1BC30B0(UnityEngine_GameObject___TypeInfo, split->max_length);
    *p_splitList = (struct UnityEngine_GameObject_array *)v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.splitList, v13, v14, v15);
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
        v25.fields.x = (double)mWidth * (double)(maxHp - v22) / (double)maxHp;
        v25.fields.y = 0.0;
        v25.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
        v24 = *p_splitList;
        if ( !*p_splitList )
          break;
        if ( v16 >= v24->max_length )
          goto LABEL_25;
        *(Il2CppClass **)((char *)&v24->obj.klass + i) = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v24 + i), (int32_t)v20, maxHp, v23);
        if ( (__int64)++v16 >= (int)split->max_length )
          return;
      }
LABEL_24:
      sub_1BC3264(this, split);
    }
  }
}