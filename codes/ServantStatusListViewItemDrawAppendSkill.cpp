void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  if ( (byte_439296B & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_439296B = 1;
  }
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_POS_Y = -25.0;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT = 105;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_439296A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_439296A = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.baseSize.fields.x = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseSize, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawAppendSkill_o *v2; // x19
  struct UISprite_o *titleSprite; // x8
  int32x2_t v4; // d0
  ServantStatusListViewItemDrawAppendSkill_c *v5; // x0
  float SKILL_BASE_POS_Y; // w8

  v2 = this;
  if ( (byte_4392968 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B775C4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4392968 = 1;
  }
  titleSprite = v2->fields.titleSprite;
  if ( !titleSprite
    || (v4.n64_u64[0] = *(unsigned __int64 *)&titleSprite->fields.mWidth,
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v2->fields.titleTextSprite,
        v2->fields.titleBasePosition.fields.y = 0.0,
        *(float32x2_t *)&v2->fields.baseSize.fields.z = vcvt_f32_s32(v4),
        !this)
    || (this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL)) == 0LL )
  {
    sub_B7769C(this, method);
  }
  *(UnityEngine_Vector3_o *)&v2->fields.titleBasePosition.fields.z = UnityEngine_Transform__get_localPosition(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
  v5 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    v5 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v5->static_fields->SKILL_BASE_POS_Y;
  LODWORD(v2[1].klass) = 0;
  v2->fields.skillBasePosition.fields.z = 0.0;
  *((float *)&v2->fields.skillBasePosition + 3) = SKILL_BASE_POS_Y;
}


int32_t __fastcall ServantStatusListViewItemDrawAppendSkill__GetKind(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  return 6;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__SetItem(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawAppendSkill_o *v6; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *v7; // x23
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x23
  UILabel_o *srcSkillObj; // x21
  UISprite_o *explanationLabel; // x21
  const MethodInfo *v12; // x6
  System_Int32_array *v13; // x8
  unsigned __int64 v14; // x20
  int v15; // w28
  int32_t v16; // w21
  __int64 v17; // x25
  unsigned __int64 max_length; // x9
  UnityEngine_UI_Dropdown_DropdownItem_o *reinforceObject; // x22
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_Transform_o *transform; // x23
  ServantStatusListViewItemDrawAppendSkill_o *v22; // x23
  int32_t Height; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v24; // x8
  int32_t v25; // w23
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8
  int32_t v27; // w23
  int v28; // w24
  __int64 v29; // x9
  int32_t klass_high; // w8
  UserServantEntity_o *userSvtEntity; // x0
  signed int v32; // w9
  unsigned int v33; // w10
  int v34; // w20
  struct System_Collections_Generic_List_GameObject__o *skillList; // x8
  int v36; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v41; // s8
  double v42; // d0
  double v43; // d0
  int v44; // w20
  float v45; // s8
  float v46; // s11
  float v47; // s9
  float v48; // s10
  __int64 v49; // x20
  float v50; // s8
  float v51; // s9
  __int64 v52; // x22
  float v53; // s10
  int v54; // w8
  __int64 v55; // x8
  UnityEngine_GameObject_o *v56; // x21
  ServantStatusSkillComponent_o *Component_srcLineSprite; // x20
  int32_t v58; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v59; // x8
  int32_t v60; // w20
  __int64 v61; // x0
  ServantStatusListViewItem_o *v62; // [xsp+8h] [xbp-A8h]
  char v63; // [xsp+14h] [xbp-9Ch]
  System_Int32_array *lvList; // [xsp+18h] [xbp-98h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-90h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-88h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-80h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4392969 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    sub_B775C4(&StringLiteral_12216/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B775C4(&StringLiteral_20090/*"img_txt_extraskill_title"*/);
    byte_4392969 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  v7 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
  if ( !v7 )
    goto LABEL_13;
  v8 = 0LL;
  while ( (__int64)v8 < v7->fields._size )
  {
    if ( v8 >= (unsigned int)v7->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = (UnityEngine_Object_o *)v7->fields._items->m_Items[v8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v9, 0LL);
    this = *(ServantStatusListViewItemDrawAppendSkill_o **)&v6->fields.baseSize.fields.x;
    if ( this )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
        v8,
        0LL,
        (const MethodInfo_3052FF0 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      v7 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
      ++v8;
      if ( v7 )
        continue;
    }
    goto LABEL_13;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v7,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  LODWORD(v6->fields.baseCollider) = mode;
  if ( item && mode )
  {
    srcSkillObj = (UILabel_o *)v6->fields.srcSkillObj;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (ServantStatusListViewItemDrawAppendSkill_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12216/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
                                                           0LL);
    if ( !srcSkillObj )
      goto LABEL_13;
    UILabel__set_text(srcSkillObj, (System_String_o *)this, 0LL);
    explanationLabel = (UISprite_o *)v6->fields.explanationLabel;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(explanationLabel, (System_String_o *)StringLiteral_20090/*"img_txt_extraskill_title"*/, 0LL);
    this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.explanationLabel;
    if ( !this )
      goto LABEL_13;
    ((void (__fastcall *)(ServantStatusListViewItemDrawAppendSkill_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
      this,
      this->klass[1].vtable._1_Finalize.methodPtr);
    ServantStatusListViewItem__GetAppendPassiveSkillInfo(
      item,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      v12);
    v13 = idList;
    if ( !idList )
      return;
    v62 = item;
    v63 = 0;
    v14 = 0LL;
    v15 = 0;
    v16 = 1;
    v17 = 0x100000000LL;
    while ( 1 )
    {
      max_length = v13->max_length;
      if ( (__int64)v14 >= (int)max_length )
        break;
      if ( v14 >= max_length )
        goto LABEL_116;
      if ( v13->m_Items[v14 + 1] >= 1 )
      {
        reinforceObject = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.reinforceObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               reinforceObject,
                                                               (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_13;
        v20 = (UnityEngine_GameObject_o *)this;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)v6,
                                                               0LL);
        if ( !transform )
          goto LABEL_13;
        UnityEngine_Transform__SetParent_36431020(transform, (UnityEngine_Transform_o *)this, 0, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v20, one, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v20,
                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_13;
        if ( v14 >= idList->max_length )
          goto LABEL_116;
        if ( !titleList )
          goto LABEL_13;
        if ( v14 >= titleList->max_length )
          goto LABEL_116;
        if ( !explanationList )
          goto LABEL_13;
        if ( v14 >= explanationList->max_length )
          goto LABEL_116;
        if ( !releaseStateList )
          goto LABEL_13;
        if ( v14 >= releaseStateList->max_length )
          goto LABEL_116;
        if ( !lvList )
          goto LABEL_13;
        if ( v14 >= lvList->max_length )
          goto LABEL_116;
        v22 = this;
        if ( !this )
          goto LABEL_13;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)this,
          v16,
          idList->m_Items[v14 + 1],
          titleList->m_Items[v14],
          explanationList->m_Items[v14],
          releaseStateList->m_Items[v14 + 4],
          lvList->m_Items[v14 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)v22, 0LL);
        v24 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v25 = Height;
        if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v24 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        static_fields = v24->static_fields;
        v27 = static_fields->ADJUST_HEIGHT + v25;
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_41473772(
                                                               v27,
                                                               static_fields->SKILL_BASE_HEIGHT,
                                                               0LL);
        if ( !*(_QWORD *)&v6->fields.baseSize.fields.x )
          goto LABEL_13;
        v28 = (int)this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v6->fields.baseSize.fields.x,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( !idList )
          goto LABEL_13;
        v29 = *(_QWORD *)&idList->max_length;
        v15 += v28;
        ++v16;
        if ( v14 == (_DWORD)v29 - 1 )
          goto LABEL_53;
        if ( v14 + 1 >= (unsigned int)v29 )
        {
LABEL_116:
          v61 = sub_B776C8(this);
          sub_B77668(v61, 0LL);
        }
        if ( *(int *)((char *)&idList->m_Items[1] + (v17 >> 30)) <= 0 )
        {
LABEL_53:
          this = (ServantStatusListViewItemDrawAppendSkill_o *)ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            this = (ServantStatusListViewItemDrawAppendSkill_o *)ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          klass_high = HIDWORD(this[1].fields.titleTextSprite->klass);
          if ( v27 > klass_high )
          {
            if ( (BYTE3(this[2].fields.baseSprite) & 4) != 0 && !LODWORD(this[1].fields.skillList) )
            {
              j_il2cpp_runtime_class_init_0(this);
              klass_high = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v63 |= v27 - klass_high > 10;
          }
        }
      }
      v13 = idList;
      ++v14;
      v17 += 0x100000000LL;
      if ( !idList )
        goto LABEL_13;
    }
    if ( v62->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v62->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          this = (ServantStatusListViewItemDrawAppendSkill_o *)v62->fields.userSvtEntity;
          if ( !this )
            goto LABEL_13;
          this = (ServantStatusListViewItemDrawAppendSkill_o *)UserServantEntity__IsEventJoin(
                                                                 (UserServantEntity_o *)this,
                                                                 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !lvList )
              goto LABEL_13;
            v32 = lvList->max_length;
            if ( v32 >= 1 )
            {
              v33 = 0;
              while ( 1 )
              {
                if ( v33 >= v32 )
                  goto LABEL_116;
                if ( lvList->m_Items[v33 + 1] <= 9u )
                  break;
                if ( (int)++v33 >= v32 )
                  goto LABEL_85;
              }
              this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.reinforceButton;
              if ( (v63 & 1) != 0 )
                v34 = 62;
              else
                v34 = 50;
              if ( !this )
                goto LABEL_13;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              skillList = v6->fields.skillList;
              if ( !skillList )
                goto LABEL_13;
              BYTE1(skillList[2].monitor) = 1;
              this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.skillList;
              if ( !this )
                goto LABEL_13;
              v15 += v34;
              UICommonButton__SetEnable((UICommonButton_o *)this, v62->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v15 >= 0 )
                v36 = v15;
              else
                v36 = v15 + 1;
              GameObjectExtensions__SetLocalPositionY(
                (UnityEngine_GameObject_o *)v6->fields.reinforceButton,
                (float)-(v36 >> 1),
                0LL);
            }
          }
        }
      }
    }
LABEL_85:
    z = v6->fields.baseSize.fields.z;
    x = v6->fields.titleBasePosition.fields.x;
    y = v6->fields.titleBasePosition.fields.y;
    baseSprite = (UnityEngine_Object_o *)v6->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v41 = x + (float)v15;
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.baseSprite;
      if ( !this )
        goto LABEL_13;
      v70.fields.x = z;
      v70.fields.y = v41;
      v70.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, v70, 0LL);
    }
    this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleSprite;
    if ( this )
    {
      v42 = z;
      if ( z == INFINITY )
        v42 = -z;
      UIWidget__set_width((UIWidget_o *)this, (int)v42, 0LL);
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleSprite;
      if ( this )
      {
        v43 = v41;
        if ( v41 == INFINITY )
          v43 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)this, (int)v43, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleTextSprite;
        v44 = v15 >= 0 ? v15 : v15 + 1;
        if ( this )
        {
          v45 = v6->fields.titleBasePosition.fields.z;
          v46 = v6->fields.skillBasePosition.fields.x;
          v47 = v6->fields.skillBasePosition.fields.y;
          this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            v48 = (float)(v44 >> 1);
            v71.fields.y = v46 + v48;
            v71.fields.x = v45;
            v71.fields.z = v47;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v71, 0LL);
            v49 = *(_QWORD *)&v6->fields.baseSize.fields.x;
            if ( v49 )
            {
              v50 = v6->fields.skillBasePosition.fields.z;
              v51 = *(float *)&v6[1].klass;
              v52 = 0LL;
              v53 = *((float *)&v6->fields.skillBasePosition + 3) + v48;
              while ( 1 )
              {
                v54 = *(_DWORD *)(v49 + 24);
                if ( (int)v52 >= v54 )
                  return;
                if ( v54 <= (unsigned int)v52 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                v55 = *(_QWORD *)(v49 + 16) + 8 * v52;
                v56 = *(UnityEngine_GameObject_o **)(v55 + 32);
                if ( v56 )
                {
                  Component_srcLineSprite = (ServantStatusSkillComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               *(UnityEngine_GameObject_o **)(v55 + 32),
                                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__get_transform(v56, 0LL);
                  if ( this )
                  {
                    v72.fields.x = v50;
                    v72.fields.y = v53;
                    v72.fields.z = v51;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v72, 0LL);
                    if ( Component_srcLineSprite )
                    {
                      v58 = ServantStatusSkillComponent__GetHeight(Component_srcLineSprite, 0LL);
                      v59 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v60 = v58;
                      if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v59 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_41473772(
                                                                             v59->static_fields->ADJUST_HEIGHT + v60,
                                                                             v59->static_fields->SKILL_BASE_HEIGHT,
                                                                             0LL);
                      v49 = *(_QWORD *)&v6->fields.baseSize.fields.x;
                      v53 = v53 - (float)(int)this;
                      ++v52;
                      if ( v49 )
                        continue;
                    }
                  }
                }
                break;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B7769C(this, item);
  }
}