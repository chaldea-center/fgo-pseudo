void __fastcall ServantStatusListViewItemDrawButtonsBase___ctor(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        UICommonButton_o *buttonObj,
        const MethodInfo *method)
{
  if ( (byte_4B131EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_UICommonButton___, buttonObj, method);
    byte_4B131EF = 1;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)this->fields.tdSpeedButtonList,
           (Il2CppObject *)buttonObj,
           (const MethodInfo_300EB38 *)Method_System_Array_IndexOf_UICommonButton___);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  return this->fields.kind;
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__Selected(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall ServantStatusListViewItemDrawButtonsBase__SetButtonKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.kind = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawButtonsBase__SetItem(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  LocalizationManager_c *v11; // x0
  float *static_fields; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  float *v17; // x8
  float v18; // s12
  float v19; // s13
  float v20; // s14
  float v21; // s15
  UICommonButton_o *v22; // x0
  __int64 v23; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w9
  int v26; // w20
  il2cpp_array_size_t v27; // w9
  int v28; // w21
  bool v29; // w25
  __int64 v30; // x24
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v32; // x8
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  float v34; // s1
  float v35; // s0
  float v36; // s2
  float v37; // s3

  if ( (byte_4B131EE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v9, v10);
    byte_4B131EE = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    if ( !byte_4B11133 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
      byte_4B11133 = 1;
    }
    v11 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v11 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v11->static_fields;
    v13 = static_fields[20];
    v14 = static_fields[21];
    v15 = static_fields[22];
    v16 = static_fields[23];
    if ( !byte_4B11134 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
      v11 = LocalizationManager_TypeInfo;
      byte_4B11134 = 1;
    }
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, item);
      v11 = LocalizationManager_TypeInfo;
    }
    v17 = (float *)v11->static_fields;
    v18 = v17[24];
    v19 = v17[25];
    v20 = v17[26];
    v21 = v17[27];
    v22 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, void *, const MethodInfo *))this->klass->vtable._14_Selected.method)(
                                this,
                                item,
                                this->klass[1]._1.image,
                                method);
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_43;
    max_length = tdSpeedButtonList->max_length;
    v26 = max_length - 1;
    if ( max_length >= 1 )
    {
      v27 = 0;
      v28 = (_DWORD)v22 - 1;
      v29 = (_DWORD)v22 == 0;
      do
      {
        if ( v27 >= tdSpeedButtonList->max_length )
LABEL_45:
          sub_1BCAA44(v22, v23);
        v30 = (int)v27;
        v22 = tdSpeedButtonList->m_Items[v27];
        if ( !v22 )
          break;
        UICommonButton__SetColliderEnable(v22, !v29, 1, 0LL);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( (unsigned int)v30 >= tdSpeedButtonSpriteList->max_length )
          goto LABEL_45;
        v22 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v30];
        if ( !v22 )
          break;
        v32 = (System_String_o **)(v29 ? &StringLiteral_17653/*"btn_bg_21"*/ : &StringLiteral_17652/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v22, *v32, 0LL);
        tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
        if ( !tdSpeedRangeLabelList )
          break;
        if ( (unsigned int)v30 >= tdSpeedRangeLabelList->max_length )
          goto LABEL_45;
        v22 = (UICommonButton_o *)tdSpeedRangeLabelList->m_Items[v30];
        v34 = v29 ? v19 : v14;
        v35 = v29 ? v18 : v13;
        v36 = v29 ? v20 : v15;
        v37 = v29 ? v21 : v16;
        if ( !v22 )
          break;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v22, *(UnityEngine_Color_o *)(&v34 - 1), 0LL);
        if ( v26 == (_DWORD)v30 )
          return;
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        v27 = v30 + 1;
        v29 = v28 == (_DWORD)v30;
      }
      while ( tdSpeedButtonList );
LABEL_43:
      sub_1BCAA3C(v22, v23);
    }
  }
}