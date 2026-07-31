void PhotoLayerChangeComponent___ctor(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PhotoLayerChangeComponent__ChangeLayer(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selfPanel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *anotherPanel; // x20
  struct UIPanel_o *v8; // x0
  __int64 v9; // x1
  struct UIPanel_o *v10; // x20
  int32_t mDepth; // w19

  if ( (byte_5933B0B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B0B = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(selfPanel, 0, 0) )
  {
    anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(anotherPanel, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v10 = this->fields.anotherPanel;
      if ( !v10 || (v8 = this->fields.selfPanel) == 0 )
        sub_21FFECC(v8, v9);
      mDepth = v8->fields.mDepth;
      UIPanel__set_depth(v8, v10->fields.mDepth, 0);
      UIPanel__set_depth(v10, mDepth, 0);
    }
  }
}


UIPanel_o *PhotoLayerChangeComponent__GetSelfPanel(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  return this->fields.selfPanel;
}


void PhotoLayerChangeComponent__InitDepth(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selfPanel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UIPanel_o *v7; // x0
  UnityEngine_Object_o *anotherPanel; // x20

  if ( (byte_5933B09 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B09 = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(selfPanel, 0, 0) )
  {
    v7 = this->fields.selfPanel;
    if ( !v7 )
      goto LABEL_14;
    UIPanel__set_depth(v7, 16, 0);
  }
  anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(anotherPanel, 0, 0) )
  {
    v7 = this->fields.anotherPanel;
    if ( v7 )
    {
      UIPanel__set_depth(v7, 15, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v7, v5);
  }
}


void PhotoLayerChangeComponent__OnClick(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selfPanel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *anotherPanel; // x20
  struct UIPanel_o *v8; // x0
  __int64 v9; // x1
  struct UIPanel_o *v10; // x8
  struct UIPanel_o *v11; // x9
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  int32_t v14; // w1

  if ( (byte_5933B0A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_PhotoLayerChangeComponent_OnClick__);
    byte_5933B0A = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(selfPanel, 0, 0) )
  {
    anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(anotherPanel, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      v10 = this->fields.selfPanel;
      if ( v10 )
      {
        v11 = this->fields.anotherPanel;
        if ( v11 )
        {
          if ( v10->fields.mDepth > v11->fields.mDepth )
            return;
          v12 = Method_PhotoLayerChangeComponent_OnClick__;
          if ( (*((_BYTE *)Method_PhotoLayerChangeComponent_OnClick__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_21FFC68(Method_PhotoLayerChangeComponent_OnClick__);
          v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
          v8 = this->fields.anotherPanel;
          if ( v8 )
          {
            if ( v8->fields.mDepth >= 16 )
            {
              v14 = 14;
              goto LABEL_20;
            }
            v8 = this->fields.selfPanel;
            if ( v8 )
            {
              v14 = 16;
LABEL_20:
              UIPanel__set_depth(v8, v14, 0);
              return;
            }
          }
        }
      }
      sub_21FFECC(v8, v9);
    }
  }
}


void PhotoLayerChangeComponent__SetAnotherPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *another,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.anotherPanel = another;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.anotherPanel,
    (int32_t)another,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PhotoLayerChangeComponent__SetSelfPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *self,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.selfPanel = self;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selfPanel,
    (int32_t)self,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}