void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D18F & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_418D18F = 1;
  }
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_POS_Y = -25.0;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT = 105;
  ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418D18E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_418D18E = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.baseSize.fields.x = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseSize, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_418D18C & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B2C35C(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_418D18C = 1;
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
    sub_B2C434(this, method);
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
  unsigned __int64 v26; // x27
  int v27; // w26
  int32_t v28; // w20
  unsigned __int64 max_length; // x9
  UnityEngine_UI_Dropdown_DropdownItem_o *skillList; // x21
  UnityEngine_GameObject_o *v31; // x21
  UnityEngine_Transform_o *transform; // x22
  ServantStatusListViewItemDrawAppendSkill_o *v33; // x22
  int32_t Height; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v35; // x8
  int32_t v36; // w22
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
  System_Int32_array *lvList; // [xsp+8h] [xbp-98h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-90h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-88h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_418D18D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v17);
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_B2C35C(&StringLiteral_19687/*"img_txt_extraskill_title"*/, v18);
    byte_418D18D = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v21 = (UnityEngine_Object_o *)v19->fields._items->m_Items[v20];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v21, 0LL);
    this = *(ServantStatusListViewItemDrawAppendSkill_o **)&v6->fields.baseSize.fields.x;
    if ( this )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
        v20,
        0LL,
        (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      v19 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&v6->fields.baseSize.fields.x;
      ++v20;
      if ( v19 )
        continue;
    }
    goto LABEL_13;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v19,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
                                                           (System_String_o *)StringLiteral_11982/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/,
                                                           0LL);
    if ( srcSkillObj )
    {
      UILabel__set_text(srcSkillObj, (System_String_o *)this, 0LL);
      explanationLabel = (UISprite_o *)v6->fields.explanationLabel;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(explanationLabel, (System_String_o *)StringLiteral_19687/*"img_txt_extraskill_title"*/, 0LL);
      this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.explanationLabel;
      if ( this )
      {
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
        v26 = 0LL;
        v27 = 0;
        v28 = 1;
        while ( 1 )
        {
          max_length = v25->max_length;
          if ( (__int64)v26 >= (int)max_length )
            break;
          if ( v26 >= max_length )
            goto LABEL_83;
          if ( v25->m_Items[v26 + 1] >= 1 )
          {
            skillList = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.skillList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                   skillList,
                                                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this )
              goto LABEL_13;
            v31 = (UnityEngine_GameObject_o *)this;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)v6,
                                                                   0LL);
            if ( !transform )
              goto LABEL_13;
            UnityEngine_Transform__SetParent_35435768(transform, (UnityEngine_Transform_o *)this, 0, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v31, one, 0LL);
            this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v31,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
            if ( !idList )
              goto LABEL_13;
            if ( v26 >= idList->max_length )
              goto LABEL_83;
            if ( !titleList )
              goto LABEL_13;
            if ( v26 >= titleList->max_length )
              goto LABEL_83;
            if ( !explanationList )
              goto LABEL_13;
            if ( v26 >= explanationList->max_length )
              goto LABEL_83;
            if ( !releaseStateList )
              goto LABEL_13;
            if ( v26 >= releaseStateList->max_length )
              goto LABEL_83;
            if ( !lvList )
              goto LABEL_13;
            if ( v26 >= lvList->max_length )
            {
LABEL_83:
              v61 = sub_B2C460(this);
              sub_B2C400(v61, 0LL);
            }
            v33 = this;
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
            Height = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)v33, 0LL);
            v35 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
            v36 = Height;
            if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
              v35 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
            }
            this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_40694800(
                                                                   v35->static_fields->ADJUST_HEIGHT + v36,
                                                                   v35->static_fields->SKILL_BASE_HEIGHT,
                                                                   0LL);
            if ( !*(_QWORD *)&v6->fields.baseSize.fields.x )
              goto LABEL_13;
            v27 += (int)this;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v6->fields.baseSize.fields.x,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v25 = idList;
            ++v28;
          }
          ++v26;
          if ( !v25 )
            goto LABEL_13;
        }
        z = v6->fields.baseSize.fields.z;
        x = v6->fields.titleBasePosition.fields.x;
        y = v6->fields.titleBasePosition.fields.y;
        baseSprite = (UnityEngine_Object_o *)v6->fields.baseSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v41 = x + (float)v27;
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
        {
          this = (ServantStatusListViewItemDrawAppendSkill_o *)v6->fields.baseSprite;
          if ( !this )
            goto LABEL_13;
          v68.fields.x = z;
          v68.fields.y = v41;
          v68.fields.z = y;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, v68, 0LL);
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
            v44 = v27 >= 0 ? v27 : v27 + 1;
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
                v69.fields.y = v46 + v48;
                v69.fields.x = v45;
                v69.fields.z = v47;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v69, 0LL);
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
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                    v55 = *(_QWORD *)(v49 + 16) + 8 * v52;
                    v56 = *(UnityEngine_GameObject_o **)(v55 + 32);
                    if ( v56 )
                    {
                      Component_srcLineSprite = (ServantStatusSkillComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                   *(UnityEngine_GameObject_o **)(v55 + 32),
                                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                      this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_GameObject__get_transform(
                                                                             v56,
                                                                             0LL);
                      if ( this )
                      {
                        v70.fields.x = v50;
                        v70.fields.y = v53;
                        v70.fields.z = v51;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v70, 0LL);
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
                          this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Mathf__Max_40694800(
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
      }
    }
LABEL_13:
    sub_B2C434(this, item);
  }
}