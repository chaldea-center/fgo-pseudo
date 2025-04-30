void __fastcall PhotoLayerChangeComponent___ctor(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UIPanel_o *__fastcall PhotoLayerChangeComponent__GetSelfPanel(
        PhotoLayerChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.selfPanel;
}


void __fastcall PhotoLayerChangeComponent__InitDepth(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfPanel; // x20
  __int64 v4; // x1
  UIPanel_o *v5; // x0
  UnityEngine_Object_o *anotherPanel; // x20

  if ( (byte_4A49C4B & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49C4B = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selfPanel, 0LL, 0LL) )
  {
    v5 = this->fields.selfPanel;
    if ( !v5 )
      goto LABEL_14;
    UIPanel__set_depth(v5, 16, 0LL);
  }
  anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anotherPanel, 0LL, 0LL) )
  {
    v5 = this->fields.anotherPanel;
    if ( v5 )
    {
      UIPanel__set_depth(v5, 15, 0LL);
      return;
    }
LABEL_14:
    sub_1B86614(v5, v4);
  }
}


void __fastcall PhotoLayerChangeComponent__OnClick(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *selfPanel; // x20
  UnityEngine_Object_o *anotherPanel; // x20
  struct UIPanel_o *v6; // x0
  __int64 v7; // x1
  struct UIPanel_o *v8; // x8
  struct UIPanel_o *v9; // x9
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t v12; // w1

  if ( (byte_4A49C4C & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&Method_PhotoLayerChangeComponent_OnClick__, v3);
    byte_4A49C4C = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selfPanel, 0LL, 0LL) )
  {
    anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(anotherPanel, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      v8 = this->fields.selfPanel;
      if ( v8 )
      {
        v9 = this->fields.anotherPanel;
        if ( v9 )
        {
          if ( v8->fields.mDepth > v9->fields.mDepth )
            return;
          v10 = Method_PhotoLayerChangeComponent_OnClick__;
          if ( (*((_BYTE *)Method_PhotoLayerChangeComponent_OnClick__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B863D0(Method_PhotoLayerChangeComponent_OnClick__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B8639C(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
          v6 = this->fields.anotherPanel;
          if ( v6 )
          {
            if ( v6->fields.mDepth >= 16 )
            {
              v12 = 14;
              goto LABEL_20;
            }
            v6 = this->fields.selfPanel;
            if ( v6 )
            {
              v12 = 16;
LABEL_20:
              UIPanel__set_depth(v6, v12, 0LL);
              return;
            }
          }
        }
      }
      sub_1B86614(v6, v7);
    }
  }
}


void __fastcall PhotoLayerChangeComponent__SetAnotherPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *another,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.anotherPanel = another;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.anotherPanel, (int32_t)another, (int32_t)method, v3);
}


void __fastcall PhotoLayerChangeComponent__SetSelfPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *self,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selfPanel = self;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.selfPanel, (int32_t)self, (int32_t)method, v3);
}