void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_49F9260 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_49F9260 = 1;
  }
  static_fields = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields;
  static_fields->SKILL_BASE_POS_Y = -25.0;
  *(_QWORD *)&static_fields->SKILL_BASE_HEIGHT = 0x2800000069LL;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F925F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_49F925F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillList, (int32_t)v5, v6, v7);
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
  if ( (byte_49F925D & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1B640C8(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_49F925D = 1;
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
    sub_1B64324(this);
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
  __int64 v26; // x1
  System_Int32_array *v27; // x8
  unsigned __int64 v28; // x20
  int v29; // w29
  __int64 v30; // x21
  int32_t v31; // w22
  unsigned __int64 max_length; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v34; // x23
  UnityEngine_Transform_o *transform; // x24
  __int64 v36; // x1
  ServantStatusSkillComponent_o *v37; // x24
  int32_t Height; // w0
  int32_t v39; // w2
  int32_t v40; // w3
  ServantStatusListViewItemDrawAppendSkill_c *v41; // x8
  int32_t v42; // w24
  int32_t v43; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v45; // w24
  int32_t v46; // w26
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  __int64 v51; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  signed int v54; // w9
  int v55; // w10
  int v56; // w20
  int v57; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v62; // s8
  int32_t v63; // w1
  int32_t v64; // w1
  int v65; // w20
  float v66; // s8
  float v67; // s11
  float v68; // s9
  float v69; // s10
  float v70; // s8
  float v71; // s9
  int32_t v72; // w20
  float v73; // s10
  UnityEngine_GameObject_o *v74; // x22
  Il2CppObject *Component_object; // x21
  int32_t v76; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v77; // x8
  int32_t v78; // w21
  int v79; // w8
  int *v80; // t2
  int v81; // w9
  ServantStatusListViewItem_o *v82; // [xsp+8h] [xbp-B8h]
  char v83; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F925E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_11824/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v17);
    sub_1B640C8(&StringLiteral_20448/*"img_txt_extraskill_title"*/, v18);
    byte_49F925E = 1;
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
            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v22, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v20,
        0LL,
        (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
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
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11824/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20448/*"img_txt_extraskill_title"*/, 0LL);
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
    v27 = idList;
    if ( !idList )
      return;
    v82 = item;
    v83 = 0;
    v28 = 0LL;
    v29 = 0;
    v30 = 0x100000000LL;
    v31 = 1;
    while ( 1 )
    {
      max_length = v27->max_length;
      if ( (__int64)v28 >= (int)max_length )
        break;
      if ( v28 >= max_length )
        goto LABEL_117;
      if ( v27->m_Items[v28 + 1] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v34 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_69148984(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_49F7116 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
          byte_49F7116 = 1;
        }
        GameObjectExtensions__SetLocalScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v34,
                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v28 >= idList->max_length )
          goto LABEL_117;
        if ( !titleList )
          goto LABEL_10;
        if ( v28 >= titleList->max_length )
          goto LABEL_117;
        if ( !explanationList )
          goto LABEL_10;
        if ( v28 >= explanationList->max_length )
          goto LABEL_117;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v28 >= releaseStateList->max_length )
          goto LABEL_117;
        if ( !lvList )
          goto LABEL_10;
        if ( v28 >= lvList->max_length )
          goto LABEL_117;
        v37 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v31,
          idList->m_Items[v28 + 1],
          titleList->m_Items[v28],
          explanationList->m_Items[v28],
          releaseStateList->m_Items[v28 + 4],
          lvList->m_Items[v28 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight(v37, 0LL);
        v41 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v42 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v41 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v41->static_fields->SKILL_BASE_HEIGHT;
        v43 = *p_SKILL_BASE_HEIGHT;
        v45 = p_SKILL_BASE_HEIGHT[1] + v42;
        v46 = v45 <= *p_SKILL_BASE_HEIGHT ? v43 : v45;
        if ( !skillList )
          goto LABEL_10;
        v47 = *((_QWORD *)skillList + 2);
        v48 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v47 )
          goto LABEL_10;
        v49 = *((int *)skillList + 6);
        if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v34,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * v49;
          *((_DWORD *)skillList + 6) = v49 + 1;
          *(_QWORD *)(v50 + 32) = v34;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 32), (int32_t)v34, v39, v40);
        }
        if ( !idList )
          goto LABEL_10;
        v51 = *(_QWORD *)&idList->max_length;
        v29 += v46;
        ++v31;
        if ( v28 == (_DWORD)v51 - 1 )
          goto LABEL_57;
        if ( v28 + 1 >= (unsigned int)v51 )
LABEL_117:
          sub_1B6432C(skillList, v26);
        if ( *(int *)((char *)&idList->m_Items[1] + (v30 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v45 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v83 |= v45 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v27 = idList;
      ++v28;
      v30 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v82->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v82->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v82->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            if ( !lvList )
              goto LABEL_10;
            v54 = lvList->max_length;
            if ( v54 >= 1 )
            {
              v55 = 0;
              while ( 1 )
              {
                if ( v54 == v55 )
                  goto LABEL_117;
                if ( lvList->m_Items[v55 + 1] <= 9u )
                  break;
                if ( v54 == ++v55 )
                  goto LABEL_86;
              }
              skillList = this->fields.reinforceObject;
              if ( (v83 & 1) != 0 )
                v56 = 62;
              else
                v56 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v29 += v56;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v82->fields._CanMoveCombine_k__BackingField, 0LL);
              if ( v29 >= 0 )
                v57 = v29;
              else
                v57 = v29 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v57 >> 1), 0LL);
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
    v62 = y + (float)v29;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v89.fields.x = x;
      v89.fields.y = v62;
      v89.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v89, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v63 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v63, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v64 = v62 == INFINITY ? 0x80000000 : (int)v62;
        UIWidget__set_height((UIWidget_o *)skillList, v64, 0LL);
        skillList = this->fields.titleSprite;
        v65 = v29 >= 0 ? v29 : v29 + 1;
        if ( skillList )
        {
          v66 = this->fields.titleBasePosition.fields.x;
          v67 = this->fields.titleBasePosition.fields.y;
          v68 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v69 = (float)(v65 >> 1);
            v90.fields.y = v67 + v69;
            v90.fields.x = v66;
            v90.fields.z = v68;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v90, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v70 = this->fields.skillBasePosition.fields.z;
              v71 = this->fields.skillBasePosition.fields.x;
              v72 = 0;
              v73 = this->fields.skillBasePosition.fields.y + v69;
              while ( v72 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v72,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v74 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v74, 0LL);
                  if ( skillList )
                  {
                    v91.fields.x = v71;
                    v91.fields.y = v73;
                    v91.fields.z = v70;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v91, 0LL);
                    if ( Component_object )
                    {
                      v76 = ServantStatusSkillComponent__GetHeight(
                              (ServantStatusSkillComponent_o *)Component_object,
                              0LL);
                      v77 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v78 = v76;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v77 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v72;
                      v80 = &v77->static_fields->SKILL_BASE_HEIGHT;
                      v79 = *v80;
                      v81 = v80[1] + v78;
                      if ( v81 > *v80 )
                        v79 = v81;
                      v73 = v73 - (float)v79;
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
    sub_1B64324(skillList);
  }
}