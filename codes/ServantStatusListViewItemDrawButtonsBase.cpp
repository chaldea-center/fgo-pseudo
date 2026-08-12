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
  if ( (byte_596D333 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_UICommonButton___);
    byte_596D333 = 1;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)this->fields.tdSpeedButtonList,
           (Il2CppObject *)buttonObj,
           (const MethodInfo_3A2E6EC *)Method_System_Array_IndexOf_UICommonButton___);
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
  il2cpp_array_size_t max_length; // x20
  __int64 v22; // x21
  int v23; // w24
  struct UICommonButton_array *v24; // x8
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v26; // x8
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D332 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596D332 = 1;
  }
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    if ( !byte_596ABD5 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD5 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
      v7 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v7->static_fields;
    v9 = static_fields[20];
    v10 = static_fields[21];
    v11 = static_fields[22];
    v12 = static_fields[23];
    if ( !byte_596ABD6 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
      byte_596ABD6 = 1;
    }
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, item, *(_QWORD *)&mode);
      v7 = LocalizationManager_TypeInfo;
    }
    v13 = (float *)v7->static_fields;
    v14 = v13[24];
    v15 = v13[25];
    v16 = v13[26];
    v17 = v13[27];
    v18 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._13_Selected.methodPtr)(
                                this,
                                item,
                                this->klass->vtable._13_Selected.method,
                                method);
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_44;
    max_length = tdSpeedButtonList->max_length;
    if ( (int)max_length >= 1 )
    {
      v22 = 0;
      v23 = (int)v18;
      while ( 1 )
      {
        v24 = this->fields.tdSpeedButtonList;
        if ( !v24 )
          break;
        if ( (unsigned int)v22 >= LODWORD(v24->max_length) )
          goto LABEL_45;
        v18 = v24->m_Items[v22];
        if ( !v18 )
          break;
        UICommonButton__SetColliderEnable(v18, v23 != (_DWORD)v22, 1, 0);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( (unsigned int)v22 >= LODWORD(tdSpeedButtonSpriteList->max_length) )
          goto LABEL_45;
        v18 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v22];
        if ( !v18 )
          break;
        v26 = (System_String_o **)(v23 == (_DWORD)v22 ? &StringLiteral_18211/*"btn_bg_21"*/ : &StringLiteral_18209/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v18, *v26, 0);
        tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
        if ( !tdSpeedRangeLabelList )
          break;
        if ( (unsigned int)v22 >= LODWORD(tdSpeedRangeLabelList->max_length) )
LABEL_45:
          sub_2213CE4(v18);
        v18 = (UICommonButton_o *)tdSpeedRangeLabelList->m_Items[v22];
        if ( !v18 )
          break;
        if ( v23 == (_DWORD)v22 )
          v31.fields.r = v14;
        else
          v31.fields.r = v9;
        if ( v23 == (_DWORD)v22 )
          v31.fields.g = v15;
        else
          v31.fields.g = v10;
        if ( v23 == (_DWORD)v22 )
          v31.fields.b = v16;
        else
          v31.fields.b = v11;
        if ( v23 == (_DWORD)v22 )
          v31.fields.a = v17;
        else
          v31.fields.a = v12;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v18, v31, 0);
        if ( (_DWORD)max_length == (_DWORD)++v22 )
          return;
      }
LABEL_44:
      sub_2213CDC(v18, v19);
    }
  }
}