void UISnapshotPoint___ctor(UISnapshotPoint_o *this, const MethodInfo *method)
{
  this->fields.isOrthographic = 1;
  *(_QWORD *)&this->fields.nearClip = 0x42C80000C2C80000LL;
  *(_QWORD *)&this->fields.fieldOfView = 0x41F0000000000023LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISnapshotPoint__Start(UISnapshotPoint_o *this, const MethodInfo *method)
{
  System_String_o *tag; // x0

  if ( (byte_4C47785 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5844/*"EditorOnly"*/);
    byte_4C47785 = 1;
  }
  tag = UnityEngine_Component__get_tag((UnityEngine_Component_o *)this, 0);
  if ( System_String__op_Inequality(tag, (System_String_o *)StringLiteral_5844/*"EditorOnly"*/, 0) )
    UnityEngine_Component__set_tag((UnityEngine_Component_o *)this, (System_String_o *)StringLiteral_5844/*"EditorOnly"*/, 0);
}