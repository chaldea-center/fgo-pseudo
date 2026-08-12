void ServantStatusListViewItemButton___ctor(ServantStatusListViewItemButton_o *this, const MethodInfo *method)
{
  this->fields.index = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemButton__ApplyInteractableState(
        ServantStatusListViewItemButton_o *this,
        bool isSelected,
        bool isEnabled,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x23
  __int64 v10; // x1
  UICommonButton_o *v11; // x0
  bool v12; // w8

  if ( (byte_596D328 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D328 = 1;
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
void ServantStatusListViewItemButton__EnsureButtonCount(
        ServantStatusListViewItemButton_o *this,
        int32_t count,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  ServantStatusListViewItemButton_o *v6; // x20
  struct ServantStatusListViewItemButton_array *buttonItems; // x8
  struct ServantStatusListViewItemButton_array **p_buttonItems; // x21
  il2cpp_array_size_t max_length; // x25
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ServantStatusListViewItemButton_array *v16; // x8
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
  ServantStatusListViewItemButton_o *v29; // x23
  ServantStatusListViewItemButton_o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t layer; // w24
  struct ServantStatusListViewItemButton_array *v34; // x24
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  ServantStatusListViewItemButton_o *v41; // x23
  __int64 v42; // x0
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  v6 = this;
  if ( (byte_596D32A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemButton___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusListViewItemButton_o *)sub_2213A60(&ServantStatusListViewItemButton___TypeInfo);
    byte_596D32A = 1;
  }
  p_buttonItems = &v6->fields.buttonItems;
  buttonItems = v6->fields.buttonItems;
  if ( !buttonItems )
    goto LABEL_14;
  max_length = buttonItems->max_length;
  if ( (int)max_length < count )
  {
    this = (ServantStatusListViewItemButton_o *)sub_2213B20(
                                                  ServantStatusListViewItemButton___TypeInfo,
                                                  (unsigned int)count);
    v16 = *p_buttonItems;
    if ( *p_buttonItems )
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
            this = (ServantStatusListViewItemButton_o *)sub_2213BB4(v22, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
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
          v16 = *p_buttonItems;
          ++v18;
          v19 += 2;
          if ( *p_buttonItems )
            continue;
        }
        goto LABEL_14;
      }
      v6->fields.buttonItems = (struct ServantStatusListViewItemButton_array *)v17;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v6->fields.buttonItems,
        (int32_t)v17,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      this = (ServantStatusListViewItemButton_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0);
      if ( this )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
        v24 = count - (__int64)(int)max_length;
        for ( i = 8LL * (int)max_length + 32; ; i += 8 )
        {
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
          this = (ServantStatusListViewItemButton_o *)UnityEngine_Object__Instantiate_object_(
                                                        gameObject,
                                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !this )
            break;
          v29 = this;
          this = (ServantStatusListViewItemButton_o *)UnityEngine_GameObject__get_transform(
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
          this = (ServantStatusListViewItemButton_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)parent,
                                                        0);
          if ( !this )
            break;
          layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v31, v32);
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v29, layer, 0);
          v34 = *p_buttonItems;
          this = (ServantStatusListViewItemButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)v29,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemButton___);
          if ( !v34 )
            break;
          v41 = this;
          if ( this )
          {
            this = (ServantStatusListViewItemButton_o *)sub_2213BB4(this, v34->obj.klass->_1.element_class);
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


// local variable allocation has failed, the output may be wrong!
int32_t ServantStatusListViewItemButton__GetAdditionalHeight(
        ServantStatusListViewItemButton_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t columnCount; // w21
  int v6; // w8
  float v7; // s0
  unsigned int v8; // w8
  int v9; // w8

  columnCount = this->fields.columnCount;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&count, method);
  if ( columnCount <= 1 )
    v6 = 1;
  else
    v6 = columnCount;
  v7 = (float)count / (float)v6;
  v8 = vcvtps_s32_f32(v7);
  v9 = (v8 - 1) & ~((int)(v8 - 1) >> 31);
  if ( ceilf(v7) == INFINITY )
    v9 = 0x7FFFFFFF;
  return this->fields.pitchY * v9;
}


UnityEngine_Vector3_o ServantStatusListViewItemButton__GetOffset(
        ServantStatusListViewItemButton_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t columnCount; // w8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  columnCount = this->fields.columnCount;
  result.fields.z = 0.0;
  if ( columnCount <= 1 )
    columnCount = 1;
  result.fields.x = (float)(this->fields.pitchX * (index % columnCount));
  result.fields.y = (float)-(index / columnCount * this->fields.pitchY);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemButton__SetButtonDisplay(
        ServantStatusListViewItemButton_o *this,
        System_String_o *text,
        bool isSelected,
        bool isSelectedText,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonSprite; // x23
  __int64 v10; // x1
  __int64 v11; // x2
  void *v12; // x0
  __int64 *v13; // x8
  UnityEngine_Object_o *titleRangeLabel; // x22
  __int64 v15; // x2
  float *v16; // x8
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s11
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D326 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596D326 = 1;
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, isSelected);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v12 = this->fields.buttonSprite;
    if ( !v12 )
      goto LABEL_29;
    v13 = &StringLiteral_18211/*"btn_bg_21"*/;
    if ( !isSelected )
      v13 = &StringLiteral_18209/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)v12, (System_String_o *)*v13, 0);
  }
  titleRangeLabel = (UnityEngine_Object_o *)this->fields.titleRangeLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(titleRangeLabel, 0, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v15);
    if ( !byte_596ABD5 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD5 = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v15);
      v12 = LocalizationManager_TypeInfo;
    }
    v16 = (float *)*((_QWORD *)v12 + 23);
    v17 = v16[20];
    v18 = v16[21];
    v19 = v16[22];
    v20 = v16[23];
    if ( !byte_596ABD6 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      v12 = LocalizationManager_TypeInfo;
      byte_596ABD6 = 1;
    }
    if ( !*((_DWORD *)v12 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v15);
      v12 = LocalizationManager_TypeInfo;
    }
    if ( this->fields.titleRangeLabel )
    {
      v24 = *(UnityEngine_Color_o *)(*((_QWORD *)v12 + 23) + 96LL);
      if ( !isSelectedText )
      {
        v24.fields.r = v17;
        v24.fields.g = v18;
        v24.fields.b = v19;
        v24.fields.a = v20;
      }
      UIRangeLabel__set_effectColor(this->fields.titleRangeLabel, v24, 0);
      v12 = this->fields.titleRangeLabel;
      if ( v12 )
      {
        UIRangeLabel__Set((UIRangeLabel_o *)v12, text, 0, 1, 0, 0, 0);
        return;
      }
    }
LABEL_29:
    sub_2213CDC(v12, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemButton__SetButtonDisplay_43289768(
        ServantStatusListViewItemButton_o *this,
        System_String_o *text,
        bool isEnabled,
        bool isSelected,
        bool isSelectedText,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *button; // x21
  __int64 v14; // x1
  UICommonButton_o *v15; // x0

  if ( (byte_596D327 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D327 = 1;
  }
  ServantStatusListViewItemButton__SetButtonDisplay(
    this,
    text,
    isSelected,
    isSelectedText,
    (const MethodInfo *)isSelectedText);
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v15 = this->fields.button;
    if ( !v15 )
      sub_2213CDC(0, v14);
    UICommonButton__SetButtonEnable(v15, isEnabled, 1, 0);
  }
}


void ServantStatusListViewItemButton__SetOnClick(
        ServantStatusListViewItemButton_o *this,
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

  if ( (byte_596D325 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewItemButton___c__DisplayClass16_0__SetOnClick_b__0__);
    sub_2213A60(&ServantStatusListViewItemButton___c__DisplayClass16_0_TypeInfo);
    byte_596D325 = 1;
  }
  v5 = sub_2213CCC(ServantStatusListViewItemButton___c__DisplayClass16_0_TypeInfo);
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
            Method_ServantStatusListViewItemButton___c__DisplayClass16_0__SetOnClick_b__0__,
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


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemButton__SetSealState(
        ServantStatusListViewItemButton_o *this,
        bool isSealed,
        System_String_o *sealedText,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  UnityEngine_Object_o *limitCountSealObject; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *limitCountSealLabel; // x22

  v4 = sealedText;
  if ( (byte_596D329 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D329 = 1;
  }
  limitCountSealObject = (UnityEngine_Object_o *)this->fields.limitCountSealObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSealed, sealedText);
  if ( UnityEngine_Object__op_Inequality(limitCountSealObject, 0, 0) )
  {
    v10 = this->fields.limitCountSealObject;
    if ( !v10 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v10, isSealed, 0);
  }
  limitCountSealLabel = (UnityEngine_Object_o *)this->fields.limitCountSealLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(limitCountSealLabel, 0, 0) )
  {
    v10 = (UnityEngine_GameObject_o *)this->fields.limitCountSealLabel;
    if ( !isSealed )
      v4 = **(System_String_o ***)(qword_5984390 + 184);
    if ( v10 )
    {
      UILabel__set_text((UILabel_o *)v10, v4, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(v10, v8);
  }
}


ServantStatusListViewItemButton_array *ServantStatusListViewItemButton__Setup(
        ServantStatusListViewItemButton_o *this,
        int32_t count,
        UnityEngine_Transform_o *parent,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  ServantStatusListViewItemButton_array *result; // x0
  struct ServantStatusListViewItemButton_array **p_buttonItems; // x22
  __int64 v11; // x1
  ServantStatusListViewItemButton_array *v12; // x24
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x24
  int max_length; // w8
  Il2CppClass **v28; // x8
  Il2CppClass *v29; // x23
  int32_t columnCount; // w8
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D324 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemButton___TypeInfo);
    byte_596D324 = 1;
  }
  p_buttonItems = &this->fields.buttonItems;
  result = this->fields.buttonItems;
  if ( result )
  {
    if ( LODWORD(result->max_length) == count )
      return result;
  }
  else
  {
    result = (ServantStatusListViewItemButton_array *)sub_2213B20(ServantStatusListViewItemButton___TypeInfo, 1);
    if ( !result )
      goto LABEL_21;
    v12 = result;
    result = (ServantStatusListViewItemButton_array *)sub_2213BB4(this, result->obj.klass->_1.element_class);
    if ( !result )
    {
      v32 = sub_2213D00(0, v13);
      sub_2213BA0(v32, 0);
    }
    if ( !LODWORD(v12->max_length) )
LABEL_22:
      sub_2213CE4(result);
    v12->m_Items[0] = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v12->m_Items, (int32_t)this, v14, v15, v16, v17, v18, v19);
    this->fields.buttonItems = v12;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.buttonItems,
      (int32_t)v12,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    result = (ServantStatusListViewItemButton_array *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
    if ( !result )
LABEL_21:
      sub_2213CDC(result, v11);
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)result, 0);
  }
  ServantStatusListViewItemButton__EnsureButtonCount(this, count, parent, (const MethodInfo *)onClick);
  result = this->fields.buttonItems;
  if ( !result )
    goto LABEL_21;
  v26 = 0;
  while ( 1 )
  {
    max_length = result->max_length;
    if ( (int)v26 >= max_length )
      return result;
    if ( (unsigned int)v26 >= max_length )
      goto LABEL_22;
    v28 = &result->obj.klass + v26;
    v29 = v28[4];
    if ( v29 )
    {
      result = (ServantStatusListViewItemButton_array *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v28[4],
                                                          0);
      if ( result )
      {
        columnCount = this->fields.columnCount;
        if ( columnCount <= 1 )
          columnCount = 1;
        v33.fields.z = this->fields.basePosition.fields.z + 0.0;
        v33.fields.y = this->fields.basePosition.fields.y
                     + (float)-((unsigned int)v26 / columnCount * this->fields.pitchY);
        v33.fields.x = this->fields.basePosition.fields.x
                     + (float)(int)((unsigned int)v26 % columnCount * this->fields.pitchX);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v33, 0);
        result = (ServantStatusListViewItemButton_array *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v29,
                                                            0);
        if ( result )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)result, (int)v26 < count, 0);
          LODWORD(v29->_1.generic_class) = v26;
          ServantStatusListViewItemButton__SetOnClick((ServantStatusListViewItemButton_o *)v29, onClick, v31);
          result = *p_buttonItems;
          ++v26;
          if ( *p_buttonItems )
            continue;
        }
      }
    }
    goto LABEL_21;
  }
}


int32_t ServantStatusListViewItemButton__get_ColumnCount(
        ServantStatusListViewItemButton_o *this,
        const MethodInfo *method)
{
  return this->fields.columnCount;
}


void ServantStatusListViewItemButton___c__DisplayClass16_0___ctor(
        ServantStatusListViewItemButton___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusListViewItemButton___c__DisplayClass16_0___SetOnClick_b__0(
        ServantStatusListViewItemButton___c__DisplayClass16_0_o *this,
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