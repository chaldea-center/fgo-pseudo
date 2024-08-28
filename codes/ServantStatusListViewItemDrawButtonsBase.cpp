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
  if ( (byte_4A1C84E & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_IndexOf_UICommonButton___, buttonObj);
    byte_4A1C84E = 1;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)this->fields.tdSpeedButtonList,
           (Il2CppObject *)buttonObj,
           (const MethodInfo_2F55CA8 *)Method_System_Array_IndexOf_UICommonButton___);
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
  __int64 v8; // x1
  LocalizationManager_c *v9; // x0
  float *static_fields; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  float *v15; // x8
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  UICommonButton_o *v20; // x0
  __int64 v21; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w9
  int v24; // w20
  il2cpp_array_size_t v25; // w9
  int v26; // w21
  bool v27; // w25
  __int64 v28; // x24
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v30; // x8
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  float v32; // s1
  float v33; // s0
  float v34; // s2
  float v35; // s3

  if ( (byte_4A1C84D & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, item);
    sub_1B715CC(&StringLiteral_17429/*"btn_bg_20"*/, v7);
    sub_1B715CC(&StringLiteral_17430/*"btn_bg_21"*/, v8);
    byte_4A1C84D = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A1ADDB )
    {
      sub_1B715CC(&LocalizationManager_TypeInfo, item);
      byte_4A1ADDB = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v9->static_fields;
    v11 = static_fields[20];
    v12 = static_fields[21];
    v13 = static_fields[22];
    v14 = static_fields[23];
    if ( !byte_4A1ADDC )
    {
      sub_1B715CC(&LocalizationManager_TypeInfo, item);
      v9 = LocalizationManager_TypeInfo;
      byte_4A1ADDC = 1;
    }
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = LocalizationManager_TypeInfo;
    }
    v15 = (float *)v9->static_fields;
    v16 = v15[24];
    v17 = v15[25];
    v18 = v15[26];
    v19 = v15[27];
    v20 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, void *, const MethodInfo *))this->klass->vtable._14_Selected.method)(
                                this,
                                item,
                                this->klass[1]._1.image,
                                method);
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_43;
    max_length = tdSpeedButtonList->max_length;
    v24 = max_length - 1;
    if ( max_length >= 1 )
    {
      v25 = 0;
      v26 = (_DWORD)v20 - 1;
      v27 = (_DWORD)v20 == 0;
      do
      {
        if ( v25 >= tdSpeedButtonList->max_length )
LABEL_45:
          sub_1B71830(v20, v21);
        v28 = (int)v25;
        v20 = tdSpeedButtonList->m_Items[v25];
        if ( !v20 )
          break;
        UICommonButton__SetColliderEnable(v20, !v27, 1, 0LL);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( (unsigned int)v28 >= tdSpeedButtonSpriteList->max_length )
          goto LABEL_45;
        v20 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v28];
        if ( !v20 )
          break;
        v30 = (System_String_o **)(v27 ? &StringLiteral_17430/*"btn_bg_21"*/ : &StringLiteral_17429/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v20, *v30, 0LL);
        tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
        if ( !tdSpeedRangeLabelList )
          break;
        if ( (unsigned int)v28 >= tdSpeedRangeLabelList->max_length )
          goto LABEL_45;
        v20 = (UICommonButton_o *)tdSpeedRangeLabelList->m_Items[v28];
        v32 = v27 ? v17 : v12;
        v33 = v27 ? v16 : v11;
        v34 = v27 ? v18 : v13;
        v35 = v27 ? v19 : v14;
        if ( !v20 )
          break;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v20, *(UnityEngine_Color_o *)(&v32 - 1), 0LL);
        if ( v24 == (_DWORD)v28 )
          return;
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        v25 = v28 + 1;
        v27 = v26 == (_DWORD)v28;
      }
      while ( tdSpeedButtonList );
LABEL_43:
      sub_1B71828(v20, v21);
    }
  }
}