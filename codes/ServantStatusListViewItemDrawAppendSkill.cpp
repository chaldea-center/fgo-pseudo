void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDE85 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_40FDE85 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDE84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40FDE84 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)&this->fields.baseSize.fields.x = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSize,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *titleSprite; // x8
  int32x2_t v4; // d0
  UnityEngine_Component_o *titleTextSprite; // x0
  UnityEngine_Transform_o *transform; // x0
  ServantStatusListViewItemDrawAppendSkill_c *v7; // x0
  float SKILL_BASE_POS_Y; // w8

  if ( (byte_40FDE82 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, method);
    byte_40FDE82 = 1;
  }
  titleSprite = this->fields.titleSprite;
  if ( !titleSprite
    || (v4.n64_u64[0] = *(unsigned __int64 *)&titleSprite->fields.mWidth,
        titleTextSprite = (UnityEngine_Component_o *)this->fields.titleTextSprite,
        this->fields.titleBasePosition.fields.y = 0.0,
        *(float32x2_t *)&this->fields.baseSize.fields.z = vcvt_f32_s32(v4),
        !titleTextSprite)
    || (transform = UnityEngine_Component__get_transform(titleTextSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  *(UnityEngine_Vector3_o *)&this->fields.titleBasePosition.fields.z = UnityEngine_Transform__get_localPosition(
                                                                         transform,
                                                                         0LL);
  v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v7->static_fields->SKILL_BASE_POS_Y;
  LODWORD(this[1].klass) = 0;
  this->fields.skillBasePosition.fields.z = 0.0;
  *((float *)&this->fields.skillBasePosition + 3) = SKILL_BASE_POS_Y;
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v22; // x0
  struct UnityEngine_GameObject_o *srcSkillObj; // x21
  System_String_o *v24; // x0
  struct UILabel_o *explanationLabel; // x21
  struct UILabel_o *v26; // x0
  ServantStatusSkillComponent_o *Component_srcLineSprite; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int32_array *v30; // x8
  unsigned __int64 v31; // x27
  int v32; // w26
  int32_t v33; // w20
  unsigned __int64 max_length; // x9
  UnityEngine_UI_Dropdown_DropdownItem_o *skillList; // x21
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_Transform_o *v39; // x0
  ServantStatusSkillComponent_o *v40; // x22
  int32_t Height; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v42; // x8
  int32_t v43; // w22
  int32_t v44; // w0
  float x; // s8
  float z; // s9
  float y; // s10
  UnityEngine_Object_o *baseSprite; // x20
  float v49; // s8
  UnityEngine_BoxCollider_o *v50; // x0
  UIWidget_o *titleSprite; // x0
  double v52; // d0
  UIWidget_o *v53; // x0
  double v54; // d0
  UnityEngine_Component_o *titleTextSprite; // x0
  int v56; // w20
  float v57; // s8
  float v58; // s11
  float v59; // s9
  UnityEngine_Transform_o *v60; // x0
  float v61; // s10
  __int64 v62; // x20
  float v63; // s8
  float v64; // s9
  __int64 v65; // x22
  float v66; // s10
  int v67; // w8
  __int64 v68; // x8
  UnityEngine_GameObject_o *v69; // x21
  ServantStatusSkillComponent_o *v70; // x20
  UnityEngine_Transform_o *v71; // x0
  int32_t v72; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v73; // x8
  int32_t v74; // w20
  int32_t v75; // w0
  System_Int32_array *lvList; // [xsp+8h] [xbp-98h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+10h] [xbp-90h] BYREF
  System_String_array *explanationList; // [xsp+18h] [xbp-88h] BYREF
  System_String_array *titleList; // [xsp+20h] [xbp-80h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE83 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_11932, v17);
    sub_B16FFC(&StringLiteral_19613, v18);
    byte_40FDE83 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  v19 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.baseSize.fields.x;
  if ( !v19 )
    goto LABEL_13;
  v20 = 0LL;
  while ( (__int64)v20 < v19->fields._size )
  {
    if ( v20 >= (unsigned int)v19->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v21 = (UnityEngine_Object_o *)v19->fields._items->m_Items[v20];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v21, 0LL);
    v22 = *(System_Collections_Generic_List_WarBoardManager_TaskList__o **)&this->fields.baseSize.fields.x;
    if ( v22 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
        v22,
        v20,
        0LL,
        (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      v19 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.baseSize.fields.x;
      ++v20;
      if ( v19 )
        continue;
    }
    goto LABEL_13;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v19,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  LODWORD(this->fields.baseCollider) = mode;
  if ( item && mode )
  {
    srcSkillObj = this->fields.srcSkillObj;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11932, 0LL);
    if ( srcSkillObj )
    {
      UILabel__set_text((UILabel_o *)srcSkillObj, v24, 0LL);
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite((UISprite_o *)explanationLabel, (System_String_o *)StringLiteral_19613, 0LL);
      v26 = this->fields.explanationLabel;
      if ( v26 )
      {
        ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v26->klass->vtable._33_MakePixelPerfect.method)(
          v26,
          v26->klass->vtable._34_get_minWidth.methodPtr);
        ServantStatusListViewItem__GetAppendPassiveSkillInfo(
          item,
          &idList,
          &titleList,
          &explanationList,
          &releaseStateList,
          &lvList,
          0LL);
        v30 = idList;
        if ( !idList )
          return;
        v31 = 0LL;
        v32 = 0;
        v33 = 1;
        while ( 1 )
        {
          max_length = v30->max_length;
          if ( (__int64)v31 >= (int)max_length )
            break;
          if ( v31 >= max_length )
            goto LABEL_83;
          if ( v30->m_Items[v31 + 1] >= 1 )
          {
            skillList = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.skillList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                skillList,
                                                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !v36 )
              goto LABEL_13;
            v37 = v36;
            transform = UnityEngine_GameObject__get_transform(v36, 0LL);
            v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( !transform )
              goto LABEL_13;
            UnityEngine_Transform__SetParent_34930292(transform, v39, 0, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v37, one, 0LL);
            Component_srcLineSprite = (ServantStatusSkillComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v37,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
            if ( !idList )
              goto LABEL_13;
            if ( v31 >= idList->max_length )
              goto LABEL_83;
            if ( !titleList )
              goto LABEL_13;
            if ( v31 >= titleList->max_length )
              goto LABEL_83;
            if ( !explanationList )
              goto LABEL_13;
            if ( v31 >= explanationList->max_length )
              goto LABEL_83;
            if ( !releaseStateList )
              goto LABEL_13;
            if ( v31 >= releaseStateList->max_length )
              goto LABEL_83;
            if ( !lvList )
              goto LABEL_13;
            if ( v31 >= lvList->max_length )
            {
LABEL_83:
              sub_B17100(Component_srcLineSprite, v28, v29);
              sub_B170A0();
            }
            v40 = Component_srcLineSprite;
            if ( !Component_srcLineSprite )
              goto LABEL_13;
            ServantStatusSkillComponent__SetItem(
              Component_srcLineSprite,
              v33,
              idList->m_Items[v31 + 1],
              titleList->m_Items[v31],
              explanationList->m_Items[v31],
              releaseStateList->m_Items[v31 + 4],
              lvList->m_Items[v31 + 1],
              0LL);
            Height = ServantStatusSkillComponent__GetHeight(v40, 0LL);
            v42 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
            v43 = Height;
            if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
              v42 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
            }
            v44 = UnityEngine_Mathf__Max_40727628(
                    v42->static_fields->ADJUST_HEIGHT + v43,
                    v42->static_fields->SKILL_BASE_HEIGHT,
                    0LL);
            if ( !*(_QWORD *)&this->fields.baseSize.fields.x )
              goto LABEL_13;
            v32 += v44;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.baseSize.fields.x,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            v30 = idList;
            ++v33;
          }
          ++v31;
          if ( !v30 )
            goto LABEL_13;
        }
        z = this->fields.baseSize.fields.z;
        x = this->fields.titleBasePosition.fields.x;
        y = this->fields.titleBasePosition.fields.y;
        baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v49 = x + (float)v32;
        if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
        {
          v50 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
          if ( !v50 )
            goto LABEL_13;
          v82.fields.x = z;
          v82.fields.y = v49;
          v82.fields.z = y;
          UnityEngine_BoxCollider__set_size(v50, v82, 0LL);
        }
        titleSprite = (UIWidget_o *)this->fields.titleSprite;
        if ( titleSprite )
        {
          v52 = z;
          if ( z == INFINITY )
            v52 = -z;
          UIWidget__set_width(titleSprite, (int)v52, 0LL);
          v53 = (UIWidget_o *)this->fields.titleSprite;
          if ( v53 )
          {
            v54 = v49;
            if ( v49 == INFINITY )
              v54 = -INFINITY;
            UIWidget__set_height(v53, (int)v54, 0LL);
            titleTextSprite = (UnityEngine_Component_o *)this->fields.titleTextSprite;
            v56 = v32 >= 0 ? v32 : v32 + 1;
            if ( titleTextSprite )
            {
              v57 = this->fields.titleBasePosition.fields.z;
              v58 = this->fields.skillBasePosition.fields.x;
              v59 = this->fields.skillBasePosition.fields.y;
              v60 = UnityEngine_Component__get_transform(titleTextSprite, 0LL);
              if ( v60 )
              {
                v61 = (float)(v56 >> 1);
                v83.fields.y = v58 + v61;
                v83.fields.x = v57;
                v83.fields.z = v59;
                UnityEngine_Transform__set_localPosition(v60, v83, 0LL);
                v62 = *(_QWORD *)&this->fields.baseSize.fields.x;
                if ( v62 )
                {
                  v63 = this->fields.skillBasePosition.fields.z;
                  v64 = *(float *)&this[1].klass;
                  v65 = 0LL;
                  v66 = *((float *)&this->fields.skillBasePosition + 3) + v61;
                  while ( 1 )
                  {
                    v67 = *(_DWORD *)(v62 + 24);
                    if ( (int)v65 >= v67 )
                      return;
                    if ( v67 <= (unsigned int)v65 )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    v68 = *(_QWORD *)(v62 + 16) + 8 * v65;
                    v69 = *(UnityEngine_GameObject_o **)(v68 + 32);
                    if ( v69 )
                    {
                      v70 = (ServantStatusSkillComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               *(UnityEngine_GameObject_o **)(v68 + 32),
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                      v71 = UnityEngine_GameObject__get_transform(v69, 0LL);
                      if ( v71 )
                      {
                        v84.fields.x = v63;
                        v84.fields.y = v66;
                        v84.fields.z = v64;
                        UnityEngine_Transform__set_localPosition(v71, v84, 0LL);
                        if ( v70 )
                        {
                          v72 = ServantStatusSkillComponent__GetHeight(v70, 0LL);
                          v73 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                          v74 = v72;
                          if ( (BYTE3(ServantStatusListViewItemDrawAppendSkill_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                            v73 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                          }
                          v75 = UnityEngine_Mathf__Max_40727628(
                                  v73->static_fields->ADJUST_HEIGHT + v74,
                                  v73->static_fields->SKILL_BASE_HEIGHT,
                                  0LL);
                          v62 = *(_QWORD *)&this->fields.baseSize.fields.x;
                          v66 = v66 - (float)v75;
                          ++v65;
                          if ( v62 )
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
    sub_B170D4();
  }
}