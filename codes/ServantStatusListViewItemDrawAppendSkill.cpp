void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4219D61 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_4219D61 = 1;
  }
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_POS_Y = -25.0;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT = 105;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4219D60 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4219D60 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.baseSize.fields.x = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSize,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  if ( (byte_4219D5E & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B0D8A4(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_4219D5E = 1;
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
    sub_B0D97C(this);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v19; // x23
  unsigned __int64 v20; // x22
  UnityEngine_Object_o *v21; // x23
  UILabel_o *srcSkillObj; // x21
  UISprite_o *explanationLabel; // x21
  const MethodInfo *v24; // x6
  System_Int32_array *v25; // x8
  unsigned __int64 v26; // x20
  int v27; // w28
  int32_t v28; // w21
  __int64 v29; // x25
  unsigned __int64 max_length; // x9
  UnityEngine_UI_Dropdown_DropdownItem_o *reinforceObject; // x22
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *transform; // x23
  ServantStatusListViewItemDrawAppendSkill_o *v34; // x23
  int32_t Height; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v36; // x8
  int32_t v37; // w23
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8
  int32_t v39; // w23
  int v40; // w24
  __int64 v41; // x9
  int32_t klass_high; // w8
  UserServantEntity_o *userSvtEntity; // x0
  signed int v44; // w9
  unsigned int v45; // w10
  int v46; // w20
  struct System_Collections_Generic_List_GameObject__o *skillList; // x8
  int v48; // w8
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v53; // s8
  double v54; // d0
  double v55; // d0
  int v56; // w20
  float v57; // s8
  float v58; // s11
  float v59; // s9
  float v60; // s10
  __int64 v61; // x20
  float v62; // s8
  float v63; // s9
  __int64 v64; // x22
  float v65; // s10
  int v66; // w8
  __int64 v67; // x8
  UnityEngine_GameObject_o *v68; // x21
  ServantStatusSkillComponent_o *Component_srcLineSprite; // x20
  int32_t v70; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v71; // x8
  int32_t v72; // w20
  __int64 v73; // x0
  ServantStatusListViewItem_o *v74; // [xsp+8h] [xbp-A8h]
  char v75; // [xsp+14h] [xbp-9Ch]
  System_Int32_array *lvList; // [xsp+18h] [xbp-98h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-90h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-88h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-80h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4219D5F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v17);
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B0D8A4(&StringLiteral_19749/*"img_txt_extraskill_title"*/, v18);
    byte_4219D5F = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  v19 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
  if ( !v19 )
    goto LABEL_13;
  v20 = 0LL;
  while ( (__int64)v20 < v19->fields._size )
  {
    if ( v20 >= (unsigned int)v19->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v21 = (UnityEngine_Object_o *)v19->fields._items->m_Items[v20];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v21, 0LL);
    this = *(ServantStatusListViewItemDrawAppendSkill_o **)&v6->fields.baseSize.fields.x;
    if ( this )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
        v20,
        0LL,
        (const MethodInfo_2FC5440 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      v19 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
      ++v20;
      if ( v19 )
        continue;
    }
    goto LABEL_13;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v19,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
                                                           (System_String_o *)StringLiteral_12019/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
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
    AtlasManager__SetEventSprite(explanationLabel, (System_String_o *)StringLiteral_19749/*"img_txt_extraskill_title"*/, 0LL);
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
      v24);
    v25 = idList;
    if ( !idList )
      return;
    v74 = item;
    v75 = 0;
    v26 = 0LL;
    v27 = 0;
    v28 = 1;
    v29 = 0x100000000LL;
    while ( 1 )
    {
      max_length = v25->max_length;
      if ( (__int64)v26 >= (int)max_length )
        break;
      if ( v26 >= max_length )
        goto LABEL_116;
      if ( v25->m_Items[v26 + 1] >= 1 )
      {
        reinforceObject = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.reinforceObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                               reinforceObject,
                                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_13;
        v32 = (UnityEngine_GameObject_o *)this;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)v6,
                                                               0LL);
        if ( !transform )
          goto LABEL_13;
        UnityEngine_Transform__SetParent_35056148(transform, (UnityEngine_Transform_o *)this, 0, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v32, one, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v32,
                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_13;
        if ( v26 >= idList->max_length )
          goto LABEL_116;
        if ( !titleList )
          goto LABEL_13;
        if ( v26 >= titleList->max_length )
          goto LABEL_116;
        if ( !explanationList )
          goto LABEL_13;
        if ( v26 >= explanationList->max_length )
          goto LABEL_116;
        if ( !releaseStateList )
          goto LABEL_13;
        if ( v26 >= releaseStateList->max_length )
          goto LABEL_116;
        if ( !lvList )
          goto LABEL_13;
        if ( v26 >= lvList->max_length )
          goto LABEL_116;
        v34 = this;
        if ( !this )
          goto LABEL_13;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)this,
          v28,
          idList->m_Items[v26 + 1],
          titleList->m_Items[v26],
          explanationList->m_Items[v26],
          releaseStateList->m_Items[v26 + 4],
          lvList->m_Items[v26 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)v34, 0LL);
        v36 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v37 = Height;
        if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v36 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        static_fields = v36->static_fields;
        v39 = static_fields->ADJUST_HEIGHT + v37;
        this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_40819140(
                                                               v39,
                                                               static_fields->SKILL_BASE_HEIGHT,
                                                               0LL);
        if ( !*(_QWORD *)&v6->fields.baseSize.fields.x )
          goto LABEL_13;
        v40 = (int)this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v6->fields.baseSize.fields.x,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( !idList )
          goto LABEL_13;
        v41 = *(_QWORD *)&idList->max_length;
        v27 += v40;
        ++v28;
        if ( v26 == (_DWORD)v41 - 1 )
          goto LABEL_53;
        if ( v26 + 1 >= (unsigned int)v41 )
        {
LABEL_116:
          v73 = sub_B0D9A8(this);
          sub_B0D948(v73, 0LL);
        }
        if ( *(int *)((char *)&idList->m_Items[1] + (v29 >> 30)) <= 0 )
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
          if ( v39 > klass_high )
          {
            if ( (BYTE3(this[2].fields.baseSprite) & 4) != 0 && !LODWORD(this[1].fields.skillList) )
            {
              j_il2cpp_runtime_class_init_0(this);
              klass_high = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v75 |= v39 - klass_high > 10;
          }
        }
      }
      v25 = idList;
      ++v26;
      v29 += 0x100000000LL;
      if ( !idList )
        goto LABEL_13;
    }
    if ( v74->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v74->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          this = (ServantStatusListViewItemDrawAppendSkill_o *)v74->fields.userSvtEntity;
          if ( !this )
            goto LABEL_13;
          this = (ServantStatusListViewItemDrawAppendSkill_o *)UserServantEntity__IsEventJoin(
                                                                 (UserServantEntity_o *)this,
                                                                 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !lvList )
              goto LABEL_13;
            v44 = lvList->max_length;
            if ( v44 >= 1 )
            {
              v45 = 0;
              while ( 1 )
              {
                if ( v45 >= v44 )
                  goto LABEL_116;
                if ( lvList->m_Items[v45 + 1] <= 9u )
                  break;
                if ( (int)++v45 >= v44 )
                  goto LABEL_85;
              }
              this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.reinforceButton;
              if ( (v75 & 1) != 0 )
                v46 = 62;
              else
                v46 = 50;
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
              v27 += v46;
              UICommonButton__SetEnable((UICommonButton_o *)this, v74->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v27 >= 0 )
                v48 = v27;
              else
                v48 = v27 + 1;
              GameObjectExtensions__SetLocalPositionY(
                (UnityEngine_GameObject_o *)v6->fields.reinforceButton,
                (float)-(v48 >> 1),
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
    v53 = x + (float)v27;
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.baseSprite;
      if ( !this )
        goto LABEL_13;
      v82.fields.x = z;
      v82.fields.y = v53;
      v82.fields.z = y;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, v82, 0LL);
    }
    this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleSprite;
    if ( this )
    {
      v54 = z;
      if ( z == INFINITY )
        v54 = -z;
      UIWidget__set_width((UIWidget_o *)this, (int)v54, 0LL);
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleSprite;
      if ( this )
      {
        v55 = v53;
        if ( v53 == INFINITY )
          v55 = -INFINITY;
        UIWidget__set_height((UIWidget_o *)this, (int)v55, 0LL);
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.titleTextSprite;
        v56 = v27 >= 0 ? v27 : v27 + 1;
        if ( this )
        {
          v57 = v6->fields.titleBasePosition.fields.z;
          v58 = v6->fields.skillBasePosition.fields.x;
          v59 = v6->fields.skillBasePosition.fields.y;
          this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            v60 = (float)(v56 >> 1);
            v83.fields.y = v58 + v60;
            v83.fields.x = v57;
            v83.fields.z = v59;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v83, 0LL);
            v61 = *(_QWORD *)&v6->fields.baseSize.fields.x;
            if ( v61 )
            {
              v62 = v6->fields.skillBasePosition.fields.z;
              v63 = *(float *)&v6[1].klass;
              v64 = 0LL;
              v65 = *((float *)&v6->fields.skillBasePosition + 3) + v60;
              while ( 1 )
              {
                v66 = *(_DWORD *)(v61 + 24);
                if ( (int)v64 >= v66 )
                  return;
                if ( v66 <= (unsigned int)v64 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                v67 = *(_QWORD *)(v61 + 16) + 8 * v64;
                v68 = *(UnityEngine_GameObject_o **)(v67 + 32);
                if ( v68 )
                {
                  Component_srcLineSprite = (ServantStatusSkillComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               *(UnityEngine_GameObject_o **)(v67 + 32),
                                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__get_transform(v68, 0LL);
                  if ( this )
                  {
                    v84.fields.x = v62;
                    v84.fields.y = v65;
                    v84.fields.z = v63;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v84, 0LL);
                    if ( Component_srcLineSprite )
                    {
                      v70 = ServantStatusSkillComponent__GetHeight(Component_srcLineSprite, 0LL);
                      v71 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v72 = v70;
                      if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v71 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_40819140(
                                                                             v71->static_fields->ADJUST_HEIGHT + v72,
                                                                             v71->static_fields->SKILL_BASE_HEIGHT,
                                                                             0LL);
                      v61 = *(_QWORD *)&v6->fields.baseSize.fields.x;
                      v65 = v65 - (float)(int)this;
                      ++v64;
                      if ( v61 )
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
    sub_B0D97C(this);
  }
}