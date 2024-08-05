void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_49FB34F & 1) == 0 )
  {
    sub_1B64870(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_49FB34F = 1;
  }
  static_fields = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields;
  static_fields->SKILL_BASE_POS_Y = -25.0;
  *(_QWORD *)&static_fields->SKILL_BASE_HEIGHT = 0x2800000069LL;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB34E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_49FB34E = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
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
  if ( (byte_49FB34C & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1B64870(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_49FB34C = 1;
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
    sub_1B64ACC(this, method);
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
  void *skillList; // x0
  int32_t v20; // w22
  int32_t v21; // w2
  Il2CppObject *v22; // x23
  int v23; // w8
  UILabel_o *explanationLabel; // x21
  UISprite_o *titleTextSprite; // x21
  System_Int32_array *v26; // x8
  unsigned __int64 v27; // x20
  int v28; // w29
  __int64 v29; // x21
  int32_t v30; // w22
  unsigned __int64 max_length; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v33; // x23
  UnityEngine_Transform_o *transform; // x24
  __int64 v35; // x1
  ServantStatusSkillComponent_o *v36; // x24
  int32_t Height; // w0
  int32_t v38; // w2
  int32_t v39; // w3
  ServantStatusListViewItemDrawAppendSkill_c *v40; // x8
  int32_t v41; // w24
  int32_t v42; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v44; // w24
  int32_t v45; // w26
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  __int64 v50; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  signed int v53; // w9
  int v54; // w10
  int v55; // w20
  int v56; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v61; // s8
  int32_t v62; // w1
  int32_t v63; // w1
  int v64; // w20
  float v65; // s8
  float v66; // s11
  float v67; // s9
  float v68; // s10
  float v69; // s8
  float v70; // s9
  int32_t v71; // w20
  float v72; // s10
  UnityEngine_GameObject_o *v73; // x22
  Il2CppObject *Component_object; // x21
  int32_t v75; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v76; // x8
  int32_t v77; // w21
  int v78; // w8
  int *v79; // t2
  int v80; // w9
  ServantStatusListViewItem_o *v81; // [xsp+8h] [xbp-B8h]
  char v82; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB34D & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_1B64870(&LocalizationManager_TypeInfo, v13);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64870(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v16);
    sub_1B64870(&StringLiteral_11827/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v17);
    sub_1B64870(&StringLiteral_20451/*"img_txt_extraskill_title"*/, v18);
    byte_49FB34D = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  skillList = this->fields.skillList;
  if ( !skillList )
    goto LABEL_10;
  v20 = 0;
  while ( 1 )
  {
    v21 = *((_DWORD *)skillList + 6);
    if ( v20 >= v21 )
      break;
    v22 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)skillList,
            v20,
            (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916((UnityEngine_Object_o *)v22, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v20,
        0LL,
        (const MethodInfo_34AF734 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      skillList = this->fields.skillList;
      ++v20;
      if ( skillList )
        continue;
    }
    goto LABEL_10;
  }
  v23 = *((_DWORD *)skillList + 7) + 1;
  *((_DWORD *)skillList + 6) = 0;
  *((_DWORD *)skillList + 7) = v23;
  if ( v21 >= 1 )
    System_Array__Clear(*((System_Array_o **)skillList + 2), 0, v21, 0LL);
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11827/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20451/*"img_txt_extraskill_title"*/, 0LL);
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
    v26 = idList;
    if ( !idList )
      return;
    v81 = item;
    v82 = 0;
    v27 = 0LL;
    v28 = 0;
    v29 = 0x100000000LL;
    v30 = 1;
    while ( 1 )
    {
      max_length = v26->max_length;
      if ( (__int64)v27 >= (int)max_length )
        break;
      if ( v27 >= max_length )
        goto LABEL_117;
      if ( v26->m_Items[v27 + 1] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v33 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_69157164(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_49F9206 )
        {
          sub_1B64870(&UnityEngine_Vector3_TypeInfo, v35);
          byte_49F9206 = 1;
        }
        GameObjectExtensions__SetLocalScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v33,
                      (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v27 >= idList->max_length )
          goto LABEL_117;
        if ( !titleList )
          goto LABEL_10;
        if ( v27 >= titleList->max_length )
          goto LABEL_117;
        if ( !explanationList )
          goto LABEL_10;
        if ( v27 >= explanationList->max_length )
          goto LABEL_117;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v27 >= releaseStateList->max_length )
          goto LABEL_117;
        if ( !lvList )
          goto LABEL_10;
        if ( v27 >= lvList->max_length )
          goto LABEL_117;
        v36 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v30,
          idList->m_Items[v27 + 1],
          titleList->m_Items[v27],
          explanationList->m_Items[v27],
          releaseStateList->m_Items[v27 + 4],
          lvList->m_Items[v27 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight(v36, 0LL);
        v40 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v41 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v40 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v40->static_fields->SKILL_BASE_HEIGHT;
        v42 = *p_SKILL_BASE_HEIGHT;
        v44 = p_SKILL_BASE_HEIGHT[1] + v41;
        v45 = v44 <= *p_SKILL_BASE_HEIGHT ? v42 : v44;
        if ( !skillList )
          goto LABEL_10;
        v46 = *((_QWORD *)skillList + 2);
        v47 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v46 )
          goto LABEL_10;
        v48 = *((int *)skillList + 6);
        if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v33,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = v46 + 8 * v48;
          *((_DWORD *)skillList + 6) = v48 + 1;
          *(_QWORD *)(v49 + 32) = v33;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)v33, v38, v39);
        }
        if ( !idList )
          goto LABEL_10;
        v50 = *(_QWORD *)&idList->max_length;
        v28 += v45;
        ++v30;
        if ( v27 == (_DWORD)v50 - 1 )
          goto LABEL_57;
        if ( v27 + 1 >= (unsigned int)v50 )
LABEL_117:
          sub_1B64AD4(skillList, item);
        if ( *(int *)((char *)&idList->m_Items[1] + (v29 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v44 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v82 |= v44 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v26 = idList;
      ++v27;
      v29 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v81->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v81->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v81->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            if ( !lvList )
              goto LABEL_10;
            v53 = lvList->max_length;
            if ( v53 >= 1 )
            {
              v54 = 0;
              while ( 1 )
              {
                if ( v53 == v54 )
                  goto LABEL_117;
                if ( lvList->m_Items[v54 + 1] <= 9u )
                  break;
                if ( v53 == ++v54 )
                  goto LABEL_86;
              }
              skillList = this->fields.reinforceObject;
              if ( (v82 & 1) != 0 )
                v55 = 62;
              else
                v55 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v28 += v55;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v81->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v28 >= 0 )
                v56 = v28;
              else
                v56 = v28 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v56 >> 1), 0LL);
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
    v61 = y + (float)v28;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v88.fields.x = x;
      v88.fields.y = v61;
      v88.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v88, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v62 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v62, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v63 = v61 == INFINITY ? 0x80000000 : (int)v61;
        UIWidget__set_height((UIWidget_o *)skillList, v63, 0LL);
        skillList = this->fields.titleSprite;
        v64 = v28 >= 0 ? v28 : v28 + 1;
        if ( skillList )
        {
          v65 = this->fields.titleBasePosition.fields.x;
          v66 = this->fields.titleBasePosition.fields.y;
          v67 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v68 = (float)(v64 >> 1);
            v89.fields.y = v66 + v68;
            v89.fields.x = v65;
            v89.fields.z = v67;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v89, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v69 = this->fields.skillBasePosition.fields.z;
              v70 = this->fields.skillBasePosition.fields.x;
              v71 = 0;
              v72 = this->fields.skillBasePosition.fields.y + v68;
              while ( v71 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v71,
                              (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v73 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v73, 0LL);
                  if ( skillList )
                  {
                    v90.fields.x = v70;
                    v90.fields.y = v72;
                    v90.fields.z = v69;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v90, 0LL);
                    if ( Component_object )
                    {
                      v75 = ServantStatusSkillComponent__GetHeight(
                              (ServantStatusSkillComponent_o *)Component_object,
                              0LL);
                      v76 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v77 = v75;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v76 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v71;
                      v79 = &v76->static_fields->SKILL_BASE_HEIGHT;
                      v78 = *v79;
                      v80 = v79[1] + v77;
                      if ( v80 > *v79 )
                        v78 = v80;
                      v72 = v72 - (float)v78;
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
    sub_1B64ACC(skillList, item);
  }
}