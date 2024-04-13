void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED357 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1, v2, v3);
    byte_42ED357 = 1;
  }
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_POS_Y = -25.0;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT = 105;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ED356 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42ED356 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.baseSize.fields.x = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseSize,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantStatusListViewItemDrawAppendSkill_o *v4; // x19
  struct UISprite_o *titleSprite; // x8
  int32x2_t v6; // d0
  ServantStatusListViewItemDrawAppendSkill_c *v7; // x0
  float SKILL_BASE_POS_Y; // w8

  v4 = this;
  if ( (byte_42ED354 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B5D5C4(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           (_DWORD)method,
                                                           v2,
                                                           v3);
    byte_42ED354 = 1;
  }
  titleSprite = v4->fields.titleSprite;
  if ( !titleSprite
    || (v6.n64_u64[0] = *(unsigned __int64 *)&titleSprite->fields.mWidth,
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v4->fields.titleTextSprite,
        v4->fields.titleBasePosition.fields.y = 0.0,
        *(float32x2_t *)&v4->fields.baseSize.fields.z = vcvt_f32_s32(v6),
        !this)
    || (this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL)) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  *(UnityEngine_Vector3_o *)&v4->fields.titleBasePosition.fields.z = UnityEngine_Transform__get_localPosition(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
  v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v7->static_fields->SKILL_BASE_POS_Y;
  LODWORD(v4[1].klass) = 0;
  v4->fields.skillBasePosition.fields.z = 0.0;
  *((float *)&v4->fields.skillBasePosition + 3) = SKILL_BASE_POS_Y;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *v43; // x23
  unsigned __int64 v44; // x22
  UnityEngine_Object_o *v45; // x23
  UILabel_o *srcSkillObj; // x21
  UISprite_o *explanationLabel; // x21
  const MethodInfo *v48; // x6
  System_Int32_array *v49; // x8
  unsigned __int64 v50; // x20
  int v51; // w28
  int32_t v52; // w21
  __int64 v53; // x25
  unsigned __int64 max_length; // x9
  UnityEngine_UI_Dropdown_DropdownItem_o *reinforceObject; // x22
  UnityEngine_GameObject_o *v56; // x22
  UnityEngine_Transform_o *transform; // x23
  ServantStatusListViewItemDrawAppendSkill_o *v58; // x23
  int32_t Height; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v60; // x8
  int32_t v61; // w23
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8
  int32_t v63; // w23
  int v64; // w24
  __int64 v65; // x9
  int32_t klass_high; // w8
  UserServantEntity_o *userSvtEntity; // x0
  signed int v68; // w9
  unsigned int v69; // w10
  int v70; // w20
  struct System_Collections_Generic_List_GameObject__o *skillList; // x8
  int v72; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v77; // s8
  double v78; // d0
  double v79; // d0
  int v80; // w20
  float v81; // s8
  float v82; // s11
  float v83; // s9
  float v84; // s10
  __int64 v85; // x20
  float v86; // s8
  float v87; // s9
  __int64 v88; // x22
  float v89; // s10
  int v90; // w8
  __int64 v91; // x8
  UnityEngine_GameObject_o *v92; // x21
  ServantStatusSkillComponent_o *Component_srcLineSprite; // x20
  int32_t v94; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v95; // x8
  int32_t v96; // w20
  __int64 v97; // x0
  ServantStatusListViewItem_o *v98; // [xsp+8h] [xbp-A8h]
  char v99; // [xsp+14h] [xbp-9Ch]
  System_Int32_array *lvList; // [xsp+18h] [xbp-98h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-90h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-88h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-80h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42ED355 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__set_Item__, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v37, v38, v39);
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B5D5C4(&StringLiteral_19936/*"img_txt_extraskill_title"*/, v40, v41, v42);
    byte_42ED355 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  v43 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
  if ( !v43 )
    goto LABEL_13;
  v44 = 0LL;
  while ( (__int64)v44 < v43->fields._size )
  {
    if ( v44 >= (unsigned int)v43->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v45 = (UnityEngine_Object_o *)v43->fields._items->m_Items[v44];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v45, 0LL);
    this = *(ServantStatusListViewItemDrawAppendSkill_o **)&v6->fields.baseSize.fields.x;
    if ( this )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
        v44,
        0LL,
        (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      v43 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
      ++v44;
      if ( v43 )
        continue;
    }
    goto LABEL_13;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v43,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
                                                           (System_String_o *)StringLiteral_12131/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
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
    AtlasManager__SetEventSprite(explanationLabel, (System_String_o *)StringLiteral_19936/*"img_txt_extraskill_title"*/, 0LL);
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
      v48);
    v49 = idList;
    if ( !idList )
      return;
    v98 = item;
    v99 = 0;
    v50 = 0LL;
    v51 = 0;
    v52 = 1;
    v53 = 0x100000000LL;
    while ( 1 )
    {
      max_length = v49->max_length;
      if ( (__int64)v50 >= (int)max_length )
        break;
      if ( v50 >= max_length )
        goto LABEL_116;
      if ( v49->m_Items[v50 + 1] >= 1 )
      {
        reinforceObject = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.reinforceObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               reinforceObject,
                                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_13;
        v56 = (UnityEngine_GameObject_o *)this;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)v6,
                                                               0LL);
        if ( !transform )
          goto LABEL_13;
        UnityEngine_Transform__SetParent_35741212(transform, (UnityEngine_Transform_o *)this, 0, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v56, one, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v56,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_13;
        if ( v50 >= idList->max_length )
          goto LABEL_116;
        if ( !titleList )
          goto LABEL_13;
        if ( v50 >= titleList->max_length )
          goto LABEL_116;
        if ( !explanationList )
          goto LABEL_13;
        if ( v50 >= explanationList->max_length )
          goto LABEL_116;
        if ( !releaseStateList )
          goto LABEL_13;
        if ( v50 >= releaseStateList->max_length )
          goto LABEL_116;
        if ( !lvList )
          goto LABEL_13;
        if ( v50 >= lvList->max_length )
          goto LABEL_116;
        v58 = this;
        if ( !this )
          goto LABEL_13;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)this,
          v52,
          idList->m_Items[v50 + 1],
          titleList->m_Items[v50],
          explanationList->m_Items[v50],
          releaseStateList->m_Items[v50 + 4],
          lvList->m_Items[v50 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)v58, 0LL);
        v60 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v61 = Height;
        if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v60 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        static_fields = v60->static_fields;
        v63 = static_fields->ADJUST_HEIGHT + v61;
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_41629432(
                                                               v63,
                                                               static_fields->SKILL_BASE_HEIGHT,
                                                               0LL);
        if ( !*(_QWORD *)&v6->fields.baseSize.fields.x )
          goto LABEL_13;
        v64 = (int)this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v6->fields.baseSize.fields.x,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( !idList )
          goto LABEL_13;
        v65 = *(_QWORD *)&idList->max_length;
        v51 += v64;
        ++v52;
        if ( v50 == (_DWORD)v65 - 1 )
          goto LABEL_53;
        if ( v50 + 1 >= (unsigned int)v65 )
        {
LABEL_116:
          v97 = sub_B5D6C8(this);
          sub_B5D668(v97, 0LL);
        }
        if ( *(int *)((char *)&idList->m_Items[1] + (v53 >> 30)) <= 0 )
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
          if ( v63 > klass_high )
          {
            if ( (BYTE3(this[2].fields.baseSprite) & 4) != 0 && !LODWORD(this[1].fields.skillList) )
            {
              j_il2cpp_runtime_class_init_0(this);
              klass_high = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v99 |= v63 - klass_high > 10;
          }
        }
      }
      v49 = idList;
      ++v50;
      v53 += 0x100000000LL;
      if ( !idList )
        goto LABEL_13;
    }
    if ( v98->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v98->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          this = (ServantStatusListViewItemDrawAppendSkill_o *)v98->fields.userSvtEntity;
          if ( !this )
            goto LABEL_13;
          this = (ServantStatusListViewItemDrawAppendSkill_o *)UserServantEntity__IsEventJoin(
                                                                 (UserServantEntity_o *)this,
                                                                 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !lvList )
              goto LABEL_13;
            v68 = lvList->max_length;
            if ( v68 >= 1 )
            {
              v69 = 0;
              while ( 1 )
              {
                if ( v69 >= v68 )
                  goto LABEL_116;
                if ( lvList->m_Items[v69 + 1] <= 9u )
                  break;
                if ( (int)++v69 >= v68 )
                  goto LABEL_85;
              }
              this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.reinforceButton;
              if ( (v99 & 1) != 0 )
                v70 = 62;
              else
                v70 = 50;
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
              v51 += v70;
              UICommonButton__SetEnable((UICommonButton_o *)this, v98->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v51 >= 0 )
                v72 = v51;
              else
                v72 = v51 + 1;
              GameObjectExtensions__SetLocalPositionY(
                (UnityEngine_GameObject_o *)v6->fields.reinforceButton,
                (float)-(v72 >> 1),
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
    v77 = x + (float)v51;
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.baseSprite;
      if ( !this )
        goto LABEL_13;
      v106.fields.x = z;
      v106.fields.y = v77;
      v106.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, v106, 0LL);
    }
    this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleSprite;
    if ( this )
    {
      v78 = z;
      if ( z == INFINITY )
        v78 = -z;
      UIWidget__set_width((UIWidget_o *)this, (int)v78, 0LL);
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleSprite;
      if ( this )
      {
        v79 = v77;
        if ( v77 == INFINITY )
          v79 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)this, (int)v79, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleTextSprite;
        v80 = v51 >= 0 ? v51 : v51 + 1;
        if ( this )
        {
          v81 = v6->fields.titleBasePosition.fields.z;
          v82 = v6->fields.skillBasePosition.fields.x;
          v83 = v6->fields.skillBasePosition.fields.y;
          this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            v84 = (float)(v80 >> 1);
            v107.fields.y = v82 + v84;
            v107.fields.x = v81;
            v107.fields.z = v83;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v107, 0LL);
            v85 = *(_QWORD *)&v6->fields.baseSize.fields.x;
            if ( v85 )
            {
              v86 = v6->fields.skillBasePosition.fields.z;
              v87 = *(float *)&v6[1].klass;
              v88 = 0LL;
              v89 = *((float *)&v6->fields.skillBasePosition + 3) + v84;
              while ( 1 )
              {
                v90 = *(_DWORD *)(v85 + 24);
                if ( (int)v88 >= v90 )
                  return;
                if ( v90 <= (unsigned int)v88 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v91 = *(_QWORD *)(v85 + 16) + 8 * v88;
                v92 = *(UnityEngine_GameObject_o **)(v91 + 32);
                if ( v92 )
                {
                  Component_srcLineSprite = (ServantStatusSkillComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               *(UnityEngine_GameObject_o **)(v91 + 32),
                                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__get_transform(v92, 0LL);
                  if ( this )
                  {
                    v108.fields.x = v86;
                    v108.fields.y = v89;
                    v108.fields.z = v87;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v108, 0LL);
                    if ( Component_srcLineSprite )
                    {
                      v94 = ServantStatusSkillComponent__GetHeight(Component_srcLineSprite, 0LL);
                      v95 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v96 = v94;
                      if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v95 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_41629432(
                                                                             v95->static_fields->ADJUST_HEIGHT + v96,
                                                                             v95->static_fields->SKILL_BASE_HEIGHT,
                                                                             0LL);
                      v85 = *(_QWORD *)&v6->fields.baseSize.fields.x;
                      v89 = v89 - (float)(int)this;
                      ++v88;
                      if ( v85 )
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
    sub_B5D69C(this, item);
  }
}