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
  if ( (byte_42B58A0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_UICommonButton___);
    byte_42B58A0 = 1;
  }
  return System_Array__IndexOf_UICommonButton_(
           (UICommonButton_array *)this->fields.tdSpeedButtonSpriteList,
           buttonObj,
           (const MethodInfo_201BD18 *)Method_System_Array_IndexOf_UICommonButton___);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  return (int32_t)this[1].klass;
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
  LODWORD(this[1].klass) = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawButtonsBase__SetItem(
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
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w21
  int v22; // w20
  int v23; // w22
  bool v24; // w25
  int v25; // w9
  __int64 v26; // x26
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  System_String_o **v28; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  float v30; // s3
  float v31; // s2
  float v32; // s1
  float v33; // s0
  __int64 v34; // x0

  if ( (byte_42B589F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_17083/*"btn_bg_20"*/);
    sub_B52984(&StringLiteral_17084/*"btn_bg_21"*/);
    byte_42B589F = 1;
  }
  LODWORD(this->fields.collider) = mode;
  if ( item && mode )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42ACC22 )
    {
      sub_B52984(&LocalizationManager_TypeInfo);
      byte_42ACC22 = 1;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v7->static_fields;
    v9 = static_fields[20];
    v10 = static_fields[21];
    v11 = static_fields[22];
    v12 = static_fields[23];
    if ( !byte_42ACC23 )
    {
      sub_B52984(&LocalizationManager_TypeInfo);
      v7 = LocalizationManager_TypeInfo;
      byte_42ACC23 = 1;
    }
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = LocalizationManager_TypeInfo;
    }
    v13 = (float *)v7->static_fields;
    v14 = v13[24];
    v15 = v13[25];
    v16 = v13[26];
    v17 = v13[27];
    v18 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, void *, const MethodInfo *))this->klass->vtable._14_Selected.method)(
                                this,
                                item,
                                this->klass[1]._1.image,
                                method);
    tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
    if ( !tdSpeedButtonSpriteList )
      goto LABEL_46;
    max_length = tdSpeedButtonSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v22 = (int)v18;
      v23 = 1;
      v24 = (_DWORD)v18 == 0;
      do
      {
        v25 = v23 - 1;
        if ( v23 - 1 >= tdSpeedButtonSpriteList->max_length )
        {
LABEL_48:
          v34 = sub_B52A88(v18);
          sub_B52A28(v34, 0LL);
        }
        v26 = v25;
        v18 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v25];
        if ( !v18 )
          break;
        UICommonButton__SetColliderEnable(v18, !v24, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( (unsigned int)v26 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_48;
        v18 = (UICommonButton_o *)*((_QWORD *)&clickEventObject[1].monitor + v26);
        if ( !v18 )
          break;
        v28 = (System_String_o **)(v24 ? &StringLiteral_17084/*"btn_bg_21"*/ : &StringLiteral_17083/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v18, *v28, 0LL);
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        if ( !tdSpeedButtonList )
          break;
        if ( (unsigned int)v26 >= tdSpeedButtonList->max_length )
          goto LABEL_48;
        v18 = tdSpeedButtonList->m_Items[v26];
        if ( !v18 )
          break;
        if ( v24 )
          v30 = v17;
        else
          v30 = v12;
        if ( v24 )
          v31 = v16;
        else
          v31 = v11;
        if ( v24 )
          v32 = v15;
        else
          v32 = v10;
        if ( v24 )
          v33 = v14;
        else
          v33 = v9;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v18, *(UnityEngine_Color_o *)(&v30 - 3), 0LL);
        if ( v23 >= max_length )
          return;
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        v24 = v22 == v23++;
      }
      while ( tdSpeedButtonSpriteList );
LABEL_46:
      sub_B52A5C(v18, v19);
    }
  }
}