void ServantStatusListViewItemFace___ctor(ServantStatusListViewItemFace_o *this, const MethodInfo *method)
{
  this->fields.costumeIconHeight = 32;
  this->fields.costumeIconLocalPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.costumeIconPivot = 0x2000000004LL;
  *(int32x2_t *)&this->fields.costumeIconLocalPosition.fields.x = vdup_n_s32(0xC2280000);
  this->fields.index = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemFace__ApplyInteractableState(
        ServantStatusListViewItemFace_o *this,
        bool isSelected,
        bool isEnabled,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x23
  __int64 v10; // x1
  UICommonButton_o *v11; // x0
  bool v12; // w8

  if ( (byte_596DF5C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF5C = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSelected, isEnabled);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v11 = this->fields.button;
    v12 = !isEnabled || isInit;
    if ( isSelected && isEnabled )
    {
      if ( v11 )
      {
        UICommonButton__SetColliderEnable(v11, 0, v12, 0);
        return;
      }
LABEL_12:
      sub_2213CDC(v11, v10);
    }
    if ( !v11 )
      goto LABEL_12;
    UICommonButton__SetButtonEnable(v11, isEnabled & ~isSelected & 1, v12, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemFace__EnsureItemCount(
        ServantStatusListViewItemFace_o *this,
        int32_t count,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  ServantStatusListViewItemFace_o *v6; // x20
  struct ServantStatusListViewItemFace_array *faceItems; // x8
  struct ServantStatusListViewItemFace_array **p_faceItems; // x21
  il2cpp_array_size_t max_length; // x25
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ServantStatusListViewItemFace_array *v16; // x8
  unsigned int *v17; // x23
  __int64 v18; // x26
  __int64 v19; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v21; // x28
  __int64 v22; // x24
  __int64 v23; // x1
  __int64 v24; // x29
  __int64 i; // x27
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *gameObject; // x23
  ServantStatusListViewItemFace_o *v29; // x23
  ServantStatusListViewItemFace_o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t layer; // w24
  struct ServantStatusListViewItemFace_array *v34; // x24
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  ServantStatusListViewItemFace_o *v41; // x23
  __int64 v42; // x0
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  v6 = this;
  if ( (byte_596DF60 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemFace___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusListViewItemFace_o *)sub_2213A60(&ServantStatusListViewItemFace___TypeInfo);
    byte_596DF60 = 1;
  }
  p_faceItems = &v6->fields.faceItems;
  faceItems = v6->fields.faceItems;
  if ( !faceItems )
    goto LABEL_14;
  max_length = faceItems->max_length;
  if ( (int)max_length < count )
  {
    this = (ServantStatusListViewItemFace_o *)sub_2213B20(ServantStatusListViewItemFace___TypeInfo, (unsigned int)count);
    v16 = *p_faceItems;
    if ( *p_faceItems )
    {
      v17 = (unsigned int *)this;
      v18 = 4;
      v19 = 8;
      while ( 1 )
      {
        max_length_low = LODWORD(v16->max_length);
        v21 = v18 - 4;
        if ( v18 - 4 >= (int)max_length_low )
          break;
        if ( v21 >= max_length_low )
          goto LABEL_33;
        if ( v17 )
        {
          v22 = *((_QWORD *)&v16->obj.klass + v18);
          if ( v22 )
          {
            this = (ServantStatusListViewItemFace_o *)sub_2213BB4(v22, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
            if ( !this )
            {
LABEL_34:
              v42 = sub_2213D00(this, v23);
              sub_2213BA0(v42, 0);
            }
          }
          if ( v21 >= v17[6] )
LABEL_33:
            sub_2213CE4(this);
          *(_QWORD *)&v17[2 * v18] = v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17[v19], v22, v10, v11, v12, v13, v14, v15);
          v16 = *p_faceItems;
          ++v18;
          v19 += 2;
          if ( *p_faceItems )
            continue;
        }
        goto LABEL_14;
      }
      v6->fields.faceItems = (struct ServantStatusListViewItemFace_array *)v17;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.faceItems, (int32_t)v17, v10, v11, v12, v13, v14, v15);
      this = (ServantStatusListViewItemFace_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0);
      if ( this )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
        v24 = count - (__int64)(int)max_length;
        for ( i = 8LL * (int)max_length + 32; ; i += 8 )
        {
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
          this = (ServantStatusListViewItemFace_o *)UnityEngine_Object__Instantiate_object_(
                                                      gameObject,
                                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !this )
            break;
          v29 = this;
          this = (ServantStatusListViewItemFace_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
          if ( !this )
            break;
          v30 = this;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0);
          if ( !byte_5969AE6 )
          {
            sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
            byte_5969AE6 = 1;
          }
          UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)v30,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v30, localScale, 0);
          if ( !parent )
            break;
          this = (ServantStatusListViewItemFace_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)parent,
                                                      0);
          if ( !this )
            break;
          layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v31, v32);
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v29, layer, 0);
          v34 = *p_faceItems;
          this = (ServantStatusListViewItemFace_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)v29,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemFace___);
          if ( !v34 )
            break;
          v41 = this;
          if ( this )
          {
            this = (ServantStatusListViewItemFace_o *)sub_2213BB4(this, v34->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_34;
          }
          if ( (unsigned int)max_length >= LODWORD(v34->max_length) )
            goto LABEL_33;
          *(Il2CppClass **)((char *)&v34->obj.klass + i) = (Il2CppClass *)v41;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v34 + i), (int32_t)v41, v35, v36, v37, v38, v39, v40);
          --v24;
          LODWORD(max_length) = max_length + 1;
          if ( !v24 )
            return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&count);
  }
}


void ServantStatusListViewItemFace__SetOnClick(
        ServantStatusListViewItemFace_o *this,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v17; // x8
  struct System_Collections_Generic_List_EventDelegate__o *v18; // x9
  int32_t size; // w2
  int v20; // w10
  System_Collections_Generic_List_object__o *v21; // x19
  EventDelegate_Callback_o *v22; // x21
  EventDelegate_o *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0

  if ( (byte_596DF5F & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewItemFace___c__DisplayClass24_0__SetOnClick_b__0__);
    sub_2213A60(&ServantStatusListViewItemFace___c__DisplayClass24_0_TypeInfo);
    byte_596DF5F = 1;
  }
  v5 = sub_2213CCC(ServantStatusListViewItemFace___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = onClick;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)onClick, v8, v9, v10, v11, v12, v13);
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  v6 = UnityEngine_Object__op_Equality(button, 0, 0);
  if ( !v6 && *(_QWORD *)(v5 + 16) )
  {
    v17 = this->fields.button;
    *(_DWORD *)(v5 + 24) = this->fields.index;
    if ( v17 )
    {
      v18 = v17->fields.onClick;
      if ( v18 )
      {
        size = v18->fields._size;
        v20 = v18->fields._version + 1;
        v18->fields._size = 0;
        v18->fields._version = v20;
        if ( size < 1
          || (System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0), (v17 = this->fields.button) != 0) )
        {
          v21 = (System_Collections_Generic_List_object__o *)v17->fields.onClick;
          v22 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v22,
            (Il2CppObject *)v5,
            Method_ServantStatusListViewItemFace___c__DisplayClass24_0__SetOnClick_b__0__,
            0);
          v23 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
          EventDelegate___ctor_56337280(v23, v22, 0);
          if ( v21 )
          {
            items = v21->fields._items;
            v31 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++v21->fields._version;
            if ( items )
            {
              v32 = v21->fields._size;
              if ( (unsigned int)v32 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + v32;
                v21->fields._size = v32 + 1;
                v33[4] = (Il2CppClass *)v23;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
              }
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(v6, v7);
  }
}


ServantStatusListViewItemFace_array *ServantStatusListViewItemFace__Setup(
        ServantStatusListViewItemFace_o *this,
        int32_t count,
        UnityEngine_Transform_o *parent,
        System_Func_int__Vector3__o *offsetSelector,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  ServantStatusListViewItemFace_array *result; // x0
  struct ServantStatusListViewItemFace_array **p_faceItems; // x23
  __int64 v13; // x1
  ServantStatusListViewItemFace_array *v14; // x25
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x24
  int max_length; // w8
  Il2CppClass **v30; // x8
  Il2CppClass *v31; // x25
  UnityEngine_Transform_o *v32; // x26
  float z; // s8
  float y; // s9
  float x; // s10
  float v36; // s0
  float v37; // s1
  float v38; // s2
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF5E & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemFace___TypeInfo);
    byte_596DF5E = 1;
  }
  p_faceItems = &this->fields.faceItems;
  result = this->fields.faceItems;
  if ( result )
  {
    if ( LODWORD(result->max_length) == count )
      return result;
  }
  else
  {
    result = (ServantStatusListViewItemFace_array *)sub_2213B20(ServantStatusListViewItemFace___TypeInfo, 1);
    if ( !result )
      goto LABEL_20;
    v14 = result;
    result = (ServantStatusListViewItemFace_array *)sub_2213BB4(this, result->obj.klass->_1.element_class);
    if ( !result )
    {
      v40 = sub_2213D00(0, v15);
      sub_2213BA0(v40, 0);
    }
    if ( !LODWORD(v14->max_length) )
LABEL_21:
      sub_2213CE4(result);
    v14->m_Items[0] = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v14->m_Items, (int32_t)this, v16, v17, v18, v19, v20, v21);
    this->fields.faceItems = v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.faceItems, (int32_t)v14, v22, v23, v24, v25, v26, v27);
    result = (ServantStatusListViewItemFace_array *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
    if ( !result )
LABEL_20:
      sub_2213CDC(result, v13);
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)result, 0);
  }
  ServantStatusListViewItemFace__EnsureItemCount(this, count, parent, (const MethodInfo *)offsetSelector);
  result = this->fields.faceItems;
  if ( !result )
    goto LABEL_20;
  v28 = 0;
  while ( 1 )
  {
    max_length = result->max_length;
    if ( (int)v28 >= max_length )
      return result;
    if ( (unsigned int)v28 >= max_length )
      goto LABEL_21;
    v30 = &result->obj.klass + v28;
    v31 = v30[4];
    if ( v31 )
    {
      result = (ServantStatusListViewItemFace_array *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v30[4],
                                                        0);
      if ( offsetSelector )
      {
        v32 = (UnityEngine_Transform_o *)result;
        y = this->fields.basePosition.fields.y;
        z = this->fields.basePosition.fields.z;
        x = this->fields.basePosition.fields.x;
        result = (ServantStatusListViewItemFace_array *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))offsetSelector->fields.invoke_impl)(
                                                          offsetSelector->fields.method_code,
                                                          (unsigned int)v28,
                                                          offsetSelector->fields.method);
        if ( v32 )
        {
          v41.fields.z = z + v38;
          v41.fields.y = y + v37;
          v41.fields.x = x + v36;
          UnityEngine_Transform__set_localPosition(v32, v41, 0);
          result = (ServantStatusListViewItemFace_array *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v31,
                                                            0);
          if ( result )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)result, (int)v28 < count, 0);
            HIDWORD(v31->_1.typeMetadataHandle) = v28;
            ServantStatusListViewItemFace__SetOnClick((ServantStatusListViewItemFace_o *)v31, onClick, v39);
            result = *p_faceItems;
            ++v28;
            if ( *p_faceItems )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


void ServantStatusListViewItemFace__SetupCostumeIcon(
        ServantStatusListViewItemFace_o *this,
        ServantCostumeEntity_o *svtCostumeEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *costumeIconSprite; // x21
  __int64 v6; // x1
  UISprite_o *transform; // x0
  int32_t v8; // w20
  int32_t iconId; // t1
  UISprite_o *v10; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x20

  if ( (byte_596DF5D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_25148/*"svt_costume_icon_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DF5D = 1;
  }
  costumeIconSprite = (UnityEngine_Object_o *)this->fields.costumeIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtCostumeEntity, method);
  if ( !UnityEngine_Object__op_Equality(costumeIconSprite, 0, 0) )
  {
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UISprite__set_spriteName(transform, (System_String_o *)StringLiteral_1/*""*/, 0);
    transform = this->fields.costumeIconSprite;
    if ( !transform )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0);
    if ( svtCostumeEntity )
    {
      iconId = svtCostumeEntity->fields.iconId;
      v8 = (_DWORD)svtCostumeEntity + 92;
      if ( iconId >= 1 )
      {
        v10 = this->fields.costumeIconSprite;
        v11 = System_Int32__ToString(v8, 0);
        v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_25148/*"svt_costume_icon_"*/, v11, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
        if ( AtlasManager__SetEventSprite(v10, v14, 0) )
        {
          transform = this->fields.costumeIconSprite;
          if ( transform )
          {
            UIWidget__set_pivot((UIWidget_o *)transform, this->fields.costumeIconPivot, 0);
            transform = this->fields.costumeIconSprite;
            if ( transform )
            {
              UIWidget__set_width((UIWidget_o *)transform, this->fields.costumeIconWidth, 0);
              transform = this->fields.costumeIconSprite;
              if ( transform )
              {
                UIWidget__set_height((UIWidget_o *)transform, this->fields.costumeIconHeight, 0);
                transform = this->fields.costumeIconSprite;
                if ( transform )
                {
                  transform = (UISprite_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)transform,
                                              0);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)transform,
                      this->fields.costumeIconLocalPosition,
                      0);
                    transform = this->fields.costumeIconSprite;
                    if ( transform )
                    {
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_21:
          sub_2213CDC(transform, v6);
        }
      }
    }
  }
}


UICommonButton_o *ServantStatusListViewItemFace__get_Button(
        ServantStatusListViewItemFace_o *this,
        const MethodInfo *method)
{
  return this->fields.button;
}


UISprite_o *ServantStatusListViewItemFace__get_CostumeIconSprite(
        ServantStatusListViewItemFace_o *this,
        const MethodInfo *method)
{
  return this->fields.costumeIconSprite;
}


UISprite_o *ServantStatusListViewItemFace__get_FaceSprite(
        ServantStatusListViewItemFace_o *this,
        const MethodInfo *method)
{
  return this->fields.faceSprite;
}


UISprite_o *ServantStatusListViewItemFace__get_FrameSprite(
        ServantStatusListViewItemFace_o *this,
        const MethodInfo *method)
{
  return this->fields.frameSprite;
}


int32_t ServantStatusListViewItemFace__get_Index(ServantStatusListViewItemFace_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


void ServantStatusListViewItemFace___c__DisplayClass24_0___ctor(
        ServantStatusListViewItemFace___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewItemFace___c__DisplayClass24_0___SetOnClick_b__0(
        ServantStatusListViewItemFace___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_int__o *onClick; // x8

  onClick = this->fields.onClick;
  if ( !onClick )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClick->fields.invoke_impl)(
    onClick->fields.method_code,
    (unsigned int)this->fields.clickIndex,
    onClick->fields.method);
}