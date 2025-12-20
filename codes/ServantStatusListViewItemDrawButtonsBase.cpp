void ServantStatusListViewItemDrawButtonsBase___ctor(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        UICommonButton_o *buttonObj,
        const MethodInfo *method)
{
  if ( (byte_4D29C25 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_UICommonButton___);
    byte_4D29C25 = 1;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)this->fields.tdSpeedButtonList,
           (Il2CppObject *)buttonObj,
           (const MethodInfo_32A4C80 *)Method_System_Array_IndexOf_UICommonButton___);
}


int32_t ServantStatusListViewItemDrawButtonsBase__GetKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  return this->fields.kind;
}


int32_t ServantStatusListViewItemDrawButtonsBase__Selected(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


void ServantStatusListViewItemDrawButtonsBase__SetButtonKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.kind = value;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawButtonsBase__SetItem(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  LocalizationManager_c *v7; // x0
  float *static_fields; // x8
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s11
  float *v13; // x8
  float v14; // s12
  float v15; // s13
  float v16; // s14
  float v17; // s15
  UICommonButton_o *v18; // x0
  __int64 v19; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w9
  int v22; // w20
  unsigned int v23; // w9
  int v24; // w21
  bool v25; // w25
  __int64 v26; // x24
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v28; // x8
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  float v30; // s1 OVERLAPPED
  float v31; // s0
  float v32; // s2
  float v33; // s3

  if ( (byte_4D29C24 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_17533/*"btn_bg_20"*/);
    sub_1C94098(&StringLiteral_17534/*"btn_bg_21"*/);
    byte_4D29C24 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4D26E67 )
    {
      sub_1C94098(&LocalizationManager_TypeInfo);
      byte_4D26E67 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v7->static_fields;
    v9 = static_fields[20];
    v10 = static_fields[21];
    v11 = static_fields[22];
    v12 = static_fields[23];
    if ( !byte_4D26E68 )
    {
      sub_1C94098(&LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
      byte_4D26E68 = 1;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = LocalizationManager_TypeInfo;
    }
    v13 = (float *)v7->static_fields;
    v14 = v13[24];
    v15 = v13[25];
    v16 = v13[26];
    v17 = v13[27];
    v18 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._14_Selected.methodPtr)(
                                this,
                                item,
                                this->klass->vtable._14_Selected.method,
                                method);
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_43;
    max_length = tdSpeedButtonList->max_length;
    v22 = max_length - 1;
    if ( max_length >= 1 )
    {
      v23 = 0;
      v24 = (_DWORD)v18 - 1;
      v25 = (_DWORD)v18 == 0;
      do
      {
        if ( v23 >= LODWORD(tdSpeedButtonList->max_length) )
LABEL_45:
          sub_1C942F8(v18);
        v26 = (int)v23;
        v18 = tdSpeedButtonList->m_Items[v23];
        if ( !v18 )
          break;
        UICommonButton__SetColliderEnable(v18, !v25, 1, 0);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( (unsigned int)v26 >= LODWORD(tdSpeedButtonSpriteList->max_length) )
          goto LABEL_45;
        v18 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v26];
        if ( !v18 )
          break;
        v28 = (System_String_o **)(v25 ? &StringLiteral_17534/*"btn_bg_21"*/ : &StringLiteral_17533/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v18, *v28, 0);
        tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
        if ( !tdSpeedRangeLabelList )
          break;
        if ( (unsigned int)v26 >= LODWORD(tdSpeedRangeLabelList->max_length) )
          goto LABEL_45;
        v18 = (UICommonButton_o *)tdSpeedRangeLabelList->m_Items[v26];
        v30 = v25 ? v15 : v10;
        v31 = v25 ? v14 : v9;
        v32 = v25 ? v16 : v11;
        v33 = v25 ? v17 : v12;
        if ( !v18 )
          break;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v18, *(UnityEngine_Color_o *)(&v30 - 1), 0);
        if ( v22 == (_DWORD)v26 )
          return;
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        v23 = v26 + 1;
        v25 = v24 == (_DWORD)v26;
      }
      while ( tdSpeedButtonList );
LABEL_43:
      sub_1C942F0(v18, v19);
    }
  }
}