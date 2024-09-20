void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4A57DD1 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4A57DD1 = 1;
  }
  static_fields = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields;
  static_fields->SKILL_BASE_POS_Y = -25.0;
  *(_QWORD *)&static_fields->SKILL_BASE_HEIGHT = 0x2800000069LL;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57DD0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A57DD0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawAppendSkill_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  int32x2_t v4; // d0
  ServantStatusListViewItemDrawAppendSkill_c *v5; // x0
  float SKILL_BASE_POS_Y; // s0

  v2 = this;
  if ( (byte_4A57DCE & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1B885B0(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4A57DCE = 1;
  }
  baseSprite = v2->fields.baseSprite;
  if ( !baseSprite
    || (v4.n64_u64[0] = *(unsigned __int64 *)&baseSprite->fields.mWidth,
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v2->fields.titleSprite,
        v2->fields.baseSize.fields.z = 0.0,
        *(float32x2_t *)&v2->fields.baseSize.fields.x = vcvt_f32_s32(v4),
        !this)
    || (this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL)) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  v2->fields.titleBasePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v5 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    v5 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v5->static_fields->SKILL_BASE_POS_Y;
  v2->fields.skillBasePosition.fields.x = 0.0;
  v2->fields.skillBasePosition.fields.z = 0.0;
  v2->fields.skillBasePosition.fields.y = SKILL_BASE_POS_Y;
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
  void *skillList; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  Il2CppObject *v10; // x23
  int v11; // w8
  UILabel_o *explanationLabel; // x21
  UISprite_o *titleTextSprite; // x21
  System_Int32_array *v14; // x8
  unsigned __int64 v15; // x20
  int v16; // w29
  __int64 v17; // x21
  int32_t v18; // w22
  unsigned __int64 max_length; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v21; // x23
  UnityEngine_Transform_o *transform; // x24
  ServantStatusSkillComponent_o *v23; // x24
  int32_t Height; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  ServantStatusListViewItemDrawAppendSkill_c *v27; // x8
  int32_t v28; // w24
  int32_t v29; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v31; // w24
  int32_t v32; // w26
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  __int64 v37; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  signed int v40; // w9
  int v41; // w10
  int v42; // w20
  int v43; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v48; // s8
  int32_t v49; // w1
  int32_t v50; // w1
  int v51; // w20
  float v52; // s8
  float v53; // s11
  float v54; // s9
  float v55; // s10
  float v56; // s8
  float v57; // s9
  int32_t v58; // w20
  float v59; // s10
  UnityEngine_GameObject_o *v60; // x22
  Il2CppObject *Component_object; // x21
  int32_t v62; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v63; // x8
  int32_t v64; // w21
  int v65; // w8
  int *v66; // t2
  int v67; // w9
  ServantStatusListViewItem_o *v68; // [xsp+8h] [xbp-B8h]
  char v69; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57DCF & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    sub_1B885B0(&StringLiteral_11879/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1B885B0(&StringLiteral_20529/*"img_txt_extraskill_title"*/);
    byte_4A57DCF = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  skillList = this->fields.skillList;
  if ( !skillList )
    goto LABEL_10;
  v8 = 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)skillList + 6);
    if ( v8 >= v9 )
      break;
    v10 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)skillList,
            v8,
            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v10, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v8,
        0LL,
        (const MethodInfo_34FD5B8 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      skillList = this->fields.skillList;
      ++v8;
      if ( skillList )
        continue;
    }
    goto LABEL_10;
  }
  v11 = *((_DWORD *)skillList + 7) + 1;
  *((_DWORD *)skillList + 6) = 0;
  *((_DWORD *)skillList + 7) = v11;
  if ( v9 >= 1 )
    System_Array__Clear(*((System_Array_o **)skillList + 2), 0, v9, 0LL);
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11879/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20529/*"img_txt_extraskill_title"*/, 0LL);
    skillList = this->fields.titleTextSprite;
    if ( !skillList )
      goto LABEL_10;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillList + 840LL))(
      skillList,
      *(_QWORD *)(*(_QWORD *)skillList + 848LL));
    ServantStatusListViewItem__GetAppendPassiveSkillInfo(
      item,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      0LL);
    v14 = idList;
    if ( !idList )
      return;
    v68 = item;
    v69 = 0;
    v15 = 0LL;
    v16 = 0;
    v17 = 0x100000000LL;
    v18 = 1;
    while ( 1 )
    {
      max_length = v14->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_117;
      if ( v14->m_Items[v15 + 1] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v21 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_69480628(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_4A55CE6 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v21,
                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v15 >= idList->max_length )
          goto LABEL_117;
        if ( !titleList )
          goto LABEL_10;
        if ( v15 >= titleList->max_length )
          goto LABEL_117;
        if ( !explanationList )
          goto LABEL_10;
        if ( v15 >= explanationList->max_length )
          goto LABEL_117;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v15 >= releaseStateList->max_length )
          goto LABEL_117;
        if ( !lvList )
          goto LABEL_10;
        if ( v15 >= lvList->max_length )
          goto LABEL_117;
        v23 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v18,
          idList->m_Items[v15 + 1],
          titleList->m_Items[v15],
          explanationList->m_Items[v15],
          releaseStateList->m_Items[v15 + 4],
          lvList->m_Items[v15 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight(v23, 0LL);
        v27 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v28 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v27 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v27->static_fields->SKILL_BASE_HEIGHT;
        v29 = *p_SKILL_BASE_HEIGHT;
        v31 = p_SKILL_BASE_HEIGHT[1] + v28;
        v32 = v31 <= *p_SKILL_BASE_HEIGHT ? v29 : v31;
        if ( !skillList )
          goto LABEL_10;
        v33 = *((_QWORD *)skillList + 2);
        v34 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v33 )
          goto LABEL_10;
        v35 = *((int *)skillList + 6);
        if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v21,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * v35;
          *((_DWORD *)skillList + 6) = v35 + 1;
          *(_QWORD *)(v36 + 32) = v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v21, v25, v26);
        }
        if ( !idList )
          goto LABEL_10;
        v37 = *(_QWORD *)&idList->max_length;
        v16 += v32;
        ++v18;
        if ( v15 == (_DWORD)v37 - 1 )
          goto LABEL_57;
        if ( v15 + 1 >= (unsigned int)v37 )
LABEL_117:
          sub_1B88814(skillList, item);
        if ( *(int *)((char *)&idList->m_Items[1] + (v17 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v31 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v69 |= v31 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v14 = idList;
      ++v15;
      v17 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v68->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v68->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v68->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            if ( !lvList )
              goto LABEL_10;
            v40 = lvList->max_length;
            if ( v40 >= 1 )
            {
              v41 = 0;
              while ( 1 )
              {
                if ( v40 == v41 )
                  goto LABEL_117;
                if ( lvList->m_Items[v41 + 1] <= 9u )
                  break;
                if ( v40 == ++v41 )
                  goto LABEL_86;
              }
              skillList = this->fields.reinforceObject;
              if ( (v69 & 1) != 0 )
                v42 = 62;
              else
                v42 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v16 += v42;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v68->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v16 >= 0 )
                v43 = v16;
              else
                v43 = v16 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v43 >> 1), 0LL);
            }
          }
        }
      }
    }
LABEL_86:
    x = this->fields.baseSize.fields.x;
    y = this->fields.baseSize.fields.y;
    z = this->fields.baseSize.fields.z;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v48 = y + (float)v16;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v75.fields.x = x;
      v75.fields.y = v48;
      v75.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v75, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v49 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v49, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v50 = v48 == INFINITY ? 0x80000000 : (int)v48;
        UIWidget__set_height((UIWidget_o *)skillList, v50, 0LL);
        skillList = this->fields.titleSprite;
        v51 = v16 >= 0 ? v16 : v16 + 1;
        if ( skillList )
        {
          v52 = this->fields.titleBasePosition.fields.x;
          v53 = this->fields.titleBasePosition.fields.y;
          v54 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v55 = (float)(v51 >> 1);
            v76.fields.y = v53 + v55;
            v76.fields.x = v52;
            v76.fields.z = v54;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v76, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v56 = this->fields.skillBasePosition.fields.z;
              v57 = this->fields.skillBasePosition.fields.x;
              v58 = 0;
              v59 = this->fields.skillBasePosition.fields.y + v55;
              while ( v58 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v58,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v60 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v60, 0LL);
                  if ( skillList )
                  {
                    v77.fields.x = v57;
                    v77.fields.y = v59;
                    v77.fields.z = v56;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v77, 0LL);
                    if ( Component_object )
                    {
                      v62 = ServantStatusSkillComponent__GetHeight(
                              (ServantStatusSkillComponent_o *)Component_object,
                              0LL);
                      v63 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v64 = v62;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v63 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v58;
                      v66 = &v63->static_fields->SKILL_BASE_HEIGHT;
                      v65 = *v66;
                      v67 = v66[1] + v64;
                      if ( v67 > *v66 )
                        v65 = v67;
                      v59 = v59 - (float)v65;
                      if ( skillList )
                        continue;
                    }
                  }
                }
                goto LABEL_10;
              }
              return;
            }
          }
        }
      }
    }
LABEL_10:
    sub_1B8880C(skillList, item);
  }
}